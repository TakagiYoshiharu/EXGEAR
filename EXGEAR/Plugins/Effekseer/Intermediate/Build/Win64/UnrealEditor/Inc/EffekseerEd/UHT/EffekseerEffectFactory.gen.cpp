// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerEffectFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEffekseerEffectFactory() {}

// ********** Begin Cross Module References ********************************************************
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEffekseerEffectFactory **************************************************
void UEffekseerEffectFactory::StaticRegisterNativesUEffekseerEffectFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEffekseerEffectFactory;
UClass* UEffekseerEffectFactory::GetPrivateStaticClass()
{
	using TClass = UEffekseerEffectFactory;
	if (!Z_Registration_Info_UClass_UEffekseerEffectFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EffekseerEffectFactory"),
			Z_Registration_Info_UClass_UEffekseerEffectFactory.InnerSingleton,
			StaticRegisterNativesUEffekseerEffectFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UEffekseerEffectFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UEffekseerEffectFactory_NoRegister()
{
	return UEffekseerEffectFactory::GetPrivateStaticClass();
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerEffectFactory);
UEffekseerEffectFactory::~UEffekseerEffectFactory() {}
// ********** End Class UEffekseerEffectFactory ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h__Script_EffekseerEd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerEffectFactory, UEffekseerEffectFactory::StaticClass, TEXT("UEffekseerEffectFactory"), &Z_Registration_Info_UClass_UEffekseerEffectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerEffectFactory), 3230253001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h__Script_EffekseerEd_2217250730(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h__Script_EffekseerEd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerEffectFactory_h__Script_EffekseerEd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
