// 函数: sub_57dfa0
// 地址: 0x57dfa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b6390
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_188 = 0
int32_t var_180 = 0
int32_t var_18c = 0
int32_t var_184 = 0
int32_t var_194 = 0
void* const var_1b0
int16_t var_48
int32_t var_34
int16_t var_30
int16_t* ecx_1
int32_t ebx

if (arg3 == 0)
    var_34 = 7
    var_1b0 = &data_ad7c90
    int32_t var_38_1 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_1 = &var_48
    int32_t var_8_2 = 1
    ebx = 2
else
    ecx_1 = sub_57a590(&var_30, *(arg3 + 0x1ac))
    int32_t var_8_1 = 0
    ebx = 1

int32_t var_188_1 = ebx
int32_t edx_3 = *(data_bac4e0 + 0x34)
int32_t var_1b4

if (edx_3 != 0)
    var_1b0 = *arg7
    var_1b4 = *arg6
    edx_3 = edx_3(*(arg2 + 4), var_1b4, var_1b0, ecx_1, eax_2)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_188_2 = ebx
    
    if (var_34 u>= 8)
        edx_3 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_2 = 0
    var_48 = 0

int32_t var_1c

if ((ebx.b & 1) != 0)
    ebx &= 0xfffffffe
    int32_t var_188_3 = ebx
    
    if (var_1c u>= 8)
        edx_3 = j__free(var_30.d)
    
    var_1c = 7
    int32_t var_20_1 = 0
    var_30 = 0

*arg8 += 1
int32_t var_7c = 7
int32_t var_80 = 0
int16_t var_90 = 0
int32_t var_8_3 = 2
void var_78
void var_60

if (arg3 != 0)
    int32_t eax_11 = *(arg3 + 0x1ac) - 1
    
    switch (eax_11)
        case 0
            void var_120
            int16_t* eax_12
            int32_t edx_4
            eax_12, edx_4 =
                sub_6ae130(eax_11, edx_3.b, &var_120, (*(arg3 + 0x1cc)).b, eax_2.b, arg5.b, arg4.b)
            var_8_3.b = 3
            int32_t var_1b8
            var_1b8.o = *(arg3 + 0x1bc)
            void var_a8
            void** eax_14 = sub_6adde0(arg3, edx_4, &var_a8, var_1b8, var_1b4, var_1b0)
            var_8_3.b = 4
            void var_f0
            void** eax_15 = sub_532b80(eax_14, eax_14, &var_f0, 0xaef4d4)
            var_8_3.b = 5
            void var_168
            int16_t* eax_16 = sub_5327a0(eax_15, eax_15, &var_168, eax_12)
            var_8_3.b = 6
            
            if (&var_90 != eax_16)
                sub_52e3c0(&var_90, eax_16, 0, 0xffffffff)
            
            sub_52e8a0(&var_168)
            sub_52e8a0(&var_f0)
            sub_52e8a0(&var_a8)
            var_8_3.b = 2
            sub_52e8a0(&var_120)
        case 1
            void var_c0
            int16_t* eax_17 = sub_553a60(arg3, &var_c0)
            var_8_3.b = 7
            
            if (&var_90 != eax_17)
                sub_52e3c0(&var_90, eax_17, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_c0)
        case 2
            void var_d8
            int16_t* eax_18 = sub_553ad0(arg3, &var_d8)
            var_8_3.b = 8
            
            if (&var_90 != eax_18)
                sub_52e3c0(&var_90, eax_18, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_d8)
        case 3
            void var_138
            int16_t* eax_20 = sub_553a60(arg3, &var_138)
            var_8_3.b = 0xa
            
            if (&var_90 != eax_20)
                sub_52e3c0(&var_90, eax_20, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_138)
        case 4
            void var_108
            int16_t* eax_19 = sub_553a60(arg3, &var_108)
            var_8_3.b = 9
            
            if (&var_90 != eax_19)
                sub_52e3c0(&var_90, eax_19, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_108)
        case 5
            int16_t* eax_22 = sub_553a60(arg3, &var_78)
            var_8_3.b = 0xc
            
            if (&var_90 != eax_22)
                sub_52e3c0(&var_90, eax_22, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_78)
        case 8
            void var_150
            int16_t* eax_21 = sub_553a60(arg3, &var_150)
            var_8_3.b = 0xb
            
            if (&var_90 != eax_21)
                sub_52e3c0(&var_90, eax_21, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_150)
        case 0xb
            int16_t* eax_23 = sub_553a60(arg3, &var_60)
            var_8_3.b = 0xd
            
            if (&var_90 != eax_23)
                sub_52e3c0(&var_90, eax_23, 0, 0xffffffff)
            
            var_8_3.b = 2
            sub_52e8a0(&var_60)

int32_t ecx_28 = *(data_bac4e0 + 0x34)

if (ecx_28 != 0)
    ecx_28(*(arg2 + 4), *arg6, *arg7, &var_90, eax_2)

*arg8 += 1
int16_t* edx_12
int32_t ebx_1

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_3 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    edx_12 = &var_48
    int32_t var_8_4 = 0xf
    ebx_1 = ebx | 8
else
    int32_t var_1ac_14 = *(arg3 + 0x1438) - *(arg3 + 0x1434)
    edx_12 = sub_6ad9b0(&var_30)
    var_8_3.b = 0xe
    ebx_1 = ebx | 4

int32_t var_188_4 = ebx_1
int32_t ecx_35 = *(data_bac4e0 + 0x34)

if (ecx_35 != 0)
    ecx_35 = ecx_35(*(arg2 + 4), *arg6, *arg7, edx_12, eax_2, arg5, arg4)

if ((ebx_1.b & 8) != 0)
    ebx_1 &= 0xfffffff7
    int32_t var_188_5 = ebx_1
    
    if (var_34 u>= 8)
        ecx_35 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_4 = 0
    var_48 = 0

int32_t var_8_5 = 2

if ((ebx_1.b & 4) != 0)
    ebx_1 &= 0xfffffffb
    int32_t var_188_6 = ebx_1
    
    if (var_1c u>= 8)
        ecx_35 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_37
int32_t ebx_2

if (arg3 == 0)
    var_34 = 7
    int32_t var_38_5 = 0
    var_48 = 0
    sub_52e720(&var_48, &data_ad7c90, nullptr)
    ecx_37 = &var_48
    int32_t var_8_6 = 0x11
    ebx_2 = ebx_1 | 0x20
else
    *(arg3 + 0x35c)
    int32_t var_1ac_18 = ecx_35
    ecx_37 = sub_6ad9b0(&var_30)
    var_8_5.b = 0x10
    ebx_2 = ebx_1 | 0x10

int32_t var_188_7 = ebx_2
int32_t edx_16 = *(data_bac4e0 + 0x34)

if (edx_16 != 0)
    ecx_37 = edx_16(*(arg2 + 4), *arg6, *arg7, ecx_37, eax_2, arg5, arg4)

if ((ebx_2.b & 0x20) != 0)
    ebx_2 &= 0xffffffdf
    int32_t var_188_8 = ebx_2
    
    if (var_34 u>= 8)
        ecx_37 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_6 = 0
    var_48 = 0

int32_t var_8_7 = 2

if ((ebx_2.b & 0x10) != 0)
    ebx_2 &= 0xffffffef
    int32_t var_188_9 = ebx_2
    
    if (var_1c u>= 8)
        ecx_37 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_40
int32_t ebx_3

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_40 = &var_48
    int32_t var_8_8 = 0x13
    ebx_3 = ebx_2 | 0x80
else
    *(arg3 + 0x378)
    int16_t* var_1ac_22 = ecx_37
    ecx_40 = sub_6ad9b0(&var_30)
    var_8_7.b = 0x12
    ebx_3 = ebx_2 | 0x40

int32_t var_188_10 = ebx_3
int32_t edx_20 = *(data_bac4e0 + 0x34)

if (edx_20 != 0)
    ecx_40 = edx_20(*(arg2 + 4), *arg6, *arg7, ecx_40, eax_2, arg5, arg4)

if (ebx_3.b s< 0)
    ebx_3 &= 0xffffff7f
    int32_t var_188_11 = ebx_3
    
    if (var_34 u>= 8)
        ecx_40 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_7 = 0
    var_48 = 0

int32_t var_8_9 = 2

if ((ebx_3.b & 0x40) != 0)
    ebx_3 &= 0xffffffbf
    int32_t var_188_12 = ebx_3
    
    if (var_1c u>= 8)
        ecx_40 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_43
int32_t ebx_4

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_43 = &var_48
    int32_t var_8_10 = 0x15
    ebx_4 = ebx_3 | 0x200
else
    *(arg3 + 0x38c)
    int16_t* var_1ac_26 = ecx_40
    ecx_43 = sub_6ad9b0(&var_30)
    var_8_9.b = 0x14
    ebx_4 = ebx_3 | 0x100

