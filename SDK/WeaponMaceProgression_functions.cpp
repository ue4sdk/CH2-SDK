// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponMaceProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponMaceProgression.WeaponMaceProgression_C.OnAssemble_WeaponMaceProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponMaceProgression_C::OnAssemble_WeaponMaceProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMaceProgression.WeaponMaceProgression_C.OnAssemble_WeaponMaceProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponMaceProgression.WeaponMaceProgression_C.ExecuteUbergraph_WeaponMaceProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponMaceProgression_C::ExecuteUbergraph_WeaponMaceProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponMaceProgression.WeaponMaceProgression_C.ExecuteUbergraph_WeaponMaceProgression"));

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
