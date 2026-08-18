#pragma once
#include "../windissect_forwards.h"

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
