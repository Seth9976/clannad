// 函数: sub_6c98e0
// 地址: 0x6c98e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc7b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t* var_18 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_24 = arg3
int32_t* var_28 = arg1
sub_579a70(*arg1, arg1[1])
arg1[1] = *arg1
__builtin_memset(&arg1[3], 0, 0x20)
void* arg_4
sub_6c8730(arg1, &arg_4)
arg1[3] = arg3
arg1[4] = arg4
arg1[5] = arg5
int32_t var_8_2 = 0xffffffff
void* ecx_2 = arg_4
arg1[6] = arg6
*(arg1 + 0x1c) = arg7

if (ecx_2 != 0)
    int32_t var_24_2 = arg3
    void* var_28_1 = ecx_2
    sub_579a70(ecx_2, arg2)
    j__free(arg_4)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
