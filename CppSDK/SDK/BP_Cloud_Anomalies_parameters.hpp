﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cloud_Anomalies

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Cloud_Anomalies.BP_Cloud_Anomalies_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct BP_Cloud_Anomalies_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDMI_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Anomalies_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Cloud_Anomalies_C_UserConstructionScript");
static_assert(sizeof(BP_Cloud_Anomalies_C_UserConstructionScript) == 0x000010, "Wrong size on BP_Cloud_Anomalies_C_UserConstructionScript");
static_assert(offsetof(BP_Cloud_Anomalies_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_Cloud_Anomalies_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cloud_Anomalies_C_UserConstructionScript, CallFunc_CreateDMI_ReturnValue) == 0x000008, "Member 'BP_Cloud_Anomalies_C_UserConstructionScript::CallFunc_CreateDMI_ReturnValue' has a wrong offset!");

// Function BP_Cloud_Anomalies.BP_Cloud_Anomalies_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Cloud_Anomalies_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Anomalies_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_Cloud_Anomalies_C_ReceiveTick");
static_assert(sizeof(BP_Cloud_Anomalies_C_ReceiveTick) == 0x000004, "Wrong size on BP_Cloud_Anomalies_C_ReceiveTick");
static_assert(offsetof(BP_Cloud_Anomalies_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_Cloud_Anomalies_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_Cloud_Anomalies.BP_Cloud_Anomalies_C.EditorTick
// 0x0004 (0x0004 - 0x0000)
struct BP_Cloud_Anomalies_C_EditorTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Anomalies_C_EditorTick) == 0x000004, "Wrong alignment on BP_Cloud_Anomalies_C_EditorTick");
static_assert(sizeof(BP_Cloud_Anomalies_C_EditorTick) == 0x000004, "Wrong size on BP_Cloud_Anomalies_C_EditorTick");
static_assert(offsetof(BP_Cloud_Anomalies_C_EditorTick, DeltaSeconds) == 0x000000, "Member 'BP_Cloud_Anomalies_C_EditorTick::DeltaSeconds' has a wrong offset!");

// Function BP_Cloud_Anomalies.BP_Cloud_Anomalies_C.ExecuteUbergraph_BP_Cloud_Anomalies
// 0x000C (0x000C - 0x0000)
struct BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds_1;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies) == 0x000004, "Wrong alignment on BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies");
static_assert(sizeof(BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies) == 0x00000C, "Wrong size on BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies");
static_assert(offsetof(BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies, EntryPoint) == 0x000000, "Member 'BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies, K2Node_Event_DeltaSeconds_1) == 0x000008, "Member 'BP_Cloud_Anomalies_C_ExecuteUbergraph_BP_Cloud_Anomalies::K2Node_Event_DeltaSeconds_1' has a wrong offset!");

}