int32_t var_188_13 = ebx_4
int32_t edx_24 = *(data_bac4e0 + 0x34)

if (edx_24 != 0)
    ecx_43 = edx_24(*(arg2 + 4), *arg6, *arg7, ecx_43, eax_2, arg5, arg4)

if ((ebx_4 & 0x200) != 0)
    ebx_4 &= 0xfffffdff
    int32_t var_188_14 = ebx_4
    
    if (var_34 u>= 8)
        ecx_43 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_8 = 0
    var_48 = 0

int32_t var_8_11 = 2

if ((ebx_4 & 0x100) != 0)
    ebx_4 &= 0xfffffeff
    int32_t var_188_15 = ebx_4
    
    if (var_1c u>= 8)
        ecx_43 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_46
int32_t ebx_5

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_46 = &var_48
    int32_t var_8_12 = 0x17
    ebx_5 = ebx_4 | 0x800
else
    *(arg3 + 0x390)
    int16_t* var_1ac_30 = ecx_43
    ecx_46 = sub_6ad9b0(&var_30)
    var_8_11.b = 0x16
    ebx_5 = ebx_4 | 0x400

int32_t var_188_16 = ebx_5
int32_t edx_28 = *(data_bac4e0 + 0x34)

if (edx_28 != 0)
    ecx_46 = edx_28(*(arg2 + 4), *arg6, *arg7, ecx_46, eax_2, arg5, arg4)

if ((ebx_5 & 0x800) != 0)
    ebx_5 &= 0xfffff7ff
    int32_t var_188_17 = ebx_5
    
    if (var_34 u>= 8)
        ecx_46 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_9 = 0
    var_48 = 0

int32_t var_8_13 = 2

if ((ebx_5 & 0x400) != 0)
    ebx_5 &= 0xfffffbff
    int32_t var_188_18 = ebx_5
    
    if (var_1c u>= 8)
        ecx_46 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_49
int32_t ebx_6

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_49 = &var_48
    int32_t var_8_14 = 0x19
    ebx_6 = ebx_5 | 0x2000
else
    *(arg3 + 0x394)
    int16_t* var_1ac_34 = ecx_46
    ecx_49 = sub_6ad9b0(&var_30)
    var_8_13.b = 0x18
    ebx_6 = ebx_5 | 0x1000

int32_t var_188_19 = ebx_6
int32_t edx_32 = *(data_bac4e0 + 0x34)

if (edx_32 != 0)
    ecx_49 = edx_32(*(arg2 + 4), *arg6, *arg7, ecx_49, eax_2, arg5, arg4)

if ((ebx_6 & 0x2000) != 0)
    ebx_6 &= 0xffffdfff
    int32_t var_188_20 = ebx_6
    
    if (var_34 u>= 8)
        ecx_49 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_10 = 0
    var_48 = 0

int32_t var_8_15 = 2

if ((ebx_6 & 0x1000) != 0)
    ebx_6 &= 0xffffefff
    int32_t var_188_21 = ebx_6
    
    if (var_1c u>= 8)
        ecx_49 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_52
int32_t ebx_7

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_52 = &var_48
    int32_t var_8_16 = 0x1b
    ebx_7 = ebx_6 | 0x8000
else
    *(arg3 + 0x3b4)
    int16_t* var_1ac_38 = ecx_49
    ecx_52 = sub_6ad9b0(&var_30)
    var_8_15.b = 0x1a
    ebx_7 = ebx_6 | 0x4000

int32_t var_188_22 = ebx_7
int32_t edx_36 = *(data_bac4e0 + 0x34)

if (edx_36 != 0)
    ecx_52 = edx_36(*(arg2 + 4), *arg6, *arg7, ecx_52, eax_2, arg5, arg4)

if ((ebx_7 & 0x8000) != 0)
    ebx_7 &= 0xffff7fff
    int32_t var_188_23 = ebx_7
    
    if (var_34 u>= 8)
        ecx_52 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_11 = 0
    var_48 = 0

int32_t var_8_17 = 2

if ((ebx_7 & 0x4000) != 0)
    ebx_7 &= 0xffffbfff
    int32_t var_188_24 = ebx_7
    
    if (var_1c u>= 8)
        ecx_52 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_55
int32_t ebx_8

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_55 = &var_48
    int32_t var_8_18 = 0x1d
    ebx_8 = ebx_7 | 0x20000
else
    *(arg3 + 0x3e0)
    int16_t* var_1ac_42 = ecx_52
    ecx_55 = sub_6ad9b0(&var_30)
    var_8_17.b = 0x1c
    ebx_8 = ebx_7 | 0x10000

int32_t var_188_25 = ebx_8
int32_t edx_40 = *(data_bac4e0 + 0x34)

if (edx_40 != 0)
    ecx_55 = edx_40(*(arg2 + 4), *arg6, *arg7, ecx_55, eax_2, arg5, arg4)

if ((ebx_8 & 0x20000) != 0)
    ebx_8 &= 0xfffdffff
    int32_t var_188_26 = ebx_8
    
    if (var_34 u>= 8)
        ecx_55 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_12 = 0
    var_48 = 0

int32_t var_8_19 = 2

if ((ebx_8 & 0x10000) != 0)
    ebx_8 &= 0xfffeffff
    int32_t var_188_27 = ebx_8
    
    if (var_1c u>= 8)
        ecx_55 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_58
int32_t ebx_9

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_58 = &var_48
    int32_t var_8_20 = 0x1f
    ebx_9 = ebx_8 | 0x80000
else
    *(arg3 + 0x40c)
    int16_t* var_1ac_46 = ecx_55
    ecx_58 = sub_6ad9b0(&var_30)
    var_8_19.b = 0x1e
    ebx_9 = ebx_8 | 0x40000

int32_t var_188_28 = ebx_9
int32_t edx_44 = *(data_bac4e0 + 0x34)

if (edx_44 != 0)
    ecx_58 = edx_44(*(arg2 + 4), *arg6, *arg7, ecx_58, eax_2, arg5, arg4)

if ((ebx_9 & 0x80000) != 0)
    ebx_9 &= 0xfff7ffff
    int32_t var_188_29 = ebx_9
    
    if (var_34 u>= 8)
        ecx_58 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_13 = 0
    var_48 = 0

int32_t var_8_21 = 2

if ((ebx_9 & 0x40000) != 0)
    ebx_9 &= 0xfffbffff
    int32_t var_188_30 = ebx_9
    
    if (var_1c u>= 8)
        ecx_58 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_61
int32_t ebx_10

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_61 = &var_48
    int32_t var_8_22 = 0x21
    ebx_10 = ebx_9 | 0x200000
else
    *(arg3 + 0x438)
    int16_t* var_1ac_50 = ecx_58
    ecx_61 = sub_6ad9b0(&var_30)
    var_8_21.b = 0x20
    ebx_10 = ebx_9 | 0x100000

int32_t var_188_31 = ebx_10
int32_t edx_48 = *(data_bac4e0 + 0x34)

if (edx_48 != 0)
    ecx_61 = edx_48(*(arg2 + 4), *arg6, *arg7, ecx_61, eax_2, arg5, arg4)

if ((ebx_10 & 0x200000) != 0)
    ebx_10 &= 0xffdfffff
    int32_t var_188_32 = ebx_10
    
    if (var_34 u>= 8)
        ecx_61 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_14 = 0
    var_48 = 0

int32_t var_8_23 = 2

if ((ebx_10 & 0x100000) != 0)
    ebx_10 &= 0xffefffff
    int32_t var_188_33 = ebx_10
    
    if (var_1c u>= 8)
        ecx_61 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_64
int32_t ebx_11

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_64 = &var_48
    int32_t var_8_24 = 0x23
    ebx_11 = ebx_10 | 0x800000
else
    *(arg3 + 0x464)
    int16_t* var_1ac_54 = ecx_61
    ecx_64 = sub_6ad9b0(&var_30)
    var_8_23.b = 0x22
    ebx_11 = ebx_10 | &__dos_header

int32_t var_188_34 = ebx_11
int32_t edx_52 = *(data_bac4e0 + 0x34)

if (edx_52 != 0)
    ecx_64 = edx_52(*(arg2 + 4), *arg6, *arg7, ecx_64, eax_2, arg5, arg4)

if ((ebx_11 & 0x800000) != 0)
    ebx_11 &= 0xff7fffff
    int32_t var_188_35 = ebx_11
    
    if (var_34 u>= 8)
        ecx_64 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_15 = 0
    var_48 = 0

int32_t var_8_25 = 2

if ((ebx_11 & &__dos_header) != 0)
    ebx_11 &= 0xffbfffff
    int32_t var_188_36 = ebx_11
    
    if (var_1c u>= 8)
        ecx_64 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_67
