#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "OnlineSubsystemUtils_enums.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "OnlineSubsystem_classes.hpp"
#include "AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0128
struct FBlueprintSessionResult
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0000(0x0120) MISSED OFFSET
	bool                                               IsServerSelected;                                         // 0x0120(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
// 0x0018
struct FInAppPurchaseProductRequest2
{
	struct FString                                     ProductIdentifier;                                        // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040
struct FPIELoginSettingsInternal
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Type;                                                     // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<unsigned char>                              TokenBytes;                                               // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050
struct FPlayerReservation
{
	struct FUniqueNetIdRepl                            UniqueId;                                                 // 0x0000(0x0028) (CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ValidationStr;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bAllowCrossplay;                                          // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FUniqueNetIdRepl                            PartyLeader;                                              // 0x0008(0x0028) (CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>                  RemovedPartyMembers;                                      // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078
struct FSpectatorReservation
{
	struct FUniqueNetIdRepl                            SpectatorId;                                              // 0x0000(0x0028) (CPF_Transient, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FPlayerReservation                          Spectator;                                                // 0x0028(0x0050) (CPF_Transient, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
// 0x0030
struct FInAppPurchaseReceiptInfo2
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
// 0x0178
struct FOnlineProxyStoreOffer
{
	struct FString                                     OfferId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	struct FText                                       LongDescription;                                          // 0x0040(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0058(0x00B8) MISSED OFFSET
	struct FDateTime                                   ReleaseDate;                                              // 0x0110(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FDateTime                                   ExpirationDate;                                           // 0x0118(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                             // 0x0120(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	TMap<struct FString, struct FString>               DynamicFields;                                            // 0x0128(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
// 0x0030
struct FInAppPurchaseRestoreInfo2
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// 0x0030
struct FInAppPurchaseReceiptInfo
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ValidationInfo;                                           // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
// 0x00F8
struct FInAppPurchaseProductInfo2
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     TransactionIdentifier;                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayDescription;                                       // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DisplayPrice;                                             // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              RawPrice;                                                 // 0x0050(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     CurrencyCode;                                             // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     CurrencySymbol;                                           // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     DecimalSeparator;                                         // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     GroupingSeparator;                                        // 0x0088(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ReceiptData;                                              // 0x0098(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               DynamicFields;                                            // 0x00A8(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
