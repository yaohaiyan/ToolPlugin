// Fill out your copyright notice in the Description page of Project Settings.


#include "UMGBlueprintLibrary.h"
#include "Rendering/DrawElements.h"

const float NeedlessSplineDistance = 150.f;

void UUMGBlueprintLibrary::DrawSpline(FPaintContext& Context, const FVector2D& InStart, const FVector2D& InStartDir, const FVector2D& InEnd, const FVector2D& InEndDir, FLinearColor Tint, float Thickness)
{
	Context.MaxLayer++;

	FVector2D StartDir = InStartDir;
	FVector2D EndDir = InEndDir;

	if (FVector2D::Distance(InStart, InEnd) < NeedlessSplineDistance)
	{
		StartDir = FVector2D::ZeroVector;
		EndDir = FVector2D::ZeroVector;
	}

	FSlateDrawElement::MakeSpline(
		Context.OutDrawElements,
		Context.MaxLayer,
		Context.AllottedGeometry.ToPaintGeometry(),
		InStart, StartDir, InEnd, EndDir,
		Thickness, ESlateDrawEffect::None, Tint);
}
