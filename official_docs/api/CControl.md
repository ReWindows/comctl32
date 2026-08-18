# `global` :: `CControl`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `comctl32.dll`. Total members: **8**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CByteStream; class CControl; class CDlgTemplateConverter; class CDragProxy; class CImageList; class CImageListBase; class CLVRange; class CNativeFont; class CPager; class HBITMAP__; class HDC__; class HICON__; class HWND__; class IDataObject; class IDropTarget; class IImageList; class IStream; class IUnknown; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _ILFILEHEADER; class _IMAGEINFO; class _IMAGELIST; class _IMAGELISTDRAWPARAMS; class _LocaleUpdate; class _POINTL; class _ULARGE_INTEGER; class localeinfo_struct; class tagDRAWTEXTPARAMS; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSIZE; class thunk; 
namespace wil { class FailureInfo; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 

// Reconstructed from comctl32.dll by Windissect. 8 member(s).
class CControl {
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnCommand@CControl@@MEAA_J_K_J@Z
    virtual int64_t v_OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnNCCalcSize@CControl@@MEAAH_K_JPEA_J@Z
    virtual int v_OnNCCalcSize(uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnNCPaint@CControl@@MEAAXXZ
    virtual void v_OnNCPaint();
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnNotify@CControl@@MEAA_J_K_J@Z
    virtual int64_t v_OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnStyleChanged@CControl@@MEAAK_K_J@Z
    virtual unsigned long v_OnStyleChanged(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CControl@@MEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `v_OnNCPaint` | `void` | `Method` | `Pdb` | Yes |
| `v_OnCommand` | `int64_t` | `Method` | `Pdb` | Yes |
| `v_OnNCCalcSize` | `int` | `Method` | `Pdb` | Yes |
| `v_OnNotify` | `int64_t` | `Method` | `Pdb` | Yes |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `v_OnStyleChanged` | `unsigned long` | `Method` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
