// 函数: sub_584920
// 地址: 0x584920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b70ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg4
int32_t* edx = arg5
int32_t var_b4 = 0
int32_t* var_b0 = ecx
int32_t* var_ac = edx
int32_t var_64 = 7
int32_t var_68 = 0
int16_t var_78 = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    int32_t eax_3 = sub_5cb350(arg3)
    
    if (eax_3 == 2 || eax_3 == 3)
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        int16_t var_48 = 0
        sub_52e720(&var_48, 0xaef588, 2)
        var_8_1.b = 1
        sub_52e3c0(&var_78, &var_48, 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_34_1 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        var_48 = 0
    else
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, &data_ad7c90, nullptr)
        var_8_1.b = 2
        sub_52e3c0(&var_78, &var_30, 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        var_30 = 0
    
    edx = var_ac
    ecx = var_b0

int32_t eax_5 = *(data_bac4e0 + 0x34)

if (eax_5 != 0)
    eax_5(*(arg2 + 4), *ecx, *edx, &var_78, eax_2)

*arg6 += 1
int32_t var_a8
int16_t var_90
int16_t var_60
int32_t var_4c
int16_t* ecx_8
int32_t ebx_2

if (arg3 == 0)
    var_4c = 7
    int32_t var_50_1 = 0
    var_60 = 0
    sub_52e720(&var_60, &data_ad7c90, nullptr)
    ecx_8 = &var_60
    int32_t var_8_3 = 5
    ebx_2 = 4
else
    var_8_1.b = 3
    int32_t var_b4_1 = 1
    ecx_8 = sub_6adbd0(&var_90, sub_57a7c0(arg3, &var_a8))
    int32_t var_8_2 = 4
    ebx_2 = 3

int32_t var_b4_2 = ebx_2
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *var_b0, *var_ac, ecx_8, eax_2)

if ((ebx_2.b & 4) != 0)
    ebx_2 &= 0xfffffffb
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    result = 0
    int32_t var_4c_1 = 7
    int32_t var_50_2 = 0
    var_60 = 0

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_7c
    
    if (var_7c u>= 8)
        j__free(var_90.d)
    
    result = 0
    int32_t var_7c_1 = 7
    int32_t var_80_1 = 0
    var_90 = 0

int32_t var_94

if ((ebx_2.b & 1) != 0 && var_94 u>= 8)
    result = j__free(var_a8)

*arg6 += 1

if (var_64 u>= 8)
    result = j__free(var_78.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
