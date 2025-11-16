// 函数: sub_9a0110
// 地址: 0x9a0110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float edi
float var_60 = edi
int32_t edi_1 = arg3
int32_t var_20 = edi_1
int32_t esi = edi_1 << 2
__alloca_probe_16(esi)
int32_t* ebx = &var_60
int32_t* var_c = &var_60
__alloca_probe_16(esi)
int32_t* var_10 = &var_60
__alloca_probe_16(esi)
int32_t* var_14 = &var_60
__alloca_probe_16(esi)
int32_t* var_18 = &var_60
__alloca_probe_16(esi)
int32_t xmm4 = (zx.o(0)).d
int32_t xmm1 = (zx.o(0)).d
int32_t xmm6 = (zx.o(0)).d
float var_8 = 0f
int32_t var_54 = 0
float xmm7 = 1f
float xmm5_1 = *arg4 + arg6
float var_34 = 0f

if (not(1f <= xmm5_1))
    xmm5_1 = 1f

float var_24 = 1f
float xmm0_4 = fconvert.s(fconvert.d(xmm5_1 * xmm5_1) * 0.5)
float xmm2_1 = xmm0_4 + 0f
float xmm0_6 = xmm0_4 * xmm5_1 + 0f
float var_2c = xmm2_1
var_60 = xmm2_1
*var_10 = xmm2_1
*var_14 = 0
float var_3c = xmm2_1
float xmm2_2 = arg6
*var_18 = xmm0_6
float var_30 = xmm0_6
var_60 = 0f

if (edi_1 s> 1)
    int32_t __saved_esi
    int32_t* eax_5 = &__saved_esi
    float xmm6_1 = xmm2_1
    float xmm7_1 = xmm2_1
    int32_t i_3 = edi_1 - 1
    int32_t i
    
    do
        float xmm5_4 = *(arg4 - &var_60 + eax_5) + xmm2_2
        
        if (not(1f <= xmm5_4))
            xmm5_4 = 1f
        
        float xmm2_4 = xmm5_4 * xmm5_4
        float xmm1_2 = var_24 * xmm2_4
        xmm6_1 = xmm6_1 + xmm2_4
        xmm7_1 = xmm7_1 + xmm1_2
        float xmm2_6 = xmm2_4 * xmm5_4 + var_30
        float xmm1_4 = xmm1_2 * xmm5_4 + var_34
        xmm4 = xmm4 f+ xmm1_2 * var_24
        *eax_5 = xmm6_1
        *(var_10 - &var_60 + eax_5) = xmm7_1
        xmm2_2 = arg6
        var_30 = xmm2_6
        *(var_14 - &var_60 + eax_5) = xmm4
        *(var_18 - &var_60 + eax_5) = xmm2_6
        *eax_5 = xmm1_4
        eax_5 = &eax_5[1]
        var_34 = xmm1_4
        i = i_3
        i_3 -= 1
        var_24 = var_24 + 1f
    while (i != 1)
    xmm6 = var_54
    xmm4 = (zx.o(0)).d
    edi_1 = var_20
    xmm7 = 1f
    ebx = var_c
    xmm1 = xmm6

int32_t i_2 = 0
int32_t esi_4 = arg5
int32_t xmm5_5 = (zx.o(0)).d
int32_t eax_7 = *arg2
int32_t i_1 = eax_7 s>> 0x10

if (i_1 s< 0)
    float* ebx_2 = nullptr
    
    do
        int32_t edx_4 = neg.d(i_1)
        uint32_t eax_8 = zx.d(eax_7.w)
        float xmm3_2 = var_10[eax_8] f- var_10[edx_4]
        float xmm2_8 = var_c[edx_4] f+ var_c[eax_8]
        float xmm7_3 = var_14[edx_4] f+ var_14[eax_8]
        float xmm1_6 = var_18[edx_4] f+ var_18[eax_8]
        float xmm6_3 = (&var_60)[eax_8] - (&var_60)[edx_4]
        esi_4 = arg5
        float xmm4_2 = xmm1_6 * xmm7_3 - xmm6_3 * xmm3_2
        xmm6 = xmm6_3 * xmm2_8 - xmm1_6 * xmm3_2
        xmm1 = xmm4_2
        var_8 = xmm4_2
        xmm7 = xmm7_3 * xmm2_8 - xmm3_2 * xmm3_2
        xmm4 = (zx.o(0)).d
        float xmm0_20 = (xmm5_5 f* xmm6 f+ xmm1) / xmm7
        
        if (not(0 f<= xmm0_20))
            xmm0_20 = (zx.o(0)).d
        
        xmm2_2 = arg6
        i_2 += 1
        xmm5_5 = xmm5_5 f+ 1f
        *(ebx_2 + esi_4) = xmm0_20 - xmm2_2
        ebx_2 = i_2 << 2
        eax_7 = *(ebx_2 + arg2)
        i_1 = eax_7 s>> 0x10
    while (i_1 s< 0)
    
    edi_1 = var_20
    ebx = var_c

int32_t eax_11 = arg2[i_2]
uint32_t result = zx.d(eax_11.w)
int32_t edx_7 = eax_11 s>> 0x10

