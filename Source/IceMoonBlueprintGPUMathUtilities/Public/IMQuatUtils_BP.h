#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IMQuatUtils.h"
#include "IMQuatUtils_BP.generated.h"

UCLASS()
class ICEMOONBLUEPRINTGPUMATHUTILITIES_API UIMQuatUtils_BP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category="IM|Math|Quaternion", meta = (BlueprintThreadSafe))
	static FVector QuatRotateVector(FVector Vec, FQuat Quat){
		return IMQuatUtils::QuatRotateVector(Vec, Quat);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Quaternion", meta = (BlueprintThreadSafe))
	static FQuat AxisAngleToQuat(FVector Axis, float Angle){
		return IMQuatUtils::AxisAngleToQuat(Axis, Angle);
	}

	UFUNCTION(BlueprintPure, Category="IM|Math|Quaternion", meta = (BlueprintThreadSafe))
	static FQuat GetRotationBetweenVectors(FVector From, FVector To){
		return IMQuatUtils::GetRotationBetweenVectors(From, To);
	}
};