int32_t ebx_12

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_67 = &var_48
    int32_t var_8_26 = 0x25
    ebx_12 = ebx_11 | &data_2000000
else
    *(arg3 + 0x490)
    int16_t* var_1ac_58 = ecx_64
    ecx_67 = sub_6ad9b0(&var_30)
    var_8_25.b = 0x24
    ebx_12 = ebx_11 | &data_1000000

int32_t var_188_37 = ebx_12
int32_t edx_56 = *(data_bac4e0 + 0x34)

if (edx_56 != 0)
    ecx_67 = edx_56(*(arg2 + 4), *arg6, *arg7, ecx_67, eax_2, arg5, arg4)

if ((ebx_12 & &data_2000000) != 0)
    ebx_12 &= 0xfdffffff
    int32_t var_188_38 = ebx_12
    
    if (var_34 u>= 8)
        ecx_67 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_16 = 0
    var_48 = 0

int32_t var_8_27 = 2

if ((ebx_12 & &data_1000000) != 0)
    ebx_12 &= 0xfeffffff
    int32_t var_188_39 = ebx_12
    
    if (var_1c u>= 8)
        ecx_67 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_70
int32_t ebx_13

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_70 = &var_48
    int32_t var_8_28 = 0x27
    ebx_13 = ebx_12 | 0x8000000
else
    *(arg3 + 0x4bc)
    int16_t* var_1ac_62 = ecx_67
    ecx_70 = sub_6ad9b0(&var_30)
    var_8_27.b = 0x26
    ebx_13 = ebx_12 | &data_4000000

int32_t var_188_40 = ebx_13
int32_t edx_60 = *(data_bac4e0 + 0x34)

if (edx_60 != 0)
    ecx_70 = edx_60(*(arg2 + 4), *arg6, *arg7, ecx_70, eax_2, arg5, arg4)

if ((ebx_13 & 0x8000000) != 0)
    ebx_13 &= 0xf7ffffff
    int32_t var_188_41 = ebx_13
    
    if (var_34 u>= 8)
        ecx_70 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_17 = 0
    var_48 = 0

int32_t var_8_29 = 2

if ((ebx_13 & &data_4000000) != 0)
    ebx_13 &= 0xfbffffff
    int32_t var_188_42 = ebx_13
    
    if (var_1c u>= 8)
        ecx_70 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_73
int32_t ebx_14

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_73 = &var_48
    int32_t var_8_30 = 0x29
    ebx_14 = ebx_13 | 0x20000000
else
    *(arg3 + 0x4e8)
    int16_t* var_1ac_66 = ecx_70
    ecx_73 = sub_6ad9b0(&var_30)
    var_8_29.b = 0x28
    ebx_14 = ebx_13 | 0x10000000

int32_t var_188_43 = ebx_14
int32_t edx_64 = *(data_bac4e0 + 0x34)

if (edx_64 != 0)
    ecx_73 = edx_64(*(arg2 + 4), *arg6, *arg7, ecx_73, eax_2, arg5, arg4)

if ((ebx_14 & 0x20000000) != 0)
    ebx_14 &= 0xdfffffff
    int32_t var_188_44 = ebx_14
    
    if (var_34 u>= 8)
        ecx_73 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_18 = 0
    var_48 = 0

int32_t var_8_31 = 2

if ((ebx_14 & 0x10000000) != 0)
    ebx_14 &= 0xefffffff
    int32_t var_188_45 = ebx_14
    
    if (var_1c u>= 8)
        ecx_73 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_76
int32_t ebx_15

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_76 = &var_48
    int32_t var_8_32 = 0x2b
    ebx_15 = ebx_14 | 0x80000000
else
    *(arg3 + 0x514)
    int16_t* var_1ac_70 = ecx_73
    ecx_76 = sub_6ad9b0(&var_30)
    var_8_31.b = 0x2a
    ebx_15 = ebx_14 | 0x40000000

int32_t var_188_46 = ebx_15
int32_t edx_68 = *(data_bac4e0 + 0x34)

if (edx_68 != 0)
    ecx_76 = edx_68(*(arg2 + 4), *arg6, *arg7, ecx_76, eax_2, arg5, arg4)

if (ebx_15 s< 0)
    ebx_15 &= 0x7fffffff
    
    if (var_34 u>= 8)
        ecx_76 = j__free(var_48.d)
    
    var_34 = 7
    int32_t var_38_19 = 0
    var_48 = 0

int32_t var_8_33 = 2

if ((ebx_15 & 0x40000000) != 0 && var_1c u>= 8)
    ecx_76 = j__free(var_30.d)

*arg8 += 1
int16_t* ecx_79
int32_t ebx_16

if (arg3 == 0)
    sub_52e820(&var_48, &data_ad7c90)
    ecx_79 = &var_48
    int32_t var_8_34 = 0x2d
    ebx_16 = 2
else
    *(arg3 + 0x540)
    int16_t* var_1ac_74 = ecx_76
    ecx_79 = sub_6ad9b0(&var_60)
    var_8_33.b = 0x2c
    ebx_16 = 1

int32_t var_180_1 = ebx_16
int32_t edx_72 = *(data_bac4e0 + 0x34)

if (edx_72 != 0)
    ecx_79 = edx_72(*(arg2 + 4), *arg6, *arg7, ecx_79, eax_2, arg5, arg4)

if ((ebx_16.b & 2) != 0)
    ebx_16 &= 0xfffffffd
    int32_t var_180_2 = ebx_16
    
    if (var_34 u>= 8)
        ecx_79 = j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_20 = 0
    var_48 = 0

int32_t var_8_35 = 2

if ((ebx_16.b & 1) != 0)
    ebx_16 &= 0xfffffffe
    int32_t var_180_3 = ebx_16
    ecx_79 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_83
int32_t ebx_17

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_83 = &var_30
    int32_t var_8_36 = 0x2f
    ebx_17 = ebx_16 | 8
else
    *(arg3 + 0x56c)
    int16_t* var_1ac_77 = ecx_79
    ecx_83 = sub_6ad9b0(&var_60)
    var_8_35.b = 0x2e
    ebx_17 = ebx_16 | 4

int32_t var_180_4 = ebx_17
int32_t edx_76 = *(data_bac4e0 + 0x34)

if (edx_76 != 0)
    ecx_83 = edx_76(*(arg2 + 4), *arg6, *arg7, ecx_83, eax_2, arg5, arg4)

if ((ebx_17.b & 8) != 0)
    ebx_17 &= 0xfffffff7
    int32_t var_180_5 = ebx_17
    ecx_83 = sub_52e8a0(&var_30)

int32_t var_8_37 = 2

if ((ebx_17.b & 4) != 0)
    ebx_17 &= 0xfffffffb
    int32_t var_180_6 = ebx_17
    ecx_83 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_88
int32_t ebx_18

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_88 = &var_30
    int32_t var_8_38 = 0x31
    ebx_18 = ebx_17 | 0x20
else
    *(arg3 + 0x598)
    int16_t* var_1ac_79 = ecx_83
    ecx_88 = sub_6ad9b0(&var_60)
    var_8_37.b = 0x30
    ebx_18 = ebx_17 | 0x10

int32_t var_180_7 = ebx_18
int32_t edx_80 = *(data_bac4e0 + 0x34)

if (edx_80 != 0)
    ecx_88 = edx_80(*(arg2 + 4), *arg6, *arg7, ecx_88, eax_2, arg5, arg4)

if ((ebx_18.b & 0x20) != 0)
    ebx_18 &= 0xffffffdf
    int32_t var_180_8 = ebx_18
    ecx_88 = sub_52e8a0(&var_30)

int32_t var_8_39 = 2

if ((ebx_18.b & 0x10) != 0)
    ebx_18 &= 0xffffffef
    int32_t var_180_9 = ebx_18
    ecx_88 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_93
int32_t ebx_19

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_93 = &var_30
    int32_t var_8_40 = 0x33
    ebx_19 = ebx_18 | 0x80
else
    *(arg3 + 0x5c4)
    int16_t* var_1ac_81 = ecx_88
    ecx_93 = sub_6ad9b0(&var_60)
    var_8_39.b = 0x32
    ebx_19 = ebx_18 | 0x40

int32_t var_180_10 = ebx_19
int32_t edx_84 = *(data_bac4e0 + 0x34)

if (edx_84 != 0)
    ecx_93 = edx_84(*(arg2 + 4), *arg6, *arg7, ecx_93, eax_2, arg5, arg4)

if (ebx_19.b s< 0)
    ebx_19 &= 0xffffff7f
    int32_t var_180_11 = ebx_19
    ecx_93 = sub_52e8a0(&var_30)

int32_t var_8_41 = 2

if ((ebx_19.b & 0x40) != 0)
    ebx_19 &= 0xffffffbf
    int32_t var_180_12 = ebx_19
    ecx_93 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_98
