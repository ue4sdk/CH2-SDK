#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Carryable_GoldenRooster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carryable_GoldenRooster.Carryable_GoldenRooster_C
// 0x000F (0x1270 - 0x1261)
class ACarryable_GoldenRooster_C : public ABaseCarryable_Offhand_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Carryable_GoldenRooster.Carryable_GoldenRooster_C"));
		return ptr;
	}


	void OnInitialize();
	void ExecuteUbergraph_Carryable_GoldenRooster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
