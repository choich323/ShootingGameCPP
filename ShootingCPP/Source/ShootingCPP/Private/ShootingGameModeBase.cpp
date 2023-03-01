// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.h"
#include "Components/TextBlock.h" // 이 헤더가 없으면 불완전한 클래스 형식으로 인식해서 에러 발생. 비슷한 상황이 날 경우 적절한 헤더를 찾아서 추가해줘야 한다.
void AShootingGameModeBase::AddScore(int32 point)
{
	currentScore += point;
	
	PrintScore();
}

void AShootingGameModeBase::BeginPlay()
{
	Super::BeginPlay(); // 부모클래스의 함수를 먼저 실행한다.

	if (mainWidget != nullptr) {
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget);
		// 메모리에 제대로 로드 되었다면 뷰포트에 출력
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
