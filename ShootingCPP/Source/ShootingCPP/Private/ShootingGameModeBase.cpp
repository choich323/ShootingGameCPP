// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.h"
#include "Components/TextBlock.h" // �� ����� ������ �ҿ����� Ŭ���� �������� �ν��ؼ� ���� �߻�. ����� ��Ȳ�� �� ��� ������ ����� ã�Ƽ� �߰������ �Ѵ�.
#include "MenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "SaveData.h"
void AShootingGameModeBase::AddScore(int32 point)
{
	currentScore += point;
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

	LoadScoreData();

	if (mainWidget != nullptr) {
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget);
		// �޸𸮿� ����� �ε� �Ǿ��ٸ� ����Ʈ�� ���
		if (mainUI != nullptr) {
			mainUI->AddToViewport();
			mainUI->bestScoreData->SetText(FText::AsNumber(bestScore));
		}
	}
	PrintScore();
}

void AShootingGameModeBase::PrintScore()
{
	if (mainUI != nullptr) {
		mainUI->scoreData->SetText(FText::AsNumber(currentScore));
		if (currentScore >= bestScore) {
			bestScore = currentScore;
			mainUI->bestScoreData->SetText(FText::AsNumber(bestScore));
		}
	}
}

void AShootingGameModeBase::SaveScoreData()
{
	USaveData* saveInstance = Cast<USaveData>(UGameplayStatics::CreateSaveGameObject(USaveData::StaticClass()));
	if (saveInstance) {
		if (bestScore >= preBestScore || bestScore != 0) {
			saveInstance->scoreData = bestScore;
			UGameplayStatics::SaveGameToSlot(saveInstance, TEXT("BestScoreData"), 0);
		}
	}
}

void AShootingGameModeBase::LoadScoreData()
{
	if (!UGameplayStatics::DoesSaveGameExist(TEXT("BestScoreData"), 0))
		return;
	USaveData* loadInstance = Cast<USaveData>(UGameplayStatics::LoadGameFromSlot(TEXT("BestScoreData"), 0));

	if (loadInstance) {
		preBestScore = loadInstance->scoreData;
		bestScore = preBestScore;
	}
}
