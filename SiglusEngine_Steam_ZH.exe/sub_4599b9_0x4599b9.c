// 函数: sub_4599b9
// 地址: 0x4599b9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float esi = arg1

if (*(esi i+ 0xac) != 0 || (arg2 & 0xffffff00) != 0)
    return 

*(esi i+ 0xb0) = arg2

if ((arg2.b & 8) != 0)
    *(esi i+ 0xb0) = arg2 | 4

int32_t edi
int32_t var_68_1 = edi

if (*(esi i+ 0x14) == 0)
    int32_t* eax_4 = *(esi i+ 0xc)
    
    if ((*(*eax_4 + 0x6c))(eax_4, 0xc000, 8, 0x65, *(esi i+ 0x48), esi i+ 0x14, 0) s>= 0)
        int32_t* eax_6 = *(esi i+ 0x14)
        (*(*eax_6 + 0x2c))(eax_6, 0, 0, &arg1, 0)
        int32_t i = 0
        int16_t* eax_7 = 6
        
        do
            *(eax_7 i+ arg1 - 6) = i.w
            *(eax_7 i+ arg1 - 4) = i.w + 1
            *(eax_7 i+ arg1 - 2) = i.w + 2
            *(eax_7 i+ arg1) = i.w + 2
            *(eax_7 i+ arg1 + 2) = i.w + 1
            *(eax_7 i+ arg1 + 4) = i.w + 3
            i += 4
            eax_7 = &eax_7[6]
        while (i u< 0x4000)
        
        int32_t* eax_8 = *(esi i+ 0x14)
        (*(*eax_8 + 0x30))(eax_8)
        goto label_459a8b
    
    return 

label_459a8b:

if (*(esi i+ 0x18) != 0)
    goto label_459aba

int32_t* eax_9 = *(esi i+ 0xc)

if ((*(*eax_9 + 0x68))(eax_9, 0x60000, 0x208, 0, *(esi i+ 0x48), esi i+ 0x18, 0) s< 0)
    return 

*(esi i+ 0x1c) = 0
*(esi i+ 0x20) = 0
label_459aba:
sub_416380(1)

