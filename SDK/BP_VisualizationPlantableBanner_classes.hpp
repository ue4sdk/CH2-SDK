#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_VisualizationPlantableBanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VisualizationPlantableBanner.BP_VisualizationPlantableBanner_C
// 0x0000 (0x0342 - 0x0342)
class ABP_VisualizationPlantableBanner_C : public ABP_Visualization_BaseDeployable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VisualizationPlantableBanner.BP_VisualizationPlantableBanner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
