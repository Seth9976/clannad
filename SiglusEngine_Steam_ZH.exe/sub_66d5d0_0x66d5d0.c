// 函数: sub_66d5d0
// 地址: 0x66d5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t** var_14 = arg3
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* var_38
int32_t* edi = &var_38
var_38 = nullptr
int32_t* arg_c
int32_t* ecx

if (arg6 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg6, 2) u>> 0x20 != 0
    int32_t var_3c_1 = neg.d(ecx_1) | (arg6 * 2)
    int32_t* eax_5 = sub_7431ed()
    var_38 = eax_5
    ecx = arg_c
    edi = eax_5
else
    ecx = &arg_c

int16_t* eax_9 = sub_66e030(sub_748840(edi, ecx, arg6 * 2), arg5, arg4, var_38)
arg4 = eax_9
*arg3 = eax_9

if (arg6 u> 8)
    int32_t* ecx_5 = arg_c
    
    if (ecx_5 != 0)
        j__free(ecx_5)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