if (*(esi i+ 0x24) == 0)
    arg1 = 0f
    
    do
        int32_t* eax_11 = *(esi i+ 0xc)
        (*(*eax_11 + 0xf0))(eax_11)
        int32_t* eax_12 = *(esi i+ 0xc)
        (*(*eax_12 + 0x15c))(eax_12, *(esi i+ 0x10))
        int32_t* eax_13 = *(esi i+ 0xc)
        (*(*eax_13 + 0x170))(eax_13, 0)
        int32_t* eax_14 = *(esi i+ 0xc)
        (*(*eax_14 + 0x1ac))(eax_14, 0)
        int32_t* eax_15 = *(esi i+ 0xc)
        (*(*eax_15 + 0xe4))(eax_15, 8, 3)
        int32_t* eax_16 = *(esi i+ 0xc)
        (*(*eax_16 + 0xe4))(eax_16, 9, 2)
        int32_t* eax_17 = *(esi i+ 0xc)
        (*(*eax_17 + 0xe4))(eax_17, 0x16, 1)
        int32_t* eax_18 = *(esi i+ 0xc)
        (*(*eax_18 + 0xe4))(eax_18, 0x80, 0)
        int32_t* eax_19 = *(esi i+ 0xc)
        (*(*eax_19 + 0xe4))(eax_19, 0x88, 1)
        int32_t* eax_20 = *(esi i+ 0xc)
        (*(*eax_20 + 0xe4))(eax_20, 0x97, 0)
        int32_t* eax_21 = *(esi i+ 0xc)
        (*(*eax_21 + 0xe4))(eax_21, 0x98, 0)
        int32_t* eax_22 = *(esi i+ 0xc)
        int32_t ecx_16 = *eax_22
        int32_t var_6c_4 = ecx_16
        (*(ecx_16 + 0x13c))(eax_22, fconvert.s(float.t(0)))
        int32_t* eax_23 = *(esi i+ 0xc)
        (*(*eax_23 + 0xe4))(eax_23, 0xa7, 0)
        int32_t* eax_24 = *(esi i+ 0xc)
        (*(*eax_24 + 0xe4))(eax_24, 0xb8, 0)
        int32_t* eax_25 = *(esi i+ 0xc)
        (*(*eax_25 + 0xe4))(eax_25, 0xc2, 0)
        int32_t* eax_26 = *(esi i+ 0xc)
        (*(*eax_26 + 0xe4))(eax_26, 0xa8, 0xf)
        int32_t* eax_27 = *(esi i+ 0xc)
        (*(*eax_27 + 0xe4))(eax_27, 0x1c, 0)
        int32_t* eax_28 = *(esi i+ 0xc)
        (*(*eax_28 + 0xe4))(eax_28, 0x30, 0)
        int32_t* eax_29 = *(esi i+ 0xc)
        (*(*eax_29 + 0xe4))(eax_29, 0x1d, 0)
        int32_t* eax_30 = *(esi i+ 0xc)
        (*(*eax_30 + 0xe4))(eax_30, 0x34, 0)
        int32_t* eax_31 = *(esi i+ 0xc)
        (*(*eax_31 + 0xe4))(eax_31, 0x89, 0)
        int32_t* eax_32 = *(esi i+ 0xc)
        (*(*eax_32 + 0xe4))(eax_32, 0x91, 1)
        int32_t* eax_33 = *(esi i+ 0xc)
        (*(*eax_33 + 0x10c))(eax_33, 0, 1, 4)
        int32_t* eax_34 = *(esi i+ 0xc)
        (*(*eax_34 + 0x10c))(eax_34, 0, 2, 2)
        int32_t* eax_35 = *(esi i+ 0xc)
        (*(*eax_35 + 0x10c))(eax_35, 0, 3, 0)
        int32_t* eax_36 = *(esi i+ 0xc)
        (*(*eax_36 + 0x10c))(eax_36, 0, 4, 4)
        int32_t* eax_37 = *(esi i+ 0xc)
        (*(*eax_37 + 0x10c))(eax_37, 0, 5, 2)
        int32_t* eax_38 = *(esi i+ 0xc)
        (*(*eax_38 + 0x10c))(eax_38, 0, 6, 0)
        int32_t* eax_39 = *(esi i+ 0xc)
        (*(*eax_39 + 0x10c))(eax_39, 0, 0xb, 0)
        int32_t* eax_40 = *(esi i+ 0xc)
        (*(*eax_40 + 0x10c))(eax_40, 0, 0x18, 0)
        int32_t* eax_41 = *(esi i+ 0xc)
        (*(*eax_41 + 0x10c))(eax_41, 1, 1, 1)
        int32_t* eax_42 = *(esi i+ 0xc)
        (*(*eax_42 + 0x10c))(eax_42, 1, 4, 1)
        int32_t* eax_43 = *(esi i+ 0xc)
        (*(*eax_43 + 0x114))(eax_43, 0, 1, 3)
        int32_t* eax_44 = *(esi i+ 0xc)
        (*(*eax_44 + 0x114))(eax_44, 0, 2, 3)
        int32_t* eax_45 = *(esi i+ 0xc)
        (*(*eax_45 + 0x114))(eax_45, 0, 5, *(esi i+ 0x4c))
        int32_t* eax_46 = *(esi i+ 0xc)
        (*(*eax_46 + 0x114))(eax_46, 0, 6, *(esi i+ 0x50))
        int32_t* eax_47 = *(esi i+ 0xc)
        (*(*eax_47 + 0x114))(eax_47, 0, 7, *(esi i+ 0x54))
        int32_t* eax_48 = *(esi i+ 0xc)
        (*(*eax_48 + 0x114))(eax_48, 0, 8, 0)
        int32_t* eax_49 = *(esi i+ 0xc)
        (*(*eax_49 + 0x114))(eax_49, 0, 9, 0)
        int32_t* eax_50 = *(esi i+ 0xc)
        (*(*eax_50 + 0x114))(eax_50, 0, 0xa, *(esi i+ 0x58))
        int32_t* eax_51 = *(esi i+ 0xc)
        (*(*eax_51 + 0x114))(eax_51, 0, 0xb, 0)
        void* ecx_49
        
        if (arg1 != 0)
            ecx_49 = esi i+ 0x28
        else
            int32_t* eax_52 = *(esi i+ 0xc)
            (*(*eax_52 + 0x15c))(eax_52, *(esi i+ 0x10))
            int32_t* eax_53 = *(esi i+ 0xc)
            (*(*eax_53 + 0x190))(eax_53, 0, 0, 0, 0)
            int32_t* eax_54 = *(esi i+ 0xc)
            (*(*eax_54 + 0x104))(eax_54, 0, 0)
            ecx_49 = esi i+ 0x24
        
        int32_t* eax_55 = *(esi i+ 0xc)
        (*(*eax_55 + 0xf4))(eax_55, ecx_49)
        arg1 += 1
    while (arg1 u< 2)

