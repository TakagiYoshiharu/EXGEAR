// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerEffectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerEffectFactory() {}

// Begin Cross Module References
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References

// Begin Class UEffekseerEffectFactory
void UEffekseerEffectFactory::StaticRegisterNativesUEffekseerEffectFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffekseerEffectFactory);
UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister()
{
	return UEffekseerEffectFactory::StaticClass();
}
struct Z_Construct_UClass_UEffekseerEffectFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerEffectFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerEffectFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerEffectFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEffekseerEffectFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerEffectFactory_Statics::ClassParams = {
	&UEffekseerEffectFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerEffectFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffekseerEffectFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEffekseerEffectFactory()
{
	if (!Z_Registration_Info_UClass_UEffekseerEffectFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffekseerEffectFactory.OuterSingleton, Z_Construct_UClass_UEffekseerEffectFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffekseerEffectFactory.OuterSingleton;
}
template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerEffectFactory>()
{
	return UEffekseerEffectFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffectFactory);
UEffekseerEffectFactory::~UEffekseerEffectFactory() {}
// End Class UEffekseerEffectFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerEffectFactory, UEffekseerEffectFactory::StaticClass, TEXT("UEffekseerEffectFactory"), &Z_Registration_Info_UClass_UEffekseerEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerEffectFactory), 3961059138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h_1032590325(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
