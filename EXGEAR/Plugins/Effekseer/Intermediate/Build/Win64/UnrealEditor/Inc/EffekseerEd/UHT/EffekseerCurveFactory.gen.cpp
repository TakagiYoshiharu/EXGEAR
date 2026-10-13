// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerCurveFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEffekseerCurveFactory() {}

// ********** Begin Cross Module References ********************************************************
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEffekseerCurveFactory ***************************************************
void UEffekseerCurveFactory::StaticRegisterNativesUEffekseerCurveFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEffekseerCurveFactory;
UClass* UEffekseerCurveFactory::GetPrivateStaticClass()
{
	using TClass = UEffekseerCurveFactory;
	if (!Z_Registration_Info_UClass_UEffekseerCurveFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EffekseerCurveFactory"),
			Z_Registration_Info_UClass_UEffekseerCurveFactory.InnerSingleton,
			StaticRegisterNativesUEffekseerCurveFactory,
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
	return Z_Registration_Info_UClass_UEffekseerCurveFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UEffekseerCurveFactory_NoRegister()
{
	return UEffekseerCurveFactory::GetPrivateStaticClass();
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
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerCurveFactory);
UEffekseerCurveFactory::~UEffekseerCurveFactory() {}
// ********** End Class UEffekseerCurveFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h__Script_EffekseerEd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerCurveFactory, UEffekseerCurveFactory::StaticClass, TEXT("UEffekseerCurveFactory"), &Z_Registration_Info_UClass_UEffekseerCurveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerCurveFactory), 1962827021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h__Script_EffekseerEd_2092884461(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h__Script_EffekseerEd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerCurveFactory_h__Script_EffekseerEd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