if (*(esi i+ 0x2c) == 0)
    arg1 = 0f
    
    do
        int32_t* eax_56 = *(esi i+ 0xc)
        (*(*eax_56 + 0xf0))(eax_56)
        int32_t* eax_57 = *(esi i+ 0xc)
        int32_t edx_8
        edx_8.b = *(esi i+ 0x5c) != 0
        (*(*eax_57 + 0xe4))(eax_57, 0xf, edx_8)
        int32_t edx_9 = *(esi i+ 0x60)
        int32_t* eax_58 = *(esi i+ 0xc)
        int32_t edx_10 = neg.d(edx_9)
        (*(*eax_58 + 0xe4))(eax_58, 0x18, (sbb.d(edx_10, edx_10, edx_9 != 0) & 0xffffffc1) + 0x3f)
        int32_t* eax_59 = *(esi i+ 0xc)
        (*(*eax_59 + 0xe4))(eax_59, 0x19, 5)
        int32_t* eax_60 = *(esi i+ 0xc)
        int32_t edx_14
        edx_14.b = *(esi i+ 0x60) != 0
        (*(*eax_60 + 0xe4))(eax_60, 0x1b, edx_14)
        int32_t* eax_61 = *(esi i+ 0xc)
        (*(*eax_61 + 0xe4))(eax_61, 0xce, 0)
        int32_t* eax_62 = *(esi i+ 0xc)
        (*(*eax_62 + 0xe4))(eax_62, 0x13, 5)
        int32_t* eax_63 = *(esi i+ 0xc)
        (*(*eax_63 + 0xe4))(eax_63, 0x14, 6)
        int32_t* eax_64 = *(esi i+ 0xc)
        (*(*eax_64 + 0xe4))(eax_64, 0xab, 1)
        void* ecx_59 = esi i+ 0x30
        
        if (arg1 == 0)
            ecx_59 = esi i+ 0x2c
        
        int32_t* eax_65 = *(esi i+ 0xc)
        (*(*eax_65 + 0xf4))(eax_65, ecx_59)
        arg1 += 1
    while (arg1 u< 2)

float var_5c

if (*(esi i+ 0x34) == 0)
    arg1 = 0f
    
    do
        int32_t* eax_66 = *(esi i+ 0xc)
        (*(*eax_66 + 0xf0))(eax_66)
        float var_24_1 = fconvert.s(float.t(0))
        int32_t* eax_67 = *(esi i+ 0xc)
        float var_28_1 = fconvert.s(float.t(0))
        float var_2c_1 = fconvert.s(float.t(0))
        float var_30_1 = fconvert.s(float.t(0))
        float var_38_1 = fconvert.s(float.t(0))
        float var_3c_1 = fconvert.s(float.t(0))
        float var_40_1 = fconvert.s(float.t(0))
        float var_44_1 = fconvert.s(float.t(0))
        float var_4c_1 = fconvert.s(float.t(0))
        float var_50_1 = fconvert.s(float.t(0))
        float var_54_1 = fconvert.s(float.t(0))
        float var_58_1 = fconvert.s(float.t(0))
        float var_20_1 = fconvert.s(float.t(1))
        float var_34_1 = fconvert.s(float.t(1))
        float var_48_1 = fconvert.s(float.t(1))
        var_5c = fconvert.s(float.t(1))
        (*(*eax_67 + 0xb0))(eax_67, 0x100, &var_5c)
        int32_t* eax_68 = *(esi i+ 0xc)
        (*(*eax_68 + 0xb0))(eax_68, 2, &var_5c)
        void* ecx_64
        
        if (arg1 != 0)
            ecx_64 = esi i+ 0x38
        else
            int32_t* eax_69 = *(esi i+ 0xc)
            (*(*eax_69 + 0xb0))(eax_69, 3, &var_5c)
            ecx_64 = esi i+ 0x34
        
        int32_t* eax_70 = *(esi i+ 0xc)
        (*(*eax_70 + 0xf4))(eax_70, ecx_64)
        arg1 += 1
    while (arg1 u< 2)