int32_t ebx_20

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_98 = &var_30
    int32_t var_8_42 = 0x35
    ebx_20 = ebx_19 | 0x200
else
    *(arg3 + 0x5f0)
    int16_t* var_1ac_83 = ecx_93
    ecx_98 = sub_6ad9b0(&var_60)
    var_8_41.b = 0x34
    ebx_20 = ebx_19 | 0x100

int32_t var_180_13 = ebx_20
int32_t edx_88 = *(data_bac4e0 + 0x34)

if (edx_88 != 0)
    ecx_98 = edx_88(*(arg2 + 4), *arg6, *arg7, ecx_98, eax_2, arg5, arg4)

if ((ebx_20 & 0x200) != 0)
    ebx_20 &= 0xfffffdff
    int32_t var_180_14 = ebx_20
    ecx_98 = sub_52e8a0(&var_30)

int32_t var_8_43 = 2

if ((ebx_20 & 0x100) != 0)
    ebx_20 &= 0xfffffeff
    int32_t var_180_15 = ebx_20
    ecx_98 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_103
int32_t ebx_21

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_103 = &var_30
    int32_t var_8_44 = 0x37
    ebx_21 = ebx_20 | 0x800
else
    *(arg3 + 0x61c)
    int16_t* var_1ac_85 = ecx_98
    ecx_103 = sub_6ad9b0(&var_60)
    var_8_43.b = 0x36
    ebx_21 = ebx_20 | 0x400

int32_t var_180_16 = ebx_21
int32_t edx_92 = *(data_bac4e0 + 0x34)

if (edx_92 != 0)
    ecx_103 = edx_92(*(arg2 + 4), *arg6, *arg7, ecx_103, eax_2, arg5, arg4)

if ((ebx_21 & 0x800) != 0)
    ebx_21 &= 0xfffff7ff
    int32_t var_180_17 = ebx_21
    ecx_103 = sub_52e8a0(&var_30)

int32_t var_8_45 = 2

if ((ebx_21 & 0x400) != 0)
    ebx_21 &= 0xfffffbff
    int32_t var_180_18 = ebx_21
    ecx_103 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_108
int32_t ebx_22

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_108 = &var_30
    int32_t var_8_46 = 0x39
    ebx_22 = ebx_21 | 0x2000
else
    *(arg3 + 0x630)
    int16_t* var_1ac_87 = ecx_103
    ecx_108 = sub_6ad9b0(&var_60)
    var_8_45.b = 0x38
    ebx_22 = ebx_21 | 0x1000

int32_t var_180_19 = ebx_22
int32_t edx_96 = *(data_bac4e0 + 0x34)

if (edx_96 != 0)
    ecx_108 = edx_96(*(arg2 + 4), *arg6, *arg7, ecx_108, eax_2, arg5, arg4)

if ((ebx_22 & 0x2000) != 0)
    ebx_22 &= 0xffffdfff
    int32_t var_180_20 = ebx_22
    ecx_108 = sub_52e8a0(&var_30)

int32_t var_8_47 = 2

if ((ebx_22 & 0x1000) != 0)
    ebx_22 &= 0xffffefff
    int32_t var_180_21 = ebx_22
    ecx_108 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_113
int32_t ebx_23

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_113 = &var_30
    int32_t var_8_48 = 0x3b
    ebx_23 = ebx_22 | 0x8000
else
    *(arg3 + 0x64c)
    int16_t* var_1ac_89 = ecx_108
    ecx_113 = sub_6ad9b0(&var_60)
    var_8_47.b = 0x3a
    ebx_23 = ebx_22 | 0x4000

int32_t var_180_22 = ebx_23
int32_t edx_100 = *(data_bac4e0 + 0x34)

if (edx_100 != 0)
    ecx_113 = edx_100(*(arg2 + 4), *arg6, *arg7, ecx_113, eax_2, arg5, arg4)

if ((ebx_23 & 0x8000) != 0)
    ebx_23 &= 0xffff7fff
    int32_t var_180_23 = ebx_23
    ecx_113 = sub_52e8a0(&var_30)

int32_t var_8_49 = 2

if ((ebx_23 & 0x4000) != 0)
    ebx_23 &= 0xffffbfff
    int32_t var_180_24 = ebx_23
    ecx_113 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_118
int32_t ebx_24

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_118 = &var_30
    int32_t var_8_50 = 0x3d
    ebx_24 = ebx_23 | 0x20000
else
    *(arg3 + 0x678)
    int16_t* var_1ac_91 = ecx_113
    ecx_118 = sub_6ad9b0(&var_60)
    var_8_49.b = 0x3c
    ebx_24 = ebx_23 | 0x10000

int32_t var_180_25 = ebx_24
int32_t edx_104 = *(data_bac4e0 + 0x34)

if (edx_104 != 0)
    ecx_118 = edx_104(*(arg2 + 4), *arg6, *arg7, ecx_118, eax_2, arg5, arg4)

if ((ebx_24 & 0x20000) != 0)
    ebx_24 &= 0xfffdffff
    int32_t var_180_26 = ebx_24
    ecx_118 = sub_52e8a0(&var_30)

int32_t var_8_51 = 2

if ((ebx_24 & 0x10000) != 0)
    ebx_24 &= 0xfffeffff
    int32_t var_180_27 = ebx_24
    ecx_118 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_123
int32_t ebx_25

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_123 = &var_30
    int32_t var_8_52 = 0x3f
    ebx_25 = ebx_24 | 0x80000
else
    *(arg3 + 0x6a4)
    int16_t* var_1ac_93 = ecx_118
    ecx_123 = sub_6ad9b0(&var_60)
    var_8_51.b = 0x3e
    ebx_25 = ebx_24 | 0x40000

int32_t var_180_28 = ebx_25
int32_t edx_108 = *(data_bac4e0 + 0x34)

if (edx_108 != 0)
    ecx_123 = edx_108(*(arg2 + 4), *arg6, *arg7, ecx_123, eax_2, arg5, arg4)

if ((ebx_25 & 0x80000) != 0)
    ebx_25 &= 0xfff7ffff
    int32_t var_180_29 = ebx_25
    ecx_123 = sub_52e8a0(&var_30)

int32_t var_8_53 = 2

if ((ebx_25 & 0x40000) != 0)
    ebx_25 &= 0xfffbffff
    int32_t var_180_30 = ebx_25
    ecx_123 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_128
int32_t ebx_26

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_128 = &var_30
    int32_t var_8_54 = 0x41
    ebx_26 = ebx_25 | 0x200000
else
    *(arg3 + 0x6d0)
    int16_t* var_1ac_95 = ecx_123
    ecx_128 = sub_6ad9b0(&var_60)
    var_8_53.b = 0x40
    ebx_26 = ebx_25 | 0x100000

int32_t var_180_31 = ebx_26
int32_t edx_112 = *(data_bac4e0 + 0x34)

if (edx_112 != 0)
    ecx_128 = edx_112(*(arg2 + 4), *arg6, *arg7, ecx_128, eax_2, arg5, arg4)

if ((ebx_26 & 0x200000) != 0)
    ebx_26 &= 0xffdfffff
    int32_t var_180_32 = ebx_26
    ecx_128 = sub_52e8a0(&var_30)

int32_t var_8_55 = 2

if ((ebx_26 & 0x100000) != 0)
    ebx_26 &= 0xffefffff
    int32_t var_180_33 = ebx_26
    ecx_128 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_133
int32_t ebx_27

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_133 = &var_30
    int32_t var_8_56 = 0x43
    ebx_27 = ebx_26 | 0x800000
else
    *(arg3 + 0x6e4)
    int16_t* var_1ac_97 = ecx_128
    ecx_133 = sub_6ad9b0(&var_60)
    var_8_55.b = 0x42
    ebx_27 = ebx_26 | &__dos_header

int32_t var_180_34 = ebx_27
int32_t edx_116 = *(data_bac4e0 + 0x34)

if (edx_116 != 0)
    ecx_133 = edx_116(*(arg2 + 4), *arg6, *arg7, ecx_133, eax_2, arg5, arg4)

if ((ebx_27 & 0x800000) != 0)
    ebx_27 &= 0xff7fffff
    int32_t var_180_35 = ebx_27
    ecx_133 = sub_52e8a0(&var_30)

int32_t var_8_57 = 2

if ((ebx_27 & &__dos_header) != 0)
    ebx_27 &= 0xffbfffff
    int32_t var_180_36 = ebx_27
    ecx_133 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_138
int32_t ebx_28

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_138 = &var_30
    int32_t var_8_58 = 0x45
    ebx_28 = ebx_27 | &data_2000000
else
    *(arg3 + 0x700)
    int16_t* var_1ac_99 = ecx_133
    ecx_138 = sub_6ad9b0(&var_60)
    var_8_57.b = 0x44
    ebx_28 = ebx_27 | &data_1000000

