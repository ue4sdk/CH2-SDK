// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WarningsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WarningsWidget.WarningsWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWarningsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WarningsWidget.WarningsWidget_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WarningsWidget.WarningsWidget_C.On Query Server Timer Expired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWarningsWidget_C::On_Query_Server_Timer_Expired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WarningsWidget.WarningsWidget_C.On Query Server Timer Expired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WarningsWidget.WarningsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWarningsWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WarningsWidget.WarningsWidget_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WarningsWidget.WarningsWidget_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWarningsWidget_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WarningsWidget.WarningsWidget_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WarningsWidget.WarningsWidget_C.ExecuteUbergraph_WarningsWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWarningsWidget_C::ExecuteUbergraph_WarningsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WarningsWidget.WarningsWidget_C.ExecuteUbergraph_WarningsWidget"));

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
