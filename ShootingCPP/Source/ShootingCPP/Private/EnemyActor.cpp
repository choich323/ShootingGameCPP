// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EngineUtils.h"
#include "PlayerPawn.h"

// Sets default values
AEnemyActor::AEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	SetRootComponent(boxComp);
	boxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static mesh"));
	meshComp->SetupAttachment(boxComp);
}

// Called when the game starts or when spawned
void AEnemyActor::BeginPlay()
{
	Super::BeginPlay();
	
	// ���� ����Ʈ�� ���� �������� 1~100 ������ ���� ���� �����Ѵ�.
	int32 drawResult = FMath::RandRange(1, 100);

	if (drawResult <= traceRate) { // ���� Ȯ�� �������� �۴ٸ�
		// ���� �������� APlayerPawn Ŭ������ �� ���͸� ��� �˻��Ѵ�.
		for (TActorIterator<APlayerPawn> player(GetWorld()); player; ++player) { // ++player�� �ۼ��ϸ� ������ �߻��Ѵ�. ����!
			if (player->GetName().Contains(TEXT("BP_PlayerPawn"))) {
				dir = player->GetActorLocation() - GetActorLocation(); // �÷��̾��� ��ġ - ���� ��ġ
				dir.Normalize(); // ����ȭ
			}
		}
	}
	else {
		dir = GetActorForwardVector(); // ForwardVector�� ���̰� 1�� ���� �����̹Ƿ� ����ȭ ���ʿ�
	}
}

// Called every frame
void AEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + moveSpeed * dir * DeltaTime);
}
