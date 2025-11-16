// 函数: sub_710100
// 地址: 0x710100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d105a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0
int32_t var_60
char* eax_3 = sub_70e4e0(arg3, &var_60)
int32_t var_8_1 = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

char var_48
char var_30
int32_t* eax_5
int32_t ebx_1

if (sub_70daf0(arg2, eax_3) == 0)
    eax_5 = sub_70e3a0(arg3, &var_30)
    int32_t var_8_2 = 2
    ebx_1 = 2
else
    eax_5 = sub_70e440(arg3, &var_48)
    var_8_1.b = 1
    ebx_1 = 1

arg1[5] = 0xf
arg1[4] = 0
int32_t var_64_1 = ebx_1
*arg1 = 0
sub_541b40(arg1, eax_5, 0, 0xffffffff)
int32_t ebx_2 = ebx_1 | 4

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_1c
    
    if (var_1c u>= 0x10)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    var_30 = 0

if ((ebx_2.b & 1) != 0)
    int32_t var_34
    
    if (var_34 u>= 0x10)
        j__free(var_48.d)
    
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48 = 0

int32_t var_4c

if (var_4c u>= 0x10)
    j__free(var_60)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
