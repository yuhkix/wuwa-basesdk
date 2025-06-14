﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateSetRootMotionScale

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateSetRootMotionScale.TsAnimNotifyStateSetRootMotionScale_C
// 0x0010 (0x0058 - 0x0048)
class UTsAnimNotifyStateSetRootMotionScale_C final : public UKuroAnimNotifyState
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0048(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateSetRootMotionScale_C">();
	}
	static class UTsAnimNotifyStateSetRootMotionScale_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateSetRootMotionScale_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateSetRootMotionScale_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateSetRootMotionScale_C");
static_assert(sizeof(UTsAnimNotifyStateSetRootMotionScale_C) == 0x000058, "Wrong size on UTsAnimNotifyStateSetRootMotionScale_C");
static_assert(offsetof(UTsAnimNotifyStateSetRootMotionScale_C, Tag) == 0x000048, "Member 'UTsAnimNotifyStateSetRootMotionScale_C::Tag' has a wrong offset!");

}

