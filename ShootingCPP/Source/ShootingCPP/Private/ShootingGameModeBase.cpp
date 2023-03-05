// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.h"
#include "Components/TextBlock.h" // �� ����� ������ �ҿ����� Ŭ���� �������� �ν��ؼ� ���� �߻�. ����� ��Ȳ�� �� ��� ������ ����� ã�Ƽ� �߰������ �Ѵ�.
#include "MenuWidget.h"
#include "Kismet/GameplayStatics.h"
void AShootingGameModeBase::AddScore(int32 point)
{
	currentScore += point;
	if (currentScore > bestScore) {
		bestScore = currentScore;
	}
	PrintScore();
}

void AShootingGameModeBase::ShowMenu()
{
	if (menuWidget != nullptr) {
		menuUI = CreateWidget<UMenuWidget>(GetWorld(), menuWidget);
		if (menuUI != nullptr) {
			// �޴� Ȱ��ȭ
			menuUI->AddToViewport();

			// ���� �Ͻ� ����
			UGameplayStatics::SetGamePaused(GetWorld(), true);

			// ���콺 Ŀ�� on
			GetWorld()->GetFirstPlayerController()->SetShowMouseCursor(true);
		}
	}
}

void AShootingGameModeBase::BeginPlay()
{
	Super::BeginPlay(); // �θ�Ŭ������ �Լ��� ���� �����Ѵ�.

	if (mainWidget != nullptr) {
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget);
		// �޸𸮿� ����� �ε� �Ǿ��ٸ� ����Ʈ�� ���
		if (mainUI != nullptr) {
			mainUI->AddToViewport();
		}
	}
	PrintScore();
}

void AShootingGameModeBase::PrintScore()
{
	if (mainUI != nullptr) {
		mainUI->scoreData->SetText(FText::AsNumber(currentScore));
		mainUI->bestScoreData->SetText(FText::AsNumber(bestScore));
	}
}
