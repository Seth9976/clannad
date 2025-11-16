// 函数: sub_5cbfc0
// 地址: 0x5cbfc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbbe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
    ** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>::ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::VTable
    ** var_14_1 = arg1
__builtin_memset(&arg1[1], 0, 0x18)
int32_t var_8_1 = 0
int32_t* ecx = data_bac3f8
*arg1 = &ATL::CComObject<class ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>>::`vftable'{for `ATL::CComEnum<struct IEnumUnknown, &struct __s_GUID const _GUID_00000100_0000_0000_c000_000000000046, struct IUnknown *, class ATL::_CopyInterface<struct IUnknown>, class ATL::CComSingleThreadModel>'}
(*(*ecx + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
