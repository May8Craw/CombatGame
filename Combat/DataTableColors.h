#pragma once

#include "Engine/DataTable.h"
#include "DataTableColors.generated.h"
/*
*C:\Users\mayac\Documents\Workspaces\590-01\maya.crawford\Combat\Source\DataTableColors.h/
*/

USTRUCT(BlueprintType)
struct COMBAT_API FDataTableColors : public FTableRowBase
{
	GENERATED_BODY()

	FDataTableColors() :
		t1Color(0.0f, 0.0f, 0.0f, 1.0f),
		t2Color(0.0f, 0.0f, 0.0f, 1.0f),
		floorColor(0.0f, 0.0f, 0.0f, 1.0f),
		wallColor(0.0f, 0.0f, 0.0f, 1.0f) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor t1Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor t2Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor floorColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colors")
	FLinearColor wallColor;
};