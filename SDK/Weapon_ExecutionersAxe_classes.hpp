#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Weapon_ExecutionersAxe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_ExecutionersAxe.Weapon_ExecutionersAxe_C
// 0x0000 (0x12C0 - 0x12C0)
class AWeapon_ExecutionersAxe_C : public AWeapon_BaseTwoHanded_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Weapon_ExecutionersAxe.Weapon_ExecutionersAxe_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
