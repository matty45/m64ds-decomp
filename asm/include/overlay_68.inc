#include <nitro/fs/overlay.h>
#pragma once
.public TextFlags_SetCanABSpeedUpPrint
.public sub_02002B8C
.public FontID_Alloc
.public FontID_Release
.public FontID_String_GetWidth
.public LoadFontPal0
.public LoadFontPal1
.public PlaySE
.public IsSEPlaying
.public GF_IsAnySEPlaying
.public PlayFanfare
.public IsFanfarePlaying
.public OverlayManager_New
.public OverlayManager_Delete
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public OverlayManager_Run
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_GetScrnDataFromOpenNarc
.public sub_02007FD4
.public sub_02008120
.public sub_02008524
.public sub_020085EC
.public sub_020087A4
.public sub_02009418
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public NewString_ReadMsgData
.public MessageFormat_New
.public MessageFormat_Delete
.public BufferPlayersName
.public BufferBoxMonSpeciesName
.public BufferBoxMonNickname
.public BufferIntegerAsString
.public BufferMoveName
.public StringExpandPlaceholders
.public SpriteRenderer_Create
.public SpriteRenderer_CreateGfxHandler
.public sub_0200CF70
.public sub_0200CFF4
.public sub_0200D020
.public thunk_OamManager_ApplyAndResetBuffers
.public SpriteRenderer_Delete
.public SpriteRenderer_Init2DGfxResManagersFromCountsArray
.public SpriteRenderer_LoadCharResObjFromOpenNarc
.public SpriteRenderer_LoadPlttResObjFromOpenNarc
.public SpriteRenderer_LoadCellResObjFromOpenNarc
.public SpriteRenderer_LoadAnimResObjFromOpenNarc
.public SpriteRenderer_LoadResourcesAndCreateSprite
.public SpriteRenderer_UnloadResourcesAndRemoveGfxHandler
.public sub_0200D9DC
.public UnkImageStruct_SetSpriteAnimSeqNo
.public UnkImageStruct_SetSpriteAnimActiveFlag
.public UnkImageStruct_ResetSpriteAnimCtrlState
.public UnkImageStruct_SetSpriteAnimCtrlCurrentFrame
.public UnkImageStruct_SetSpriteVisibleFlag
.public UnkImageStruct_SetSpritePalIndex
.public UnkImageStruct_SetSpritePositionXY
.public sub_0200E248
.public LoadUserFrameGfx2
.public DrawFrameAndWindow2
.public ClearFrameAndWindow2
.public IsPaletteFadeFinished
.public ListMenuItems_New
.public ListMenuItems_Delete
.public ListMenuItems_AppendFromMsgData
.public YesNoPrompt_Create
.public YesNoPrompt_Destroy
.public YesNoPrompt_InitFromTemplate
.public YesNoPrompt_HandleInput
.public YesNoPrompt_IsInTouchMode
.public YesNoPrompt_Reset
.public sub_020183F0
.public sub_02018410
.public sub_02019BA4
.public sub_02019BDC
.public sub_02019D18
.public sub_02019F74
.public sub_02019F7C
.public sub_02019FD0
.public sub_02019FF8
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public CreateHeap
.public DestroyHeap
.public FreeToHeap
.public FreeToHeapExplicit
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BG_ClearCharDataRange
.public CopyToBgTilemapRect
.public BgTilemapRectChangePalette
.public BgClearTilemapBufferAndCommit
.public AddWindow
.public RemoveWindow
.public ScheduleWindowCopyToVram
.public ClearWindowTilemapAndScheduleTransfer
.public FillWindowPixelBuffer
.public GetWindowWidth
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public TextPrinterCheckActive
.public AddTextPrinterParameterized
.public AddTextPrinterParameterizedWithColor
.public GF_CreateVramTransferManager
.public GF_DestroyVramTransferManager
.public GF_RunVramTransferTasks
.public GfGfx_SetBanks
.public GfGfx_DisableEngineAPlanes
.public GfGfx_EngineATogglePlanes
.public GfGfx_DisableEngineBPlanes
.public GfGfx_EngineBTogglePlanes
.public Camera_New
.public Camera_Delete
.public Camera_SetStaticPtr
.public Camera_PushLookAtToNNSGlb
.public Camera_ClearFixedTarget
.public Camera_SetPerspectiveClippingPlane
.public Camera_Init_FromPosDistanceAndAngle
.public System_GetTouchNew
.public String_New
.public String_Delete
.public Thunk_G3X_Reset
.public Options_GetTextFrameDelay
.public Options_GetFrame
.public GetMonData
.public GetBoxMonData
.public SetMonData
.public GetMonBaseStat_HandleAlternateForm
.public GetPokemonSpriteCharAndPlttNarcIds
.public Mon_GetBoxMon
.public GetMoveAttr
.public GetMoveMaxPP
.public sub_02077678
.public sub_0207769C
.public sub_020776B4
.public sub_020776B8
.public sub_020776EC
.public sub_0207775C
.public sub_02077800
.public sub_02077818
.public sub_02077830
.public sub_02077834
.public sub_020880CC
.public sub_0208820C
.public sub_02089D40
.public NNS_G2dSetupSoftwareSpriteCamera
.public NNS_G3dGlbFlushP
.public NNS_G3dInit
.public G2x_SetBlendBrightness_
.public G3X_Init
.public G3X_InitMtxStack
.public G3X_SetFog
.public G3X_SetClearColor
.public MI_CpuFill8
.public memset
.public _02103A1C
.public ov68_021E5900
.public ov68_021E5968
.public ov68_021E5A3C