int32_t var_180_37 = ebx_28
int32_t edx_120 = *(data_bac4e0 + 0x34)

if (edx_120 != 0)
    ecx_138 = edx_120(*(arg2 + 4), *arg6, *arg7, ecx_138, eax_2, arg5, arg4)

if ((ebx_28 & &data_2000000) != 0)
    ebx_28 &= 0xfdffffff
    int32_t var_180_38 = ebx_28
    ecx_138 = sub_52e8a0(&var_30)

int32_t var_8_59 = 2

if ((ebx_28 & &data_1000000) != 0)
    ebx_28 &= 0xfeffffff
    int32_t var_180_39 = ebx_28
    ecx_138 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_143
int32_t ebx_29

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_143 = &var_30
    int32_t var_8_60 = 0x47
    ebx_29 = ebx_28 | 0x8000000
else
    *(arg3 + 0x72c)
    int16_t* var_1ac_101 = ecx_138
    ecx_143 = sub_6ad9b0(&var_60)
    var_8_59.b = 0x46
    ebx_29 = ebx_28 | &data_4000000

int32_t var_180_40 = ebx_29
int32_t edx_124 = *(data_bac4e0 + 0x34)

if (edx_124 != 0)
    ecx_143 = edx_124(*(arg2 + 4), *arg6, *arg7, ecx_143, eax_2, arg5, arg4)

if ((ebx_29 & 0x8000000) != 0)
    ebx_29 &= 0xf7ffffff
    int32_t var_180_41 = ebx_29
    ecx_143 = sub_52e8a0(&var_30)

int32_t var_8_61 = 2

if ((ebx_29 & &data_4000000) != 0)
    ebx_29 &= 0xfbffffff
    int32_t var_180_42 = ebx_29
    ecx_143 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_148
int32_t ebx_30

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_148 = &var_30
    int32_t var_8_62 = 0x49
    ebx_30 = ebx_29 | 0x20000000
else
    *(arg3 + 0x758)
    int16_t* var_1ac_103 = ecx_143
    ecx_148 = sub_6ad9b0(&var_60)
    var_8_61.b = 0x48
    ebx_30 = ebx_29 | 0x10000000

int32_t var_180_43 = ebx_30
int32_t edx_128 = *(data_bac4e0 + 0x34)

if (edx_128 != 0)
    ecx_148 = edx_128(*(arg2 + 4), *arg6, *arg7, ecx_148, eax_2, arg5, arg4)

if ((ebx_30 & 0x20000000) != 0)
    ebx_30 &= 0xdfffffff
    int32_t var_180_44 = ebx_30
    ecx_148 = sub_52e8a0(&var_30)

int32_t var_8_63 = 2

if ((ebx_30 & 0x10000000) != 0)
    ebx_30 &= 0xefffffff
    int32_t var_180_45 = ebx_30
    ecx_148 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_153
int32_t ebx_31

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_153 = &var_30
    int32_t var_8_64 = 0x4b
    ebx_31 = ebx_30 | 0x80000000
else
    *(arg3 + 0x784)
    int16_t* var_1ac_105 = ecx_148
    ecx_153 = sub_6ad9b0(&var_60)
    var_8_63.b = 0x4a
    ebx_31 = ebx_30 | 0x40000000

int32_t var_180_46 = ebx_31
int32_t edx_132 = *(data_bac4e0 + 0x34)

if (edx_132 != 0)
    ecx_153 = edx_132(*(arg2 + 4), *arg6, *arg7, ecx_153, eax_2, arg5, arg4)

if (ebx_31 s< 0)
    ebx_31 &= 0x7fffffff
    ecx_153 = sub_52e8a0(&var_30)

int32_t var_8_65 = 2

if ((ebx_31 & 0x40000000) != 0)
    ecx_153 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_158
int32_t ebx_32

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_158 = &var_30
    int32_t var_8_66 = 0x4d
    ebx_32 = 2
else
    *(arg3 + 0x7b0)
    int16_t* var_1ac_107 = ecx_153
    ecx_158 = sub_6ad9b0(&var_60)
    var_8_65.b = 0x4c
    ebx_32 = 1

int32_t var_18c_1 = ebx_32
int32_t edx_136 = *(data_bac4e0 + 0x34)

if (edx_136 != 0)
    ecx_158 = edx_136(*(arg2 + 4), *arg6, *arg7, ecx_158, eax_2, arg5, arg4)

if ((ebx_32.b & 2) != 0)
    ebx_32 &= 0xfffffffd
    int32_t var_18c_2 = ebx_32
    ecx_158 = sub_52e8a0(&var_30)

int32_t var_8_67 = 2

if ((ebx_32.b & 1) != 0)
    ebx_32 &= 0xfffffffe
    int32_t var_18c_3 = ebx_32
    ecx_158 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_163
int32_t ebx_33

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_163 = &var_30
    int32_t var_8_68 = 0x4f
    ebx_33 = ebx_32 | 8
else
    *(arg3 + 0x7dc)
    int16_t* var_1ac_109 = ecx_158
    ecx_163 = sub_6ad9b0(&var_60)
    var_8_67.b = 0x4e
    ebx_33 = ebx_32 | 4

int32_t var_18c_4 = ebx_33
int32_t edx_140 = *(data_bac4e0 + 0x34)

if (edx_140 != 0)
    ecx_163 = edx_140(*(arg2 + 4), *arg6, *arg7, ecx_163, eax_2, arg5, arg4)

if ((ebx_33.b & 8) != 0)
    ebx_33 &= 0xfffffff7
    int32_t var_18c_5 = ebx_33
    ecx_163 = sub_52e8a0(&var_30)

int32_t var_8_69 = 2

if ((ebx_33.b & 4) != 0)
    ebx_33 &= 0xfffffffb
    int32_t var_18c_6 = ebx_33
    ecx_163 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_168
int32_t ebx_34

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_168 = &var_30
    int32_t var_8_70 = 0x51
    ebx_34 = ebx_33 | 0x20
else
    *(arg3 + 0x808)
    int16_t* var_1ac_111 = ecx_163
    ecx_168 = sub_6ad9b0(&var_60)
    var_8_69.b = 0x50
    ebx_34 = ebx_33 | 0x10

int32_t var_18c_7 = ebx_34
int32_t edx_144 = *(data_bac4e0 + 0x34)

if (edx_144 != 0)
    ecx_168 = edx_144(*(arg2 + 4), *arg6, *arg7, ecx_168, eax_2, arg5, arg4)

if ((ebx_34.b & 0x20) != 0)
    ebx_34 &= 0xffffffdf
    int32_t var_18c_8 = ebx_34
    ecx_168 = sub_52e8a0(&var_30)

int32_t var_8_71 = 2

if ((ebx_34.b & 0x10) != 0)
    ebx_34 &= 0xffffffef
    int32_t var_18c_9 = ebx_34
    ecx_168 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_173
int32_t ebx_35

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_173 = &var_30
    int32_t var_8_72 = 0x53
    ebx_35 = ebx_34 | 0x80
else
    *(arg3 + 0x834)
    int16_t* var_1ac_113 = ecx_168
    ecx_173 = sub_6ad9b0(&var_60)
    var_8_71.b = 0x52
    ebx_35 = ebx_34 | 0x40

int32_t var_18c_10 = ebx_35
int32_t edx_148 = *(data_bac4e0 + 0x34)

if (edx_148 != 0)
    ecx_173 = edx_148(*(arg2 + 4), *arg6, *arg7, ecx_173, eax_2, arg5, arg4)

if (ebx_35.b s< 0)
    ebx_35 &= 0xffffff7f
    int32_t var_18c_11 = ebx_35
    ecx_173 = sub_52e8a0(&var_30)

int32_t var_8_73 = 2

if ((ebx_35.b & 0x40) != 0)
    ebx_35 &= 0xffffffbf
    int32_t var_18c_12 = ebx_35
    ecx_173 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_178
int32_t ebx_36

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_178 = &var_30
    int32_t var_8_74 = 0x55
    ebx_36 = ebx_35 | 0x200
else
    *(arg3 + 0x860)
    int16_t* var_1ac_115 = ecx_173
    ecx_178 = sub_6ad9b0(&var_60)
    var_8_73.b = 0x54
    ebx_36 = ebx_35 | 0x100

int32_t var_18c_13 = ebx_36
int32_t edx_152 = *(data_bac4e0 + 0x34)

if (edx_152 != 0)
    ecx_178 = edx_152(*(arg2 + 4), *arg6, *arg7, ecx_178, eax_2, arg5, arg4)

if ((ebx_36 & 0x200) != 0)
    ebx_36 &= 0xfffffdff
    int32_t var_18c_14 = ebx_36
    ecx_178 = sub_52e8a0(&var_30)

