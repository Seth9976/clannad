// 函数: sub_6f1bd0
// 地址: 0x6f1bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd45b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0
int16_t var_60
int16_t var_48
int16_t var_30
int32_t var_1c
int16_t* eax_4
int32_t ebx

if (arg2[4] != 0)
    int16_t* eax_5 = sub_532b80(&ExceptionList, arg2, &var_60, 0xb062a0)
    int32_t var_8_2 = 1
    int32_t var_64_1 = 2
    eax_4 = sub_5327a0(eax_5, eax_5, &var_48, arg4)
    int32_t var_8_3 = 2
    ebx = 6
else
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e3c0(&var_30, arg4, 0, 0xffffffff)
    eax_4 = &var_30
    int32_t var_8_1 = 0
    ebx = 1

arg3[5] = 7
arg3[4] = 0
*arg3 = 0
int32_t var_64_2 = ebx
sub_52e3c0(arg3, eax_4, 0, 0xffffffff)
int32_t ebx_1 = ebx | 8

if ((ebx_1.b & 4) != 0)
    ebx_1 &= 0xfffffffb
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    var_60 = 0

if ((ebx_1.b & 1) != 0 && var_1c u>= 8)
    j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
