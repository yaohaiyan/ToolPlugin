// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "UMGBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TOOLPLUGIN_API UUMGBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	* @brief:	绘制曲线
	* @param:	Context
	* @param:	InStart
	* @param:	InStartDir
	* @param:	InEnd
	* @param:	InEndDir
	* @param:	Tint
	* @param:	Thickness
	* @Returns:	void
	*/
	static void DrawSpline(FPaintContext& Context, const FVector2D& InStart, const FVector2D& InStartDir, const FVector2D& InEnd, const FVector2D& InEndDir, FLinearColor Tint, float Thickness);
};
