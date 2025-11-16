// 函数: sub_66a210
// 地址: 0x66a210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct CIESink::ATL::CComObject<class CIESink>::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct CIESink::ATL::CComObject<class CIESink>::VTable** var_14_1 = arg1
arg1[0xb] = 0
__builtin_memset(&arg1[1], 0, 0x24)
arg1[0xa] = 0xfefefefe
__builtin_memset(&arg1[1], 0, 0x24)
*(arg1 + 0x14) = data_aac1b0
arg1[0xc] = 0
int32_t var_8_1 = 0
int32_t* ecx = data_bac3f8
*arg1 = &ATL::CComObject<class CIESink>::`vftable'{for `CIESink'}
(*(*ecx + 4))(eax_2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
