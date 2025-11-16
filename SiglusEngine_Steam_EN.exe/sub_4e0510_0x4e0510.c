// 函数: sub_4e0510
// 地址: 0x4e0510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6058a2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* var_18 = arg1

if (arg1 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

int32_t var_38 = 0x640fa8
int32_t result = 0x8007000e
*arg1 = 0
int32_t var_1c = 0x8007000e
int32_t var_20 = 0
int32_t var_8_1 = 0
struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
    ** eax_4
int32_t ecx_2
int32_t* ebp
eax_4, ecx_2, ebp = operator new(arg1, 0x8007000e, 0x1c)
ebp[-8] = eax_4
ebp[-1].b = 1
struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
    ** eax_5

if (eax_4 == 0)
    eax_5 = nullptr
else
    int32_t var_18_1 = ecx_2
    eax_5 = sub_4df100(eax_4)

if (eax_5 != 0)
    result = 0

*arg1 = eax_5
fsbase->NtTib.ExceptionList = ebp[-3]
*ebp
return result
