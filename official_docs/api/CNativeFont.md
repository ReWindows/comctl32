# `global` :: `CNativeFont`

**Category:** [Values & Data Types](./README.md)

Reconstructed from `comctl32.dll`. Total members: **13**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CByteStream; class CControl; class CDlgTemplateConverter; class CDragProxy; class CImageList; class CImageListBase; class CLVRange; class CNativeFont; class CPager; class HBITMAP__; class HDC__; class HICON__; class HWND__; class IDataObject; class IDropTarget; class IImageList; class IStream; class IUnknown; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _ILFILEHEADER; class _IMAGEINFO; class _IMAGELIST; class _IMAGELISTDRAWPARAMS; class _LocaleUpdate; class _POINTL; class _ULARGE_INTEGER; class localeinfo_struct; class tagDRAWTEXTPARAMS; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSIZE; class thunk; 
namespace wil { class FailureInfo; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 

// Reconstructed from comctl32.dll by Windissect. 13 member(s).
class CNativeFont {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NativeFontWndProc@CNativeFont@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t NativeFontWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CNativeFont@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetNativeDialogFont@CNativeFont@@IEAAJPEAUHWND__@@@Z
    long _GetNativeDialogFont(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetFontEnumProc@CNativeFont@@KAHPEAUHWND__@@_J@Z
    static int _SetFontEnumProc(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubclassDlgProc@CNativeFont@@KA_JPEAUHWND__@@I_K_J11@Z
    static int64_t _SubclassDlgProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCommand@CNativeFont@@MEAA_J_K_J@Z
    virtual int64_t v_OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnCreate@CNativeFont@@MEAA_JXZ
    virtual int64_t v_OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnNotify@CNativeFont@@MEAA_J_K_J@Z
    virtual int64_t v_OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnPaint@CNativeFont@@MEAAXPEAUHDC__@@@Z
    virtual void v_OnPaint(HDC__*);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnSize@CNativeFont@@MEAAXHH@Z
    virtual void v_OnSize(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnStyleChanged@CNativeFont@@MEAAK_K_J@Z
    virtual unsigned long v_OnStyleChanged(uint64_t, int64_t);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `v_OnCreate` | `int64_t` | `Method` | `Pdb` | Yes |
| `v_OnPaint` | `void` | `Method` | `Pdb` | Yes |
| `v_OnSize` | `void` | `Method` | `Pdb` | Yes |
| `v_OnStyleChanged` | `unsigned long` | `Method` | `Pdb` | Yes |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `v_OnCommand` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `v_OnNotify` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `NativeFontWndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `_GetNativeDialogFont` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetFontEnumProc` | `int` | `Method` | `Pdb` | No (PDB) |
| `_SubclassDlgProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
| `v_WndProc` | `int64_t` | `Method` | `Pdb` | No (PDB) |
