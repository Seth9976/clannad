// 函数: sub_6061a0
// 地址: 0x6061a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg1
int32_t var_8_1 = 0
int32_t* var_40 = nullptr
int32_t* arg_c
int32_t* eax_4
int32_t* ecx

if (arg4 u> 8)
    void* var_44_1 = arg4
    eax_4 = sub_7431ed()
    var_40 = eax_4
    ecx = arg_c
else
    eax_4 = &var_40
    ecx = &arg_c

sub_748840(eax_4, ecx, arg4)
int32_t var_34 = arg5
sub_606580(arg1)
var_8_1.b = 1
int32_t ecx_2 = arg3
arg1[8] = arg2
arg1[9] = arg2
arg1[0xa] = arg2
arg1[0xb] = ecx_2
arg1[0xc].b = 0

if (arg2 != ecx_2)
    int32_t edx_1
    
    if (*arg1 == 0)
        edx_1 = ecx_2
    else
        int32_t var_30_1 = ecx_2
        int32_t var_18
        sub_6064f0(arg1, &var_18, arg2)
        int32_t var_14
        ecx_2 = var_14
        edx_1 = var_18
    
    int32_t eax_7 = arg1[0xb]
    
    if (edx_1 == eax_7 && ecx_2 == eax_7 && arg1[9] == eax_7)
        arg1[0xc].b = 1
    
    arg1[8] = arg1[0xa]
    arg1[9] = edx_1
    arg1[0xa] = ecx_2

if (arg4 u> 8)
    int32_t* ecx_4 = arg_c
    
    if (ecx_4 != 0)
        j__free(ecx_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
