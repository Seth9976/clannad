// 函数: sub_66b470
// 地址: 0x66b470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6280
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t* var_48 = nullptr
int32_t* arg_c
int32_t* ecx
int32_t* edx

if (arg4 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg4, 2) u>> 0x20 != 0
    int32_t var_4c_1 = neg.d(ecx_1) | (arg4 * 2)
    ecx = sub_7431ed()
    var_48 = ecx
    edx = arg_c
else
    ecx = &var_48
    edx = &arg_c

sub_748840(ecx, edx, arg4 * 2)
int32_t var_34 = arg5
sub_66c2c0(arg1)
var_8_1.b = 1
int32_t ecx_5 = arg3
arg1[8] = arg2
arg1[9] = arg2
arg1[0xa] = arg2
arg1[0xb] = ecx_5
arg1[0xc].b = 0

if (arg2 != ecx_5)
    int32_t edx_1
    
    if (*arg1 == 0)
        edx_1 = ecx_5
    else
        int32_t var_30_1 = ecx_5
        int32_t var_18
        sub_6064f0(arg1, &var_18, arg2)
        int32_t var_14
        ecx_5 = var_14
        edx_1 = var_18
    
    int32_t eax_10 = arg1[0xb]
    
    if (edx_1 == eax_10 && ecx_5 == eax_10 && arg1[9] == eax_10)
        arg1[0xc].b = 1
    
    arg1[8] = arg1[0xa]
    arg1[9] = edx_1
    arg1[0xa] = ecx_5

if (arg4 u> 8)
    int32_t* ecx_7 = arg_c
    
    if (ecx_7 != 0)
        j__free(ecx_7)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
