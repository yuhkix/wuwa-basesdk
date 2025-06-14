﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Vision_MB1Mingzhongzhigui

#include "Basic.hpp"

#include "BP_BaseVision_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Vision_MB1Mingzhongzhigui.BP_Vision_MB1Mingzhongzhigui_C
// 0x0060 (0x07D0 - 0x0770)
class ABP_Vision_MB1Mingzhongzhigui_C final : public ABP_BaseVision_C
{
public:
	class UCapsuleComponent*                      BodyCylinder;                                      // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroAdjustableBoxComponent*            KuroAdjustableBox;                                 // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Body;                                              // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Clock;                                             // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Trail02;                                           // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Trail01;                                           // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Head;                                              // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Leg_FR;                                            // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Leg_BR;                                            // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Leg_BL;                                            // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Leg_FL;                                            // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Vision_MB1Mingzhongzhigui_C">();
	}
	static class ABP_Vision_MB1Mingzhongzhigui_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Vision_MB1Mingzhongzhigui_C>();
	}
};
static_assert(alignof(ABP_Vision_MB1Mingzhongzhigui_C) == 0x000010, "Wrong alignment on ABP_Vision_MB1Mingzhongzhigui_C");
static_assert(sizeof(ABP_Vision_MB1Mingzhongzhigui_C) == 0x0007D0, "Wrong size on ABP_Vision_MB1Mingzhongzhigui_C");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, BodyCylinder) == 0x000770, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::BodyCylinder' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, KuroAdjustableBox) == 0x000778, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::KuroAdjustableBox' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Body) == 0x000780, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Body' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Clock) == 0x000788, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Clock' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Trail02) == 0x000790, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Trail02' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Trail01) == 0x000798, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Trail01' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Head) == 0x0007A0, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Head' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Leg_FR) == 0x0007A8, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Leg_FR' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Leg_BR) == 0x0007B0, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Leg_BR' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Leg_BL) == 0x0007B8, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Leg_BL' has a wrong offset!");
static_assert(offsetof(ABP_Vision_MB1Mingzhongzhigui_C, Leg_FL) == 0x0007C0, "Member 'ABP_Vision_MB1Mingzhongzhigui_C::Leg_FL' has a wrong offset!");

}