int32_t var_8_75 = 2

if ((ebx_36 & 0x100) != 0)
    ebx_36 &= 0xfffffeff
    int32_t var_18c_15 = ebx_36
    ecx_178 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_183
int32_t ebx_37

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_183 = &var_30
    int32_t var_8_76 = 0x57
    ebx_37 = ebx_36 | 0x800
else
    *(arg3 + 0x88c)
    int16_t* var_1ac_117 = ecx_178
    ecx_183 = sub_6ad9b0(&var_60)
    var_8_75.b = 0x56
    ebx_37 = ebx_36 | 0x400

int32_t var_18c_16 = ebx_37
int32_t edx_156 = *(data_bac4e0 + 0x34)

if (edx_156 != 0)
    ecx_183 = edx_156(*(arg2 + 4), *arg6, *arg7, ecx_183, eax_2, arg5, arg4)

if ((ebx_37 & 0x800) != 0)
    ebx_37 &= 0xfffff7ff
    int32_t var_18c_17 = ebx_37
    ecx_183 = sub_52e8a0(&var_30)

int32_t var_8_77 = 2

if ((ebx_37 & 0x400) != 0)
    ebx_37 &= 0xfffffbff
    int32_t var_18c_18 = ebx_37
    ecx_183 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_188
int32_t ebx_38

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_188 = &var_30
    int32_t var_8_78 = 0x59
    ebx_38 = ebx_37 | 0x2000
else
    *(arg3 + 0x8b8)
    int16_t* var_1ac_119 = ecx_183
    ecx_188 = sub_6ad9b0(&var_60)
    var_8_77.b = 0x58
    ebx_38 = ebx_37 | 0x1000

int32_t var_18c_19 = ebx_38
int32_t edx_160 = *(data_bac4e0 + 0x34)

if (edx_160 != 0)
    ecx_188 = edx_160(*(arg2 + 4), *arg6, *arg7, ecx_188, eax_2, arg5, arg4)

if ((ebx_38 & 0x2000) != 0)
    ebx_38 &= 0xffffdfff
    int32_t var_18c_20 = ebx_38
    ecx_188 = sub_52e8a0(&var_30)

int32_t var_8_79 = 2

if ((ebx_38 & 0x1000) != 0)
    ebx_38 &= 0xffffefff
    int32_t var_18c_21 = ebx_38
    ecx_188 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_193
int32_t ebx_39

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_193 = &var_30
    int32_t var_8_80 = 0x5b
    ebx_39 = ebx_38 | 0x8000
else
    *(arg3 + 0x8e4)
    int16_t* var_1ac_121 = ecx_188
    ecx_193 = sub_6ad9b0(&var_60)
    var_8_79.b = 0x5a
    ebx_39 = ebx_38 | 0x4000

int32_t var_18c_22 = ebx_39
int32_t edx_164 = *(data_bac4e0 + 0x34)

if (edx_164 != 0)
    ecx_193 = edx_164(*(arg2 + 4), *arg6, *arg7, ecx_193, eax_2, arg5, arg4)

if ((ebx_39 & 0x8000) != 0)
    ebx_39 &= 0xffff7fff
    int32_t var_18c_23 = ebx_39
    ecx_193 = sub_52e8a0(&var_30)

int32_t var_8_81 = 2

if ((ebx_39 & 0x4000) != 0)
    ebx_39 &= 0xffffbfff
    int32_t var_18c_24 = ebx_39
    ecx_193 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_198
int32_t ebx_40

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_198 = &var_30
    int32_t var_8_82 = 0x5d
    ebx_40 = ebx_39 | 0x20000
else
    *(arg3 + 0x910)
    int16_t* var_1ac_123 = ecx_193
    ecx_198 = sub_6ad9b0(&var_60)
    var_8_81.b = 0x5c
    ebx_40 = ebx_39 | 0x10000

int32_t var_18c_25 = ebx_40
int32_t edx_168 = *(data_bac4e0 + 0x34)

if (edx_168 != 0)
    ecx_198 = edx_168(*(arg2 + 4), *arg6, *arg7, ecx_198, eax_2, arg5, arg4)

if ((ebx_40 & 0x20000) != 0)
    ebx_40 &= 0xfffdffff
    int32_t var_18c_26 = ebx_40
    ecx_198 = sub_52e8a0(&var_30)

int32_t var_8_83 = 2

if ((ebx_40 & 0x10000) != 0)
    ebx_40 &= 0xfffeffff
    int32_t var_18c_27 = ebx_40
    ecx_198 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_203
int32_t ebx_41

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_203 = &var_30
    int32_t var_8_84 = 0x5f
    ebx_41 = ebx_40 | 0x80000
else
    *(arg3 + 0x93c)
    int16_t* var_1ac_125 = ecx_198
    ecx_203 = sub_6ad9b0(&var_60)
    var_8_83.b = 0x5e
    ebx_41 = ebx_40 | 0x40000

int32_t var_18c_28 = ebx_41
int32_t edx_172 = *(data_bac4e0 + 0x34)

if (edx_172 != 0)
    ecx_203 = edx_172(*(arg2 + 4), *arg6, *arg7, ecx_203, eax_2, arg5, arg4)

if ((ebx_41 & 0x80000) != 0)
    ebx_41 &= 0xfff7ffff
    int32_t var_18c_29 = ebx_41
    ecx_203 = sub_52e8a0(&var_30)

int32_t var_8_85 = 2

if ((ebx_41 & 0x40000) != 0)
    ebx_41 &= 0xfffbffff
    int32_t var_18c_30 = ebx_41
    ecx_203 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_208
int32_t ebx_42

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_208 = &var_30
    int32_t var_8_86 = 0x61
    ebx_42 = ebx_41 | 0x200000
else
    *(arg3 + 0x968)
    int16_t* var_1ac_127 = ecx_203
    ecx_208 = sub_6ad9b0(&var_60)
    var_8_85.b = 0x60
    ebx_42 = ebx_41 | 0x100000

int32_t var_18c_31 = ebx_42
int32_t edx_176 = *(data_bac4e0 + 0x34)

if (edx_176 != 0)
    ecx_208 = edx_176(*(arg2 + 4), *arg6, *arg7, ecx_208, eax_2, arg5, arg4)

if ((ebx_42 & 0x200000) != 0)
    ebx_42 &= 0xffdfffff
    int32_t var_18c_32 = ebx_42
    ecx_208 = sub_52e8a0(&var_30)

int32_t var_8_87 = 2

if ((ebx_42 & 0x100000) != 0)
    ebx_42 &= 0xffefffff
    int32_t var_18c_33 = ebx_42
    ecx_208 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_213
int32_t ebx_43

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_213 = &var_30
    int32_t var_8_88 = 0x63
    ebx_43 = ebx_42 | 0x800000
else
    *(arg3 + 0x994)
    int16_t* var_1ac_129 = ecx_208
    ecx_213 = sub_6ad9b0(&var_60)
    var_8_87.b = 0x62
    ebx_43 = ebx_42 | &__dos_header

int32_t var_18c_34 = ebx_43
int32_t edx_180 = *(data_bac4e0 + 0x34)

if (edx_180 != 0)
    ecx_213 = edx_180(*(arg2 + 4), *arg6, *arg7, ecx_213, eax_2, arg5, arg4)

if ((ebx_43 & 0x800000) != 0)
    ebx_43 &= 0xff7fffff
    int32_t var_18c_35 = ebx_43
    ecx_213 = sub_52e8a0(&var_30)

int32_t var_8_89 = 2

if ((ebx_43 & &__dos_header) != 0)
    ebx_43 &= 0xffbfffff
    int32_t var_18c_36 = ebx_43
    ecx_213 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* ecx_218
int32_t ebx_44

if (arg3 == 0)
    sub_52e820(&var_30, &data_ad7c90)
    ecx_218 = &var_30
    int32_t var_8_90 = 0x65
    ebx_44 = ebx_43 | &data_2000000
else
    *(arg3 + 0x9ac)
    int16_t* var_1ac_131 = ecx_213
    ecx_218 = sub_6ad9b0(&var_60)
    var_8_89.b = 0x64
    ebx_44 = ebx_43 | &data_1000000

int32_t var_18c_37 = ebx_44
int32_t edx_184 = *(data_bac4e0 + 0x34)

if (edx_184 != 0)
    ecx_218 = edx_184(*(arg2 + 4), *arg6, *arg7, ecx_218, eax_2, arg5, arg4)

if ((ebx_44 & &data_2000000) != 0)
    ebx_44 &= 0xfdffffff
    int32_t var_18c_38 = ebx_44
    ecx_218 = sub_52e8a0(&var_30)

int32_t var_8_91 = 2

if ((ebx_44 & &data_1000000) != 0)
    ebx_44 &= 0xfeffffff
    int32_t var_18c_39 = ebx_44
    ecx_218 = sub_52e8a0(&var_60)

