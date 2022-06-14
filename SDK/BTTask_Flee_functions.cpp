// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTTask_Flee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_Flee.BTTask_Flee_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Flee_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Flee.BTTask_Flee_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Flee.BTTask_Flee_C.ReceiveAbort
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Flee_C::ReceiveAbort(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Flee.BTTask_Flee_C.ReceiveAbort"));

	struct
	{
		class AActor*                  OwnerActor;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Flee.BTTask_Flee_C.Stopppp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBTTask_Flee_C::Stopppp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Flee.BTTask_Flee_C.Stopppp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTTask_Flee.BTTask_Flee_C.ExecuteUbergraph_BTTask_Flee
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTTask_Flee_C::ExecuteUbergraph_BTTask_Flee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTTask_Flee.BTTask_Flee_C.ExecuteUbergraph_BTTask_Flee"));

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
