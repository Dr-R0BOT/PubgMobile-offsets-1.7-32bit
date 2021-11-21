#pragma once

#include "Includes.h"

namespace Offset
{   
	const DWORD GWorld = 0x5c3df77c; //viewWorldBase - 4832052;
	const DWORD GName = 0x5C69EE04 + 0x14C;//viewWorldBase - 1950892;
	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x60;
	const DWORD PlayerController = 0x20;
	const DWORD AcknowledgedPawn = 0x330;
	const DWORD EntityList = 0x70;
	const DWORD EntityCount = 0x78;
	const DWORD RootComponent = 150;
	const DWORD CurrentStates = 0xa90;
	const DWORD TeamId = 0x670;
	const DWORD PoseState = 0xea0;
	const DWORD IsBot = 0x6e8;
	const DWORD Name = 0x648;
	const DWORD Health = 0x93c;
	const DWORD HealthMax = 0x940;
	const DWORD VehicleCommon = 0x6a0;
	const DWORD CarHP = 0x1b4;
	const DWORD CarHPMax = 0x1b0;
	const DWORD CarFuelMax = 0x1c8;
	const DWORD CharacterMovement = 0x324;
	const DWORD LastUpdateVelocity = 0x260;
	const DWORD Velocity = 0x1b0;
	const DWORD CurrentLevelPendingVisibility = 0x6c;
	const DOWRD CurrentLevelPendingInvisibility = 0x70;
	const DWORD RelativeLocation = 0x12c;
	const DWORD RelativeRotation = 0x124;
	const DWORD Position = 0x160;
	const DWORD bDead = 0x978;
	const DWORD Nation = 0x654;
	const DWORD Mesh = 0x320;
	const DWORD BodyAddv = 0x150;
	const DWORD MinLOD = 0x5B0;
	const DWORD PlayerCameraManager = 0x340;
	const DWORD CameraCache = 0x350;
	const DWORD POV = 0x10;
	const DWORD Location = 0x0;
	const DWORD Rotation = 0x18;
	const DWORD FOV = 0x24;

	
	const DWORD CurrentReloadWeapon = 0x1740;
	const DWORD ShootWeaponEntity = 0xa80;
	const DWORD BulletFireSpeed = 0x3d4;

	
	const DWORD AccessoriesVRecoilFactor = 0x784;
	const DWORD AccessoriesHRecoilFactor = 0x788;
	const DWORD AccessoriesRecoveryFactor = 0x78c;
}
