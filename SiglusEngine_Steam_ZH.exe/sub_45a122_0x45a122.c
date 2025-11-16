// 函数: sub_45a122
// 地址: 0x45a122
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1

if (*(ebx + 0xac) == 0)
    return 

float eax_1 = arg2

if (eax_1 == 0)
    return 

void* ecx_1 = *(ebx + 0xc8)
int32_t edi
int32_t var_48_1 = edi
float var_8

if (*(ebx + 0xc4) u>= ecx_1)
    if (ecx_1 == 0)
        arg1 = 0x40
    else
        arg1 = ecx_1 * 2
    
    int32_t eax_5 = arg1 << 2
    int32_t eax_6 = sub_745f3f(eax_5)
    
    if (eax_6 != 0)
        j__free(*(ebx + 0xb4))
        *(ebx + 0xb4) = eax_6
        int32_t eax_8 = sub_745f3f(eax_5)
        
        if (eax_8 != 0)
            int32_t ecx_5 = *(ebx + 0xc4) << 2
            int32_t esi_3
            int32_t edi_3
            edi_3, esi_3 = __builtin_memcpy(eax_8, *(ebx + 0xb8), ecx_5 u>> 2 << 2)
            __builtin_memcpy(edi_3, esi_3, ecx_5 & 3)
            j__free(*(ebx + 0xb8))
            int32_t esi_5 = arg1 << 2
            *(ebx + 0xb8) = eax_8
            int32_t eax_11 = sub_745f3f(esi_5)
            
            if (eax_11 != 0)
                j__free(*(ebx + 0xbc))
                *(ebx + 0xbc) = eax_11
                float eax_15 = sub_745f3f(esi_5 * 0x18)
                
                if (eax_15 == 0)
                    var_8 = 0f
                else
                    sub_61cdd0(eax_15, 0x18, esi_5, sub_52e900)
                    var_8 = eax_15
                
                if (var_8 != 0)
                    int32_t ecx_12 = *(ebx + 0xc4) * 0x60
                    int32_t esi_7
                    int32_t edi_7
                    edi_7, esi_7 = __builtin_memcpy(var_8, *(ebx + 0xc0), ecx_12 u>> 2 << 2)
                    __builtin_memcpy(edi_7, esi_7, ecx_12 & 3)
                    j__free(*(ebx + 0xc0))
                    *(ebx + 0xc0) = var_8
                    *(ebx + 0xc8) = arg1
                    eax_1 = arg2
                    goto label_45a289
    
    return 

label_45a289:
float var_c

