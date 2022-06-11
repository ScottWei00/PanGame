// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PanGameGameModeBase.generated.h"

/**
 * 
 */

enum class EGameState :short//枚举的方式设置几个游戏模式类型
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
	EGameState GetCurrentState() const;//获取当前游戏状态

	void SetCurrentState(EGameState value);//设置当前游戏状态为value

private:
	EGameState currentState;//当前游戏状态
	
};

FORCEINLINE EGameState APanGameGameModeBase::GetCurrentState() const//内联函数：返回当前游戏状态
{
	return currentState;
}
