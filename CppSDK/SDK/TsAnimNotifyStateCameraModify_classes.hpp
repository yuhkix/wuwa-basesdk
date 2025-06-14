﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateCameraModify

#include "Basic.hpp"

#include "SCameraModifier_Condition_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "SCameraModifier_Settings_structs.hpp"
#include "ECameraAnsEffectiveClientType_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateCameraModify.TsAnimNotifyStateCameraModify_C
// 0x0158 (0x01A0 - 0x0048)
class UTsAnimNotifyStateCameraModify_C final : public UKuroAnimNotifyState
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0048(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                         淡入时间;                                          // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         淡出时间;                                          // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         打断淡出时间;                                      // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSCameraModifier_Settings              相机修改配置;                                      // 0x0060(0x0118)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ECameraAnsEffectiveClientType                 生效客户端类型;                                    // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CameraAttachSocket;                                // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSCameraModifier_Condition>     条件;                                              // 0x0190(0x0010)(Edit, BlueprintVisible)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateCameraModify_C">();
	}
	static class UTsAnimNotifyStateCameraModify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateCameraModify_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateCameraModify_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateCameraModify_C");
static_assert(sizeof(UTsAnimNotifyStateCameraModify_C) == 0x0001A0, "Wrong size on UTsAnimNotifyStateCameraModify_C");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, Tag) == 0x000048, "Member 'UTsAnimNotifyStateCameraModify_C::Tag' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 淡入时间) == 0x000054, "Member 'UTsAnimNotifyStateCameraModify_C::淡入时间' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 淡出时间) == 0x000058, "Member 'UTsAnimNotifyStateCameraModify_C::淡出时间' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 打断淡出时间) == 0x00005C, "Member 'UTsAnimNotifyStateCameraModify_C::打断淡出时间' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 相机修改配置) == 0x000060, "Member 'UTsAnimNotifyStateCameraModify_C::相机修改配置' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 生效客户端类型) == 0x000178, "Member 'UTsAnimNotifyStateCameraModify_C::生效客户端类型' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, CameraAttachSocket) == 0x000180, "Member 'UTsAnimNotifyStateCameraModify_C::CameraAttachSocket' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCameraModify_C, 条件) == 0x000190, "Member 'UTsAnimNotifyStateCameraModify_C::条件' has a wrong offset!");

}

