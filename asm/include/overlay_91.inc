#include <nitro/fs/overlay.h>
#pragma once
.public FontID_String_GetWidth
.public LoadFontPal1
.public GF_SndHandleSetTempoRatio
.public PlaySE
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadFromNarc_GetSizeOut
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GXLoadPalFromOpenNarc
.public CreateSpriteResourcesHeader
.public G2dRenderer_Init
.public G2dRenderer_SetSubSurfaceCoords
.public sub_02009FE8
.public sub_0200A080
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public AddPlttResObjFromNarc
.public AddCharResObjFromOpenNarc
.public AddPlttResObjFromOpenNarc
.public AddCellOrAnimResObjFromOpenNarc
.public sub_0200A740
.public DestroySingle2DGfxResObj
.public sub_0200AE18
.public sub_0200AEB0
.public sub_0200B00C
.public sub_0200B0A8
.public sub_0200B0F8
.public OamManager_Create
.public OamManager_ApplyAndResetBuffers
.public OamManager_Free
.public StartBrightnessTransition
.public IsBrightnessTransitionActive
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public MessageFormat_New
.public MessageFormat_Delete
.public LoadUserFrameGfx1
.public DrawFrameAndWindow1
.public sub_0200E5D4
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public sub_0200FB70
.public sub_0200FC20
.public sub_02013534
.public sub_020135AC
.public sub_02013728
.public sub_020137C0
.public sub_02013910
.public sub_02013938
.public sub_02013948
.public sub_02013950
.public sub_020139C8
.public sub_020139D0
.public sub_02018030
.public sub_02018068
.public sub_020180BC
.public sub_020180F8
.public sub_02018124
.public sub_0201815C
.public sub_02018198
.public sub_020181B0
.public sub_020181D4
.public sub_020181E0
.public sub_020181EC
.public sub_020182A0
.public sub_020182A4
.public sub_020182A8
.public sub_020182C4
.public sub_020182E0
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public CreateHeap
.public DestroyHeap
.public AllocFromHeap
.public FreeToHeap
.public GF_ExpHeap_FndInitAllocator
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public SetBgPriority
.public BgCommitTilemapBufferToVram
.public BG_ClearCharDataRange
.public BgTilemapRectChangePalette
.public BgClearTilemapBufferAndCommit
.public InitWindow
.public AddWindowParameterized
.public AddTextWindowTopLeftCorner
.public RemoveWindow
.public ClearWindowTilemapAndScheduleTransfer
.public FillWindowPixelBuffer
.public FillWindowPixelRect
.public SetWindowX
.public SetWindowY
.public DoScheduledBgGpuUpdates
.public GF_SinDegNoWrap
.public GF_CosDegNoWrap
.public GF_DegreeToSinCosIdxNoWrap
.public GF_DegreeToSinCosIdx
.public MTRandom
.public AddTextPrinterParameterizedWithColor
.public GF_CreateVramTransferManager
.public GF_DestroyVramTransferManager
.public GF_RunVramTransferTasks
.public sub_020210D8
.public sub_02021238
.public sub_02021280
.public sub_020215C0
.public sub_0202168C
.public sub_020216C8
.public sub_02021AC8
.public sub_02021B5C
.public sub_02022588
.public sub_02022608
.public sub_02022638
.public GfGfx_SetBanks
.public GfGfx_EngineATogglePlanes
.public GfGfx_EngineBTogglePlanes
.public Camera_New
.public Camera_Delete
.public Camera_SetStaticPtr
.public Camera_PushLookAtToNNSGlb
.public Camera_SetLookAtCamUp
.public Camera_SetPerspectiveClippingPlane
.public Camera_Init_FromTargetDistanceAndAngle
.public Camera_SetAnglePos
.public Camera_GetAngle
.public SpriteList_Delete
.public sub_0202457C
.public CreateSprite
.public sub_02024714
.public Sprite_Delete
.public Sprite_SetMatrix
.public sub_020247F4
.public Set2dSpriteVisibleFlag
.public Set2dSpriteAnimActiveFlag
.public sub_02024868
.public sub_0202487C
.public Get2dSpriteVisibleFlag
.public Set2dSpriteAnimSeqNo
.public Sprite_TickCellOrMulticellAnimation
.public Sprite_SetAnimCtrlCurrentFrame
.public Sprite_GetAnimCtrlCurrentFrame
.public Sprite_SetPalIndex
.public Sprite_SetDrawPriority
.public Sprite_GetDrawPriority
.public GF_AssertFail
.public String_New
.public String_Delete
.public String16_FormatInteger
.public Thunk_G3X_Reset
.public sub_02026E50
.public GF_3DVramMan_Create
.public GF_3DVramMan_Delete
.public PlayerName_FlatToString
.public sub_0203410C
.public sub_020347A0
.public sub_02037030
.public sub_02037454
.public sub_0203769C
.public sub_02037AC0
.public sub_02037B38
.public sub_020398D4
.public sub_0203A880
.public NNS_G2dInitOamManagerModule
.public NNS_G3dAnmObjEnableID
.public NNS_G3dAnmObjDisableID
.public NNS_G3dGlbLightVector
.public NNS_G3dGlbLightColor
.public NNS_G3dGlbMaterialColorDiffAmb
.public NNS_G3dGlbMaterialColorSpecEmi
.public NNS_G3dGlbPolygonAttr
.public NNS_G3dGeBufferOP_N
.public NNSi_G3dModifyPolygonAttrMask
.public NNS_G3dMdlSetMdlAmbAll
.public NNS_G3dGetResDictIdxByName
.public MTX_Identity33_
.public MTX_RotX33_
.public MTX_RotY33_
.public MTX_Inverse33
.public MTX_Concat33
.public MTX_MultVec33
.public FX_Div
.public FX_Sqrt
.public VEC_Add
.public VEC_Subtract
.public VEC_Mag
.public VEC_Normalize
.public FX_Atan2Idx
.public G2x_SetBlendAlpha_
.public G3X_SetFog
.public G3X_SetClearColor
.public memset
.public _ll_mul
.public _s32_div_f
.public _u32_div_f
.public FX_SinCosTable_
.public gSystem
.public ov00_021E69A8
.public ov00_021E6A4C
.public ov90_02258800
.public ov90_0225886C
.public ov90_022588A4
.public ov90_022588CC
.public ov90_02258914
.public ov90_02258938
.public ov90_022589BC
.public ov90_022589CC
.public ov90_022589E0
.public ov90_02258A04
.public ov90_02258AA0
.public ov90_02258AA4
.public ov90_02258AA8
.public ov90_02258B54
.public ov90_02258B98
.public ov90_02258BD4
.public ov90_02258C38
.public ov90_02258C8C
.public ov90_02258CB0
.public ov90_02258CE0
.public ov91_0225C540
.public ov91_0225C58C
.public ov91_0225C9EC