char eax_71 = (*(esi i+ 0xb0)).b

if ((eax_71 & 2) == 0)
    if ((eax_71 & 1) == 0)
        int32_t* eax_72 = *(esi i+ 0x24)
        (*(*eax_72 + 0x10))(eax_72)
    
    if ((*(esi i+ 0xb0) & 1) == 0)
        int32_t* eax_73 = *(esi i+ 0x3c)
        
        if (eax_73 != 0)
            (*(*eax_73 + 8))(eax_73)
            *(esi i+ 0x3c) = 0
        
        int32_t* eax_74 = *(esi i+ 0xc)
        (*(*eax_74 + 0x1a4))(eax_74, esi i+ 0x3c)
    
    int32_t* eax_75 = *(esi i+ 0x28)
    (*(*eax_75 + 0x14))(eax_75)

char eax_76 = (*(esi i+ 0xb0)).b

if ((eax_76 & 0x10) != 0)
    if ((eax_76 & 1) == 0)
        int32_t* eax_77 = *(esi i+ 0x2c)
        (*(*eax_77 + 0x10))(eax_77)
    
    int32_t* eax_78 = *(esi i+ 0x30)
    (*(*eax_78 + 0x14))(eax_78)

char eax_79 = (*(esi i+ 0xb0)).b

if ((eax_79 & 4) == 0)
    if ((eax_79 & 1) == 0)
        int32_t* eax_80 = *(esi i+ 0x34)
        (*(*eax_80 + 0x10))(eax_80)
    
    int32_t* eax_81 = *(esi i+ 0x38)
    (*(*eax_81 + 0x14))(eax_81)
    int32_t* eax_82 = *(esi i+ 0xc)
    int32_t var_1c
    (*(*eax_82 + 0xc0))(eax_82, &var_1c)
    long double x87_r7_18 = fconvert.t(1f)
    float var_14
    arg1 = var_14
    long double x87_r6_1 = float.t(arg1)
    
    if (var_14 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_2 = x87_r7_18 / x87_r6_1
    int32_t var_10
    long double x87_r5_1 = float.t(var_10)
    
    if (var_10 s< 0)
        x87_r5_1 = x87_r5_1 + fconvert.t(4.2949673e+09f)
    
    __builtin_memset(&var_5c, 0, 0x40)
    int32_t eax_85 = var_1c
    arg1 = fconvert.s(x87_r7_18 / x87_r5_1)
    var_5c = fconvert.s(x87_r6_2 + x87_r6_2)
    long double x87_r5_5 = fconvert.t(-2f)
    long double x87_r4_1 = float.t(eax_85)
    
    if (eax_85 s< 0)
        x87_r4_1 = x87_r4_1 + fconvert.t(4.2949673e+09f)
    
    float var_2c_2 = fconvert.s(x87_r4_1 * x87_r6_2 * x87_r5_5 - x87_r6_2 - x87_r7_18)
    float var_48_2 = fconvert.s(fconvert.t(arg1) * x87_r5_5)
    int32_t var_18
    long double x87_r6_4 = float.t(var_18)
    
    if (var_18 s< 0)
        x87_r6_4 = x87_r6_4 + fconvert.t(4.2949673e+09f)
    
    int32_t* eax_87 = *(esi i+ 0xc)
    float var_28_2 = fconvert.s((x87_r6_4 + x87_r6_4 + x87_r5_5) * fconvert.t(arg1) + x87_r5_5)
    float var_34_2 = fconvert.s(float.t(1))
    float var_20_2 = fconvert.s(float.t(1))
    (*(*eax_87 + 0xb0))(eax_87, 3, &var_5c)
else if ((eax_79 & 8) != 0)
    if ((eax_79 & 1) == 0)
        int32_t* eax_88 = *(esi i+ 0x34)
        (*(*eax_88 + 0x10))(eax_88)
    
    int32_t* eax_89 = *(esi i+ 0x38)
    (*(*eax_89 + 0x14))(eax_89)

sub_416380(0)
*(esi i+ 0xe0) = fconvert.s(float.t(0))
*(esi i+ 0xc4) = 0
*(esi i+ 0xcc) = 0
*(esi i+ 0xe4) = fconvert.s(float.t(0))
*(esi i+ 0xd0) = 0
*(esi i+ 0xd4) = 0
*(esi i+ 0xd8) = 0
*(esi i+ 0xdc) = 0
*(esi i+ 0xac) = 1
