// 函数: sub_5cc440
// 地址: 0x5cc440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbc5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IUnknown::ATL::CComPolyObject<class ATL::CAxHostWindow>::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IUnknown::ATL::CComPolyObject<class ATL::CAxHostWindow>::VTable** var_14_1 = arg1
*arg1 = &ATL::CComPolyObject<class ATL::CAxHostWindow>::`vftable'{for `IUnknown'}
int32_t var_8_1 = 0
arg1[1] = 0xc0000001
sub_5c66c0(&arg1[2])
(*(*data_bac3f8 + 8))(eax_2)
int32_t var_8_2 = 0xffffffff
sub_5c6050(&arg1[2])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
