
#pragma once

#include "CoreMinimal.h"
#include "CommonGameInstance.h"
#include "LyraGameInstance.generated.h"


/**
 * CommonGame Game Instance
 *
 * Must be configured in DefaultEngine.ini:
 *
 * [/Script/EngineSettings.GameMapsSettings]
 * GameInstanceClass=/Script/XistCommonGameSample.XcgsGameInstance
 */
UCLASS(meta = (Category = Lyra))
class ULyraGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:
	ULyraGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

};