// 函数: sub_6f6830
// 地址: 0x6f6830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd8a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 0
*arg1 = 0
var_8_1.b = 1
int32_t* eax_3 = arg2
int32_t* edi = eax_3

if (eax_3 != 0)
    (*(*eax_3 + 4))(eax_3)
    eax_3 = arg2

int32_t* ecx_1 = *arg1
*arg1 = edi

if (ecx_1 != 0)
    (*(*ecx_1 + 8))(ecx_1)
    eax_3 = arg2

int32_t var_8_2 = 0xffffffff

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
