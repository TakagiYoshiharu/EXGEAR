// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effekseer/Public/EffekseerMaterial.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffekseerMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial();
EFFEKSEER_API UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister();
EFFEKSEER_API UEnum* Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType();
EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerGradientProperty();
EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerMaterialElement();
EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerTextureProperty();
EFFEKSEER_API UScriptStruct* Z_Construct_UScriptStruct_FEffekseerUniformProperty();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Effekseer();
// End Cross Module References

// Begin ScriptStruct FEffekseerTextureProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffekseerTextureProperty;
class UScriptStruct* FEffekseerTextureProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerTextureProperty, (UObject*)Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerTextureProperty"));
	}
	return Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.OuterSingleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerTextureProperty>()
{
	return FEffekseerTextureProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerTextureProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerTextureProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerTextureProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	nullptr,
	&NewStructOps,
	"EffekseerTextureProperty",
	Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::PropPointers),
	sizeof(FEffekseerTextureProperty),
	alignof(FEffekseerTextureProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffekseerTextureProperty()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.InnerSingleton, Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffekseerTextureProperty.InnerSingleton;
}
// End ScriptStruct FEffekseerTextureProperty

// Begin ScriptStruct FEffekseerUniformProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffekseerUniformProperty;
class UScriptStruct* FEffekseerUniformProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerUniformProperty, (UObject*)Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerUniformProperty"));
	}
	return Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.OuterSingleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerUniformProperty>()
{
	return FEffekseerUniformProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerUniformProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "EffekseerUniformProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerUniformProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerUniformProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerUniformProperty, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	nullptr,
	&NewStructOps,
	"EffekseerUniformProperty",
	Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::PropPointers),
	sizeof(FEffekseerUniformProperty),
	alignof(FEffekseerUniformProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffekseerUniformProperty()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.InnerSingleton, Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffekseerUniformProperty.InnerSingleton;
}
// End ScriptStruct FEffekseerUniformProperty

// Begin ScriptStruct FEffekseerGradientProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffekseerGradientProperty;
class UScriptStruct* FEffekseerGradientProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerGradientProperty, (UObject*)Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerGradientProperty"));
	}
	return Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.OuterSingleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerGradientProperty>()
{
	return FEffekseerGradientProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "EffekseerGradientProperty" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerGradientProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerGradientProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	nullptr,
	&NewStructOps,
	"EffekseerGradientProperty",
	Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::PropPointers),
	sizeof(FEffekseerGradientProperty),
	alignof(FEffekseerGradientProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffekseerGradientProperty()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.InnerSingleton, Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffekseerGradientProperty.InnerSingleton;
}
// End ScriptStruct FEffekseerGradientProperty

