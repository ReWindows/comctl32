# `global` :: `CLVRange`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `comctl32.dll`. Total members: **18**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CByteStream; class CControl; class CDlgTemplateConverter; class CDragProxy; class CImageList; class CImageListBase; class CLVRange; class CNativeFont; class CPager; class HBITMAP__; class HDC__; class HICON__; class HWND__; class IDataObject; class IDropTarget; class IImageList; class IStream; class IUnknown; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _ILFILEHEADER; class _IMAGEINFO; class _IMAGELIST; class _IMAGELISTDRAWPARAMS; class _LocaleUpdate; class _POINTL; class _ULARGE_INTEGER; class localeinfo_struct; class tagDRAWTEXTPARAMS; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSIZE; class thunk; 
namespace wil { class FailureInfo; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 

// Reconstructed from comctl32.dll by Windissect. 18 member(s).
class CLVRange {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLVRange@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CLVRange@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountIncluded@CLVRange@@UEAAJPEAJ@Z
    virtual long CountIncluded(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeRange@CLVRange@@UEAAJJJ@Z
    virtual long ExcludeRange(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncludeRange@CLVRange@@UEAAJJJ@Z
    virtual long IncludeRange(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertItem@CLVRange@@UEAAJJ@Z
    virtual long InsertItem(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvertRange@CLVRange@@UEAAJJJ@Z
    virtual long InvertRange(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CLVRange@@UEAAJXZ
    virtual long IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@CLVRange@@UEAAJJ@Z
    virtual long IsSelected(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextSelected@CLVRange@@UEAAJJPEAJ@Z
    virtual long NextSelected(long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextUnSelected@CLVRange@@UEAAJJPEAJ@Z
    virtual long NextUnSelected(long, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLVRange@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLVRange@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@CLVRange@@UEAAJJ@Z
    virtual long RemoveItem(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindValue@CLVRange@@IEAAHJPEAJ@Z
    int _FindValue(long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertRange@CLVRange@@IEAAHJJJ@Z
    int _InsertRange(long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveRanges@CLVRange@@IEAAJJJPEAJ@Z
    long _RemoveRanges(long, long, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLVRange@@IEAA@XZ
    ~CLVRange();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `~CLVRange` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `Clear` | `long` | `Method` | `Pdb` | No (PDB) |
| `CountIncluded` | `long` | `Method` | `Pdb` | No (PDB) |
| `ExcludeRange` | `long` | `Method` | `Pdb` | No (PDB) |
| `IncludeRange` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvertRange` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsEmpty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsSelected` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `NextSelected` | `long` | `Method` | `Pdb` | No (PDB) |
| `NextUnSelected` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `RemoveItem` | `long` | `Method` | `Pdb` | No (PDB) |
| `_FindValue` | `int` | `Method` | `Pdb` | No (PDB) |
| `_InsertRange` | `int` | `Method` | `Pdb` | No (PDB) |
| `_RemoveRanges` | `long` | `Method` | `Pdb` | No (PDB) |