while (result s< edi_1)
    float xmm2_10 = ebx[result] f- ebx[edx_7]
    float xmm3_5 = var_10[result] f- var_10[edx_7]
    float xmm7_6 = var_14[result] f- var_14[edx_7]
    float xmm1_9 = var_18[result] f- var_18[edx_7]
    float xmm6_6 = (&var_60)[result] - (&var_60)[edx_7]
    edi_1 = var_20
    float xmm4_4 = xmm1_9 * xmm7_6 - xmm6_6 * xmm3_5
    xmm6 = xmm6_6 * xmm2_10 - xmm1_9 * xmm3_5
    xmm1 = xmm4_4
    var_8 = xmm4_4
    xmm7 = xmm7_6 * xmm2_10 - xmm3_5 * xmm3_5
    xmm4 = (zx.o(0)).d
    float xmm0_29 = (xmm5_5 f* xmm6 f+ xmm1) / xmm7
    
    if (not(0 f<= xmm0_29))
        xmm0_29 = (zx.o(0)).d
    
    xmm2_2 = arg6
    xmm5_5 = xmm5_5 f+ 1f
    *(esi_4 + (i_2 << 2)) = xmm0_29 - xmm2_2
    i_2 += 1
    int32_t eax_13 = arg2[i_2]
    result = zx.d(eax_13.w)
    edx_7 = eax_13 s>> 0x10

for (; i_2 s< edi_1; i_2 += 1)
    float xmm0_34 = (xmm5_5 f* xmm6 f+ xmm1) / xmm7
    
    if (not(0 f<= xmm0_34))
        xmm0_34 = (zx.o(0)).d
    
    xmm5_5 = xmm5_5 f+ 1f
    *(esi_4 + (i_2 << 2)) = xmm0_34 - xmm2_2

int32_t ebx_3 = arg7

if (ebx_3 s> 0)
    int32_t ecx_6 = 0
    int32_t eax_15
    int32_t edx_9
    edx_9:eax_15 = sx.q(ebx_3)
    result = (eax_15 - edx_9) s>> 1
    float xmm5_8
    
    if (result - ebx_3 s>= 0)
        xmm5_8 = var_8
    else
        int32_t edx_13 = neg.d(result - ebx_3) << 2
        arg4 = result - ebx_3
        uint32_t edi_10 = result << 2
        int32_t ebx_5 = (ebx_3 - result) << 2
        uint32_t eax_17 = result << 2
        int32_t* temp2_1
        
        do
            float xmm2_12 = *(edx_13 + var_c) f+ *(eax_17 + var_c)
            float xmm3_8 = *(eax_17 + var_10) f- *(edx_13 + var_10)
            float xmm7_9 = *(edx_13 + var_14) f+ *(eax_17 + var_14)
            float xmm1_12 = *(edx_13 + var_18) f+ *(eax_17 + var_18)
            float xmm6_9 = *(eax_17 + &var_60) f- *(edx_13 + &var_60)
            esi_4 = arg5
            xmm6 = xmm6_9 * xmm2_12 - xmm1_12 * xmm3_8
            xmm2_2 = arg6
            xmm5_8 = xmm1_12 * xmm7_9 - xmm6_9 * xmm3_8
            xmm7 = xmm7_9 * xmm2_12 - xmm3_8 * xmm3_8
            float xmm1_18 = (xmm4 f* xmm6 + xmm5_8) / xmm7 - xmm2_2
            
            if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_18))
                *(esi_4 + (ecx_6 << 2)) = xmm1_18
            
            ebx_5 -= 4
            edi_10 += 4
            xmm4 = xmm4 f+ 1f
            ecx_6 += 1
            eax_17 = edi_10
            temp2_1 = arg4
            arg4 += 1
            edx_13 = ebx_5
        while (temp2_1 + 1 s< 0)
        edi_1 = var_20
        ebx_3 = arg7
    
    int32_t* edx_14 = result + ecx_6
    
    if (edx_14 s< edi_1)
        int32_t var_38_1 = edx_14 << 2
        float* result_1 = (edx_14 - ebx_3) << 2
        arg4 = edx_14 << 2
        result = (result - arg7 + ecx_6) << 2
        
        do
            float xmm2_14 = *(var_38_1 + var_c) f- *(result_1 + var_c)
            float xmm3_11 = *(var_38_1 + var_10) f- *(result_1 + var_10)
            float xmm7_12 = *(var_38_1 + var_14) f- *(result_1 + var_14)
            float xmm1_20 = *(var_38_1 + var_18) f- *(result_1 + var_18)
            float xmm6_12 = *(var_38_1 + &var_60) f- *(result_1 + &var_60)
            esi_4 = arg5
            edi_1 = var_20
            xmm6 = xmm6_12 * xmm2_14 - xmm1_20 * xmm3_11
            xmm2_2 = arg6
            xmm5_8 = xmm1_20 * xmm7_12 - xmm6_12 * xmm3_11
            xmm7 = xmm7_12 * xmm2_14 - xmm3_11 * xmm3_11
            float xmm1_26 = (xmm4 f* xmm6 + xmm5_8) / xmm7 - xmm2_2
            
            if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_26))
                *(esi_4 + (ecx_6 << 2)) = xmm1_26
            
            result += 4
            int32_t ebx_8 = &arg4[1]
            edx_14 += 1
            arg4 = ebx_8
            ecx_6 += 1
            var_38_1 = ebx_8
            xmm4 = xmm4 f+ 1f
            result_1 = result
        while (edx_14 s< edi_1)
    
    while (ecx_6 s< edi_1)
        float xmm1_31 = (xmm4 f* xmm6 + xmm5_8) / xmm7 - xmm2_2
        
        if (not(*(esi_4 + (ecx_6 << 2)) f<= xmm1_31))
            *(esi_4 + (ecx_6 << 2)) = xmm1_31
        
        ecx_6 += 1
        xmm4 = xmm4 f+ 1f

return result
