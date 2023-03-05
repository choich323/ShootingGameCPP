// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGCPP_API UMainWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// meta�� ��Ÿ������ �����ڶ�� �ɼ�. �𸮾� �����Ϳ� ���� ��� �� �� ���
	// �Ʒ��� ��� ���� ������ ���� �������Ʈ�� �����ϴ� ����
	// �� �����ڰ� �ִ� ������ Ŭ������ ����� ���� �������Ʈ���� �ݵ�� �����ؾ� �Ѵ�.(���ϸ� ������ ����) + �ڵ忡�� ����� ���� �������Ʈ�� �ݿ��Ǵ� ���ҵ� ��
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* scoreText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* scoreData;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* bestScoreText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* bestScoreData;
};
