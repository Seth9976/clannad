// 函数: sub_6fdbd0
// 地址: 0x6fdbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce4a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
arg3[5] = 0xf
arg3[4] = 0
*arg3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
void* ecx

if (*arg2 != 0)
    int32_t* ecx_1 = arg2
    void* edx = ecx_1 + 1
    char i
    
    do
        i = *ecx_1
        ecx_1 += 1
    while (i != 0)
    ecx = ecx_1 - edx
else
    ecx = nullptr

int32_t ebx = arg3[4]
int32_t* eax_5 = arg4[4] + ecx

if (ebx u<= eax_5 && arg3[5] != eax_5 && sub_541df0(arg3, eax_5, 1).b != 0)
    bool cond:1_1 = arg3[5] u< 0x10
    arg3[4] = ebx
    
    if (cond:1_1)
        eax_5 = arg3
    else
        eax_5 = *arg3
    
    *(eax_5 + ebx) = 0

void* ecx_3

if (*arg2 != 0)
    char* ecx_4 = arg2
    
    do
        eax_5.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_5.b != 0)
    
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_6b3720(arg3, arg2, ecx_3)
sub_6b3810(arg3, arg4, nullptr, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
