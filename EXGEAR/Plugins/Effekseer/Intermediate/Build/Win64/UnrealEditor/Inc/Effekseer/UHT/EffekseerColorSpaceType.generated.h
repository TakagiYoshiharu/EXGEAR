// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EffekseerColorSpaceType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EFFEKSEER_EffekseerColorSpaceType_generated_h
#error "EffekseerColorSpaceType.generated.h already included, missing '#pragma once' in EffekseerColorSpaceType.h"
#endif
#define EFFEKSEER_EffekseerColorSpaceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_01254011_Documents_Git_EXGEAR_EXGEAR_Plugins_Effekseer_Source_Effekseer_Public_EffekseerColorSpaceType_h


#define FOREACH_ENUM_EEFFEKSEERCOLORSPACETYPE(op) \
	op(EEffekseerColorSpaceType::Gamma) \
	op(EEffekseerColorSpaceType::Linear) 

enum class EEffekseerColorSpaceType : uint8;
template<> struct TIsUEnumClass<EEffekseerColorSpaceType> { enum { Value = true }; };
template<> EFFEKSEER_API UEnum* StaticEnum<EEffekseerColorSpaceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
