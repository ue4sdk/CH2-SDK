#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AnimationSet_BaseSiege_Throne_1P_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimationSet_BaseSiege_Throne_1P.AnimationSet_BaseSiege_Throne_1P_C
// 0x0000 (0x01B0 - 0x01B0)
class UAnimationSet_BaseSiege_Throne_1P_C : public UAnimationSet_BaseSiege_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimationSet_BaseSiege_Throne_1P.AnimationSet_BaseSiege_Throne_1P_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
