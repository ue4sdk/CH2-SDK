#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "B_CloseRangeEscapeHeat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_CloseRangeEscapeHeat.B_CloseRangeEscapeHeat_C
// 0x0000 (0x0078 - 0x0078)
class UB_CloseRangeEscapeHeat_C : public UUtilityAI_Behavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass B_CloseRangeEscapeHeat.B_CloseRangeEscapeHeat_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
