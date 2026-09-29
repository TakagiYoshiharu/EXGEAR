// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerProceduralModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerProceduralModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EFFEKSEER_API UClass* Z_Construct_UClass_UEFfekseerProceduralModel();
EFFEKSEER_API UClass* Z_Construct_UClass_UEFfekseerProceduralModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_Effekseer();
// End Cross Module References

// Begin Class UEFfekseerProceduralModel
void UEFfekseerProceduralModel::StaticRegisterNativesUEFfekseerProceduralModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEFfekseerProceduralModel);
UClass* Z_Construct_UClass_UEFfekseerProceduralModel_NoRegister()
{
	return UEFfekseerProceduralModel::StaticClass();
}
struct Z_Construct_UClass_UEFfekseerProceduralModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerProceduralModel.h" },
		{ "ModuleRelativePath", "Public/EffekseerProceduralModel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEFfekseerProceduralModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEFfekseerProceduralModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEFfekseerProceduralModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEFfekseerProceduralModel_Statics::ClassParams = {
	&UEFfekseerProceduralModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEFfekseerProceduralModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UEFfekseerProceduralModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEFfekseerProceduralModel()
{
	if (!Z_Registration_Info_UClass_UEFfekseerProceduralModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEFfekseerProceduralModel.OuterSingleton, Z_Construct_UClass_UEFfekseerProceduralModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEFfekseerProceduralModel.OuterSingleton;
}
template<> EFFEKSEER_API UClass* StaticClass<UEFfekseerProceduralModel>()
{
	return UEFfekseerProceduralModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEFfekseerProceduralModel);
// End Class UEFfekseerProceduralModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerProceduralModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEFfekseerProceduralModel, UEFfekseerProceduralModel::StaticClass, TEXT("UEFfekseerProceduralModel"), &Z_Registration_Info_UClass_UEFfekseerProceduralModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEFfekseerProceduralModel), 2775760715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerProceduralModel_h_3952842417(TEXT("/Script/Effekseer"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerProceduralModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerProceduralModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
