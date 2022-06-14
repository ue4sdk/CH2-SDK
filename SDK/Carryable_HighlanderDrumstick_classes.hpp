#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_HighlanderDrumstick_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C
// 0x0017 (0x1278 - 0x1261)
class ACarryable_HighlanderDrumstick_C : public ABaseCarryable_Offhand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCarryableFoodComp_C*                        CarryableFoodComp;                                        // 0x1270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_HighlanderDrumstick.Carryable_HighlanderDrumstick_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Carryable_HighlanderDrumstick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
