// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CDPR_00GameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class ACDPR_00GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	ACDPR_00GameMode();
};



