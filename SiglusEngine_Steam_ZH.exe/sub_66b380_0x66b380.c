// 函数: sub_66b380
// 地址: 0x66b380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6248
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg1
int32_t var_8_1 = 0
result[4] = arg2
*result = 0
int32_t* arg_4
int32_t* edx

if (arg2 u> 8)
    int32_t ecx
    ecx.b = mulu.dp.d(arg2, 2) u>> 0x20 != 0
    int32_t var_1c_1 = neg.d(ecx) | (arg2 * 2)
    int32_t* eax_5 = sub_7431ed()
    edx = arg_4
    arg1 = eax_5
    *result = arg1
else
    edx = &arg_4

sub_748840(arg1, edx, result[4] * 2, eax_2)
result[5] = arg3

if (arg2 u> 8)
    int32_t* ecx_3 = arg_4
    
    if (ecx_3 != 0)
        j__free(ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
