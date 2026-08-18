# `global` :: `CImageList`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `comctl32.dll`. Total members: **80**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CByteStream; class CControl; class CDlgTemplateConverter; class CDragProxy; class CImageList; class CImageListBase; class CLVRange; class CNativeFont; class CPager; class HBITMAP__; class HDC__; class HICON__; class HWND__; class IDataObject; class IDropTarget; class IImageList; class IStream; class IUnknown; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _ILFILEHEADER; class _IMAGEINFO; class _IMAGELIST; class _IMAGELISTDRAWPARAMS; class _LocaleUpdate; class _POINTL; class _ULARGE_INTEGER; class localeinfo_struct; class tagDRAWTEXTPARAMS; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSIZE; class thunk; 
namespace wil { class FailureInfo; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 

// Reconstructed from comctl32.dll by Windissect. 80 member(s).
class CImageList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CImageList@@UEAAJPEAUHBITMAP__@@0PEAH@Z
    virtual long Add(HBITMAP__*, HBITMAP__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMasked@CImageList@@UEAAJPEAUHBITMAP__@@KPEAH@Z
    virtual long AddMasked(HBITMAP__*, unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageList@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrag@CImageList@@UEAAJHHH@Z
    virtual long BeginDrag(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Clone(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CImageList@@UEAAJHPEAUIUnknown@@HI@Z
    virtual long Copy(int, IUnknown *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDitherImage@CImageList@@UEAAJGHHPEAUIUnknown@@HI@Z
    virtual long CopyDitherImage(unsigned short, int, int, IUnknown *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImageList@@SAPEAV1@HHIHH@Z
    static CImageList * Create(int, int, unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDragBitmaps@CImageList@@QEAAHXZ
    int CreateDragBitmaps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CImageList@@UEAAJPEAUHWND__@@HH@Z
    virtual long DragEnter(HWND__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CImageList@@UEAAJPEAUHWND__@@@Z
    virtual long DragLeave(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragMove@CImageList@@UEAAJHH@Z
    virtual long DragMove(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragShowNolock@CImageList@@UEAAJH@Z
    virtual long DragShowNolock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CImageList@@UEAAJPEAU_IMAGELISTDRAWPARAMS@@@Z
    virtual long Draw(_IMAGELISTDRAWPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDrag@CImageList@@UEAAJXZ
    virtual long EndDrag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBkColor@CImageList@@UEAAJPEAK@Z
    virtual long GetBkColor(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CImageList@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragImage@CImageList@@UEAAJPEAUtagPOINT@@0AEBU_GUID@@PEAPEAX@Z
    virtual long GetDragImage(tagPOINT *, tagPOINT *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CImageList@@UEAAJPEAI@Z
    virtual long GetFlags(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIcon@CImageList@@UEAAJHIPEAPEAUHICON__@@@Z
    virtual long GetIcon(int, unsigned int, HICON__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSize@CImageList@@UEAAJPEAH0@Z
    virtual long GetIconSize(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageCount@CImageList@@UEAAJPEAH@Z
    virtual long GetImageCount(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageInfo@CImageList@@UEAAJHPEAU_IMAGEINFO@@@Z
    virtual long GetImageInfo(int, _IMAGEINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageRect@CImageList@@UEAAJHPEAUtagRECT@@@Z
    virtual long GetImageRect(int, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFlags@CImageList@@UEAAJHPEAK@Z
    virtual long GetItemFlags(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMirror@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetMirror(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayImage@CImageList@@UEAAJHPEAH@Z
    virtual long GetOverlayImage(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateGoo@CImageList@@UEAAJPEAPEAUHBITMAP__@@PEAPEAUHDC__@@01@Z
    virtual long GetPrivateGoo(HBITMAP__* *, HDC__* *, HBITMAP__* *, HDC__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CImageList@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalInit@CImageList@@SAHXZ
    static int GlobalInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlobalUninit@CImageList@@SAXXZ
    static void GlobalUninit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImageList@@QEAAJHHIHH@Z
    long Initialize(int, int, unsigned int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CImageList@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CImageList@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@CImageList@@UEAAJHPEAUIUnknown@@HHHAEBU_GUID@@PEAPEAX@Z
    virtual long Merge(int, IUnknown *, int, int, int, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageList@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CImageList@@UEAAJH@Z
    virtual long Remove(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Replace@CImageList@@UEAAJHPEAUHBITMAP__@@0@Z
    virtual long Replace(int, HBITMAP__*, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceIcon@CImageList@@UEAAJHPEAUHICON__@@PEAH@Z
    virtual long ReplaceIcon(int, HICON__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CImageList@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectDstBitmap@CImageList@@SAXPEAUHBITMAP__@@@Z
    static void SelectDstBitmap(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSrcBitmap@CImageList@@SAXPEAUHBITMAP__@@@Z
    static void SelectSrcBitmap(HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBkColor@CImageList@@UEAAJKPEAK@Z
    virtual long SetBkColor(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorTable@CImageList@@UEAAJHHPEAUtagRGBQUAD@@PEAH@Z
    virtual long SetColorTable(int, int, tagRGBQUAD *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragCursorImage@CImageList@@UEAAJPEAUIUnknown@@HHH@Z
    virtual long SetDragCursorImage(IUnknown *, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlags@CImageList@@UEAAJI@Z
    virtual long SetFlags(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconSize@CImageList@@UEAAJHH@Z
    virtual long SetIconSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageCount@CImageList@@UEAAJI@Z
    virtual long SetImageCount(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayImage@CImageList@@UEAAJHH@Z
    virtual long SetOverlayImage(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Add@CImageList@@QEAAJPEAUHBITMAP__@@0HHHPEAH@Z
    long _Add(HBITMAP__*, HBITMAP__*, int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddMasked@CImageList@@QEAAJPEAUHBITMAP__@@KPEAH@Z
    long _AddMasked(HBITMAP__*, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddValidated@CImageList@@QEAAJPEAUHBITMAP__@@0PEAH@Z
    long _AddValidated(HBITMAP__*, HBITMAP__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyBitmap@CImageList@@QEAAPEAUHBITMAP__@@PEAU2@PEAUHDC__@@@Z
    HBITMAP__* _CopyBitmap(HBITMAP__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyOneImage@CImageList@@QEAAXHHHPEAV1@H@Z
    void _CopyOneImage(int, int, int, CImageList *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateBitmap@CImageList@@QEAAPEAUHBITMAP__@@HH@Z
    HBITMAP__* _CreateBitmap(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateMirroredBitmap@CImageList@@QEAAPEAUHBITMAP__@@PEAU2@@Z
    HBITMAP__* _CreateMirroredBitmap(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteBitmap@CImageList@@SAXPEAUHBITMAP__@@@Z
    static void _DeleteBitmap(HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@CImageList@@QEAAJHPEAUIUnknown@@HHHPEAPEAV1@@Z
    long _Merge(int, IUnknown *, int, int, int, CImageList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Merge@CImageList@@QEAAXPEAUIImageList@@HHH@Z
    void _Merge(IImageList *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReAllocBitmaps@CImageList@@QEAAJH@Z
    long _ReAllocBitmaps(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Read@CImageList@@QEAAJPEBU_ILFILEHEADER@@PEAUHBITMAP__@@1@Z
    long _Read(_ILFILEHEADER const *, HBITMAP__*, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Remove@CImageList@@QEAAJH@Z
    long _Remove(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveItemBitmap@CImageList@@QEAAXH@Z
    void _RemoveItemBitmap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Replace@CImageList@@QEAAJHHPEAUHBITMAP__@@0HH@Z
    long _Replace(int, int, HBITMAP__*, HBITMAP__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceIcon@CImageList@@QEAAJHPEAUHICON__@@PEAH@Z
    long _ReplaceIcon(int, HICON__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceValidated@CImageList@@QEAAJHPEAUHBITMAP__@@0@Z
    long _ReplaceValidated(int, HBITMAP__*, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetBkColor@CImageList@@QEAAXHHK@Z
    void _ResetBkColor(int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBkColor@CImageList@@QEAAKK@Z
    unsigned long _SetBkColor(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetOverlayImage@CImageList@@QEAAJHH@Z
    long _SetOverlayImage(int, int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageList@@AEAA@XZ
    ~CImageList();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `~CImageList` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `Add` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddMasked` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `AddRef` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `BeginDrag` | `long` | `Method` | `Pdb` | No (PDB) |
| `Clone` | `long` | `Method` | `Pdb` | No (PDB) |
| `Copy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CopyDitherImage` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create` | `class CImageList *` | `Method` | `Pdb` | No (PDB) |
| `CreateDragBitmaps` | `int` | `Method` | `Pdb` | No (PDB) |
| `DragEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragMove` | `long` | `Method` | `Pdb` | No (PDB) |
| `DragShowNolock` | `long` | `Method` | `Pdb` | No (PDB) |
| `Draw` | `long` | `Method` | `Pdb` | No (PDB) |
| `EndDrag` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBkColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetClassID` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDragImage` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIcon` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetIconSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetImageCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetImageInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetImageRect` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetItemFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetOverlayImage` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetSizeMax` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsDirty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetMirror` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPrivateGoo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GlobalInit` | `int` | `Method` | `Pdb` | No (PDB) |
| `GlobalUninit` | `void` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `Load` | `long` | `Method` | `Pdb` | No (PDB) |
| `Merge` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `QueryInterface` | `[thunk]: public: virtual long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `[thunk]: public: virtual unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `Remove` | `long` | `Method` | `Pdb` | No (PDB) |
| `Replace` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReplaceIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `Save` | `long` | `Method` | `Pdb` | No (PDB) |
| `SelectDstBitmap` | `void` | `Method` | `Pdb` | No (PDB) |
| `SelectSrcBitmap` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetBkColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetColorTable` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetDragCursorImage` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetFlags` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetIconSize` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetImageCount` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetOverlayImage` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_Add` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddMasked` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddValidated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_CopyBitmap` | `struct HBITMAP__*` | `Method` | `Pdb` | No (PDB) |
| `_CopyOneImage` | `void` | `Method` | `Pdb` | No (PDB) |
| `_CreateBitmap` | `struct HBITMAP__*` | `Method` | `Pdb` | No (PDB) |
| `_CreateMirroredBitmap` | `struct HBITMAP__*` | `Method` | `Pdb` | No (PDB) |
| `_DeleteBitmap` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Merge` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Merge` | `void` | `Method` | `Pdb` | No (PDB) |
| `_ReAllocBitmaps` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Read` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Remove` | `long` | `Method` | `Pdb` | No (PDB) |
| `_RemoveItemBitmap` | `void` | `Method` | `Pdb` | No (PDB) |
| `_Replace` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReplaceIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ReplaceValidated` | `long` | `Method` | `Pdb` | No (PDB) |
| `_ResetBkColor` | `void` | `Method` | `Pdb` | No (PDB) |
| `_SetBkColor` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `_SetOverlayImage` | `long` | `Method` | `Pdb` | No (PDB) |