*arg8 += 1
int16_t* eax_251
int32_t ebx_45

if (arg3 == 0)
    eax_251 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_92 = 0x67
    ebx_45 = ebx_44 | 0x8000000
else
    *(arg3 + 0x9b8)
    int16_t* var_1ac_133 = ecx_218
    eax_251 = sub_6ad9b0(&var_78)
    var_8_91.b = 0x66
    ebx_45 = ebx_44 | &data_4000000

int32_t var_18c_40 = ebx_45
int32_t ecx_225 = sub_56af20(arg2, *arg6, *arg7, eax_251)

if ((ebx_45 & 0x8000000) != 0)
    ebx_45 &= 0xf7ffffff
    int32_t var_18c_41 = ebx_45
    ecx_225 = sub_52e8a0(&var_60)

int32_t var_8_93 = 2

if ((ebx_45 & &data_4000000) != 0)
    ebx_45 &= 0xfbffffff
    int32_t var_18c_42 = ebx_45
    ecx_225 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_255
int32_t ebx_46

if (arg3 == 0)
    eax_255 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_94 = 0x69
    ebx_46 = ebx_45 | 0x20000000
else
    int32_t var_1ac_135 = ecx_225
    sub_553aa0(arg3)
    eax_255 = sub_6ad9b0(&var_78)
    var_8_93.b = 0x68
    ebx_46 = ebx_45 | 0x10000000

int32_t var_18c_43 = ebx_46
int32_t ecx_232 = sub_56af20(arg2, *arg6, *arg7, eax_255)

if ((ebx_46 & 0x20000000) != 0)
    ebx_46 &= 0xdfffffff
    int32_t var_18c_44 = ebx_46
    ecx_232 = sub_52e8a0(&var_60)

int32_t var_8_95 = 2

if ((ebx_46 & 0x10000000) != 0)
    ebx_46 &= 0xefffffff
    int32_t var_18c_45 = ebx_46
    ecx_232 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_259
int32_t ebx_47

if (arg3 == 0)
    eax_259 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_96 = 0x6b
    ebx_47 = ebx_46 | 0x80000000
else
    int32_t var_1ac_137 = ecx_232
    sub_553ab0(arg3)
    eax_259 = sub_6ad9b0(&var_78)
    var_8_95.b = 0x6a
    ebx_47 = ebx_46 | 0x40000000

int32_t var_18c_46 = ebx_47
int32_t ecx_239 = sub_56af20(arg2, *arg6, *arg7, eax_259)

if (ebx_47 s< 0)
    ebx_47 &= 0x7fffffff
    ecx_239 = sub_52e8a0(&var_60)

int32_t var_8_97 = 2

if ((ebx_47 & 0x40000000) != 0)
    ecx_239 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_263
int32_t ebx_48

if (arg3 == 0)
    eax_263 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_98 = 0x6d
    ebx_48 = 2
else
    int32_t var_1ac_139 = ecx_239
    sub_553ac0(arg3)
    eax_263 = sub_6ad9b0(&var_78)
    var_8_97.b = 0x6c
    ebx_48 = 1

int32_t var_184_1 = ebx_48
int32_t ecx_246 = sub_56af20(arg2, *arg6, *arg7, eax_263)

if ((ebx_48.b & 2) != 0)
    ebx_48 &= 0xfffffffd
    int32_t var_184_2 = ebx_48
    ecx_246 = sub_52e8a0(&var_60)

int32_t var_8_99 = 2

if ((ebx_48.b & 1) != 0)
    ebx_48 &= 0xfffffffe
    int32_t var_184_3 = ebx_48
    ecx_246 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_267
int32_t ebx_49

if (arg3 == 0)
    eax_267 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_100 = 0x6f
    ebx_49 = ebx_48 | 8
else
    int32_t var_1ac_141 = ecx_246
    sub_57a700(arg3)
    eax_267 = sub_6ad9b0(&var_78)
    var_8_99.b = 0x6e
    ebx_49 = ebx_48 | 4

int32_t var_184_4 = ebx_49
int32_t ecx_253 = sub_56af20(arg2, *arg6, *arg7, eax_267)

if ((ebx_49.b & 8) != 0)
    ebx_49 &= 0xfffffff7
    int32_t var_184_5 = ebx_49
    ecx_253 = sub_52e8a0(&var_60)

int32_t var_8_101 = 2

if ((ebx_49.b & 4) != 0)
    ebx_49 &= 0xfffffffb
    int32_t var_184_6 = ebx_49
    ecx_253 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_271
int32_t ebx_50

if (arg3 == 0)
    eax_271 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_102 = 0x71
    ebx_50 = ebx_49 | 0x20
else
    int32_t var_1ac_143 = ecx_253
    sub_5f3570(arg3)
    eax_271 = sub_6ad9b0(&var_78)
    var_8_101.b = 0x70
    ebx_50 = ebx_49 | 0x10

int32_t var_184_7 = ebx_50
int32_t ecx_260 = sub_56af20(arg2, *arg6, *arg7, eax_271)

if ((ebx_50.b & 0x20) != 0)
    ebx_50 &= 0xffffffdf
    int32_t var_184_8 = ebx_50
    ecx_260 = sub_52e8a0(&var_60)

int32_t var_8_103 = 2

if ((ebx_50.b & 0x10) != 0)
    ebx_50 &= 0xffffffef
    int32_t var_184_9 = ebx_50
    ecx_260 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_275
int32_t ebx_51

if (arg3 == 0)
    eax_275 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_104 = 0x73
    ebx_51 = ebx_50 | 0x80
else
    int32_t var_1ac_145 = ecx_260
    sub_57a710(arg3)
    eax_275 = sub_6ad9b0(&var_78)
    var_8_103.b = 0x72
    ebx_51 = ebx_50 | 0x40

int32_t var_184_10 = ebx_51
int32_t ecx_267 = sub_56af20(arg2, *arg6, *arg7, eax_275)

if (ebx_51.b s< 0)
    ebx_51 &= 0xffffff7f
    int32_t var_184_11 = ebx_51
    ecx_267 = sub_52e8a0(&var_60)

int32_t var_8_105 = 2

if ((ebx_51.b & 0x40) != 0)
    ebx_51 &= 0xffffffbf
    int32_t var_184_12 = ebx_51
    ecx_267 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_279
int32_t ebx_52

if (arg3 == 0)
    eax_279 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_106 = 0x75
    ebx_52 = ebx_51 | 0x200
else
    int32_t var_1ac_147 = ecx_267
    sub_57a720(arg3)
    eax_279 = sub_6ad9b0(&var_78)
    var_8_105.b = 0x74
    ebx_52 = ebx_51 | 0x100

int32_t var_184_13 = ebx_52
int32_t ecx_274 = sub_56af20(arg2, *arg6, *arg7, eax_279)

if ((ebx_52 & 0x200) != 0)
    ebx_52 &= 0xfffffdff
    int32_t var_184_14 = ebx_52
    ecx_274 = sub_52e8a0(&var_60)

int32_t var_8_107 = 2

if ((ebx_52 & 0x100) != 0)
    ebx_52 &= 0xfffffeff
    int32_t var_184_15 = ebx_52
    ecx_274 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_283
int32_t ebx_53

if (arg3 == 0)
    eax_283 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_108 = 0x77
    ebx_53 = ebx_52 | 0x800
else
    int32_t var_1ac_149 = ecx_274
    sub_553b10(arg3)
    eax_283 = sub_6ad9b0(&var_78)
    var_8_107.b = 0x76
    ebx_53 = ebx_52 | 0x400

int32_t var_184_16 = ebx_53
sub_56af20(arg2, *arg6, *arg7, eax_283)

if ((ebx_53 & 0x800) != 0)
    ebx_53 &= 0xfffff7ff
    int32_t var_184_17 = ebx_53
    sub_52e8a0(&var_60)

int32_t var_8_109 = 2

if ((ebx_53 & 0x400) != 0)
    ebx_53 &= 0xfffffbff
    int32_t var_184_18 = ebx_53
    sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_286
int32_t ebx_54

if (arg3 == 0)
    eax_286 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_110 = 0x79
    ebx_54 = ebx_53 | 0x2000
else
    eax_286 = sub_57a730(arg3, &var_78)
    var_8_109.b = 0x78
    ebx_54 = ebx_53 | 0x1000

int32_t var_184_19 = ebx_54
sub_56af20(arg2, *arg6, *arg7, eax_286)

if ((ebx_54 & 0x2000) != 0)
    ebx_54 &= 0xffffdfff
    int32_t var_184_20 = ebx_54
    sub_52e8a0(&var_60)

int32_t var_8_111 = 2

if ((ebx_54 & 0x1000) != 0)
    ebx_54 &= 0xffffefff
    int32_t var_184_21 = ebx_54
    sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_289
