#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SpecialItemAbility_Recharge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpecialItemAbility_Recharge.SpecialItemAbility_Recharge_C
// 0x0000 (0x0098 - 0x0098)
class USpecialItemAbility_Recharge_C : public UBaseSpecialItemAbility_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SpecialItemAbility_Recharge.SpecialItemAbility_Recharge_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
