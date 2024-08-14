// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueWidget.generated.h"


class URichTextBlock;

UCLASS()
class UIPROJECT_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	void DisplayDialogue();
	
protected:
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta = (ExposeOnSpawn = true),Category = "Dialogue")
	FText DialogueText;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,meta=(ExposeOnSpawn = true),Category = "Dialogue")
	float Time = 1.f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,meta=(BindWidget = true),Category = "Dialogue")
	URichTextBlock* RichTextBlock;
	
private:

	int32 GetNextIndex(const FString& Str,int32 CurrentIndex);

	FString FullText;
	int32 StrIndex = 0;
};
