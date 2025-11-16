// 函数: sub_548bc0
// 地址: 0x548bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
arg3[5] = 7
arg3[4] = 0
*arg3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
int32_t ecx

if (*arg2 != 0)
    int16_t* ecx_1 = arg2
    int16_t i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = (ecx_1 - &ecx_1[1]) s>> 1
else
    ecx = 0

int32_t ebx = arg3[4]
int32_t* eax_5 = arg4[4] + ecx

if (ebx u<= eax_5 && arg3[5] != eax_5 && sub_52e660(arg3, eax_5, 1).b != 0)
    bool cond:0_1 = arg3[5] u< 8
    arg3[4] = ebx
    
    if (cond:0_1)
        eax_5 = arg3
    else
        eax_5 = *arg3
    
    *(eax_5 + (ebx << 1)) = 0

void* ecx_4

if (*arg2 != 0)
    int16_t* ecx_5 = arg2
    
    do
        eax_5.w = *ecx_5
        ecx_5 = &ecx_5[1]
    while (eax_5.w != 0)
    
    ecx_4 = (ecx_5 - &ecx_5[1]) s>> 1
else
    ecx_4 = nullptr

sub_532910(arg3, arg2, ecx_4)
sub_532870(arg3, arg4, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
