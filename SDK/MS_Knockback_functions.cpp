// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MS_Knockback_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MS_Knockback.MS_Knockback_C.OnAssemble_MS_Knockback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMS_Knockback_C::OnAssemble_MS_Knockback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Knockback.MS_Knockback_C.OnAssemble_MS_Knockback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MS_Knockback.MS_Knockback_C.ExecuteUbergraph_MS_Knockback
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMS_Knockback_C::ExecuteUbergraph_MS_Knockback(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MS_Knockback.MS_Knockback_C.ExecuteUbergraph_MS_Knockback"));

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
