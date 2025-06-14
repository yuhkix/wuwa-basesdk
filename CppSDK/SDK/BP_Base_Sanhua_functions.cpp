﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Base_Sanhua

#include "Basic.hpp"

#include "BP_Base_Sanhua_classes.hpp"
#include "BP_Base_Sanhua_parameters.hpp"


namespace SDK
{

// Function BP_Base_Sanhua.BP_Base_Sanhua_C.FightCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    isInAir                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Base_Sanhua_C::FightCommand(bool isInAir)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Base_Sanhua_C", "FightCommand");

	Params::BP_Base_Sanhua_C_FightCommand Parms{};

	Parms.isInAir = isInAir;

	UObject::ProcessEvent(Func, &Parms);
}

}

