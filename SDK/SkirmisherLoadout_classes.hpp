#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SkirmisherLoadout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkirmisherLoadout.SkirmisherLoadout_C
// 0x0000 (0x0128 - 0x0128)
class USkirmisherLoadout_C : public ULoadoutSelection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SkirmisherLoadout.SkirmisherLoadout_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
