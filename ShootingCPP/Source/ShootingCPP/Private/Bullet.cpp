// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "EnemyActor.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingGameModeBase.h"
// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	SetRootComponent(boxComp);
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f)); // box�� ũ��

	// �ڽ� ������Ʈ�� ũ�⸦ ���� ������ ����
	boxComp->SetWorldScale3D(FVector(0.75f, 0.25f, 1.0f));

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
	meshComp->SetupAttachment(boxComp);

	boxComp->SetCollisionProfileName(TEXT("Bullet"));
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	// ��������Ʈ ȣ��: adddynamic�� ���� ������ Ŭ����, ������ �Լ��� �����Ѵ�.
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnBulletOverlap);
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = GetActorLocation() + GetActorForwardVector() * moveSpeed * DeltaTime;

	SetActorLocation(newLocation);
}

void ABullet::OnBulletOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// �浹�� ������Ʈ�� ��ȯ(cast)�غ���. ������Ʈ�� EnemyActor Ŭ������ ��ȯ�� �����ؼ� enemy �ȿ� OtherActor�� �ּ� ���� ��� �ְ� �ȴ�.
	// ��ȯ�� �����ϸ� nullptr���� ���´�.
	AEnemyActor* enemy = Cast<AEnemyActor>(OtherActor);

	if (enemy != nullptr) { // ��ȯ�� �����ߴٸ� �� ������Ʈ�� ����
		OtherActor->Destroy();
		// ������ ����, ��ƼŬ ����, ���� ��ġ, ������ ȸ�� ��
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFX, GetActorLocation(), GetActorRotation());
		// ���� ���� ��� ȣ��
		AGameModeBase* currentMode = GetWorld()->GetAuthGameMode();
		// shooting game mode base�� ��ȯ
		// �ܼ��� �� ������ shooting ���ӿ��� �����Ǹ� ��� ��������, Ȯ���� ���ɼ��� ����ؼ� �ڵ带 ¥���Ѵ�.
		// �ٸ� ���� ��尡 ���� ���, Ȥ�� ���߿� ���� ��带 �߰��� �� �ֱ� ������ �ڵ带 ���� ���� �ʵ��� �̷��� �ۼ��ϴ� ��.
		AShootingGameModeBase* currentGameModeBase = Cast<AShootingGameModeBase>(currentMode);

		if (currentGameModeBase != nullptr) { // cast ���н� nullptr�̹Ƿ�
			currentGameModeBase->AddScore(1);
		}
	}

	// �� ���� �ڱ� �ڽ�(�Ѿ�)�� ����
	Destroy();
}