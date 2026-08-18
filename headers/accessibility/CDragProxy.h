#pragma once
#include "../windissect_forwards.h"

// Reconstructed from comctl32.dll by Windissect. 9 member(s).
class CDragProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDragProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CDragProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CDragProxy@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CDragProxy@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CDragProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDragProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CDragProxy@@QEAAHXZ
    int Register();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDragProxy@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropTarget@CDragProxy@@AEAAXPEAUIDropTarget@@@Z
    void SetDropTarget(IDropTarget *);
};
