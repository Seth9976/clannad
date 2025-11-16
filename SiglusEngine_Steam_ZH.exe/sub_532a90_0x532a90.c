// 函数: sub_532a90
// 地址: 0x532a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??2@YAPAXIW4align_val_t@std@@ABUnothrow_t@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
int32_t var_14 = 0
int32_t ecx = 0
arg3[5] = 7
arg3[4] = 0
*arg3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1

if (*arg4 != 0)
    int16_t* ecx_1 = arg4
    void** eax_3
    
    do
        eax_3.w = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.w != 0)
    ecx = (ecx_1 - &ecx_1[1]) s>> 1

void* eax_4 = ecx + arg2[4]
int32_t ebx_1 = arg3[4]

if (ebx_1 u<= eax_4 && arg3[5] != eax_4 && sub_52e660(arg3, eax_4, 1) != 0)
    bool cond:0_1 = arg3[5] u< 8
    arg3[4] = ebx_1
    int32_t* eax_6
    
    if (cond:0_1)
        eax_6 = arg3
    else
        eax_6 = *arg3
    
    *(eax_6 + (ebx_1 << 1)) = 0

sub_532870(arg3, arg2, 0, 0xffffffff)
void* ecx_5

if (*arg4 != 0)
    int16_t* ecx_6 = arg4
    int16_t i
    
    do
        i = *ecx_6
        ecx_6 = &ecx_6[1]
    while (i != 0)
    ecx_5 = (ecx_6 - &ecx_6[1]) s>> 1
else
    ecx_5 = nullptr

sub_532910(arg3, arg4, ecx_5)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
