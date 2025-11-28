// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoxMan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBoxMan() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ABoxMan();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ABoxMan_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABoxMan ******************************************************************
void ABoxMan::StaticRegisterNativesABoxMan()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABoxMan;
UClass* ABoxMan::GetPrivateStaticClass()
{
	using TClass = ABoxMan;
	if (!Z_Registration_Info_UClass_ABoxMan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BoxMan"),
			Z_Registration_Info_UClass_ABoxMan.InnerSingleton,
			StaticRegisterNativesABoxMan,
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
	return Z_Registration_Info_UClass_ABoxMan.InnerSingleton;
}
UClass* Z_Construct_UClass_ABoxMan_NoRegister()
{
	return ABoxMan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABoxMan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BoxMan.h" },
		{ "ModuleRelativePath", "Public/BoxMan.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxMan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABoxMan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxMan_Statics::ClassParams = {
	&ABoxMan::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxMan_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoxMan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoxMan()
{
	if (!Z_Registration_Info_UClass_ABoxMan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxMan.OuterSingleton, Z_Construct_UClass_ABoxMan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoxMan.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxMan);
ABoxMan::~ABoxMan() {}
// ********** End Class ABoxMan ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Sav_Documents_Unreal_Projects_Udemy_Courses_ObstacleAssault_Source_ObstacleAssault_Public_BoxMan_h__Script_ObstacleAssault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoxMan, ABoxMan::StaticClass, TEXT("ABoxMan"), &Z_Registration_Info_UClass_ABoxMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxMan), 2831566779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Sav_Documents_Unreal_Projects_Udemy_Courses_ObstacleAssault_Source_ObstacleAssault_Public_BoxMan_h__Script_ObstacleAssault_2470343746(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_Users_Sav_Documents_Unreal_Projects_Udemy_Courses_ObstacleAssault_Source_ObstacleAssault_Public_BoxMan_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Sav_Documents_Unreal_Projects_Udemy_Courses_ObstacleAssault_Source_ObstacleAssault_Public_BoxMan_h__Script_ObstacleAssault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
