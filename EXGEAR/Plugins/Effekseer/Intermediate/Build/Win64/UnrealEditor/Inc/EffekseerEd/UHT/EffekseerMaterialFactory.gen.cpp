// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerMaterialFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerMaterialFactory() {}

// Begin Cross Module References
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerMaterialFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerMaterialFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References

// Begin Class UEffekseerMaterialFactory
void UEffekseerMaterialFactory::StaticRegisterNativesUEffekseerMaterialFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffekseerMaterialFactory);
UClass* Z_Construct_UClass_UEffekseerMaterialFactory_NoRegister()
{
	return UEffekseerMaterialFactory::StaticClass();
}
struct Z_Construct_UClass_UEffekseerMaterialFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerMaterialFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerMaterialFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerMaterialFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEffekseerMaterialFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterialFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerMaterialFactory_Statics::ClassParams = {
	&UEffekseerMaterialFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterialFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffekseerMaterialFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEffekseerMaterialFactory()
{
	if (!Z_Registration_Info_UClass_UEffekseerMaterialFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffekseerMaterialFactory.OuterSingleton, Z_Construct_UClass_UEffekseerMaterialFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffekseerMaterialFactory.OuterSingleton;
}
template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerMaterialFactory>()
{
	return UEffekseerMaterialFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerMaterialFactory);
UEffekseerMaterialFactory::~UEffekseerMaterialFactory() {}
// End Class UEffekseerMaterialFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerMaterialFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerMaterialFactory, UEffekseerMaterialFactory::StaticClass, TEXT("UEffekseerMaterialFactory"), &Z_Registration_Info_UClass_UEffekseerMaterialFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerMaterialFactory), 4021986617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerMaterialFactory_h_1082317681(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerMaterialFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerMaterialFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
