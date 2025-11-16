// 函数: sub_4dd5f0
// 地址: 0x4dd5f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0x80004003

int32_t esi
int32_t var_c = esi
int32_t __saved_ebx = 0x640fa8
*arg1 = 0
struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
    ** eax_1
int32_t __saved_ebx_2
void* ebp
eax_1, __saved_ebx_2, ebp = operator new(esi, arg1, 0x1c)

if (eax_1 != 0)
    int32_t __saved_ebx_1 = __saved_ebx_2
    struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
        ** eax_2 = sub_4df100(eax_1)
    
    if (eax_2 != 0)
        void* edx = *(ebp + 8)
        *(ebp + 0x10) = *(edx + 0x2c)
        int32_t result = sub_4e0070(eax_2, ebp + 0x10, ebp + 0x14, (*(*(edx - 0x34) + 0x10))(3))
        
        if (result s< 0)
            (*eax_2)->vFunc_7(1)
        else
            result = (*eax_2)->vFunc_0(eax_2, &data_61d390, arg1)
            
            if (result s< 0)
                (*eax_2)->vFunc_7(1)
        
        return result

return 0x8007000e
