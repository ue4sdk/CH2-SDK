#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CrossbowReload_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CrossbowReload.CrossbowReload_C
// 0x0018 (0x0198 - 0x0180)
class UCrossbowReload_C : public UBaseCombatState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsSoftRecovery;                                           // 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0189(0x0007) MISSED OFFSET
	class UCameraModifier_FollowAnimation*             CameraModifier;                                           // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CrossbowReload.CrossbowReload_C"));
		return ptr;
	}


	void DisableCameraModifier(const struct FName& NextState);
	void EnableCameraModifier();
	void OnAssemble_CrossbowReload();
	void EventEndAnimation();
	void EventBeginState(const struct FName& PreviousState, float PreviousStateTime, float AnimationLength);
	void EventBeginFire(const struct FName& AttackName, bool bHeldQueue);
	void SoftRecovery();
	void EventEndState(const struct FName& NextState, bool bStartAttack);
	void ExecuteUbergraph_CrossbowReload(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
