// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Spawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spawn.Spawn_C.OnAssemble_Spawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USpawn_C::OnAssemble_Spawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spawn.Spawn_C.OnAssemble_Spawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Spawn.Spawn_C.ExecuteUbergraph_Spawn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void USpawn_C::ExecuteUbergraph_Spawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Spawn.Spawn_C.ExecuteUbergraph_Spawn"));

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
