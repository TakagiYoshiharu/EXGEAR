// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEd/Public/EffekseerCurveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerCurveFactory() {}

// Begin Cross Module References
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// End Cross Module References

// Begin Class UEffekseerCurveFactory
void UEffekseerCurveFactory::StaticRegisterNativesUEffekseerCurveFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffekseerCurveFactory);
UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister()
{
	return UEffekseerCurveFactory::StaticClass();
}
struct Z_Construct_UClass_UEffekseerCurveFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerCurveFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerCurveFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerCurveFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEffekseerCurveFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerCurveFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerCurveFactory_Statics::ClassParams = {
	&UEffekseerCurveFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerCurveFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffekseerCurveFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEffekseerCurveFactory()
{
	if (!Z_Registration_Info_UClass_UEffekseerCurveFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffekseerCurveFactory.OuterSingleton, Z_Construct_UClass_UEffekseerCurveFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffekseerCurveFactory.OuterSingleton;
}
template<> EFFEKSEERED_API UClass* StaticClass<UEffekseerCurveFactory>()
{
	return UEffekseerCurveFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerCurveFactory);
UEffekseerCurveFactory::~UEffekseerCurveFactory() {}
// End Class UEffekseerCurveFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerCurveFactory, UEffekseerCurveFactory::StaticClass, TEXT("UEffekseerCurveFactory"), &Z_Registration_Info_UClass_UEffekseerCurveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerCurveFactory), 3084975379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h_1641217435(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
