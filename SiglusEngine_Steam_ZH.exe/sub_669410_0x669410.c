// 函数: sub_669410
// 地址: 0x669410
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
*arg1 = &ATL::CComObject<class CIESink>::`vftable'{for `CIESink'}
int32_t var_8_1 = 0
int32_t* ecx = data_bac3f8
arg1[0xb] = 0xc0000001
(*(*ecx + 8))(eax_2)
int32_t var_8_2 = 0xffffffff
int32_t* ecx_1 = arg1[0xc]

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
