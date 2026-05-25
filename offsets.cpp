#pragma once
#include <Windows.h>


#define OFF_WORLD                       0x4263FE8
#define OFF_World_Instance              0x414A858


#define OFF_NEAR_ENTITY_TABLE           0xF48
#define OFF_NEAR_ENTITY_TABLE_SIZE      0xF50
#define OFF_FAR_ENTITY_TABLE            0x1090
#define OFF_FAR_ENTITY_TABLE_SIZE       0x1098
#define OFF_SLOW_ENTITY_TABLE           0x2010
#define OFF_SLOW_ENTITY_TABLE_SIZE      0x2018
#define OFF_SLOW_ENTRY_SIZE             0x18
#define OFF_SLOW_ENTRY_PTR              0x8
#define OFF_ITEM_TABLE                  0x2060
#define OFF_ITEM_TABLE_SIZE             0x2068
#define OFF_BULLET_TABLE                0xE00
#define OFF_BULLET_TABLE_SIZE           0xE08


#define OFF_grass                       0xC00
#define OFF_GrassOffline                0xBF0


#define OFF_LocalPlayer                 0x2960
#define OFF_LocalPlayerSub              0xA8
#define OFF_LocalPlayer1                0x2960
#define OFF_LocalPlayer2                0x8
#define OFF_LocalPlayer3                0x5C8
#define OFF_LocalPlayer4                0x28
#define OFF_playerIsDead                0xE2
#define OFF_playerNetworkID             0x6DC


#define OFF_PlayerName                  0xF8
#define OFF_RealName                    0x518
#define OFF_PlayerCleanName             0x518
#define OFF_CleanName                   0x518
#define OFF_CleanName2                  0x98
#define OFF_CleanName5                  0x78
#define OFF_EntityTypeName              0xD0
#define OFF_EntityTypeStr               0xD0
#define OFF_EntityTypePtr               0x180
#define OFF_Parent                      0x88
#define OFF_Owner                       0xA0
#define OFF_ModelName                   0x78
#define OFF_Quality                     0x194
#define OFF_Common_Path                 0xB0
#define OFF_Common_Direction            0x20


#define OFF_VisualState                 0x1C8
#define OFF_GetCoordinate               0x2C
#define OFF_VS_Velocity                 0x54
#define OFF_VS_WorldPos                 0x2C
#define OFF_MatrixClass                 0xBE8
#define OFF_Matrixb                     0x54
#define OFF_PlayerSkeleton              0x7E0
#define OFF_ZmSkeleton                  0x670
#define OFF_AnimClass                   0x118


#define OFF_Camera                      0x1B8
#define OFF_CameraOn                    0x2968
#define OFF_CameraForward               0x20
#define OFF_Camera_Right                0x8
#define OFF_Camera_Up                   0x14
#define OFF_Camera_Position             0x2C
#define OFF_Camera_VTable               0x0
#define OFF_Camera_StateFlags           0x1A8
#define OFF_Camera_UpdateInterval       0x1C0


#define OFF_CamFOV_ContextRVA           0x1008CE0
#define OFF_CamFOV_IndirectActive       0x88
#define OFF_CamFOV_DirectPtr            0x118
#define OFF_CamFOV_RootPtr              0x80
#define OFF_CamFOV_RootNested           0x10
#define OFF_CamFOV_VerticalTermA        0x4C
#define OFF_CamFOV_VerticalTermB        0x50
#define CAM_DEFAULT_VERT_FOV_PRODUCT    0.74176502f
#define OFF_FOV_BASE                    0x100A7D8


#define OFF_Network_Manager             0x100FBD0
#define OFF_NetworkManager              0x100FBD0
#define OFF_Network_Client              0x50
#define OFF_NetworkClient               0x50
#define OFF_Network_Table               0x18
#define OFF_Network_Table_Size          0x24
#define OFF_Network_Table_ID            0x30
#define OFF_Network_ID                  0x6DC
#define OFF_Network_ServerName          0x308
#define OFF_Network_GameVersion         0x350
#define OFF_Network_MapName             0x38
#define OFF_Network_IdentitySize        0x170
#define OFF_Network_SteamID             0xA0
#define OFF_Network_Ping                0x33C


#define OFF_scoreboardTable             0x18
#define OFF_PlayerCount                 0x24
#define OFF_CurrentId                   0x30


#define OFF_Inventory                   0x650
#define OFF_Inhands                     0x1B0
#define OFF_InventoryP                  0x150
#define OFF_InventoryPsize              0x15C
#define OFF_InventoryI                  0x148
#define OFF_InventoryI2                 0x38
#define OFF_InventoryIsize              0x44


#define OFF_Day                         0x2974
#define OFF_Hour                        0x2970
#define OFF_EyeAccom                    0x296C
#define OFF_Tickness                    0xF193C8
#define OFF_Tick                        0xFF4958
#define OFF_MissionHeader               0x28
#define OFF_ThirdPerson                 0x74
#define OFF_Crosshair                   0x78


#define OFF_DLC_MapManager              0x1008028
#define OFF_DLC_MapTable                0x18
#define OFF_DLC_MapTableSize            0x24
#define OFF_DLC_MapItemDLCTable         0xC
#define OFF_DLC_MapItemDLCSize          0x8
#define OFF_DLC_MapItemName             0x10
#define OFF_DLC_RefResolve              0x8
#define OFF_DLC_ItemName                0x8
#define OFF_DLC_ItemOwner               0xE


#define OFF_AMMOTYPE_INITSPEED          0x38C
#define OFF_AMMO_TYPE1                  0x6A8
#define OFF_AMMO_TYPE2                  0x20
#define OFF_AMMO_AirFriction            0x3B4
#define OFF_AMMO_Dispersion             0x3A4
#define OFF_AMMO_MagCount               0x6AC
#define OFF_AMMO_MagMax                 0x6A8
#define OFF_AMMO_CapacityA              0x6B0
#define OFF_AMMO_CapacityB              0x6B4


#define OFF_Magazine_CurrentAmmo        0x3B0
#define OFF_Magazine_MaxAmmo            0x3A4
#define OFF_Magazine_AmmoTypePtr        0x20


#define OFF_Weapon_ChamberedPtr         0x1B0


#define FREECAM_VTIDX_UPDATE            2
#define FREECAM_VTIDX_PRESERVE          6
#define CAMERA_FLAGS_DETACH_MASK        0x4C
#define CAMERA_FLAGS_MANUAL_BIT         0x02


#define OFF_TEXT                        0x10
#define OFF_LENGTH                      0x8
#define OFF_ObjectBase                  0x180
