# `global` :: `CByteStream`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `comctl32.dll`. Total members: **3**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CByteStream; class CControl; class CDlgTemplateConverter; class CDragProxy; class CImageList; class CImageListBase; class CLVRange; class CNativeFont; class CPager; class HBITMAP__; class HDC__; class HICON__; class HWND__; class IDataObject; class IDropTarget; class IImageList; class IStream; class IUnknown; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _ILFILEHEADER; class _IMAGEINFO; class _IMAGELIST; class _IMAGELISTDRAWPARAMS; class _LocaleUpdate; class _POINTL; class _ULARGE_INTEGER; class localeinfo_struct; class tagDRAWTEXTPARAMS; class tagPOINT; class tagRECT; class tagRGBQUAD; class tagSIZE; class thunk; 
namespace wil { class FailureInfo; } 
namespace wil { namespace details { class ResultStatus; class ThreadFailureCallbackHolder; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 

// Reconstructed from comctl32.dll by Windissect. 3 member(s).
class CByteStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CByteStream@@QEAAHPEBXH@Z
    int Write(void const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByteStream@@QEAA@XZ
    ~CByteStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowBuffer@CByteStream@@AEAA_NH@Z
    bool GrowBuffer(int);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `~CByteStream` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `GrowBuffer` | `bool` | `Method` | `Pdb` | No (PDB) |
| `Write` | `int` | `Method` | `Pdb` | No (PDB) |
