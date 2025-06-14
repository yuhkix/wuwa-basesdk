﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemMaterialDataMap

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass ItemMaterialDataMap.ItemMaterialDataMap_C
// 0x0058 (0x0308 - 0x02B0)
class AItemMaterialDataMap_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<float, class UItemMaterialControllerActorData_C*> Map;                                      // 0x02B8(0x0050)(Edit, BlueprintVisible, Transient)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemMaterialDataMap_C">();
	}
	static class AItemMaterialDataMap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AItemMaterialDataMap_C>();
	}
};
static_assert(alignof(AItemMaterialDataMap_C) == 0x000008, "Wrong alignment on AItemMaterialDataMap_C");
static_assert(sizeof(AItemMaterialDataMap_C) == 0x000308, "Wrong size on AItemMaterialDataMap_C");
static_assert(offsetof(AItemMaterialDataMap_C, DefaultSceneRoot) == 0x0002B0, "Member 'AItemMaterialDataMap_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AItemMaterialDataMap_C, Map) == 0x0002B8, "Member 'AItemMaterialDataMap_C::Map' has a wrong offset!");

}