int32_t ebx_55

if (arg3 == 0)
    eax_289 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_112 = 0x7b
    ebx_55 = ebx_54 | 0x8000
else
    eax_289 = sub_57a770(arg3, &var_78)
    var_8_111.b = 0x7a
    ebx_55 = ebx_54 | 0x4000

int32_t var_184_22 = ebx_55
int32_t ecx_291 = sub_56af20(arg2, *arg6, *arg7, eax_289)

if ((ebx_55 & 0x8000) != 0)
    ebx_55 &= 0xffff7fff
    int32_t var_184_23 = ebx_55
    ecx_291 = sub_52e8a0(&var_60)

int32_t var_8_113 = 2

if ((ebx_55 & 0x4000) != 0)
    ebx_55 &= 0xffffbfff
    int32_t var_184_24 = ebx_55
    ecx_291 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_293
int32_t ebx_56

if (arg3 == 0)
    eax_293 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_114 = 0x7d
    ebx_56 = ebx_55 | 0x20000
else
    int32_t var_1ac_155 = ecx_291
    sub_57a7b0(arg3)
    eax_293 = sub_6ad9b0(&var_78)
    var_8_113.b = 0x7c
    ebx_56 = ebx_55 | 0x10000

int32_t var_184_25 = ebx_56
sub_56af20(arg2, *arg6, *arg7, eax_293)

if ((ebx_56 & 0x20000) != 0)
    ebx_56 &= 0xfffdffff
    int32_t var_184_26 = ebx_56
    sub_52e8a0(&var_60)

int32_t var_8_115 = 2

if ((ebx_56 & 0x10000) != 0)
    ebx_56 &= 0xfffeffff
    int32_t var_184_27 = ebx_56
    sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_298
int32_t ebx_57

if (arg3 == 0)
    eax_298 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_116 = 0x7f
    ebx_57 = ebx_56 | 0x80000
else
    eax_298 = sub_536170(&var_78, sub_553b20(arg3) + 0x12c)
    var_8_115.b = 0x7e
    ebx_57 = ebx_56 | 0x40000

int32_t var_184_28 = ebx_57
sub_56af20(arg2, *arg6, *arg7, eax_298)

if ((ebx_57 & 0x80000) != 0)
    ebx_57 &= 0xfff7ffff
    int32_t var_184_29 = ebx_57
    sub_52e8a0(&var_60)

int32_t var_8_117 = 2

if ((ebx_57 & 0x40000) != 0)
    ebx_57 &= 0xfffbffff
    int32_t var_184_30 = ebx_57
    sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_303
int32_t ebx_58

if (arg3 == 0)
    eax_303 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_118 = 0x81
    ebx_58 = ebx_57 | 0x200000
else
    eax_303 = sub_536170(&var_78, sub_553b20(arg3) + 0x144)
    var_8_117.b = 0x80
    ebx_58 = ebx_57 | 0x100000

int32_t var_184_31 = ebx_58
int32_t ecx_310 = sub_56af20(arg2, *arg6, *arg7, eax_303)

if ((ebx_58 & 0x200000) != 0)
    ebx_58 &= 0xffdfffff
    int32_t var_184_32 = ebx_58
    ecx_310 = sub_52e8a0(&var_60)

int32_t var_8_119 = 2

if ((ebx_58 & 0x100000) != 0)
    ebx_58 &= 0xffefffff
    int32_t var_184_33 = ebx_58
    ecx_310 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_308
int32_t ebx_59

if (arg3 == 0)
    eax_308 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_120 = 0x83
    ebx_59 = ebx_58 | 0x800000
else
    int32_t var_1ac_161 = ecx_310
    sub_5b8040(sub_553b20(arg3) + 0x214)
    eax_308 = sub_6ad9b0(&var_78)
    var_8_119.b = 0x82
    ebx_59 = ebx_58 | &__dos_header

int32_t var_184_34 = ebx_59
int32_t ecx_318 = sub_56af20(arg2, *arg6, *arg7, eax_308)

if ((ebx_59 & 0x800000) != 0)
    ebx_59 &= 0xff7fffff
    int32_t var_184_35 = ebx_59
    ecx_318 = sub_52e8a0(&var_60)

int32_t var_8_121 = 2

if ((ebx_59 & &__dos_header) != 0)
    ebx_59 &= 0xffbfffff
    int32_t var_184_36 = ebx_59
    ecx_318 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_312
int32_t ebx_60

if (arg3 == 0)
    eax_312 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_122 = 0x85
    ebx_60 = ebx_59 | &data_2000000
else
    int32_t var_1ac_163 = ecx_318
    sub_57a6f0(arg3)
    eax_312 = sub_6ad9b0(&var_78)
    var_8_121.b = 0x84
    ebx_60 = ebx_59 | &data_1000000

int32_t var_184_37 = ebx_60
int32_t ecx_325 = sub_56af20(arg2, *arg6, *arg7, eax_312)

if ((ebx_60 & &data_2000000) != 0)
    ebx_60 &= 0xfdffffff
    int32_t var_184_38 = ebx_60
    ecx_325 = sub_52e8a0(&var_60)

int32_t var_8_123 = 2

if ((ebx_60 & &data_1000000) != 0)
    ebx_60 &= 0xfeffffff
    int32_t var_184_39 = ebx_60
    ecx_325 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_316
int32_t ebx_61

if (arg3 == 0)
    eax_316 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_124 = 0x87
    ebx_61 = ebx_60 | 0x8000000
else
    int32_t var_1ac_165 = ecx_325
    sub_553a40(arg3)
    eax_316 = sub_6ad9b0(&var_78)
    var_8_123.b = 0x86
    ebx_61 = ebx_60 | &data_4000000

int32_t var_184_40 = ebx_61
int32_t ecx_332 = sub_56af20(arg2, *arg6, *arg7, eax_316)

if ((ebx_61 & 0x8000000) != 0)
    ebx_61 &= 0xf7ffffff
    int32_t var_184_41 = ebx_61
    ecx_332 = sub_52e8a0(&var_60)

int32_t var_8_125 = 2

if ((ebx_61 & &data_4000000) != 0)
    ebx_61 &= 0xfbffffff
    int32_t var_184_42 = ebx_61
    ecx_332 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_320
int32_t ebx_62

if (arg3 == 0)
    eax_320 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_126 = 0x89
    ebx_62 = ebx_61 | 0x20000000
else
    int32_t var_1ac_167 = ecx_332
    sub_553a50(arg3)
    eax_320 = sub_6ad9b0(&var_78)
    var_8_125.b = 0x88
    ebx_62 = ebx_61 | 0x10000000

int32_t var_184_43 = ebx_62
int32_t ecx_339 = sub_56af20(arg2, *arg6, *arg7, eax_320)

if ((ebx_62 & 0x20000000) != 0)
    ebx_62 &= 0xdfffffff
    int32_t var_184_44 = ebx_62
    ecx_339 = sub_52e8a0(&var_60)

int32_t var_8_127 = 2

if ((ebx_62 & 0x10000000) != 0)
    ebx_62 &= 0xefffffff
    int32_t var_184_45 = ebx_62
    ecx_339 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_324
int32_t ebx_63

if (arg3 == 0)
    eax_324 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_128 = 0x8b
    ebx_63 = ebx_62 | 0x80000000
else
    int32_t var_1ac_169 = ecx_339
    sub_57a6e0(arg3)
    eax_324 = sub_6ad9b0(&var_78)
    var_8_127.b = 0x8a
    ebx_63 = ebx_62 | 0x40000000

int32_t var_184_46 = ebx_63
int32_t ecx_346 = sub_56af20(arg2, *arg6, *arg7, eax_324)

if (ebx_63 s< 0)
    ebx_63 &= 0x7fffffff
    ecx_346 = sub_52e8a0(&var_60)

int32_t var_8_129 = 2

if ((ebx_63 & 0x40000000) != 0)
    ecx_346 = sub_52e8a0(&var_78)

*arg8 += 1
int16_t* eax_328
int32_t ebx_64

if (arg3 == 0)
    eax_328 = <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_60, &data_ad7c90)
    int32_t var_8_130 = 0x8d
    ebx_64 = 2
else
    int32_t var_1ac_171 = ecx_346
    sub_57a6d0(arg3)
    eax_328 = sub_6ad9b0(&var_78)
    var_8_129.b = 0x8c
    ebx_64 = 1

int32_t var_194_1 = ebx_64
sub_56af20(arg2, *arg6, *arg7, eax_328)

if ((ebx_64.b & 2) != 0)
    ebx_64 &= 0xfffffffd
    sub_52e8a0(&var_60)

if ((ebx_64.b & 1) != 0)
    sub_52e8a0(&var_78)

*arg8 += 1
sub_52e8a0(&var_90)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0
