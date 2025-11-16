// 函数: sub_455da9
// 地址: 0x455da9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
int32_t ecx_2

if (arg2 s>= 0)
    *(*(arg1 + 0xc4) + 4) = 0
    **(arg1 + 0xc4) = 1
    *(*(arg1 + 0xc4) + 0x10) = 0
    *(*(arg1 + 0xc4) + 0x14) = 1
    *(*(arg1 + 0xc4) + 0x18) = 1
    ecx_2 = sub_4538a9(arg1, arg2, 1, 1)
    
    if (ecx_2 != 0)
        goto label_455dfa
    
    return 

ecx_2 = not.d(arg2)
label_455dfa:
int32_t* eax_4 = *(ecx_2 + 4)

if (eax_4[4] != 0 && *(ecx_2 + 8) == 0xffffffff)
    return 

if (*(arg1 + 0x3c) == 3)
    sub_44dd73(arg1, not.d(ecx_2), arg3)
    return 

int32_t edx_5
edx_5.b = arg3 != 0
int32_t edx_6 = eax_4[1]

if (edx_6 s< 0 || edx_6 s> 3 || eax_4[5] != 1 || eax_4[6] != 1)
    return 

int32_t eax_5 = *eax_4

if (eax_5 == 1)
    int32_t* esi_1 = *ecx_2
    int32_t eax_10
    eax_10.b = edx_5 == 0
    int32_t edx_8
    edx_8.b = *esi_1 == 0
    
    if (edx_8 != eax_10)
        *esi_1 = edx_5
        sub_448129(arg1, ecx_2)
else if (eax_5 == 2)
    int32_t* eax_9 = *ecx_2
    
    if (*eax_9 != edx_5)
        *eax_9 = edx_5
        sub_448129(arg1, ecx_2)
else if (eax_5 == 3)
    long double x87_r7_1 = float.t(edx_5)
    float* edx_7 = *ecx_2
    long double x87_r5_1 = fconvert.t(*edx_7)
    x87_r5_1 - x87_r7_1
    int32_t eax_8
    eax_8.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        *edx_7 = fconvert.s(x87_r7_1)
        sub_448129(arg1, ecx_2)
