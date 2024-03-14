#include <nitro/fs/overlay.h>
#pragma once
.public FontID_String_GetWidth
.public LoadFontPal1
.public FontID_String_GetWidthMultiline
.public BlendPalette
.public PlaySE
.public OverlayManager_CreateAndGetData
.public OverlayManager_GetData
.public OverlayManager_FreeData
.public OverlayManager_GetArgs
.public NARC_New
.public NARC_Delete
.public GfGfxLoader_LoadCharDataFromOpenNarc
.public GfGfxLoader_LoadScrnDataFromOpenNarc
.public GfGfxLoader_GXLoadPalFromOpenNarc
.public GfGfxLoader_GetScrnDataFromOpenNarc
.public GfGfxLoader_GetPlttDataFromOpenNarc
.public G2dRenderer_Init
.public G2dRenderer_SetSubSurfaceCoords
.public sub_02009FE8
.public sub_0200A080
.public Create2DGfxResObjMan
.public Destroy2DGfxResObjMan
.public OamManager_Create
.public OamManager_ApplyAndResetBuffers
.public OamManager_Free
.public NewMsgDataFromNarc
.public DestroyMsgData
.public ReadMsgDataIntoString
.public BeginNormalPaletteFade
.public IsPaletteFadeFinished
.public Main_SetVBlankIntrCB
.public HBlankInterruptDisable
.public CreateHeap
.public DestroyHeap
.public FreeToHeap
.public BgConfig_Alloc
.public SetBothScreensModesAndDisable
.public InitBgFromTemplate
.public FreeBgTilemapBuffer
.public BG_ClearCharDataRange
.public BG_LoadPlttData
.public CopyToBgTilemapRect
.public FillBgTilemapRect
.public BgTilemapRectChangePalette
.public BgClearTilemapBufferAndCommit
.public AddWindowParameterized
.public RemoveWindow
.public ScheduleWindowCopyToVram
.public FillWindowPixelBuffer
.public BlitBitmapRect
.public FillWindowPixelRect
.public DoScheduledBgGpuUpdates
.public ScheduleBgTilemapBufferTransfer
.public AddTextPrinterParameterized
.public AddTextPrinterParameterizedWithColor
.public GF_CreateVramTransferManager
.public GF_DestroyVramTransferManager
.public GF_CreateNewVramTransferTask
.public GF_RunVramTransferTasks
.public sub_020215C0
.public sub_0202168C
.public sub_020216C8
.public sub_02022588
.public sub_02022608
.public sub_02022638
.public GfGfx_SetBanks
.public GfGfx_EngineATogglePlanes
.public GfGfx_EngineBTogglePlanes
.public GfGfx_SwapDisplay
.public SpriteList_Delete
.public sub_0202457C
.public GF_AssertFail
.public String_New
.public String_Delete
.public String_Copy
.public String_GetLength
.public String_CountLines
.public String_GetLineN
.public sub_0203A880
.public NNS_G2dInitOamManagerModule
.public GX_LoadBGPltt
.public DC_FlushRange
.public memset
.public _s32_div_f
.public _u32_div_f
.public gSystem
.public ov45_0222A330
.public ov45_0222A4A8
.public ov45_0222A520
.public ov45_0222AB28
.public ov45_0222AB38
.public ov45_0222AD4C
.public ov45_0222D594
.public ov45_0222D844
.public ov45_0222DCE8
.public ov45_0222DCF4
.public ov45_0222DCFC
.public ov45_0222DD08
.public ov45_0222DD14
.public ov45_0222DD20
.public ov45_0222DD2C
.public ov45_0222DD38
.public ov45_0222DD44
.public ov45_0222DD5C
.public ov45_0222DD78
.public ov45_0222DDE4
.public ov88_02258800
.public ov88_022588C4
.public ov88_022589FC