// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BowMeleeAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BowMeleeAttack.BowMeleeAttack_C.OnAssemble_BowMeleeAttack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBowMeleeAttack_C::OnAssemble_BowMeleeAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BowMeleeAttack.BowMeleeAttack_C.OnAssemble_BowMeleeAttack"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BowMeleeAttack.BowMeleeAttack_C.ExecuteUbergraph_BowMeleeAttack
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBowMeleeAttack_C::ExecuteUbergraph_BowMeleeAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BowMeleeAttack.BowMeleeAttack_C.ExecuteUbergraph_BowMeleeAttack"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
