#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimationSet_BaseCustom_1hSword_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimationSet_BaseCustom_1hSword.AnimationSet_BaseCustom_1hSword_C
// 0x0000 (0x0188 - 0x0188)
class UAnimationSet_BaseCustom_1hSword_C : public UAnimationSet_BaseCustom_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimationSet_BaseCustom_1hSword.AnimationSet_BaseCustom_1hSword_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
