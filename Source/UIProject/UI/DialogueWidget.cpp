// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidget.h"

#include "Components/RichTextBlock.h"

void UDialogueWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	
	FullText = DialogueText.ToString();
}

void UDialogueWidget::NativeConstruct()
{
	Super::NativeConstruct();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&UDialogueWidget::DisplayDialogue,Time,true);
}

void UDialogueWidget::DisplayDialogue()
{
	StrIndex = GetNextIndex(FullText,StrIndex);
	const FString& OutStr = FullText.Left(StrIndex+1);
	StrIndex++;
	
	FText OutText = FText::FromString(OutStr);
	RichTextBlock->SetText(OutText);
	
	if(StrIndex >= FullText.Len())
	{
		GetWorld()->GetTimerManager().PauseTimer(TimerHandle);
		FullText.Empty();
	}
}

int32 UDialogueWidget::GetNextIndex(const FString& Str, int32 CurrentIndex)
{
	if(Str.IsEmpty())return 0;
	
	if(Str[CurrentIndex] == '<')
	{
		int32 RightCount = 0;
		while(CurrentIndex < Str.Len())
		{
			if(Str[CurrentIndex] == '>')RightCount++;
			CurrentIndex++;
			if(RightCount >= 2)return CurrentIndex;
		}
	}
	return CurrentIndex;
}
