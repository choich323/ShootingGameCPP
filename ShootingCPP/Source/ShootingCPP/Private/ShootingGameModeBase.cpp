// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.h"
#include "Components/TextBlock.h" // �� ����� ������ �ҿ����� Ŭ���� �������� �ν��ؼ� ���� �߻�. ����� ��Ȳ�� �� ��� ������ ����� ã�Ƽ� �߰������ �Ѵ�.
void AShootingGameModeBase::AddScore(int32 point)
{
	currentScore += point;
	
	PrintScore();
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
}

void AShootingGameModeBase::PrintScore()
{
	if (mainUI != nullptr) {
		mainUI->scoreData->SetText(FText::AsNumber(currentScore));
	}
}
