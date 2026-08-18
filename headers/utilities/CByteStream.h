#pragma once
#include "../windissect_forwards.h"

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
