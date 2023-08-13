// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CoopGameStudyHUD.generated.h"

UCLASS()
class ACoopGameStudyHUD : public AHUD
{
	GENERATED_BODY()

public:
	ACoopGameStudyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

