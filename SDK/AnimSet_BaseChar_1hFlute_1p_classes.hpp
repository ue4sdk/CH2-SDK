#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimSet_BaseChar_1hFlute_1p_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimSet_BaseChar_1hFlute_1p.AnimSet_BaseChar_1hFlute_1p_C
// 0x0000 (0x06F8 - 0x06F8)
class UAnimSet_BaseChar_1hFlute_1p_C : public UAnimationSet_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimSet_BaseChar_1hFlute_1p.AnimSet_BaseChar_1hFlute_1p_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