// Begin ScriptStruct FEffekseerMaterialElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffekseerMaterialElement;
class UScriptStruct* FEffekseerMaterialElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffekseerMaterialElement, (UObject*)Z_Construct_UPackage__Script_Effekseer(), TEXT("EffekseerMaterialElement"));
	}
	return Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.OuterSingleton;
}
template<> EFFEKSEER_API UScriptStruct* StaticStruct<FEffekseerMaterialElement>()
{
	return FEffekseerMaterialElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "EffekseerMaterialElement" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[] = {
		{ "Category", "EffekseerMaterialElement" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaBlend_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffekseerMaterialElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerMaterialElement, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffekseerMaterialElement, AlphaBlend), Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaBlend_MetaData), NewProp_AlphaBlend_MetaData) }; // 1220931236
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewProp_AlphaBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
	nullptr,
	&NewStructOps,
	"EffekseerMaterialElement",
	Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::PropPointers),
	sizeof(FEffekseerMaterialElement),
	alignof(FEffekseerMaterialElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffekseerMaterialElement()
{
	if (!Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.InnerSingleton, Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffekseerMaterialElement.InnerSingleton;
}
// End ScriptStruct FEffekseerMaterialElement

// Begin Class UEffekseerMaterial
void UEffekseerMaterial::StaticRegisterNativesUEffekseerMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEffekseerMaterial);
UClass* Z_Construct_UClass_UEffekseerMaterial_NoRegister()
{
	return UEffekseerMaterial::StaticClass();
}
struct Z_Construct_UClass_UEffekseerMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EffekseerMaterial.h" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialElements_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uniforms_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gradients_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformNameToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[] = {
		{ "Category", "EffekseerMaterial" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureNameToIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsEffectScaleRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/EffekseerMaterial.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialElements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uniforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Uniforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gradients_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gradients;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UniformNameToIndex_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniformNameToIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UniformNameToIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Textures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureNameToIndex_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureNameToIndex_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TextureNameToIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorSpaceMaterials_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpaceMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ColorSpaceMaterials;
	static void NewProp_IsEffectScaleRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEffectScaleRequired;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffekseerMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_Inner = { "MaterialElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffekseerMaterialElement, METADATA_PARAMS(0, nullptr) }; // 1687199635
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements = { "MaterialElements", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, MaterialElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialElements_MetaData), NewProp_MaterialElements_MetaData) }; // 1687199635
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_Inner = { "Uniforms", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffekseerUniformProperty, METADATA_PARAMS(0, nullptr) }; // 2657520410
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms = { "Uniforms", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, Uniforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uniforms_MetaData), NewProp_Uniforms_MetaData) }; // 2657520410
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_Inner = { "Gradients", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffekseerGradientProperty, METADATA_PARAMS(0, nullptr) }; // 2061632419
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients = { "Gradients", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, Gradients), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gradients_MetaData), NewProp_Gradients_MetaData) }; // 2061632419
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_ValueProp = { "UniformNameToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_Key_KeyProp = { "UniformNameToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex = { "UniformNameToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, UniformNameToIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformNameToIndex_MetaData), NewProp_UniformNameToIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEffekseerTextureProperty, METADATA_PARAMS(0, nullptr) }; // 2195798453
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Textures_MetaData), NewProp_Textures_MetaData) }; // 2195798453
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_ValueProp = { "TextureNameToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_Key_KeyProp = { "TextureNameToIndex_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex = { "TextureNameToIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, TextureNameToIndex), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureNameToIndex_MetaData), NewProp_TextureNameToIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_ValueProp = { "ColorSpaceMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp = { "ColorSpaceMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Effekseer_EEffekseerAlphaBlendType, METADATA_PARAMS(0, nullptr) }; // 1220931236
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials = { "ColorSpaceMaterials", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, ColorSpaceMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSpaceMaterials_MetaData), NewProp_ColorSpaceMaterials_MetaData) }; // 1220931236
void Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_SetBit(void* Obj)
{
	((UEffekseerMaterial*)Obj)->IsEffectScaleRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired = { "IsEffectScaleRequired", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEffekseerMaterial), &Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsEffectScaleRequired_MetaData), NewProp_IsEffectScaleRequired_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEffekseerMaterial, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_MaterialElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Uniforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Gradients,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_UniformNameToIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_Textures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_TextureNameToIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_ColorSpaceMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_IsEffectScaleRequired,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffekseerMaterial_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEffekseerMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Effekseer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams = {
	&UEffekseerMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UEffekseerMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEffekseerMaterial()
{
	if (!Z_Registration_Info_UClass_UEffekseerMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEffekseerMaterial.OuterSingleton, Z_Construct_UClass_UEffekseerMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEffekseerMaterial.OuterSingleton;
}
template<> EFFEKSEER_API UClass* StaticClass<UEffekseerMaterial>()
{
	return UEffekseerMaterial::StaticClass();
}
UEffekseerMaterial::UEffekseerMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEffekseerMaterial);
UEffekseerMaterial::~UEffekseerMaterial() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEffekseerMaterial)
// End Class UEffekseerMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffekseerTextureProperty::StaticStruct, Z_Construct_UScriptStruct_FEffekseerTextureProperty_Statics::NewStructOps, TEXT("EffekseerTextureProperty"), &Z_Registration_Info_UScriptStruct_EffekseerTextureProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffekseerTextureProperty), 2195798453U) },
		{ FEffekseerUniformProperty::StaticStruct, Z_Construct_UScriptStruct_FEffekseerUniformProperty_Statics::NewStructOps, TEXT("EffekseerUniformProperty"), &Z_Registration_Info_UScriptStruct_EffekseerUniformProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffekseerUniformProperty), 2657520410U) },
		{ FEffekseerGradientProperty::StaticStruct, Z_Construct_UScriptStruct_FEffekseerGradientProperty_Statics::NewStructOps, TEXT("EffekseerGradientProperty"), &Z_Registration_Info_UScriptStruct_EffekseerGradientProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffekseerGradientProperty), 2061632419U) },
		{ FEffekseerMaterialElement::StaticStruct, Z_Construct_UScriptStruct_FEffekseerMaterialElement_Statics::NewStructOps, TEXT("EffekseerMaterialElement"), &Z_Registration_Info_UScriptStruct_EffekseerMaterialElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffekseerMaterialElement), 1687199635U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEffekseerMaterial, UEffekseerMaterial::StaticClass, TEXT("UEffekseerMaterial"), &Z_Registration_Info_UClass_UEffekseerMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEffekseerMaterial), 1469841983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_2263045914(TEXT("/Script/Effekseer"),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerMaterial_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
