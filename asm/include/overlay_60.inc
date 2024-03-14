#include <nitro/fs/overlay.h>
#pragma once
.public RegisterMainOverlay
.public FontID_String_GetWidth
.public PaletteData_Init
.public PaletteData_Free
.public PaletteData_AllocBuffers
.public PaletteData_FreeBuffers
.public PaletteData_LoadPaletteSlotFromHardware
.public PaletteData_PushTransparentBuffers
.public PaletteData_FadePalettesTowardsColorStep
.public sub_02004AD8
.public sub_02004EC4
.public GF_SetVolumeBySeqNo
.public StopBGM
.public GF_SndStartFadeOutBGM
.public GF_SndGetFadeTimer
.public PlayCry
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public AllocAndReadWholeNarcMemberByIdPair
.public NARC_New
.public NARC_Delete
.public NARC_AllocAndReadWholeMember
.public GfGfxLoader_LoadCharData
.public GfGfxLoader_LoadScrnData
.public GfGfxLoader_GXLoadPal
.public GfGfxLoader_GetScrnData
.public CreateSpriteResourcesHeader
.public G2dRenderer_Init
.public G2dRenderer_SetMainSurfaceCoords
.public G2dRenderer_SetSubSurfaceCoords
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public AddCharResObjFromNarc
.public AddPlttResObjFromNarc
.public AddCellOrAnimResObjFromNarc
.public sub_0200ACF0
.public sub_0200AEB0
.public sub_0200AF94
.public sub_0200B0A8
.public OamManager_Create
.public OamManager_ApplyAndResetBuffers
.public OamManager_Free
.public SetBlendBrightness
.public ScreenBrightnessData_InitAll
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public SysTask_CreateOnMainQueue
.public SysTask_CreateOnVBlankQueue
.public SysTask_Destroy
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_0200FB70
.public SetMasterBrightnessNeutral
.public sub_0200FBF4
.public sub_02014DA0
.public sub_02014DB4
.public sub_02014EBC
.public sub_02015264
.public sub_0201526C
.public sub_02015354
.public sub_02015394
.public sub_0201543C
.public sub_02015460
.public sub_02015494
.public sub_020154B0
.public sub_02015524
.public sub_02015528
.public Main_SetVBlankIntrCB
.public Main_SetHBlankIntrCB
.public SetKeyRepeatTimers
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public FreeToHeap
.public GF_ExpHeap_FndInitAllocator
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BgSetPosTextAndCommit
.public Bg_GetXpos
.public Bg_GetYpos
.public BgCopyOrUncompressTilemapBufferRangeToVram
.public BG_LoadScreenTilemapData
.public BG_ClearCharDataRange
.public BG_LoadPlttData
.public BG_SetMaskColor
.public BgClearTilemapBufferAndCommit
.public AddWindow
.public RemoveWindow
.public FillWindowPixelRect
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public ScheduleSetBgPosText
.public GF3dRender_InitObjFromHeader
.public GF3dRender_DrawModel
.public GetLCRNGSeed
.public SetLCRNGSeed
.public AddTextPrinterParameterizedWithColorAndSpacing
.public sub_02020D2C
.public sub_020215A0
.public sub_0202168C
.public sub_020216C8
.public sub_02022588
.public sub_02022608
.public sub_02022638
.public GfGfx_SetBanks
.public GfGfx_DisableEngineAPlanes
.public GfGfx_EngineATogglePlanes
.public GfGfx_DisableEngineBPlanes
.public GfGfx_EngineBTogglePlanes
.public GfGfx_BothDispOn
.public GfGfx_SwapDisplay
.public Camera_New
.public Camera_Delete
.public Camera_SetStaticPtr
.public Camera_UnsetStaticPtr
.public Camera_PushLookAtToNNSGlb
.public Camera_SetPerspectiveClippingPlane
.public Camera_Init_FromTargetDistanceAndAngle
.public Camera_Init_FromTargetAndPos
.public Camera_ApplyPerspectiveType
.public Camera_SetPerspectiveAngle
.public Camera_SetLookAtCamTarget
.public Camera_SetLookAtCamPos
.public SpriteList_Delete
.public sub_0202457C
.public CreateSprite
.public Sprite_Delete
.public Sprite_SetMatrix
.public Set2dSpriteVisibleFlag
.public Set2dSpriteAnimActiveFlag
.public sub_0202487C
.public Sprite_GetMatrixPtr
.public Set2dSpriteAnimSeqNo
.public Sprite_IsCellAnimationFinished
.public GF_AssertFail
.public String_New
.public String_Delete
.public Thunk_G3X_Reset
.public sub_02026E50
.public GF_3DVramMan_Create
.public GF_3DVramMan_Delete
.public NNS_G2dInitOamManagerModule
.public NNS_G3dAnmObjInit
.public NNS_G3dRenderObjAddAnmObj
.public NNS_G3dGlbLightVector
.public NNS_G3dGlbLightColor
.public NNS_G3dGlbMaterialColorDiffAmb
.public NNS_G3dGlbMaterialColorSpecEmi
.public NNS_G3dGlbPolygonAttr
.public NNS_G3dAllocAnmObj
.public NNS_G3dFreeAnmObj
.public NNSi_G3dModifyMatFlag
.public NNSi_G3dModifyPolygonAttrMask
.public NNS_G3dGetTex
.public NNS_G3dGetAnmByIdx
.public VEC_Subtract
.public VEC_Normalize
.public G2x_SetBlendAlpha_
.public G3X_SetFog
.public G3X_SetEdgeColorTable
.public G3X_SetClearColor
.public OS_WaitIrq
.public memset
.public _s32_div_f
.public gGameVersion
.public gApplication_DeleteSave
.public gApplication_MainMenu
.public FX_SinCosTable_
.public NNS_GfdDefaultFuncAllocTexVram
.public NNS_GfdDefaultFuncAllocPlttVram
.public gSystem
.public gApplication_TitleScreen
.public gApplication_IntroMovie
.public gApplication_MicTest