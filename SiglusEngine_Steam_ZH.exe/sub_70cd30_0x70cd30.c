// 函数: sub_70cd30
// 地址: 0x70cd30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0a39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
int32_t var_14 = 0
arg3[5] = 0xf
arg3[4] = 0
*arg3 = 0
int32_t var_8_1 = 0
int32_t var_14_1 = 1
void* ecx

if (*arg4 != 0)
    char* ecx_1 = arg4
    void** eax_3
    
    do
        eax_3.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_3.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

char* eax_4 = ecx + arg2[4]
int32_t ebx_1 = arg3[4]

if (ebx_1 u<= eax_4 && arg3[5] != eax_4 && sub_541df0(arg3, eax_4, 1) != 0)
    bool cond:0_1 = arg3[5] u< 0x10
    arg3[4] = ebx_1
    int32_t* eax_6
    
    if (cond:0_1)
        eax_6 = arg3
    else
        eax_6 = *arg3
    
    *(eax_6 + ebx_1) = 0

sub_6b3810(arg3, arg2, nullptr, 0xffffffff)
void* ecx_4

if (*arg4 != 0)
    char* ecx_5 = arg4
    char i
    
    do
        i = *ecx_5
        ecx_5 = &ecx_5[1]
    while (i != 0)
    ecx_4 = ecx_5 - &ecx_5[1]
else
    ecx_4 = nullptr

sub_6b3720(arg3, arg4, ecx_4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
