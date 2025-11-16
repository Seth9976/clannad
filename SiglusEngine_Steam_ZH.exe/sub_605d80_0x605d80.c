// 函数: sub_605d80
// 地址: 0x605d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
arg1[2] = arg2
*arg1 = 0
int32_t* arg_4
int32_t* eax_4
int32_t* ecx

if (arg2 u> 8)
    int32_t var_1c_1 = arg2
    eax_4 = sub_7431ed()
    ecx = arg_4
    *arg1 = eax_4
else
    eax_4 = arg1
    ecx = &arg_4

sub_748840(eax_4, ecx, arg1[2], eax_2)
arg1[3] = arg3

if (arg2 u> 8)
    int32_t* ecx_1 = arg_4
    
    if (ecx_1 != 0)
        j__free(ecx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
