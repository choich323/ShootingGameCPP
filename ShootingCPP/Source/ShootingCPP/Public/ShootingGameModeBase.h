// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGCPP_API AShootingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	void AddScore(int32 point);
	
	// ���� �������Ʈ ����
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UMainWidget> mainWidget;

	// �޴� �������Ʈ ����
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UMenuWidget> menuWidget;

	void ShowMenu();

	void PrintScore();

	void SaveScoreData();

	void LoadScoreData();

	int32 bestScore;
	int32 preBestScore;

protected:
	virtual void BeginPlay() override;

private:
	int32 currentScore;

	// ������ ǥ��Ǵ� UI
	class UMainWidget* mainUI;
	// menu UI
	class UMenuWidget* menuUI;
};
