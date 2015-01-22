

#pragma once

#include "Engine.h"
#include "Slate.h"
#include "../Classes/AmethystEngine.h"
#include "../Classes/AmethystGameInstance.h"
#include "../Classes/AmethystGameUserSettings.h"
#include "../Classes/AmethystGameViewportClient.h"
#include "../Classes/Player/AmethystCharacter.h"
#include "../Classes/Weapon/AmethystWeapon.h"
#include "../Classes/UI/AmethystHUD.h"
#include "ParticleDefinitions.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "SoundDefinitions.h"
#include "Net/UnrealNetwork.h"

DECLARE_LOG_CATEGORY_EXTERN(LogAmethyst, Log, All);
DECLARE_LOG_CATEGORY_EXTERN(LogAmethystWeapon, Log, All);

#define COLLISION_WEAPON		ECC_GameTraceChannel1
#define COLLISION_PROJECTILE	ECC_GameTraceChannel2
#define COLLISION_PIKCUP		ECC_GameTraceChannel