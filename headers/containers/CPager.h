#pragma once
#include "../windissect_forwards.h"

// Reconstructed from comctl32.dll by Windissect. 29 member(s).
class CPager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PagerDragCallback@CPager@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t PagerDragCallback(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PagerWndProc@CPager@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t PagerWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CPager@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DragCallback@CPager@@IEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _DragCallback(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawBlank@CPager@@IEAAXPEAUHDC__@@H@Z
    void _DrawBlank(HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrawButton@CPager@@IEAAXPEAUHDC__@@H@Z
    void _DrawButton(HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetButtonRect@CPager@@IEAA?AUtagRECT@@H@Z
    tagRECT _GetButtonRect(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetChildSize@CPager@@IEAAXXZ
    void _GetChildSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTest@CPager@@IEAAHHH@Z
    int _HitTest(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HitTestScreen@CPager@@IEAAHPEBUtagPOINT@@@Z
    int _HitTestScreen(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NeedScrollbars@CPager@@IEAAXUtagRECT@@@Z
    void _NeedScrollbars(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLButtonChange@CPager@@IEAAXI_J@Z
    void _OnLButtonChange(unsigned int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseLeave@CPager@@IEAAXXZ
    void _OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseMove@CPager@@IEAAX_K_J@Z
    void _OnMouseMove(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPrint@CPager@@IEAAHPEAUHDC__@@I@Z
    int _OnPrint(HDC__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetChild@CPager@@IEAAXPEAUHWND__@@0@Z
    void _OnSetChild(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSetPos@CPager@@IEAAXH@Z
    void _OnSetPos(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Scroll@CPager@@IEAAXK@Z
    void _Scroll(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetChildPos@CPager@@IEAAXPEBUtagRECT@@I@Z
    void _SetChildPos(tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCommand@CPager@@MEAA_J_K_J@Z
    virtual int64_t v_OnCommand(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCreate@CPager@@MEAA_JXZ
    virtual int64_t v_OnCreate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnNCCalcSize@CPager@@MEAAH_K_JPEA_J@Z
    virtual int v_OnNCCalcSize(uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnNCPaint@CPager@@MEAAXXZ
    virtual void v_OnNCPaint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnNotify@CPager@@MEAA_J_K_J@Z
    virtual int64_t v_OnNotify(uint64_t, int64_t);
    // Category: Method | Source: PE Export
    // Symbol: ?v_OnPaint@CPager@@MEAAXPEAUHDC__@@@Z
    virtual void v_OnPaint(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnSize@CPager@@MEAAXHH@Z
    virtual void v_OnSize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnStyleChanged@CPager@@MEAAK_K_J@Z
    virtual unsigned long v_OnStyleChanged(uint64_t, int64_t);
};
