#pragma once
#include "../windissect_forwards.h"

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
