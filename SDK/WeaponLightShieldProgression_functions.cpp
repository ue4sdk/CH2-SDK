// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WeaponLightShieldProgression_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.OnAssemble_WeaponLightShieldProgression
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponLightShieldProgression_C::OnAssemble_WeaponLightShieldProgression()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.OnAssemble_WeaponLightShieldProgression"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.ExecuteUbergraph_WeaponLightShieldProgression
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWeaponLightShieldProgression_C::ExecuteUbergraph_WeaponLightShieldProgression(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WeaponLightShieldProgression.WeaponLightShieldProgression_C.ExecuteUbergraph_WeaponLightShieldProgression"));

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
