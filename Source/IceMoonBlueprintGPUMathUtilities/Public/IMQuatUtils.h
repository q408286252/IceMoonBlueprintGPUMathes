#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h" // For FMath::Pow, FMath::Lerp

namespace IMQuatUtils
{
	inline float AngleBetweenQuaternions(const FQuat& Q1, const FQuat& Q2)
	{
		// 确保四元数已归一化
		const FQuat Q1Norm = Q1.GetNormalized();
		const FQuat Q2Norm = Q2.GetNormalized();

		// 计算点积
		float DotProduct = Q1Norm | Q2Norm;

		// 为了走最短路径，如果点积为负，则反转其中一个四元数
		if (DotProduct < 0.0f)
		{
			DotProduct = -DotProduct;
		}

		// 点积可能由于浮点不精确而略微超过 1.0
		// 使用 Acos 计算角度
		return 2.0f * FMath::Acos(FMath::Clamp(DotProduct, -1.0f, 1.0f));
	}
	
	inline FVector AngularVelocity(const FQuat& StartQuat, const FQuat& EndQuat, float DeltaTime)
	{
		if (DeltaTime <= 0.0f)
		{
			return FVector::ZeroVector;
		}

		FQuat DeltaQuat = EndQuat * StartQuat.Inverse();
        
		// 确保我们走的是最短路径
		if (DeltaQuat.W < 0.0f)
		{
			DeltaQuat.X = -DeltaQuat.X;
			DeltaQuat.Y = -DeltaQuat.Y;
			DeltaQuat.Z = -DeltaQuat.Z;
			DeltaQuat.W = -DeltaQuat.W;
		}

		FVector Axis;
		float Angle;
		DeltaQuat.ToAxisAndAngle(Axis, Angle);

		// 角速度是旋转轴乘以（角度/时间）
		return Axis * (Angle / DeltaTime);
	}
	
	inline FVector AngularVelocity(const FVector4f& StartQuatVec, const FVector4f& EndQuatVec, float DeltaTime)
	{
		FQuat StartQuat(StartQuatVec.X, StartQuatVec.Y, StartQuatVec.Z, StartQuatVec.W);
		FQuat EndQuat(EndQuatVec.X, EndQuatVec.Y, EndQuatVec.Z, EndQuatVec.W);
		return AngularVelocity(StartQuat, EndQuat, DeltaTime);
	}

	inline FVector QuatRotateVector(const FVector& Vec, const FQuat& Quat)
	{
		return Quat.RotateVector(Vec);
	}
    
	inline FQuat AxisAngleToQuat(const FVector& Axis, float Angle)
	{
		FVector AxisXYZ = Axis * FMath::Sin(Angle);
		return FQuat(AxisXYZ.X, AxisXYZ.Y, AxisXYZ.Z, FMath::Cos(Angle));
	}
    
	inline FQuat GetRotationBetweenVectors(const FVector& From, const FVector& To)
	{
		const float NormAB = FMath::Sqrt(From.SizeSquared() * To.SizeSquared());
		float W = NormAB + FVector::DotProduct(From, To);
		FQuat Result;
        
		const float Epsilon = 1e-6f;
		if (W >= Epsilon * NormAB)
		{
			Result = FQuat(FVector::CrossProduct(From, To), W);
		}
		else if (NormAB < Epsilon)
		{
			Result = FQuat::Identity;
		}
		else
		{
			FVector Fallback = FMath::Abs(From.X) > FMath::Abs(From.Y) ?
				FVector(-From.Z, 0.0f, From.X) :
				FVector(0.0f, -From.Z, From.Y);
			Result = FQuat(Fallback, 0.0f);
		}
        
		Result.Normalize();
		return Result;
	}
}