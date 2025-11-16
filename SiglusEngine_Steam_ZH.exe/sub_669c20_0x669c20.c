// 函数: sub_669c20
// 地址: 0x669c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6038
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_4c
void* var_14 = &var_4c
int32_t* var_60
int32_t* esi = &var_60
var_60 = nullptr
int32_t* arg_4
int32_t* ecx

if (arg4 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg4, 2) u>> 0x20 != 0
    int32_t var_64_1 = neg.d(ecx_1) | (arg4 * 2)
    int32_t* eax_6 = sub_7431ed()
    var_60 = eax_6
    ecx = arg_4
    esi = eax_6
else
    ecx = &arg_4

int32_t* result =
    sub_66a6a0(sub_66a340(sub_748840(esi, ecx, arg4 * 2), arg5, var_14, var_60), arg2, arg3)

if (arg4 u> 8)
    int32_t* eax_11 = arg_4
    
    if (eax_11 != 0)
        j__free(eax_11)

fsbase->NtTib.ExceptionList = ExceptionList
return result
