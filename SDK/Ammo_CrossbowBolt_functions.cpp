// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Ammo_CrossbowBolt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_CrossbowBolt_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.CrossbowBolt_AssignProjectileEvents
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_CrossbowBolt_C::CrossbowBolt_AssignProjectileEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.CrossbowBolt_AssignProjectileEvents"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementStarted_Event_Bolt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_CrossbowBolt_C::OnMovementStarted_Event_Bolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementStarted_Event_Bolt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementFinished_Event_Bolt
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAmmo_CrossbowBolt_C::OnMovementFinished_Event_Bolt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementFinished_Event_Bolt"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.ExecuteUbergraph_Ammo_CrossbowBolt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAmmo_CrossbowBolt_C::ExecuteUbergraph_Ammo_CrossbowBolt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.ExecuteUbergraph_Ammo_CrossbowBolt"));

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
