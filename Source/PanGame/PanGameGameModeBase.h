// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PanGameGameModeBase.generated.h"

/**
 * 
 */

enum class EGameState :short//ö�ٵķ�ʽ���ü�����Ϸģʽ����
{
	EMenu,
	EStart,
	EPause,
	EWin,
	EGameOver
};

UCLASS()
class PANGAME_API APanGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	EGameState GetCurrentState() const;//��ȡ��ǰ��Ϸ״̬

	void SetCurrentState(EGameState value);//���õ�ǰ��Ϸ״̬Ϊvalue

private:
	EGameState currentState;//��ǰ��Ϸ״̬
	
};

FORCEINLINE EGameState APanGameGameModeBase::GetCurrentState() const//�������������ص�ǰ��Ϸ״̬
{
	return currentState;
}
