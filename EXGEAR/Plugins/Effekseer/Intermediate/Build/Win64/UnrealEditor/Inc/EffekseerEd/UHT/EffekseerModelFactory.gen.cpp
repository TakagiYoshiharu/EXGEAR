// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EffekseerModelFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEffekseerModelFactory() {}

// ********** Begin Cross Module References ********************************************************
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerModelFactory();
EFFEKSEERED_API UClass* Z_Construct_UClass_UEffekseerModelFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_EffekseerEd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEffekseerModelFactory ***************************************************
void UEffekseerModelFactory::StaticRegisterNativesUEffekseerModelFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEffekseerModelFactory;
UClass* UEffekseerModelFactory::GetPrivateStaticClass()
{
	using TClass = UEffekseerModelFactory;
	if (!Z_Registration_Info_UClass_UEffekseerModelFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EffekseerModelFactory"),
			Z_Registration_Info_UClass_UEffekseerModelFactory.InnerSingleton,
			StaticRegisterNativesUEffekseerModelFactory,
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
	return Z_Registration_Info_UClass_UEffekseerModelFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UEffekseerModelFactory_NoRegister()
{
	return UEffekseerModelFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEffekseerModelFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerModelFactory.h" },
		{ "ModuleRelativePath", "Public/EffekseerModelFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerModelFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEffekseerModelFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_EffekseerEd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModelFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerModelFactory_Statics::ClassParams = {
	&UEffekseerModelFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerModelFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffekseerModelFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEffekseerModelFactory()
{
	if (!Z_Registration_Info_UClass_UEffekseerModelFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffekseerModelFactory.OuterSingleton, Z_Construct_UClass_UEffekseerModelFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffekseerModelFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerModelFactory);
UEffekseerModelFactory::~UEffekseerModelFactory() {}
// ********** End Class UEffekseerModelFactory *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerModelFactory_h__Script_EffekseerEd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerModelFactory, UEffekseerModelFactory::StaticClass, TEXT("UEffekseerModelFactory"), &Z_Registration_Info_UClass_UEffekseerModelFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerModelFactory), 3400566945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerModelFactory_h__Script_EffekseerEd_845654721(TEXT("/Script/EffekseerEd"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerModelFactory_h__Script_EffekseerEd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_EffekseerEd_Public_EffekseerModelFactory_h__Script_EffekseerEd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
