// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMenuWidget::Restart()
{
	// ��ġ�� ���忡 ���� ���� �ٽ� �ε��Ѵ�.
	UGameplayStatics::OpenLevel(GetWorld(), "ShootingMap");
}

void UMenuWidget::Quit()
{
	UWorld* currentWorld = GetWorld();
	// �������� ����, �÷��̾�, ���� ���, �÷��� ����
	UKismetSystemLibrary::QuitGame(currentWorld, currentWorld->GetFirstPlayerController(), EQuitPreference::Quit, false);
}

// ���� Ŭ������ ����� ���� �ƴ϶� beginPlay�� ������ �� ����. ��� ���� Ŭ������ ����� �Լ��� �������� ��
void UMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	// ��������Ʈ ����
	button_Restart->OnClicked.AddDynamic(this, &UMenuWidget::Restart);
	button_Quit->OnClicked.AddDynamic(this, &UMenuWidget::Quit);
}
