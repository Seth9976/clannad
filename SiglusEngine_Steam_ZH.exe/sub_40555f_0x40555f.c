// 函数: sub_40555f
// 地址: 0x40555f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float var_10 = fconvert.s(float.t(1))
int32_t edi
int32_t var_90 = edi
float var_c = fconvert.s(float.t(0))
float var_8 = fconvert.s(float.t(0))
float var_88 = var_10
void var_84
void* edi_1 = &var_84
float* esi = &var_c
*edi_1 = *esi
*(edi_1 + 4) = esi[1]
var_10 = fconvert.s(float.t(0))
var_c = fconvert.s(float.t(1))
float var_8_1 = fconvert.s(float.t(0))
float var_7c = var_10
void var_78
void* edi_4 = &var_78
float* esi_3 = &var_c
*edi_4 = *esi_3
*(edi_4 + 4) = esi_3[1]
var_10 = fconvert.s(float.t(0))
var_c = fconvert.s(float.t(0))
float var_8_2 = fconvert.s(float.t(1))
float var_70 = var_10
void var_6c
void* edi_7 = &var_6c
float* esi_6 = &var_c
*arg4 = fconvert.s(fconvert.t(*(arg5 i+ 0x30)))
int32_t edx = *(arg5 i+ 0x34)
float var_24 = fconvert.s(float.t(0))
*edi_7 = *esi_6
float var_28 = fconvert.s(float.t(0))
*(edi_7 + 4) = esi_6[1]
float var_2c = fconvert.s(float.t(0))
arg4[1] = edx
float var_30 = fconvert.s(float.t(0))
arg4[2] = *(arg5 i+ 0x38)
int32_t* esi_9 = arg5
float var_40 = fconvert.s(float.t(0))
float var_5c
var_10 = &var_5c
float var_50 = fconvert.s(float.t(0))
float var_4c
var_c = &var_4c
float var_20 = fconvert.s(float.t(1))
var_5c = *esi_9
float var_58
int32_t* edi_10 = &var_58
void* esi_10 = &esi_9[1]
*edi_10 = *esi_10
edi_10[1] = *(esi_10 + 4)
var_4c = *(arg5 i+ 0x10)
float var_48
float* edi_13 = &var_48
void* esi_14 = arg5 i+ 0x14
*edi_13 = *esi_14
edi_13[1] = *(esi_14 + 4)
float var_3c = *(arg5 i+ 0x20)
float var_38
int32_t* edi_16 = &var_38
void* esi_18 = arg5 i+ 0x24
*edi_16 = *esi_18
edi_16[1] = *(esi_18 + 4)
int32_t* var_8_3 = &var_3c
float var_54
long double x87_r7_21 = sqrt(fconvert.t(var_54) * fconvert.t(var_54)
    + fconvert.t(var_58) * fconvert.t(var_58) + fconvert.t(var_5c) * fconvert.t(var_5c))
*arg2 = fconvert.s(x87_r7_21)
float var_44
long double x87_r6_9 = sqrt(fconvert.t(var_44) * fconvert.t(var_44)
    + fconvert.t(var_48) * fconvert.t(var_48) + fconvert.t(var_4c) * fconvert.t(var_4c))
arg2[1] = fconvert.s(x87_r6_9)
float var_34
arg5 = fconvert.s(sqrt(fconvert.t(var_34) * fconvert.t(var_34)
    + fconvert.t(var_38) * fconvert.t(var_38) + fconvert.t(var_3c) * fconvert.t(var_3c)))
x87_r7_21 - x87_r6_9
arg2[2] = arg5
float eax_1
eax_1.w = (x87_r7_21 < x87_r6_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_21, x87_r6_9) ? 1 : 0) << 0xa
    | (x87_r7_21 == x87_r6_9 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x5}
int32_t esi_21

