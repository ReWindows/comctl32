#pragma once
#include "../windissect_forwards.h"

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
