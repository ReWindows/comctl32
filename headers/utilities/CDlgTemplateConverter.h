#pragma once
#include "../windissect_forwards.h"

// Reconstructed from comctl32.dll by Windissect. 3 member(s).
class CDlgTemplateConverter {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStringW@CDlgTemplateConverter@@AEAAHAEAVCByteStream@@PEBGH@Z
    int CopyStringW(CByteStream &, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DlgHdrToDlgEx@CDlgTemplateConverter@@AEAAJAEAVCByteStream@@PEAPEAG@Z
    long DlgHdrToDlgEx(CByteStream &, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DlgItemToDlgEx@CDlgTemplateConverter@@AEAAJAEAVCByteStream@@PEAPEAG@Z
    long DlgItemToDlgEx(CByteStream &, unsigned short * *);
};