if (p)
    long double temp1_1 = fconvert.t(arg5)
    x87_r6_9 - temp1_1
    eax_1.w = (x87_r6_9 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, temp1_1) ? 1 : 0) << 0xa
        | (x87_r6_9 == temp1_1 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        long double x87_r7_23 = fconvert.t(fconvert.s(x87_r6_9))
        esi_21 = 0
        long double temp3_1 = fconvert.t(arg5)
        x87_r7_23 - temp3_1
        eax_1.w = (x87_r7_23 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_23, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp3_1 ? 1 : 0) << 0xe
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (p_4)
            arg4 = 2
            arg5 = 1.40129846e-45f
        else
            arg5 = 2.80259693e-45f
            arg4 = 1
    else
        arg5 = 0f
        esi_21 = 2
        arg4 = 1
else
    long double temp2_1 = fconvert.t(arg5)
    x87_r6_9 - temp2_1
    eax_1.w = (x87_r6_9 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, temp2_1) ? 1 : 0) << 0xa
        | (x87_r6_9 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        long double temp4_1 = fconvert.t(arg5)
        x87_r7_21 - temp4_1
        esi_21 = 1
        eax_1.w = (x87_r7_21 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_21, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_21 == temp4_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            arg5 = 0f
            arg4 = 2
        else
            arg4 = nullptr
            arg5 = 2.80259693e-45f
    else
        arg4 = nullptr
        arg1 = x87_r7_21
        esi_21 = 2
        arg5 = 1.40129846e-45f

void* eax_2 = &arg2[esi_21]
long double x87_r7_24 = fconvert.t(*eax_2)
void* var_60 = eax_2
long double temp5 = fconvert.t(9.99999975e-05f)
x87_r7_24 - temp5
eax_2.w = (x87_r7_24 < temp5 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_24, temp5) ? 1 : 0) << 0xa
    | (x87_r7_24 == temp5 ? 1 : 0) << 0xe
bool p_5 = unimplemented  {test ah, 0x5}
int32_t __saved_ebp

if (not(p_5))
    int32_t* edi_19 = (&var_10)[esi_21]
    *edi_19 = (&__saved_ebp)[esi_21 * 3 - 0x21]
    void* edi_20 = &edi_19[1]
    void* esi_24 = &(&__saved_ebp)[esi_21 * 3 - 0x20]
    *edi_20 = *esi_24
    *(edi_20 + 4) = *(esi_24 + 4)

int32_t eax_3 = (&__saved_ebp)[esi_21 - 3]
j_sub_4014e9(eax_3, eax_3)
long double x87_r7_25 = fconvert.t(arg2[arg5])
long double temp6 = fconvert.t(9.99999975e-05f)
x87_r7_25 - temp6
float* eax_4
eax_4.w = (x87_r7_25 < temp6 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_25, temp6) ? 1 : 0) << 0xa
    | (x87_r7_25 == temp6 ? 1 : 0) << 0xe
bool p_6 = unimplemented  {test ah, 0x5}
float var_18
float var_14

if (not(p_6))
    float* ecx_3 = (&__saved_ebp)[esi_21 - 3]
    long double x87_r7_27 = fabs(fconvert.t(*ecx_3))
    long double x87_r6_11 = fabs(fconvert.t(ecx_3[1]))
    arg5 = fconvert.s(fabs(fconvert.t(ecx_3[2])))
    x87_r7_27 - x87_r6_11
    eax_4.w = (x87_r7_27 < x87_r6_11 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_27, x87_r6_11) ? 1 : 0) << 0xa
        | (x87_r7_27 == x87_r6_11 ? 1 : 0) << 0xe | 0x3000
    bool p_7 = unimplemented  {test ah, 0x5}
    int32_t eax_5
    
    if (p_7)
        long double temp9_1 = fconvert.t(arg5)
        x87_r6_11 - temp9_1
        eax_4.w = (x87_r6_11 < temp9_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, temp9_1) ? 1 : 0) << 0xa
            | (x87_r6_11 == temp9_1 ? 1 : 0) << 0xe
        bool p_10 = unimplemented  {test ah, 0x5}
        bool p_11
        
        if (p_10)
            long double x87_r7_29 = fconvert.t(fconvert.s(x87_r6_11))
            long double temp11_1 = fconvert.t(arg5)
            x87_r7_29 - temp11_1
            eax_4.w = (x87_r7_29 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_29, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_29 == temp11_1 ? 1 : 0) << 0xe
            p_11 = unimplemented  {test ah, 0x5}
        
        if (not(p_10) || not(p_11))
            eax_5 = 1
        else
            eax_5 = 2
    else
        long double temp10_1 = fconvert.t(arg5)
        x87_r6_11 - temp10_1
        eax_4.w = (x87_r6_11 < temp10_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_11, temp10_1) ? 1 : 0) << 0xa
            | (x87_r6_11 == temp10_1 ? 1 : 0) << 0xe | 0x3800
        bool p_8 = unimplemented  {test ah, 0x5}
        
        if (p_8)
            long double temp12_1 = fconvert.t(arg5)
            x87_r7_27 - temp12_1
            eax_4.w = (x87_r7_27 < temp12_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_27, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_27 == temp12_1 ? 1 : 0) << 0xe
            bool p_9 = unimplemented  {test ah, 0x5}
            
            eax_5 = p_9 ? 2 : 0
        else
            arg1 = x87_r7_27
            eax_5 = 0
    
    float* edi_23 = (&var_10)[arg5]
    float var_1c_1 = fconvert.s(fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x1f]) * fconvert.t(ecx_3[1])
        - fconvert.t(ecx_3[2]) * fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x20]))
    var_18 = fconvert.s(fconvert.t(ecx_3[2]) * fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x21])
        - fconvert.t(*ecx_3) * fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x1f]))
    var_14 = fconvert.s(fconvert.t(*ecx_3) * fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x20])
        - fconvert.t((&__saved_ebp)[eax_5 * 3 - 0x21]) * fconvert.t(ecx_3[1]))
    *edi_23 = var_1c_1
    void* edi_24 = &edi_23[1]
    float* esi_27 = &var_18
    *edi_24 = *esi_27
    *(edi_24 + 4) = esi_27[1]

