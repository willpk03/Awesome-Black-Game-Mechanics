﻿// articy Software GmbH & Co. KG
/** This code file was generated by ArticyImporter. Changes to this file will get lost once the code is regenerated. */

#pragma once

#include "CoreUObject.h"
#include "Fear_Of_A_Blak_PlanetInterfaces.generated.h"


/** UNINTERFACE generated from Articy Basic Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Fear_Of_A_Blak_Planet Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UFear_Of_A_Blak_PlanetObjectWithDefaultBasicCharacterFeatureFeature : public UInterface { GENERATED_BODY() };
class IFear_Of_A_Blak_PlanetObjectWithDefaultBasicCharacterFeatureFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UFear_Of_A_Blak_PlanetDefaultBasicCharacterFeatureFeature* GetFeatureDefaultBasicCharacterFeature() const
	{
		return nullptr;
	}
};

/** UNINTERFACE generated from Articy Extended Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Fear_Of_A_Blak_Planet Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UFear_Of_A_Blak_PlanetObjectWithDefaultExtendedCharacterFeatureFeature : public UInterface { GENERATED_BODY() };
class IFear_Of_A_Blak_PlanetObjectWithDefaultExtendedCharacterFeatureFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UFear_Of_A_Blak_PlanetDefaultExtendedCharacterFeatureFeature* GetFeatureDefaultExtendedCharacterFeature() const
	{
		return nullptr;
	}
};

/** UNINTERFACE generated from Articy Item Basics Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Fear_Of_A_Blak_Planet Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UFear_Of_A_Blak_PlanetObjectWithItemBasicsFeature : public UInterface { GENERATED_BODY() };
class IFear_Of_A_Blak_PlanetObjectWithItemBasicsFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UFear_Of_A_Blak_PlanetItemBasicsFeature* GetFeatureItemBasics() const
	{
		return nullptr;
	}
};
