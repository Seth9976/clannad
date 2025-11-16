// 函数: sub_57cf40
// 地址: 0x57cf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b5035
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_48
int16_t var_30
int32_t var_1c
int16_t* ecx_1
int32_t ebx

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_1 = &var_30
    int32_t var_8_2 = 1
    ebx = 2
else
    *(arg3 + 0xc0)
    void* var_9c_1 = arg3
    ecx_1 = sub_6ad9b0(&var_48)
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_7c_1 = ebx
int32_t eax_7 = *(data_bac4e0 + 0x34)

if (eax_7 != 0)
    ecx_1 = eax_7(*(arg2 + 4), *arg4, *arg5, ecx_1, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_7c_2 = ebx
    
    if (var_1c u>= 8)
        ecx_1 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_2 = 0
    var_30 = 0

int32_t var_8_3 = 0xffffffff
int32_t var_34

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_7c_3 = ebx
    
    if (var_34 u>= 8)
        ecx_1 = j__free(var_48)

*arg6 += 1
int16_t* ecx_7
int32_t ebx_1

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_3 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_7 = &var_30
    int32_t var_8_5 = 3
    ebx_1 = ebx | 8
else
    *(arg3 + 0xec)
    int16_t* var_9c_5 = ecx_1
    ecx_7 = sub_6ad9b0(&var_48)
    int32_t var_8_4 = 2
    ebx_1 = ebx | 4

int32_t var_7c_4 = ebx_1
int32_t eax_10 = *(data_bac4e0 + 0x34)

if (eax_10 != 0)
    ecx_7 = eax_10(*(arg2 + 4), *arg4, *arg5, ecx_7, eax_2)

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_7c_5 = ebx_1
    
    if (var_1c u>= 8)
        ecx_7 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_4 = 0
    var_30 = 0

int32_t var_8_6 = 0xffffffff

if ((ebx_1.b & 4) != 0)
    ebx_1 &= 0xfffffffb
    int32_t var_7c_6 = ebx_1
    
    if (var_34 u>= 8)
        ecx_7 = j__free(var_48)

*arg6 += 1
int16_t* ecx_13
int32_t ebx_2

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_5 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_13 = &var_30
    int32_t var_8_8 = 5
    ebx_2 = ebx_1 | 0x20
else
    *(arg3 + 0x118)
    int16_t* var_9c_9 = ecx_7
    ecx_13 = sub_6ad9b0(&var_48)
    int32_t var_8_7 = 4
    ebx_2 = ebx_1 | 0x10

int32_t var_7c_7 = ebx_2
int32_t eax_13 = *(data_bac4e0 + 0x34)

if (eax_13 != 0)
    ecx_13 = eax_13(*(arg2 + 4), *arg4, *arg5, ecx_13, eax_2)

if ((ebx_2.b & 0x20) != 0)
    ebx_2 &= 0xffffffdf
    int32_t var_7c_8 = ebx_2
    
    if (var_1c u>= 8)
        ecx_13 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_6 = 0
    var_30 = 0

int32_t var_8_9 = 0xffffffff

if ((ebx_2.b & 0x10) != 0)
    ebx_2 &= 0xffffffef
    int32_t var_7c_9 = ebx_2
    
    if (var_34 u>= 8)
        ecx_13 = j__free(var_48)

*arg6 += 1
int16_t* ecx_19
int32_t ebx_3

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_7 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_19 = &var_30
    int32_t var_8_11 = 7
    ebx_3 = ebx_2 | 0x80
else
    *(arg3 + 0x144)
    int16_t* var_9c_13 = ecx_13
    ecx_19 = sub_6ad9b0(&var_48)
    int32_t var_8_10 = 6
    ebx_3 = ebx_2 | 0x40

int32_t var_7c_10 = ebx_3
int32_t eax_16 = *(data_bac4e0 + 0x34)

if (eax_16 != 0)
    ecx_19 = eax_16(*(arg2 + 4), *arg4, *arg5, ecx_19, eax_2)

if (ebx_3.b s< 0)
    ebx_3 &= 0xffffff7f
    int32_t var_7c_11 = ebx_3
    
    if (var_1c u>= 8)
        ecx_19 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_8 = 0
    var_30 = 0

int32_t var_8_12 = 0xffffffff

if ((ebx_3.b & 0x40) != 0)
    ebx_3 &= 0xffffffbf
    int32_t var_7c_12 = ebx_3
    
    if (var_34 u>= 8)
        ecx_19 = j__free(var_48)

*arg6 += 1
int16_t* ecx_25
int32_t ebx_4

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_9 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_25 = &var_30
    int32_t var_8_14 = 9
    ebx_4 = ebx_3 | 0x200
else
    *(arg3 + 0x170)
    int16_t* var_9c_17 = ecx_19
    ecx_25 = sub_6ad9b0(&var_48)
    int32_t var_8_13 = 8
    ebx_4 = ebx_3 | 0x100

int32_t var_7c_13 = ebx_4
int32_t eax_19 = *(data_bac4e0 + 0x34)

if (eax_19 != 0)
    ecx_25 = eax_19(*(arg2 + 4), *arg4, *arg5, ecx_25, eax_2)

if ((ebx_4 & 0x200) != 0)
    ebx_4 &= 0xfffffdff
    int32_t var_7c_14 = ebx_4
    
    if (var_1c u>= 8)
        ecx_25 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_10 = 0
    var_30 = 0

int32_t var_8_15 = 0xffffffff

if ((ebx_4 & 0x100) != 0)
    ebx_4 &= 0xfffffeff
    int32_t var_7c_15 = ebx_4
    
    if (var_34 u>= 8)
        ecx_25 = j__free(var_48)

*arg6 += 1
int16_t* ecx_31
int32_t ebx_5

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_11 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_31 = &var_30
    int32_t var_8_17 = 0xb
    ebx_5 = ebx_4 | 0x800
else
    *(arg3 + 0x19c)
    int16_t* var_9c_21 = ecx_25
    ecx_31 = sub_6ad9b0(&var_48)
    int32_t var_8_16 = 0xa
    ebx_5 = ebx_4 | 0x400

int32_t var_7c_16 = ebx_5
int32_t eax_22 = *(data_bac4e0 + 0x34)

if (eax_22 != 0)
    ecx_31 = eax_22(*(arg2 + 4), *arg4, *arg5, ecx_31, eax_2)

if ((ebx_5 & 0x800) != 0)
    ebx_5 &= 0xfffff7ff
    int32_t var_7c_17 = ebx_5
    
    if (var_1c u>= 8)
        ecx_31 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_12 = 0
    var_30 = 0

int32_t var_8_18 = 0xffffffff

if ((ebx_5 & 0x400) != 0)
    ebx_5 &= 0xfffffbff
    int32_t var_7c_18 = ebx_5
    
    if (var_34 u>= 8)
        ecx_31 = j__free(var_48)

*arg6 += 1
int16_t* ecx_37
int32_t ebx_6

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_13 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_37 = &var_30
    int32_t var_8_20 = 0xd
    ebx_6 = ebx_5 | 0x2000
else
    *(arg3 + 0x1c8)
    int16_t* var_9c_25 = ecx_31
    ecx_37 = sub_6ad9b0(&var_48)
    int32_t var_8_19 = 0xc
    ebx_6 = ebx_5 | 0x1000

int32_t var_7c_19 = ebx_6
int32_t eax_25 = *(data_bac4e0 + 0x34)

if (eax_25 != 0)
    ecx_37 = eax_25(*(arg2 + 4), *arg4, *arg5, ecx_37, eax_2)

if ((ebx_6 & 0x2000) != 0)
    ebx_6 &= 0xffffdfff
    int32_t var_7c_20 = ebx_6
    
    if (var_1c u>= 8)
        ecx_37 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_14 = 0
    var_30 = 0

int32_t var_8_21 = 0xffffffff

if ((ebx_6 & 0x1000) != 0)
    ebx_6 &= 0xffffefff
    int32_t var_7c_21 = ebx_6
    
    if (var_34 u>= 8)
        ecx_37 = j__free(var_48)

*arg6 += 1
int16_t* ecx_43
int32_t ebx_7

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_15 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_43 = &var_30
    int32_t var_8_23 = 0xf
    ebx_7 = ebx_6 | 0x8000
else
    *(arg3 + 0x1f4)
    int16_t* var_9c_29 = ecx_37
    ecx_43 = sub_6ad9b0(&var_48)
    int32_t var_8_22 = 0xe
    ebx_7 = ebx_6 | 0x4000

int32_t var_7c_22 = ebx_7
int32_t eax_28 = *(data_bac4e0 + 0x34)

if (eax_28 != 0)
    ecx_43 = eax_28(*(arg2 + 4), *arg4, *arg5, ecx_43, eax_2)

if ((ebx_7 & 0x8000) != 0)
    ebx_7 &= 0xffff7fff
    int32_t var_7c_23 = ebx_7
    
    if (var_1c u>= 8)
        ecx_43 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_16 = 0
    var_30 = 0

int32_t var_8_24 = 0xffffffff

if ((ebx_7 & 0x4000) != 0)
    ebx_7 &= 0xffffbfff
    int32_t var_7c_24 = ebx_7
    
    if (var_34 u>= 8)
        ecx_43 = j__free(var_48)

*arg6 += 1
int16_t* ecx_49
int32_t ebx_8

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_17 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_49 = &var_30
    int32_t var_8_26 = 0x11
    ebx_8 = ebx_7 | 0x20000
else
    *(arg3 + 0x220)
    int16_t* var_9c_33 = ecx_43
    ecx_49 = sub_6ad9b0(&var_48)
    int32_t var_8_25 = 0x10
    ebx_8 = ebx_7 | 0x10000

int32_t var_7c_25 = ebx_8
int32_t eax_31 = *(data_bac4e0 + 0x34)

if (eax_31 != 0)
    ecx_49 = eax_31(*(arg2 + 4), *arg4, *arg5, ecx_49, eax_2)

if ((ebx_8 & 0x20000) != 0)
    ebx_8 &= 0xfffdffff
    int32_t var_7c_26 = ebx_8
    
    if (var_1c u>= 8)
        ecx_49 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_18 = 0
    var_30 = 0

int32_t var_8_27 = 0xffffffff

if ((ebx_8 & 0x10000) != 0)
    ebx_8 &= 0xfffeffff
    int32_t var_7c_27 = ebx_8
    
    if (var_34 u>= 8)
        ecx_49 = j__free(var_48)

*arg6 += 1
int16_t* ecx_55
int32_t ebx_9

if (arg3 == 0)
    var_1c = 7
    int32_t var_20_19 = 0
    var_30 = 0
    sub_52e720(&var_30, &data_ad7c90, nullptr)
    ecx_55 = &var_30
    int32_t var_8_29 = 0x13
    ebx_9 = ebx_8 | 0x80000
else
    *(arg3 + 0x234)
    int16_t* var_9c_37 = ecx_49
    ecx_55 = sub_6ad9b0(&var_48)
    int32_t var_8_28 = 0x12
    ebx_9 = ebx_8 | 0x40000

int32_t var_7c_28 = ebx_9
int32_t eax_34 = *(data_bac4e0 + 0x34)

if (eax_34 != 0)
    ecx_55 = eax_34(*(arg2 + 4), *arg4, *arg5, ecx_55, eax_2)

if ((ebx_9 & 0x80000) != 0)
    ebx_9 &= 0xfff7ffff
    int32_t var_7c_29 = ebx_9
    
    if (var_1c u>= 8)
        ecx_55 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_20 = 0
    var_30 = 0

int32_t var_8_30 = 0xffffffff

if ((ebx_9 & 0x40000) != 0)
    ebx_9 &= 0xfffbffff
    int32_t var_7c_30 = ebx_9
    
    if (var_34 u>= 8)
        ecx_55 = j__free(var_48)

*arg6 += 1
int16_t* ecx_61
int32_t ebx_10

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_61 = &var_30
    int32_t var_8_32 = 0x15
    ebx_10 = ebx_9 | 0x200000
else
    *(arg3 + 0x250)
    int16_t* var_9c_41 = ecx_55
    ecx_61 = sub_6ad9b0(&var_48)
    int32_t var_8_31 = 0x14
    ebx_10 = ebx_9 | 0x100000

int32_t var_7c_31 = ebx_10
int32_t eax_37 = *(data_bac4e0 + 0x34)

if (eax_37 != 0)
    ecx_61 = eax_37(*(arg2 + 4), *arg4, *arg5, ecx_61, eax_2)

if ((ebx_10 & 0x200000) != 0)
    ebx_10 &= 0xffdfffff
    int32_t var_7c_32 = ebx_10
    
    if (var_1c u>= 8)
        ecx_61 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_21 = 0
    var_30 = 0

int32_t var_8_33 = 0xffffffff

if ((ebx_10 & 0x100000) != 0)
    ebx_10 &= 0xffefffff
    int32_t var_7c_33 = ebx_10
    
    if (var_34 u>= 8)
        ecx_61 = j__free(var_48)

*arg6 += 1
int16_t* ecx_67
int32_t ebx_11

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_67 = &var_30
    int32_t var_8_35 = 0x17
    ebx_11 = ebx_10 | 0x800000
else
    *(arg3 + 0x254)
    int16_t* var_9c_45 = ecx_61
    ecx_67 = sub_6ad9b0(&var_48)
    int32_t var_8_34 = 0x16
    ebx_11 = ebx_10 | &__dos_header

int32_t var_7c_34 = ebx_11
int32_t eax_40 = *(data_bac4e0 + 0x34)

if (eax_40 != 0)
    ecx_67 = eax_40(*(arg2 + 4), *arg4, *arg5, ecx_67, eax_2)

if ((ebx_11 & 0x800000) != 0)
    ebx_11 &= 0xff7fffff
    int32_t var_7c_35 = ebx_11
    
    if (var_1c u>= 8)
        ecx_67 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_22 = 0
    var_30 = 0

int32_t var_8_36 = 0xffffffff

if ((ebx_11 & &__dos_header) != 0)
    ebx_11 &= 0xffbfffff
    int32_t var_7c_36 = ebx_11
    
    if (var_34 u>= 8)
        ecx_67 = j__free(var_48)

*arg6 += 1
int16_t* ecx_73
int32_t ebx_12

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_73 = &var_30
    int32_t var_8_38 = 0x19
    ebx_12 = ebx_11 | &data_2000000
else
    *(arg3 + 0x258)
    int16_t* var_9c_49 = ecx_67
    ecx_73 = sub_6ad9b0(&var_48)
    int32_t var_8_37 = 0x18
    ebx_12 = ebx_11 | &data_1000000

int32_t var_7c_37 = ebx_12
int32_t eax_43 = *(data_bac4e0 + 0x34)

if (eax_43 != 0)
    ecx_73 = eax_43(*(arg2 + 4), *arg4, *arg5, ecx_73, eax_2)

if ((ebx_12 & &data_2000000) != 0)
    ebx_12 &= 0xfdffffff
    int32_t var_7c_38 = ebx_12
    
    if (var_1c u>= 8)
        ecx_73 = j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_23 = 0
    var_30 = 0

int32_t var_8_39 = 0xffffffff

if ((ebx_12 & &data_1000000) != 0)
    ebx_12 &= 0xfeffffff
    int32_t var_7c_39 = ebx_12
    
    if (var_34 u>= 8)
        ecx_73 = j__free(var_48)

*arg6 += 1
int32_t var_78
int16_t var_60
int16_t* ecx_79
int32_t ebx_13

if (arg3 == 0)
    sub_52e820(&var_60, &data_ad7c90)
    ecx_79 = &var_60
    int32_t var_8_41 = 0x1b
    ebx_13 = ebx_12 | 0x8000000
else
    *(arg3 + 0x25c)
    int16_t* var_9c_53 = ecx_73
    ecx_79 = sub_6ad9b0(&var_78)
    int32_t var_8_40 = 0x1a
    ebx_13 = ebx_12 | &data_4000000

int32_t var_7c_40 = ebx_13
int32_t result = *(data_bac4e0 + 0x34)

if (result != 0)
    result = result(*(arg2 + 4), *arg4, *arg5, ecx_79, eax_2)

if ((ebx_13 & 0x8000000) != 0)
    ebx_13 &= 0xf7ffffff
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    result = 0
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    var_60 = 0

int32_t var_64

if ((ebx_13 & &data_4000000) != 0 && var_64 u>= 8)
    result = j__free(var_78)

*arg6 += 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
