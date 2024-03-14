#ifndef POKEHEARTGOLD_UNK_0200A090_H
#define POKEHEARTGOLD_UNK_0200A090_H

#include "filesystem.h"
#include "gf_3d_loader.h"

struct CharResExtraData {
    NNSG2dCharacterData *charData;
    int vram;
};

struct PlttResExtraData {
    NNSG2dPaletteData  *plttData;
    int vram;
    int pltt_num;
};

struct CellResExtraData {
    NNSG2dCellDataBank *cellDataBank;
};

struct AnimResExtraData {
    NNSG2dAnimBankData *animBankData;
};

struct MulticellResExtraData {
    NNSG2dMultiCellDataBank *multiCellDataBank;
};

struct MultianimResExtraData {
    NNSG2dAnimBankData *animBankData;
};

typedef enum GF_GraphicsResourceType {
    GF_GFX_RES_TYPE_CHAR = 0,
    GF_GFX_RES_TYPE_PLTT = 1,
    GF_GFX_RES_TYPE_CELL = 2,
    GF_GFX_RES_TYPE_ANIM = 3,
    GF_GFX_RES_TYPE_MCEL = 4,
    GF_GFX_RES_TYPE_MANM = 5,
    GF_GFX_RES_TYPE_MAX  = 6,
} GfGfxResType;

typedef struct GF_2DGfxResObj {
    GF_2DGfxRawResObj *resource;
    GfGfxResType type;
    void *extra;
} GF_2DGfxResObj;

typedef struct GF_2DGfxResMan {
    GF_2DGfxRawResMan *resourceMgr;
    GF_2DGfxResObj *objects;
    int max;
    int num;
    GfGfxResType type;
} GF_2DGfxResMan;

typedef struct GF_2DGfxResHeaderFile {
    int id;
    char filename[0x40];
    int extra[2];
} GF_2DGfxResHeaderFile;

typedef struct GF_2DGfxResHeaderNarc {
    int narcId;
    int fileId;
    BOOL compressed;
    int id;
    int extra[2];
} GF_2DGfxResHeaderNarc;

typedef struct GF_2DGfxResHeaderNarcList {
    GfGfxResType type;
    GF_2DGfxResHeaderNarc internal[];  // arbitrary length
} GF_2DGfxResHeaderNarcList;

typedef struct GF_2DGfxResHeader {
    void *table;
    int num;
    GfGfxResType type;
    u8 isNarc;
} GF_2DGfxResHeader;

typedef struct GF_2DGfxResObjList {
    GF_2DGfxResObj **obj;
    int max;
    int num;
} GF_2DGfxResObjList;

