#include <nitro/fs/overlay.h>
#pragma once
.public FontID_Alloc
.public FontID_Release
.public FontID_String_GetWidth
.public FontID_String_GetWidthMultiline
.public PaletteData_Init
.public PaletteData_Free
.public PaletteData_AllocBuffers
.public PaletteData_FreeBuffers
.public PaletteData_LoadNarc
.public PaletteData_LoadOpenNarc
.public PaletteData_LoadPaletteSlotFromHardware
.public PaletteData_BeginPaletteFade
.public PaletteData_PushTransparentBuffers
.public PaletteData_GetSelectedBuffersBitmask
.public PaletteData_SetAutoTransparent
.public ZeroPalettesByBitmask
.public PaletteData_FillPaletteInBuffer
.public sub_02004B10
.public sub_02004EC4
.public GF_SndHandleSetPlayerVolume
.public PlaySE
.public PlayCry
.public IsCryFinished
.public PlayCryEx
.public sub_02006E3C
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_GXLoadPal
.public GfGfxLoader_GetCharData
.public GfGfxLoader_LoadFromNarc_GetSizeOut
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GetCharDataFromOpenNarc
.public GfGfxLoader_GetScrnDataFromOpenNarc
.public GfGfxLoader_LoadFromOpenNarc
.public sub_020085EC
.public sub_020090B4
.public sub_02009138
.public CreateSpriteResourcesHeader
.public G2dRenderer_Init
.public G2dRenderer_SetSubSurfaceCoords
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public AddCharResObjFromOpenNarc
.public AddPlttResObjFromOpenNarc
.public AddCellOrAnimResObjFromOpenNarc
.public sub_0200A740
.public DestroySingle2DGfxResObj
.public sub_0200A7FC
.public sub_0200ADA4
.public sub_0200AEB0
.public sub_0200B00C
.public sub_0200B0A8
.public sub_0200B12C
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public NewString_ReadMsgData
.public GetSpeciesName
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferString
.public BufferIntegerAsString
.public BufferLandmarkName
.public StringExpandPlaceholders
.public MessagePrinter_New
.public MessagePrinter_Delete
.public PrintUIntOnWindow
.public SpriteRenderer_Create
.public SpriteRenderer_CreateGfxHandler
.public SpriteRenderer_GetG2dRendererPtr
.public sub_0200CF70
.public sub_0200CFF4
.public sub_0200D020
.public thunk_OamManager_ApplyAndResetBuffers
.public SpriteRenderer_Delete
.public SpriteRenderer_Init2DGfxResManagersFromCountsArray
.public SpriteRenderer_LoadCharResObjFromNarcId
.public SpriteRenderer_LoadCharResObjFromOpenNarc
.public sub_0200D644
.public sub_0200D68C
.public SpriteRenderer_LoadCellResObjFromNarcId
.public SpriteRenderer_LoadCellResObjFromOpenNarc
.public SpriteRenderer_LoadAnimResObjFromNarcId
.public SpriteRenderer_LoadAnimResObjFromOpenNarc
.public SpriteRenderer_LoadResourcesAndCreateSprite
.public SpriteRenderer_LoadResourcesAndCreateSprite_CustomBottomScreenOffset
.public sub_0200D944
.public SpriteGfxHandler_UnloadCharObjById
.public SpriteGfxHandler_UnloadPlttObjById
.public SpriteGfxHandler_UnloadCellObjById
.public SpriteGfxHandler_UnloadAnimObjById
.public SpriteRenderer_UnloadResourcesAndRemoveGfxHandler
.public sub_0200D9DC
.public UnkImageStruct_TickSpriteAnimation1Frame
.public UnkImageStruct_SetSpriteAnimSeqNo
.public UnkImageStruct_GetSpriteCurrentAnimSeqNo
.public sub_0200DCA0
.public UnkImageStruct_SetSpriteAnimCtrlCurrentFrame
.public UnkImageStruct_SetSpriteVisibleFlag
.public UnkImageStruct_GetSpriteVisibleFlag
.public UnkImageStruct_SetSpritePalIndex
.public UnkImageStruct_SetSpritePriority
.public UnkImageStruct_SetSpritePositionXY
.public UnkImageStruct_SetSpritePositionXY_CustomScreenYOffset
.public UnkImageStruct_GetSpritePositionXY
.public UnkImageStruct_GetSpritePositionXY_CustomScreenYOffset
.public sub_0200DF98
.public sub_0200E024
.public sub_0200E074
.public sub_0200E098
.public sub_0200E0AC
.public sub_0200E0CC
.public sub_0200E0FC
.public SysTask_CreateOnMainQueue
.public SysTask_Destroy
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_02014510
.public sub_020183F0
.public sub_02018410
.public sub_0201956C
.public sub_020195C0
.public sub_020195F4
.public sub_02019668
.public sub_020196B8
.public sub_020196E8
.public sub_0201980C
.public sub_020198FC
.public sub_02019934
.public sub_020199E4
.public sub_020199F4
.public sub_02019A60
.public sub_02019B08
.public sub_02019B1C
.public sub_02019B44
.public sub_02019B70
.public sub_02019BA4
.public sub_02019BDC
.public sub_02019D18
.public sub_02019F74
.public sub_02019F7C
.public sub_02019F88
.public sub_02019FD0
.public sub_0201A018
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public SetKeyRepeatTimers
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public AllocFromHeapAtEnd
.public FreeToHeap
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public SetScreenModeAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public SetBgPriority
.public Bg_GetXpos
.public Bg_SetTextDimAndAffineParams
.public BG_LoadScreenTilemapData
.public BG_LoadCharTilesData
.public BG_ClearCharDataRange
.public LoadRectToBgTilemapRect
.public FillBgTilemapRect
.public BgTilemapRectChangePalette
.public Convert4bppTo8bpp
.public GetBgTilemapBuffer
.public GetBgHOffset
.public AddWindow
.public RemoveWindow
.public ScheduleWindowCopyToVram
.public CopyWindowPixelsToVram_TextMode
.public ClearWindowTilemapAndScheduleTransfer
.public FillWindowPixelBuffer
.public BlitBitmapRect
.public GetWindowWidth
.public GetWindowHeight
.public GetWindowX
.public GetWindowY
.public GetWindowBaseTile
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public ScheduleSetBgPosText
.public AddTextPrinterParameterizedWithColor
.public sub_02020A0C
.public sub_020210BC
.public sub_02021148
.public sub_02021238
.public sub_020215C0
.public sub_0202168C
.public GfGfx_SetBanks
.public GfGfx_EngineATogglePlanes
.public GfGfx_EngineASetPlanes
.public GfGfx_EngineBTogglePlanes
.public GfGfx_EngineBSetPlanes
.public SpriteList_Delete
.public sub_0202457C
.public sub_02024714
.public Sprite_Delete
.public Set2dSpriteVisibleFlag
.public sub_02024A48
.public sub_02024B1C
.public sub_02024B34
.public sub_02024BBC
.public TouchscreenHitbox_FindRectAtTouchHeld
.public TouchscreenHitbox_FindRectAtTouchNew
.public TouchscreenHitbox_FindHitboxAtTouchNew
.public System_GetTouchHeld
.public System_GetTouchNew
.public System_GetTouchHeldCoords
.public System_GetTouchNewCoords
.public GF_AssertFail
.public String_New
.public String_Delete
.public PlayerProfile_GetPlayerName_NewString
.public PlayerProfile_GetTrainerGender
.public Pokedex_CheckMonCaughtFlag
.public Pokedex_CheckMonSeenFlag
.public Pokedex_GetSeenSpindaPersonality
.public Pokedex_SpeciesGetLastSeenGender
.public Pokedex_GetNatDexFlag
.public Pokedex_HasCaughtMonWithLanguage
.public Pokedex_GetInternationalViewFlag
.public Pokedex_GetSeenFormByIdx
.public Pokedex_GetSeenFormNum
.public MapHeader_GetMapSec
.public AcquireMonLock
.public ReleaseMonLock
.public GetMonData
.public GetMonBaseStat_HandleAlternateForm
.public GetPokemonSpriteCharAndPlttNarcIds
.public GetMonSpriteCharAndPlttNarcIdsEx
.public sub_020708D8
.public GetBattleMonIconNaixEx
.public GetBattleMonIconPaletteEx
.public sub_02074490
.public sub_0207449C
.public sub_020744A8
.public Pokedex_ConvertToCurrentDexNo
.public sub_020880CC
.public LanguageToDexFlag
.public sub_02091294
.public sub_020912AC
.public sub_020912D0
.public SetDexBanksByGiratinaForm
.public GetPokedexDataNarcID
.public GetDexWeightMsgBank
.public GetDexHeightMsgBank
.public sub_02092BD8
.public sub_02092BE0
.public sub_02092BE4
.public NNS_G2dGetImageLocation
.public NNS_G2dGetImagePaletteLocation
.public FX_Div
.public FX_Inv
.public G2x_SetBlendAlpha_
.public GX_LoadOBJ
.public GXS_LoadOBJ
.public DC_FlushRange
.public MIi_CpuCopy16
.public MIi_CpuClear32
.public MIi_CpuClearFast
.public MI_CpuFill8
.public FS_LoadOverlay
.public FS_UnloadOverlay
.public memcpy
.public memset
.public _fadd
.public _fgr
.public _fdiv
.public _ffix
.public _fflt
.public _fmul
.public _fsub
.public _s32_div_f
.public _u32_div_f
.public FX_SinCosTable_
.public gSystem
.public ov18_021E5AA0
.public ov18_021E5B64
.public ov18_021E5B80
.public ov18_021F8974
.public ov18_021F89C8
.public ov18_021F89D0
.public ov18_021F95AC
.public ov18_021F95F8
.public ov123_0225F430
.public ov123_0225F520
.public ov123_0225F688