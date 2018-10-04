// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GrapplingHookGameMode.h"
#include "GrapplingHookCharacter.h"
#include "GrapplingHook.h"
#include "EngineUtils.h"


AGrapplingHookGameMode::AGrapplingHookGameMode()
{
    // Set default pawn class to our character
    DefaultPawnClass = AGrapplingHookCharacter::StaticClass();	
}