GF_2DGfxResMan *Create2DGfxResObjMan(int num, GfGfxResType type, HeapID heapId);
void Destroy2DGfxResObjMan(GF_2DGfxResMan *mgr);
GF_2DGfxResObj *Add2DGfxResObjFromHeader(GF_2DGfxResMan *mgr, const GF_2DGfxResHeader *header, int idx, HeapID heapId);
GF_2DGfxResObj *AddCharResObjFromNarc(GF_2DGfxResMan *mgr, NarcId narcId, int fileId, BOOL compressed, int id, int vram, HeapID heapId);
GF_2DGfxResObj *AddPlttResObjFromNarc(GF_2DGfxResMan *mgr, NarcId narcId, int fileId, BOOL compressed, int id, int vram, int pltt_num, HeapID heapId);
GF_2DGfxResObj *AddCellOrAnimResObjFromNarc(GF_2DGfxResMan *mgr, NarcId narcId, int fileId, BOOL compressed, int id, GfGfxResType type, HeapID heapId);
void ReplaceCharResObjFromNarc(GF_2DGfxResMan *mgr, GF_2DGfxResObj *obj, NarcId narcId, int fileId, BOOL compressed, HeapID heapId);
void ReplacePlttResObjFromNarc(GF_2DGfxResMan *mgr, GF_2DGfxResObj *obj, NarcId narcId, int fileId, BOOL compressed, HeapID heapId);
GF_2DGfxResObj *AddCharResObjFromOpenNarc(GF_2DGfxResMan *mgr, NARC *narc, int fileId, BOOL compressed, int id, int vram, HeapID heapId);
GF_2DGfxResObj *AddCharResObjFromOpenNarcWithAtEndFlag(GF_2DGfxResMan *mgr, NARC *narc, int fileId, BOOL compressed, int id, int vram, HeapID heapId, BOOL atEnd);
GF_2DGfxResObj *AddPlttResObjFromOpenNarc(GF_2DGfxResMan *mgr, NARC *narc, int fileId, BOOL compressed, int id, int vram, int pltt_num, HeapID heapId);
GF_2DGfxResObj *AddPlttResObjFromOpenNarcWithAtEndFlag(GF_2DGfxResMan *mgr, NARC *narc, int fileId, BOOL compressed, int id, int vram, int pltt_num, HeapID heapId, BOOL atEnd);
GF_2DGfxResObj *AddCellOrAnimResObjFromOpenNarc(GF_2DGfxResMan *resMan, NARC *narc, int fileId, BOOL compressed, int id, GfGfxResType type, HeapID heapId);
void ReplaceCharResObjFromOpenNarc(GF_2DGfxResMan *mgr, GF_2DGfxResObj *obj, NARC *narc, int fileId, BOOL compressed, HeapID heapId);
void ReplacePlttResObjFromOpenNarc(GF_2DGfxResMan *mgr, GF_2DGfxResObj *obj, NARC *narc, int fileId, BOOL compressed, HeapID heapId);
int LoadAll2DGfxResObjsFromHeader(GF_2DGfxResMan *mgr, const GF_2DGfxResHeader *header, GF_2DGfxResObjList *list, HeapID heapId);
GF_2DGfxResObjList *Create2DGfxResObjList(int num, HeapID heapId);
void Delete2DGfxResObjList(GF_2DGfxResObjList *list);
BOOL GF2DGfxResObjExistsById(GF_2DGfxResMan *mgr, int a1);
void sub_0200A740(GF_2DGfxResObj *obj);
void DestroySingle2DGfxResObj(GF_2DGfxResMan *a0, GF_2DGfxResObj *a1);
GF_2DGfxResObj *Get2DGfxResObjById(GF_2DGfxResMan *mgr, int id);
int sub_0200A7FC(GF_2DGfxResObj *obj);
NNSG2dCharacterData *sub_0200A810(GF_2DGfxResObj *obj);
NNSG2dPaletteData *sub_0200A828(GF_2DGfxResObj *obj);
NNSG2dCellDataBank *sub_0200A840(GF_2DGfxResObj *obj);
NNSG2dAnimBankData *sub_0200A858(GF_2DGfxResObj *obj);
NNSG2dMultiCellDataBank *sub_0200A870(GF_2DGfxResObj *obj);
NNSG2dAnimBankData *sub_0200A888(GF_2DGfxResObj *obj);
GfGfxResType sub_0200A8A0(GF_2DGfxResObj *obj);
int sub_0200A8B0(GF_2DGfxResObj *obj);
int sub_0200A8DC(GF_2DGfxResObj *obj);
u32 sub_0200A8FC(void);
GF_2DGfxResHeader *sub_0200A900(GF_2DGfxResHeader *headers, int num);
void sub_0200A908(const GF_2DGfxResHeaderNarcList *a0, GF_2DGfxResHeader *header, HeapID heapId);
void sub_0200A954(GF_2DGfxResHeader *header);
int sub_0200A96C(const GF_2DGfxResHeader *header);
int sub_0200A97C(GF_2DGfxResHeader *header, int idx);
int sub_0200A9B0(GF_2DGfxResHeader *header, int idx);
BOOL sub_0200A9DC(GF_2DGfxResHeader *header, int idx);
int sub_0200AA08(GF_2DGfxResHeader *header, int idx);
int sub_0200AA3C(GF_2DGfxResHeader *header, int idx);
void sub_0200AA9C(GF_2DGfxResObj *obj, GfGfxResType type, int vram, int pltt_num, HeapID heapId);

#endif //POKEHEARTGOLD_UNK_0200A090_H