if (*(ebx + 0xd4) != eax_1)
    bool cond:1_1 = *(ebx + 0xc4) == 0
    *(ebx + 0xd4) = eax_1
    
    if (not(cond:1_1))
        *(ebx + 0xd0) += 1
    
    void var_24
    (*(*eax_1 + 0x44))(eax_1, 0, &var_24)
    long double x87_r7_1 = fconvert.t(1f)
    float eax_20 = var_c
    long double x87_r6_1 = float.t(eax_20)
    *(ebx + 0xd8) = eax_20
    *(ebx + 0xdc) = var_8
    
    if (eax_20 s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    *(ebx + 0xe0) = fconvert.s(x87_r7_1 / x87_r6_1)
    long double x87_r6_3 = float.t(var_8)
    
    if (var_8 s< 0)
        x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
    
    *(ebx + 0xe4) = fconvert.s(x87_r7_1 / x87_r6_3)

int32_t var_14
int32_t var_10
float eax_21
float ecx_19

if (arg3 == 0)
    eax_21 = *(ebx + 0xd8)
    ecx_19 = *(ebx + 0xdc)
    var_14 = 0
    var_10 = 0
    var_c = eax_21
    var_8 = ecx_19
else
    int32_t* esi_8 = arg3
    var_14 = *esi_8
    int32_t* edi_8 = &var_10
    void* esi_9 = &esi_8[1]
    *edi_8 = *esi_9
    void* edi_9 = &edi_8[1]
    void* esi_10 = esi_9 + 4
    *edi_9 = *esi_10
    *(edi_9 + 4) = *(esi_10 + 4)
    ecx_19 = var_8
    eax_21 = var_c

float ecx_20 = ecx_19 i- var_10
long double x87_r7_2 = float.t(eax_21 i- var_14)
*(*(ebx + 0xb8) + (*(ebx + 0xc4) << 2)) = *(ebx + 0xd4)
arg2 = fconvert.s(float.t(ecx_20))
float var_3c
float var_38
float var_34
float var_30

if ((*(ebx + 0xb0) & 8) == 0)
    float* esi_15 = arg5
    
    if (esi_15 == 0)
        esi_15 = &var_30
        var_30 = fconvert.s(float.t(0))
        float var_2c_2 = fconvert.s(float.t(0))
        float var_28_2 = fconvert.s(float.t(0))
    
    var_3c = *esi_15
    int32_t* edi_13 = &var_38
    void* esi_16 = &esi_15[1]
    *edi_13 = *esi_16
    edi_13[1] = *(esi_16 + 4)
    
    if (arg4 != 0)
        var_3c = fconvert.s(fconvert.t(var_3c) - fconvert.t(*arg4))
        var_38 = fconvert.s(fconvert.t(var_38) - fconvert.t(arg4[1]))
        var_34 = fconvert.s(fconvert.t(var_34) - fconvert.t(arg4[2]))
else
    if (*(ebx + 0x68) == 0)
        int32_t var_4c_7 = *(ebx + 0x80)
        int32_t var_50_5 = *(ebx + 0x70)
        *(ebx + 0x68) = 1
        j_sub_4021aa(*(ebx + 0x90), var_50_5, var_4c_7)
        float* eax_23 = *(ebx + 0x90)
        eax_23[2]
        float* ecx_21 = *(ebx + 0x70)
        eax_23[1]
        *(ebx + 0xa0) = fconvert.s(fconvert.t(*eax_23))
        eax_23[6]
        eax_23[5]
        *(ebx + 0xa4) = fconvert.s(fconvert.t(eax_23[4]))
        eax_23[0xa]
        eax_23[9]
        *(ebx + 0xa8) = fconvert.s(fconvert.t(eax_23[8]))
        long double x87_r7_9 = fconvert.t(0f)
        long double temp1_1 = fconvert.t(*ecx_21)
        x87_r7_9 - temp1_1
        eax_23.w = (x87_r7_9 < temp1_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_23:1.b & 0x41) == 0)
            *(ebx + 0xa0) = fconvert.s(fneg(fconvert.t(*(ebx + 0xa0))))
        
        long double temp2_1 = fconvert.t(ecx_21[5])
        x87_r7_9 - temp2_1
        eax_23.w = (x87_r7_9 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_23:1.b & 0x41) == 0)
            *(ebx + 0xa4) = fconvert.s(fneg(fconvert.t(*(ebx + 0xa4))))
        
        long double temp3_1 = fconvert.t(ecx_21[0xa])
        x87_r7_9 - temp3_1
        eax_23.w = (x87_r7_9 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe
        
        if ((eax_23:1.b & 0x41) == 0)
            *(ebx + 0xa8) = fconvert.s(fneg(fconvert.t(*(ebx + 0xa8))))
    
    int32_t var_4c_8 = *(ebx + 0x90)
    float* var_50_6
    
    if (arg5 == 0)
        var_30 = fconvert.s(float.t(0))
        var_50_6 = &var_30
        float var_2c_1 = fconvert.s(float.t(0))
        float var_28_1 = fconvert.s(float.t(0))
    else
        var_50_6 = arg5
    
    j_sub_4018cf(&var_3c, var_50_6, var_4c_8)
    x87_r7_2 = fconvert.t(fconvert.s(x87_r7_2)) * fconvert.t(*(ebx + 0xa0))
    arg2 = fconvert.s(fconvert.t(arg2) * fconvert.t(*(ebx + 0xa4)))
    
    if (arg4 != 0)
        var_3c = fconvert.s(fconvert.t(var_3c) - fconvert.t(*arg4) * fconvert.t(*(ebx + 0xa0)))
        var_38 = fconvert.s(fconvert.t(var_38) - fconvert.t(arg4[1]) * fconvert.t(*(ebx + 0xa4)))
        var_34 = fconvert.s(fconvert.t(var_34) - fconvert.t(*(ebx + 0xa8)) * fconvert.t(arg4[2]))
long double x87_r6_36 = float.t(var_14) * fconvert.t(*(ebx + 0xe0))
long double x87_r5_5 = float.t(var_10) * fconvert.t(*(ebx + 0xe4))
long double x87_r4_17 = float.t(var_c) * fconvert.t(*(ebx + 0xe0))
int32_t* eax_30 = *(ebx + 0xc4) * 0x60 + *(ebx + 0xc0)
float var_2c_3 = fconvert.s(x87_r4_17)
long double x87_r3_14 = float.t(var_8) * fconvert.t(*(ebx + 0xe4))
var_10 = var_3c
var_c = var_38
float var_28_3 = fconvert.s(x87_r3_14)
float var_8_4 = var_34
*eax_30 = var_10
void* edi_17 = &eax_30[1]
float* esi_19 = &var_c
*edi_17 = *esi_19
*(edi_17 + 4) = esi_19[1]
var_c = fconvert.s(x87_r6_36)
float var_8_5 = fconvert.s(x87_r5_5)
eax_30[4] = var_c
eax_30[5] = var_8_5
eax_30[3] = arg6
long double x87_r2_3 = fconvert.t(var_38)
var_10 = var_3c
float var_8_6 = var_34
var_c = fconvert.s(x87_r2_3 + fconvert.t(arg2))
eax_30[6] = var_10
void* edi_21 = &eax_30[7]
float* esi_22 = &var_c
*edi_21 = *esi_22
*(edi_21 + 4) = esi_22[1]
var_c = fconvert.s(x87_r6_36)
float var_8_7 = fconvert.s(x87_r3_14)
eax_30[0xa] = var_c
eax_30[0xb] = var_8_7
eax_30[9] = arg6
long double x87_r3_15 = fconvert.t(var_3c)
var_c = var_38
float var_8_8 = var_34
var_10 = fconvert.s(x87_r3_15 + x87_r7_2)
eax_30[0xc] = var_10
void* edi_25 = &eax_30[0xd]
void* esi_25 = &var_c
*edi_25 = *esi_25
*(edi_25 + 4) = *(esi_25 + 4)
var_c = fconvert.s(x87_r4_17)
float var_8_9 = fconvert.s(x87_r5_5)
eax_30[0x10] = var_c
eax_30[0xf] = arg6
eax_30[0x11] = var_8_9
var_10 = fconvert.s(fconvert.t(var_3c) + x87_r5_5)
float var_8_10 = var_34
long double x87_r7_18 = fconvert.t(var_38) + fconvert.t(arg2)
eax_30[0x15] = arg6
var_c = fconvert.s(x87_r7_18)
eax_30[0x12] = var_10
void* edi_29 = &eax_30[0x13]
void* esi_28 = &var_c
*edi_29 = *esi_28
*(edi_29 + 4) = *(esi_28 + 4)
var_c = var_2c_3
eax_30[0x16] = var_c
eax_30[0x17] = var_28_3
*(ebx + 0xc4) += 1
