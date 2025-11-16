// 函数: sub_67e8e0
// 地址: 0x67e8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c76d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
bool cond:0 = *(arg1 + 0x18) == 0
int32_t var_50 = arg3
int16_t var_44
int32_t var_30
int16_t var_2c
int32_t var_18
int16_t* eax_6
int32_t ebx

if (cond:0)
label_67e974:
    var_18 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, &data_ad7c90, nullptr)
    eax_6 = &var_2c
    int32_t var_8_2 = 1
    ebx = 2
else
    int32_t* var_4c
    sub_67f6a0(arg1 + 0x14, &var_4c, &var_50)
    int32_t* eax_4 = var_4c
    
    if (eax_4 == *(arg1 + 0x14))
        goto label_67e974
    
    void** eax_5 = eax_4[5]
    
    if (eax_5 == 0)
        goto label_67e974
    
    var_30 = 7
    var_44 = 0
    int32_t var_34_1 = 0
    sub_52e3c0(&var_44, eax_5, 0, 0xffffffff)
    eax_6 = &var_44
    int32_t var_8_1 = 0
    ebx = 1

arg2[5] = 7
arg2[4] = 0
*arg2 = 0
int32_t var_48_1 = ebx
sub_52e3c0(arg2, eax_6, 0, 0xffffffff)
int32_t ebx_1 = ebx | 4

if ((ebx_1.b & 2) != 0)
    ebx_1 &= 0xfffffffd
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_2 = 0
    var_2c = 0

if ((ebx_1.b & 1) != 0 && var_30 u>= 8)
    j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
