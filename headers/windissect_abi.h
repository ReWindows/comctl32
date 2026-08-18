// Windissect recovered ABI metadata — DO NOT EDIT.
// Portable across C++17, C++20, C++23, and C++26 draft modes.
#pragma once
#include <cstddef>
#include <cstdint>

namespace windissect_abi {
struct TypeLayout { const char* name; std::uint64_t size; const char* kind; };
struct FieldLayout { const char* owner; const char* name; std::uint32_t type_index; std::uint64_t offset; bool is_static; };
struct FieldObservation { const char* owner; const char* suggested_name; std::uint64_t offset; std::uint32_t width; const char* access; std::uint32_t evidence_rva; const char* evidence_symbol; const char* confidence; };
struct BaseLayout { const char* derived; const char* base; std::int64_t offset; bool is_virtual; const char* evidence; const char* confidence; };
struct VTableLayout { const char* name; std::uint32_t rva; std::uint32_t slots; const char* evidence; const char* confidence; };
struct VTableSlotLayout { std::uint32_t table_rva; std::uint32_t slot; std::uint32_t target_rva; const char* target_id; const char* target_name; bool ambiguous; std::int32_t this_adjustment; };

inline constexpr TypeLayout types[] = {
    {"CDragProxy", 88ULL, "allocation-size-evidence"},
    {"CImageList", 1600ULL, "allocation-size-evidence"},
    {"CLVRange", 40ULL, "allocation-size-evidence"},
    {"CPager", 176ULL, "allocation-size-evidence"},
    {nullptr, 0, nullptr},
};
inline constexpr std::size_t type_count = (sizeof(types) / sizeof(types[0])) - 1;
inline constexpr FieldLayout fields[] = {
    {nullptr, nullptr, 0, 0, false},
};
inline constexpr std::size_t field_count = (sizeof(fields) / sizeof(fields[0])) - 1;
inline constexpr FieldObservation field_observations[] = {
    {nullptr, nullptr, 0, 0, nullptr, 0, nullptr, nullptr},
};
inline constexpr std::size_t field_observation_count = (sizeof(field_observations) / sizeof(field_observations[0])) - 1;
inline constexpr BaseLayout bases[] = {
    {nullptr, nullptr, -1, false, nullptr, nullptr},
};
inline constexpr std::size_t base_count = (sizeof(bases) / sizeof(bases[0])) - 1;
inline constexpr VTableLayout vtables[] = {
    {"const CImageList::`vftable'{for `IPersistStream'}", 0x8F260U, 8U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CImageList::`vftable'{for `IImageListPriv'}", 0x8F2A0U, 9U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CImageList::`vftable'{for `IImageList'}", 0x8F2E8U, 32U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CImageList::`vftable'{for `CImageListBase'}", 0x8F3E8U, 3U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CDragProxy::`vftable'", 0x8F400U, 7U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CPager::`vftable'", 0x8F438U, 10U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CControl::`vftable'", 0x8F488U, 10U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CNativeFont::`vftable'", 0x8F4D8U, 10U, "msvc-??_7-plus-pe-rdata", "likely"},
    {"const CLVRange::`vftable'", 0x8F528U, 14U, "msvc-??_7-plus-pe-rdata", "likely"},
    {nullptr, 0, 0, nullptr, nullptr},
};
inline constexpr std::size_t vtable_count = (sizeof(vtables) / sizeof(vtables[0])) - 1;
inline constexpr VTableSlotLayout vtable_slots[] = {
    {0x8F260U, 0U, 0x7EFB0U, nullptr, nullptr, true, 0},
    {0x8F260U, 1U, 0x7B9C0U, nullptr, nullptr, true, 0},
    {0x8F260U, 2U, 0x7F020U, nullptr, nullptr, true, 0},
    {0x8F260U, 3U, 0x7D850U, "?GetClassID@CImageList@@UEAAJPEAU_GUID@@@Z", "public: virtual long __cdecl CImageList::GetClassID(struct _GUID *)", false, 0},
    {0x8F260U, 4U, 0x7DBF0U, nullptr, nullptr, true, 0},
    {0x8F260U, 5U, 0x7EB30U, "?Load@CImageList@@UEAAJPEAUIStream@@@Z", "public: virtual long __cdecl CImageList::Load(struct IStream *)", false, 0},
    {0x8F260U, 6U, 0x7F1D0U, "?Save@CImageList@@UEAAJPEAUIStream@@H@Z", "public: virtual long __cdecl CImageList::Save(struct IStream *, int)", false, 0},
    {0x8F260U, 7U, 0x7DBF0U, nullptr, nullptr, true, 0},
    {0x8F2A0U, 0U, 0x7EFA0U, nullptr, nullptr, true, 0},
    {0x8F2A0U, 1U, 0x7B9B0U, nullptr, nullptr, true, 0},
    {0x8F2A0U, 2U, 0x7F010U, nullptr, nullptr, true, 0},
    {0x8F2A0U, 3U, 0x7F600U, "?SetFlags@CImageList@@UEAAJI@Z", "public: virtual long __cdecl CImageList::SetFlags(unsigned int)", false, 0},
    {0x8F2A0U, 4U, 0x7D8D0U, "?GetFlags@CImageList@@UEAAJPEAI@Z", "public: virtual long __cdecl CImageList::GetFlags(unsigned int *)", false, 0},
    {0x8F2A0U, 5U, 0x7F490U, "?SetColorTable@CImageList@@UEAAJHHPEAUtagRGBQUAD@@PEAH@Z", "public: virtual long __cdecl CImageList::SetColorTable(int, int, struct tagRGBQUAD *, int *)", false, 0},
    {0x8F2A0U, 6U, 0x7DCA0U, "?GetPrivateGoo@CImageList@@UEAAJPEAPEAUHBITMAP__@@PEAPEAUHDC__@@01@Z", "public: virtual long __cdecl CImageList::GetPrivateGoo(struct HBITMAP__* *, struct HDC__* *, struct HBITMAP__* *, struct HDC__* *)", false, 0},
    {0x8F2A0U, 7U, 0x7DC00U, "?GetMirror@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CImageList::GetMirror(struct _GUID const &, void * *)", false, 0},
    {0x8F2A0U, 8U, 0x7C320U, "?CopyDitherImage@CImageList@@UEAAJGHHPEAUIUnknown@@HI@Z", "public: virtual long __cdecl CImageList::CopyDitherImage(unsigned short, int, int, struct IUnknown *, int, unsigned int)", false, 0},
    {0x8F2E8U, 0U, 0x7EF90U, nullptr, nullptr, true, 0},
    {0x8F2E8U, 1U, 0x7B9A0U, nullptr, nullptr, true, 0},
    {0x8F2E8U, 2U, 0x7F000U, nullptr, nullptr, true, 0},
    {0x8F2E8U, 3U, 0x7B840U, "?Add@CImageList@@UEAAJPEAUHBITMAP__@@0PEAH@Z", "public: virtual long __cdecl CImageList::Add(struct HBITMAP__*, struct HBITMAP__*, int *)", false, 0},
    {0x8F2E8U, 4U, 0x7F130U, "?ReplaceIcon@CImageList@@UEAAJHPEAUHICON__@@PEAH@Z", "public: virtual long __cdecl CImageList::ReplaceIcon(int, struct HICON__*, int *)", false, 0},
    {0x8F2E8U, 5U, 0x7F790U, "?SetOverlayImage@CImageList@@UEAAJHH@Z", "public: virtual long __cdecl CImageList::SetOverlayImage(int, int)", false, 0},
    {0x8F2E8U, 6U, 0x7F070U, "?Replace@CImageList@@UEAAJHPEAUHBITMAP__@@0@Z", "public: virtual long __cdecl CImageList::Replace(int, struct HBITMAP__*, struct HBITMAP__*)", false, 0},
    {0x8F2E8U, 7U, 0x7B8F0U, "?AddMasked@CImageList@@UEAAJPEAUHBITMAP__@@KPEAH@Z", "public: virtual long __cdecl CImageList::AddMasked(struct HBITMAP__*, unsigned long, int *)", false, 0},
    {0x8F2E8U, 8U, 0x7CDA0U, "?Draw@CImageList@@UEAAJPEAU_IMAGELISTDRAWPARAMS@@@Z", "public: virtual long __cdecl CImageList::Draw(struct _IMAGELISTDRAWPARAMS *)", false, 0},
    {0x8F2E8U, 9U, 0x7F030U, "?Remove@CImageList@@UEAAJH@Z", "public: virtual long __cdecl CImageList::Remove(int)", false, 0},
    {0x8F2E8U, 10U, 0x7D900U, "?GetIcon@CImageList@@UEAAJHIPEAPEAUHICON__@@@Z", "public: virtual long __cdecl CImageList::GetIcon(int, unsigned int, struct HICON__* *)", false, 0},
    {0x8F2E8U, 11U, 0x7DB40U, "?GetImageInfo@CImageList@@UEAAJHPEAU_IMAGEINFO@@@Z", "public: virtual long __cdecl CImageList::GetImageInfo(int, struct _IMAGEINFO *)", false, 0},
    {0x8F2E8U, 12U, 0x7BFE0U, "?Copy@CImageList@@UEAAJHPEAUIUnknown@@HI@Z", "public: virtual long __cdecl CImageList::Copy(int, struct IUnknown *, int, unsigned int)", false, 0},
    {0x8F2E8U, 13U, 0x7EE20U, "?Merge@CImageList@@UEAAJHPEAUIUnknown@@HHHAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CImageList::Merge(int, struct IUnknown *, int, int, int, struct _GUID const &, void * *)", false, 0},
    {0x8F2E8U, 14U, 0x7BDF0U, "?Clone@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CImageList::Clone(struct _GUID const &, void * *)", false, 0},
    {0x8F2E8U, 15U, 0x7DB80U, "?GetImageRect@CImageList@@UEAAJHPEAUtagRECT@@@Z", "public: virtual long __cdecl CImageList::GetImageRect(int, struct tagRECT *)", false, 0},
    {0x8F2E8U, 16U, 0x7DB00U, "?GetIconSize@CImageList@@UEAAJPEAH0@Z", "public: virtual long __cdecl CImageList::GetIconSize(int *, int *)", false, 0},
    {0x8F2E8U, 17U, 0x7F670U, "?SetIconSize@CImageList@@UEAAJHH@Z", "public: virtual long __cdecl CImageList::SetIconSize(int, int)", false, 0},
    {0x8F2E8U, 18U, 0x7DB30U, "?GetImageCount@CImageList@@UEAAJPEAH@Z", "public: virtual long __cdecl CImageList::GetImageCount(int *)", false, 0},
    {0x8F2E8U, 19U, 0x7F720U, "?SetImageCount@CImageList@@UEAAJI@Z", "public: virtual long __cdecl CImageList::SetImageCount(unsigned int)", false, 0},
    {0x8F2E8U, 20U, 0x7F440U, "?SetBkColor@CImageList@@UEAAJKPEAK@Z", "public: virtual long __cdecl CImageList::SetBkColor(unsigned long, unsigned long *)", false, 0},
    {0x8F2E8U, 21U, 0x7D840U, "?GetBkColor@CImageList@@UEAAJPEAK@Z", "public: virtual long __cdecl CImageList::GetBkColor(unsigned long *)", false, 0},
    {0x8F2E8U, 22U, 0x7B9D0U, "?BeginDrag@CImageList@@UEAAJHHH@Z", "public: virtual long __cdecl CImageList::BeginDrag(int, int, int)", false, 0},
    {0x8F2E8U, 23U, 0x7D780U, "?EndDrag@CImageList@@UEAAJXZ", "public: virtual long __cdecl CImageList::EndDrag(void)", false, 0},
    {0x8F2E8U, 24U, 0x7C6D0U, "?DragEnter@CImageList@@UEAAJPEAUHWND__@@HH@Z", "public: virtual long __cdecl CImageList::DragEnter(struct HWND__*, int, int)", false, 0},
    {0x8F2E8U, 25U, 0x7C770U, "?DragLeave@CImageList@@UEAAJPEAUHWND__@@@Z", "public: virtual long __cdecl CImageList::DragLeave(struct HWND__*)", false, 0},
    {0x8F2E8U, 26U, 0x7C7F0U, "?DragMove@CImageList@@UEAAJHH@Z", "public: virtual long __cdecl CImageList::DragMove(int, int)", false, 0},
    {0x8F2E8U, 27U, 0x7F4D0U, "?SetDragCursorImage@CImageList@@UEAAJPEAUIUnknown@@HHH@Z", "public: virtual long __cdecl CImageList::SetDragCursorImage(struct IUnknown *, int, int, int)", false, 0},
    {0x8F2E8U, 28U, 0x7CBA0U, "?DragShowNolock@CImageList@@UEAAJH@Z", "public: virtual long __cdecl CImageList::DragShowNolock(int)", false, 0},
    {0x8F2E8U, 29U, 0x7D870U, "?GetDragImage@CImageList@@UEAAJPEAUtagPOINT@@0AEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CImageList::GetDragImage(struct tagPOINT *, struct tagPOINT *, struct _GUID const &, void * *)", false, 0},
    {0x8F2E8U, 30U, 0x7DBF0U, nullptr, nullptr, true, 0},
    {0x8F2E8U, 31U, 0x7DBF0U, nullptr, nullptr, true, 0},
    {0x8F3E8U, 0U, 0x7EEB0U, "?QueryInterface@CImageList@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CImageList::QueryInterface(struct _GUID const &, void * *)", false, 0},
    {0x8F3E8U, 1U, 0x7B980U, "?AddRef@CImageList@@UEAAKXZ", "public: virtual unsigned long __cdecl CImageList::AddRef(void)", false, 0},
    {0x8F3E8U, 2U, 0x7EFC0U, "?Release@CImageList@@UEAAKXZ", "public: virtual unsigned long __cdecl CImageList::Release(void)", false, 0},
    {0x8F400U, 0U, 0x841F0U, "?QueryInterface@CDragProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CDragProxy::QueryInterface(struct _GUID const &, void * *)", false, 0},
    {0x8F400U, 1U, 0x83E80U, "?AddRef@CDragProxy@@UEAAKXZ", "public: virtual unsigned long __cdecl CDragProxy::AddRef(void)", false, 0},
    {0x8F400U, 2U, 0x84320U, "?Release@CDragProxy@@UEAAKXZ", "public: virtual unsigned long __cdecl CDragProxy::Release(void)", false, 0},
    {0x8F400U, 3U, 0x83E90U, "?DragEnter@CDragProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z", "public: virtual long __cdecl CDragProxy::DragEnter(struct IDataObject *, unsigned long, struct _POINTL, unsigned long *)", false, 0},
    {0x8F400U, 4U, 0x83F90U, "?DragOver@CDragProxy@@UEAAJKU_POINTL@@PEAK@Z", "public: virtual long __cdecl CDragProxy::DragOver(unsigned long, struct _POINTL, unsigned long *)", false, 0},
    {0x8F400U, 5U, 0x83F30U, "?DragLeave@CDragProxy@@UEAAJXZ", "public: virtual long __cdecl CDragProxy::DragLeave(void)", false, 0},
    {0x8F400U, 6U, 0x84130U, "?Drop@CDragProxy@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z", "public: virtual long __cdecl CDragProxy::Drop(struct IDataObject *, unsigned long, struct _POINTL, unsigned long *)", false, 0},
    {0x8F438U, 0U, 0x861B0U, "?v_WndProc@CPager@@UEAA_JPEAUHWND__@@I_K_J@Z", "public: virtual int64_t __cdecl CPager::v_WndProc(struct HWND__*, unsigned int, uint64_t, int64_t)", false, 0},
    {0x8F438U, 1U, 0x845A0U, nullptr, nullptr, true, 0},
    {0x8F438U, 2U, 0x85D80U, "?v_OnNCPaint@CPager@@MEAAXXZ", "protected: virtual void __cdecl CPager::v_OnNCPaint(void)", false, 0},
    {0x8F438U, 3U, 0x2C6F0U, "?v_OnPaint@CPager@@MEAAXPEAUHDC__@@@Z", "protected: virtual void __cdecl CPager::v_OnPaint(struct HDC__*)", false, 0},
    {0x8F438U, 4U, 0x85B70U, "?v_OnCreate@CPager@@MEAA_JXZ", "protected: virtual int64_t __cdecl CPager::v_OnCreate(void)", false, 0},
    {0x8F438U, 5U, 0x85E40U, "?v_OnSize@CPager@@MEAAXHH@Z", "protected: virtual void __cdecl CPager::v_OnSize(int, int)", false, 0},
    {0x8F438U, 6U, 0x85B40U, "?v_OnCommand@CPager@@MEAA_J_K_J@Z", "protected: virtual int64_t __cdecl CPager::v_OnCommand(uint64_t, int64_t)", false, 0},
    {0x8F438U, 7U, 0x85E10U, "?v_OnNotify@CPager@@MEAA_J_K_J@Z", "protected: virtual int64_t __cdecl CPager::v_OnNotify(uint64_t, int64_t)", false, 0},
    {0x8F438U, 8U, 0x85EB0U, "?v_OnStyleChanged@CPager@@MEAAK_K_J@Z", "protected: virtual unsigned long __cdecl CPager::v_OnStyleChanged(uint64_t, int64_t)", false, 0},
    {0x8F438U, 9U, 0x85BB0U, "?v_OnNCCalcSize@CPager@@MEAAH_K_JPEA_J@Z", "protected: virtual int __cdecl CPager::v_OnNCCalcSize(uint64_t, int64_t, int64_t *)", false, 0},
    {0x8F488U, 0U, 0x85F30U, "?v_WndProc@CControl@@MEAA_JPEAUHWND__@@I_K_J@Z", "protected: virtual int64_t __cdecl CControl::v_WndProc(struct HWND__*, unsigned int, uint64_t, int64_t)", false, 0},
    {0x8F488U, 1U, 0x845A0U, nullptr, nullptr, true, 0},
    {0x8F488U, 2U, 0x2C6F0U, "?v_OnNCPaint@CControl@@MEAAXXZ", "protected: virtual void __cdecl CControl::v_OnNCPaint(void)", false, 0},
    {0x8F488U, 3U, 0xAB20U, nullptr, nullptr, true, 0},
    {0x8F488U, 4U, 0xAB20U, nullptr, nullptr, true, 0},
    {0x8F488U, 5U, 0xAB20U, nullptr, nullptr, true, 0},
    {0x8F488U, 6U, 0x2D020U, nullptr, nullptr, true, 0},
    {0x8F488U, 7U, 0x2D020U, nullptr, nullptr, true, 0},
    {0x8F488U, 8U, 0x85E70U, "?v_OnStyleChanged@CControl@@MEAAK_K_J@Z", "protected: virtual unsigned long __cdecl CControl::v_OnStyleChanged(uint64_t, int64_t)", false, 0},
    {0x8F488U, 9U, 0x2D020U, nullptr, nullptr, true, 0},
    {0x8F4D8U, 0U, 0x871D0U, "?v_WndProc@CNativeFont@@UEAA_JPEAUHWND__@@I_K_J@Z", "public: virtual int64_t __cdecl CNativeFont::v_WndProc(struct HWND__*, unsigned int, uint64_t, int64_t)", false, 0},
    {0x8F4D8U, 1U, 0x845A0U, nullptr, nullptr, true, 0},
    {0x8F4D8U, 2U, 0x2C6F0U, nullptr, nullptr, true, 0},
    {0x8F4D8U, 3U, 0x2C6F0U, nullptr, nullptr, true, 0},
    {0x8F4D8U, 4U, 0xCB20U, "?v_OnCreate@CNativeFont@@MEAA_JXZ", "protected: virtual int64_t __cdecl CNativeFont::v_OnCreate(void)", false, 0},
    {0x8F4D8U, 5U, 0x2C6F0U, nullptr, nullptr, true, 0},
    {0x8F4D8U, 6U, 0x85B40U, "?v_OnCommand@CNativeFont@@MEAA_J_K_J@Z", "protected: virtual int64_t __cdecl CNativeFont::v_OnCommand(uint64_t, int64_t)", false, 0},
    {0x8F4D8U, 7U, 0x85E10U, "?v_OnNotify@CNativeFont@@MEAA_J_K_J@Z", "protected: virtual int64_t __cdecl CNativeFont::v_OnNotify(uint64_t, int64_t)", false, 0},
    {0x8F4D8U, 8U, 0x2D020U, "?v_OnStyleChanged@CNativeFont@@MEAAK_K_J@Z", "protected: virtual unsigned long __cdecl CNativeFont::v_OnStyleChanged(uint64_t, int64_t)", false, 0},
    {0x8F4D8U, 9U, 0x2D020U, "?v_OnStyleChanged@CNativeFont@@MEAAK_K_J@Z", "protected: virtual unsigned long __cdecl CNativeFont::v_OnStyleChanged(uint64_t, int64_t)", false, 0},
    {0x8F528U, 0U, 0x87950U, "?QueryInterface@CLVRange@@UEAAJAEBU_GUID@@PEAPEAX@Z", "public: virtual long __cdecl CLVRange::QueryInterface(struct _GUID const &, void * *)", false, 0},
    {0x8F528U, 1U, 0x83E80U, "?AddRef@CLVRange@@UEAAKXZ", "public: virtual unsigned long __cdecl CLVRange::AddRef(void)", false, 0},
    {0x8F528U, 2U, 0x879A0U, "?Release@CLVRange@@UEAAKXZ", "public: virtual unsigned long __cdecl CLVRange::Release(void)", false, 0},
    {0x8F528U, 3U, 0x87500U, "?IncludeRange@CLVRange@@UEAAJJJ@Z", "public: virtual long __cdecl CLVRange::IncludeRange(long, long)", false, 0},
    {0x8F528U, 4U, 0x873D0U, "?ExcludeRange@CLVRange@@UEAAJJJ@Z", "public: virtual long __cdecl CLVRange::ExcludeRange(long, long)", false, 0},
    {0x8F528U, 5U, 0x87760U, "?InvertRange@CLVRange@@UEAAJJJ@Z", "public: virtual long __cdecl CLVRange::InvertRange(long, long)", false, 0},
    {0x8F528U, 6U, 0x87680U, "?InsertItem@CLVRange@@UEAAJJ@Z", "public: virtual long __cdecl CLVRange::InsertItem(long)", false, 0},
    {0x8F528U, 7U, 0x879D0U, "?RemoveItem@CLVRange@@UEAAJJ@Z", "public: virtual long __cdecl CLVRange::RemoveItem(long)", false, 0},
    {0x8F528U, 8U, 0x87320U, "?Clear@CLVRange@@UEAAJXZ", "public: virtual long __cdecl CLVRange::Clear(void)", false, 0},
    {0x8F528U, 9U, 0x87840U, "?IsSelected@CLVRange@@UEAAJJ@Z", "public: virtual long __cdecl CLVRange::IsSelected(long)", false, 0},
    {0x8F528U, 10U, 0x87820U, "?IsEmpty@CLVRange@@UEAAJXZ", "public: virtual long __cdecl CLVRange::IsEmpty(void)", false, 0},
    {0x8F528U, 11U, 0x87870U, "?NextSelected@CLVRange@@UEAAJJPEAJ@Z", "public: virtual long __cdecl CLVRange::NextSelected(long, long *)", false, 0},
    {0x8F528U, 12U, 0x878E0U, "?NextUnSelected@CLVRange@@UEAAJJPEAJ@Z", "public: virtual long __cdecl CLVRange::NextUnSelected(long, long *)", false, 0},
    {0x8F528U, 13U, 0x873C0U, "?CountIncluded@CLVRange@@UEAAJPEAJ@Z", "public: virtual long __cdecl CLVRange::CountIncluded(long *)", false, 0},
    {0, 0, 0, nullptr, nullptr, true, 0},
};
inline constexpr std::size_t vtable_slot_count = (sizeof(vtable_slots) / sizeof(vtable_slots[0])) - 1;
}