int32_t eax_8 = (&__saved_ebp)[arg5 - 3]
j_sub_4014e9(eax_8, eax_8)
long double x87_r7_39 = fconvert.t(arg2[arg4])
long double temp7 = fconvert.t(9.99999975e-05f)
x87_r7_39 - temp7
float* eax_9
eax_9.w = (x87_r7_39 < temp7 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_39, temp7) ? 1 : 0) << 0xa
    | (x87_r7_39 == temp7 ? 1 : 0) << 0xe
bool p_12 = unimplemented  {test ah, 0x5}

if (not(p_12))
    float* eax_10 = (&__saved_ebp)[arg5 - 3]
    float* ecx_4 = (&__saved_ebp)[esi_21 - 3]
    float* edi_27 = (&var_10)[arg4]
    float var_1c_2 = fconvert.s(fconvert.t(eax_10[2]) * fconvert.t(ecx_4[1])
        - fconvert.t(ecx_4[2]) * fconvert.t(eax_10[1]))
    var_18 = fconvert.s(fconvert.t(*eax_10) * fconvert.t(ecx_4[2])
        - fconvert.t(eax_10[2]) * fconvert.t(*ecx_4))
    var_14 = fconvert.s(fconvert.t(eax_10[1]) * fconvert.t(*ecx_4)
        - fconvert.t(*eax_10) * fconvert.t(ecx_4[1]))
    *edi_27 = var_1c_2
    void* edi_28 = &edi_27[1]
    float* esi_31 = &var_18
    *edi_28 = *esi_31
    *(edi_28 + 4) = esi_31[1]

int32_t edx_7 = (&var_10)[arg4]
j_sub_4014e9(edx_7, edx_7)
j_sub_4020b2(&var_5c)
long double temp8 = fconvert.t(0f)
arg1 - temp8
void* eax_11
eax_11.w = (arg1 < temp8 ? 1 : 0) << 8 | (is_unordered.t(arg1, temp8) ? 1 : 0) << 0xa
    | (arg1 == temp8 ? 1 : 0) << 0xe
bool p_13 = unimplemented  {test ah, 0x5}

if (not(p_13))
    eax_11 = var_60
    int32_t* ebx_1 = (&__saved_ebp)[esi_21 - 3]
    *eax_11 = fconvert.s(fneg(fconvert.t(*eax_11)))
    float var_1c_3 = fconvert.s(fneg(fconvert.t(*ebx_1)))
    var_18 = fconvert.s(fneg(fconvert.t(ebx_1[1])))
    var_14 = fconvert.s(fneg(fconvert.t(ebx_1[2])))
    *ebx_1 = var_1c_3
    float* edi_32 = &ebx_1[1]
    float* esi_34 = &var_18
    *edi_32 = *esi_34
    edi_32[1] = esi_34[1]

long double result = arg1 - fconvert.t(1f)
long double x87_r7_60 = result * result
long double x87_r6_24 = fconvert.t(9.99999975e-05f)
x87_r6_24 - x87_r7_60
eax_11.w = (x87_r6_24 < x87_r7_60 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_24, x87_r7_60) ? 1 : 0) << 0xa
    | (x87_r6_24 == x87_r7_60 ? 1 : 0) << 0xe
bool p_14 = unimplemented  {test ah, 0x5}

if (p_14)
    j_sub_403ac3(arg3, &var_5c)
    *(arg3 + 0xc) = fconvert.s(fneg(fconvert.t(*(arg3 + 0xc))))

return result
