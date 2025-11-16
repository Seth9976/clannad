// 函数: sub_583580
// 地址: 0x583580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6d53
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg4
int32_t* edx = arg5
int32_t var_ac = 0
int32_t* var_b4 = ecx
int32_t* var_b0 = edx
int32_t var_64 = 7
int32_t var_68 = 0
int16_t var_78 = 0
int32_t var_8_1 = 0

if (arg3 != 0)
    int32_t eax_3 = sub_600e10(arg3)
    
    if (eax_3 != 1)
        int16_t* ecx_6
        
        if (eax_3 != 2)
            int32_t var_7c_1 = 7
            int32_t var_80_1 = 0
            int16_t var_90 = 0
            sub_52e720(&var_90, &data_ad7c90, nullptr)
            var_8_1.b = 3
            sub_52e3c0(&var_78, &var_90, 0, 0xffffffff)
            ecx_6 = &var_90
        else
            int32_t var_94_1 = 7
            int32_t var_98_1 = 0
            int16_t var_a8 = 0
            sub_52e720(&var_a8, 0xaef548, 8)
            var_8_1.b = 2
            sub_52e3c0(&var_78, &var_a8, 0, 0xffffffff)
            ecx_6 = &var_a8
        
        var_8_1.b = 0
        sub_52e8a0(ecx_6)
    else
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        int16_t var_60 = 0
        sub_52e720(&var_60, 0xaef588, 2)
        var_8_1.b = 1
        sub_52e3c0(&var_78, &var_60, 0, 0xffffffff)
        var_8_1.b = 0
        
        if (var_4c_1 u>= 8)
            j__free(var_60.d)
        
        int32_t var_4c_2 = 7
        int32_t var_50_2 = 0
        var_60 = 0
    
    ecx = var_b4
    edx = var_b0

int32_t eax_5 = *(data_bac4e0 + 0x34)

if (eax_5 != 0)
    ecx = eax_5(*(arg2 + 4), *ecx, *edx, &var_78, eax_2)

*arg6 += 1
int32_t var_48
int16_t var_30
int32_t var_1c
int16_t* ecx_10
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_10 = &var_30
    int32_t var_8_2 = 5
    ebx_2 = 2
else
    *(arg3 + 0xac)
    int32_t* var_cc_3 = ecx
    ecx_10 = sub_6ad9b0(&var_48)
    var_8_1.b = 4
    ebx_2 = 1

int32_t var_ac_1 = ebx_2
int32_t eax_8 = *(data_bac4e0 + 0x34)

if (eax_8 != 0)
    ecx_10 = eax_8(*(arg2 + 4), *var_b4, *var_b0, ecx_10, eax_2)

if ((ebx_2.b & 2) != 0)
    ebx_2 &= 0xfffffffd
    int32_t var_ac_2 = ebx_2
    
    if (var_1c u>= 8)
        ecx_10 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0
int32_t var_34

if ((ebx_2.b & 1) != 0)
    ebx_2 &= 0xfffffffe
    int32_t var_ac_3 = ebx_2
    
    if (var_34 u>= 8)
        ecx_10 = j__free(var_48)

*arg6 += 1
int16_t* ecx_16
int32_t ebx_3

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_16 = &var_30
    int32_t var_8_4 = 7
    ebx_3 = ebx_2 | 8
else
    *(arg3 + 0xb0)
    int16_t* var_cc_7 = ecx_10
    ecx_16 = sub_6ad9b0(&var_48)
    var_8_3.b = 6
    ebx_3 = ebx_2 | 4

int32_t var_ac_4 = ebx_3
int32_t eax_11 = *(data_bac4e0 + 0x34)

if (eax_11 != 0)
    eax_11(*(arg2 + 4), *var_b4, *var_b0, ecx_16, eax_2)

if ((ebx_3.b & 8) != 0)
    ebx_3 &= 0xfffffff7
    int32_t var_ac_5 = ebx_3
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_4 = 0
    var_30 = 0

int32_t var_8_5 = 0

if ((ebx_3.b & 4) != 0)
    ebx_3 &= 0xfffffffb
    int32_t var_ac_6 = ebx_3
    
    if (var_34 u>= 8)
        j__free(var_48)

*arg6 += 1
int16_t* ecx_22
int32_t ebx_4

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_5 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_22 = &var_30
    int32_t var_8_6 = 9
    ebx_4 = ebx_3 | 0x20
else
    eax_11.b = *(arg3 + 0xb8)
    wchar16 const* const edx_3 = u"exkoe"
    
    if (eax_11.b == 0)
        edx_3 = &data_aef59c
    
    ecx_22 = sub_6adbb0(&var_48, edx_3)
    var_8_5.b = 8
    ebx_4 = ebx_3 | 0x10

int32_t var_ac_7 = ebx_4
int32_t eax_14 = *(data_bac4e0 + 0x34)

if (eax_14 != 0)
    ecx_22 = eax_14(*(arg2 + 4), *var_b4, *var_b0, ecx_22, eax_2)

if ((ebx_4.b & 0x20) != 0)
    ebx_4 &= 0xffffffdf
    int32_t var_ac_8 = ebx_4
    
    if (var_1c u>= 8)
        ecx_22 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_6 = 0
    var_30 = 0

int32_t var_8_7 = 0

if ((ebx_4.b & 0x10) != 0)
    ebx_4 &= 0xffffffef
    int32_t var_ac_9 = ebx_4
    
    if (var_34 u>= 8)
        ecx_22 = j__free(var_48)

*arg6 += 1
int16_t* ecx_28
int32_t ebx_5

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_7 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_28 = &var_30
    int32_t var_8_8 = 0xb
    ebx_5 = ebx_4 | 0x80
else
    *(arg3 + 0xb4)
    int16_t* var_cc_14 = ecx_22
    ecx_28 = sub_6ad9b0(&var_48)
    var_8_7.b = 0xa
    ebx_5 = ebx_4 | 0x40

int32_t var_ac_10 = ebx_5
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *var_b4, *var_b0, ecx_28, eax_2)

if (ebx_5.b s< 0)
    ebx_5 &= 0xffffff7f
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_8 = 0
    var_30 = 0

if ((ebx_5.b & 0x40) != 0 && var_34 u>= 8)
    result = j__free(var_48)

*arg6 += 1

if (var_64 u>= 8)
    result = j__free(var_78.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
