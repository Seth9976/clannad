// 函数: sub_44c68f
// 地址: 0x44c68f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0
int32_t eax_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t edi
int32_t var_28 = edi
void* ebx_2 = arg3 * 0x64 + *(eax_2 + 4)

if ((*(ebx_2 + 0x30) & 4) != 0)
    int32_t ecx = *(ebx_2 + 0x60)
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(*(ebx_2 + 8), *(ebx_2 + 0x5c), ecx u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx & 3)
    goto label_44c710

int16_t x87control

if (*(ebx_2 + 0x38) != 0)
    sub_44b676(arg1, arg2, arg3)
    var_8 = 0
    int32_t eax_3
    eax_3, x87control = sub_448662(arg1, arg2, arg3)
    var_8 = eax_3
    
    if (eax_3 s>= 0)
        goto label_44c710
    
    return 

label_44c710:
int32_t* ecx_7 = *(ebx_2 + 0x48) + *eax_2
float* edx_2 = *(ebx_2 + 8)
void* eax_5 = zx.d(*(ebx_2 + 0x52)) * 0x1c
int32_t edi_3 = *(eax_5 + 0xac1bb4)
int32_t* ecx_8 = *(ebx_2 + 0xc)
int32_t esi_3 = *ecx_8
float var_1c
float var_18

if (edi_3 == 3)
    if (esi_3 == 1)
        int32_t* i_12 = ecx_8[5]
        int32_t ecx_32 = ecx_8[6]
        
        if (ecx_32 != 1)
            if (i_12 u> 4)
                i_12 = 4
            
            arg2 = 4
            
            if (ecx_32 u<= 4)
                arg2 = ecx_32
            
            if (i_12 u> 0)
                int32_t* edi_17 = ecx_7
                int32_t* ebx_6 = edx_2
                arg3 = i_12
                int32_t* i
                
                do
                    if (arg2 u> 0)
                        int32_t j_4 = arg2
                        int32_t* ecx_35 = edi_17
                        int32_t* eax_21 = ebx_6
                        int32_t j
                        
                        do
                            long double x87_r7_14 = float.t(*eax_21)
                            eax_21 = &eax_21[1]
                            *ecx_35 = fconvert.s(x87_r7_14)
                            ecx_35 = &ecx_35[1]
                            j = j_4
                            j_4 -= 1
                        while (j != 1)
                    
                    edi_17 = &edi_17[4]
                    ebx_6 = &ebx_6[ecx_32]
                    i = arg3
                    arg3 -= 1
                while (i != 1)
        else
            int32_t* i_9 = 0x10
            
            if (i_12 u<= 0x10)
                i_9 = i_12
            
            if (i_9 u> 0)
                int32_t* eax_20 = ecx_7
                int32_t ecx_34 = edx_2 - eax_20
                int32_t* i_1
                
                do
                    *eax_20 = fconvert.s(float.t(*(eax_20 + ecx_34)))
                    eax_20 = &eax_20[1]
                    i_1 = i_9
                    i_9 -= 1
                while (i_1 != 1)
    else if (esi_3 == 2)
        int32_t* i_8 = ecx_8[5]
        int32_t ecx_21 = ecx_8[6]
        
        if (ecx_21 != 1)
            int32_t* i_11 = 4
            
            if (i_8 u<= 4)
                i_11 = i_8
            
            arg2 = 4
            
            if (ecx_21 u<= 4)
                arg2 = ecx_21
            
            if (i_11 u> 0)
                int32_t* ebx_5 = ecx_7
                int32_t* esi_19 = edx_2
                arg3 = i_11
                int32_t* i_2
                
                do
                    if (arg2 u> 0)
                        int32_t j_3 = arg2
                        int32_t* ecx_31 = ebx_5
                        int32_t* eax_19 = esi_19
                        int32_t j_1
                        
                        do
                            long double x87_r7_12 = float.t(*eax_19)
                            eax_19 = &eax_19[1]
                            *ecx_31 = fconvert.s(x87_r7_12)
                            ecx_31 = &ecx_31[1]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    ebx_5 = &ebx_5[4]
                    esi_19 = &esi_19[ecx_21]
                    i_2 = arg3
                    arg3 -= 1
                while (i_2 != 1)
        else
            if (i_8 != ecx_21)
                if (i_8 u> 0x10)
                    i_8 = 0x10
                
                goto label_44ca52
            
            if (*(eax_5 + 0xac1bb8) != ecx_21 || *(eax_5 + 0xac1bbc) != 4)
            label_44ca52:
                
                if (i_8 u> 0)
                    int32_t* eax_18 = ecx_7
                    void* ecx_30 = edx_2 - eax_18
                    int32_t* i_3
                    
                    do
                        *eax_18 = fconvert.s(float.t(*(eax_18 + ecx_30)))
                        eax_18 = &eax_18[1]
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
            else
                float eax_16 = *edx_2
                long double x87_r7_10 = fconvert.t(0.00392156886f)
                var_1c = fconvert.s(float.t(zx.d((eax_16 u>> 0x10).b)) * x87_r7_10)
                var_18 = fconvert.s(float.t(zx.d((eax_16 u>> 8).b)) * x87_r7_10)
                float var_14_1 = fconvert.s(float.t(zx.d(eax_16.b)) * x87_r7_10)
                float var_10_1 = fconvert.s(float.t(eax_16 u>> 0x18) * x87_r7_10)
                *ecx_7 = var_1c
                void* edi_11 = &ecx_7[1]
                float* esi_15 = &var_18
                *edi_11 = *esi_15
                void* edi_12 = edi_11 + 4
                void* esi_16 = &esi_15[1]
                *edi_12 = *esi_16
                *(edi_12 + 4) = *(esi_16 + 4)
    else if (esi_3 == 3)
        int32_t i_10 = ecx_8[5]
        int32_t ecx_17 = ecx_8[6]
        
        if (ecx_17 != 1)
            if (i_10 u> 4)
                i_10 = 4
            
            arg2 = 4
            
            if (ecx_17 u<= 4)
                arg2 = ecx_17
            
            if (i_10 u> 0)
                int32_t* edi_9 = ecx_7
                float* ebx_4 = edx_2
                int32_t i_6 = i_10
                int32_t i_4
                
                do
                    if (arg2 u> 0)
                        int32_t* ecx_20 = edi_9
                        float* eax_15 = ebx_4
                        arg3 = arg2
                        int32_t* j_2
                        
                        do
                            *ecx_20 = *eax_15
                            eax_15 = &eax_15[1]
                            ecx_20 = &ecx_20[1]
                            j_2 = arg3
                            arg3 -= 1
                        while (j_2 != 1)
                    
                    edi_9 = &edi_9[4]
                    ebx_4 = &ebx_4[ecx_17]
                    i_4 = i_6
                    i_6 -= 1
                while (i_4 != 1)
        else
            int32_t i_7 = 0x10
            
            if (i_10 u<= 0x10)
                i_7 = i_10
            
            if (i_7 u> 0)
                int32_t* eax_14 = ecx_7
                float* ecx_19 = edx_2 - eax_14
                int32_t i_5
                
                do
                    *eax_14 = fconvert.s(fconvert.t(*(ecx_19 + eax_14)))
                    eax_14 = &eax_14[1]
                    i_5 = i_7
                    i_7 -= 1
                while (i_5 != 1)
    else
        var_8 = 0x80004005
else if (edi_3 != 0xf20000)
    var_8 = 0x80004005
else
    var_1c = 0f
    int32_t* edi_4 = &var_18
    *edi_4 = 0
    void* edi_5 = &edi_4[1]
    *edi_5 = 0
    *(edi_5 + 4) = 0
    float __saved_ebx
    int32_t eax_6
    
    if (esi_3 == 1)
        int32_t ecx_13 = ecx_8[5]
        
        if (ecx_13 != 1)
            int32_t esi_9 = 4
            
            if (ecx_13 u<= 4)
                esi_9 = ecx_13
            
            eax_6 = 0
            
            if (esi_9 u> 0)
                do
                    long double x87_r7_5 = float.t(*(&var_1c + edx_2 - &var_1c + (eax_6 << 2)))
                    eax_6 += 1
                    (&__saved_ebx)[eax_6] = fconvert.s(x87_r7_5)
                while (eax_6 u< esi_9)
            
        label_44c87c:
            long double x87_r7_2 = fconvert.t(1f)
            long double x87_r6_5 = fconvert.t(var_1c)
            x87_r6_5 - x87_r7_2
            long double x87_r6_6 = fconvert.t(0f)
            eax_6.w = (x87_r6_5 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_6:1.b & 1) != 0)
                long double x87_r5_6 = fconvert.t(var_1c)
                x87_r5_6 - x87_r6_6
                eax_6.w = (x87_r5_6 < x87_r6_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_6, x87_r6_6) ? 1 : 0) << 0xa
                    | (x87_r5_6 == x87_r6_6 ? 1 : 0) << 0xe | 0x3000
                bool p_3 = unimplemented  {test ah, 0x41}
                
                if (p_3)
                    eax_6, x87control =
                        __ftol(x87control, fconvert.t(var_1c) * fconvert.t(255f) + fconvert.t(0.5f))
                    arg2 = eax_6
                else
                    arg2 = 0
            else
                arg2 = 0xff
            
            long double x87_r5_4 = fconvert.t(var_18)
            x87_r5_4 - x87_r7_2
            eax_6.w = (x87_r5_4 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_4, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r5_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
            int32_t ebx_3
            
            if ((eax_6:1.b & 1) != 0)
                long double x87_r5_5 = fconvert.t(var_18)
                x87_r5_5 - x87_r6_6
                eax_6.w = (x87_r5_5 < x87_r6_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_5, x87_r6_6) ? 1 : 0) << 0xa
                    | (x87_r5_5 == x87_r6_6 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (p_1)
                    eax_6, x87control =
                        __ftol(x87control, fconvert.t(var_18) * fconvert.t(255f) + fconvert.t(0.5f))
                    ebx_3 = eax_6
                else
                    ebx_3 = 0
            else
                ebx_3 = 0xff
            
            float var_14
            long double x87_r5_10 = fconvert.t(var_14)
            x87_r5_10 - x87_r7_2
            eax_6.w = (x87_r5_10 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_10, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r5_10 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
            int32_t edi_8
            
            if ((eax_6:1.b & 1) != 0)
                long double x87_r5_11 = fconvert.t(var_14)
                x87_r5_11 - x87_r6_6
                eax_6.w = (x87_r5_11 < x87_r6_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_11, x87_r6_6) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
                bool p_4 = unimplemented  {test ah, 0x41}
                
                if (p_4)
                    eax_6, x87control =
                        __ftol(x87control, fconvert.t(var_14) * fconvert.t(255f) + fconvert.t(0.5f))
                    edi_8 = eax_6
                else
                    edi_8 = 0
            else
                x87_r7_2 = x87_r6_6
                edi_8 = 0xff
            
            float var_10
            long double x87_r6_4 = fconvert.t(var_10)
            x87_r6_4 - x87_r7_2
            eax_6.w = (x87_r6_4 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_2 ? 1 : 0) << 0xe
            int32_t eax_8
            
            if ((eax_6:1.b & 1) != 0)
                long double x87_r7_3 = fconvert.t(var_10)
                long double temp16_1 = fconvert.t(0f)
                x87_r7_3 - temp16_1
                eax_6.w = (x87_r7_3 < temp16_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp16_1 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x41}
                
                if (p_2)
                    eax_8 =
                        __ftol(x87control, fconvert.t(var_10) * fconvert.t(255f) + fconvert.t(0.5f))
                else
                    eax_8 = 0
            else
                eax_8 = 0xff
            
            *ecx_7 = ((eax_8 << 8 | arg2) << 8 | ebx_3) << 8 | edi_8
        else
            *ecx_7 = *edx_2
    else if (esi_3 == 2)
        int32_t ecx_10 = ecx_8[5]
        
        if (ecx_10 != 1)
            int32_t esi_8 = 4
            
            if (ecx_10 u<= 4)
                esi_8 = ecx_10
            
            eax_6 = 0
            
            if (esi_8 u> 0)
                do
                    long double x87_r7_4 = float.t(*(&var_1c + edx_2 - &var_1c + (eax_6 << 2)))
                    eax_6 += 1
                    (&__saved_ebx)[eax_6] = fconvert.s(x87_r7_4)
                while (eax_6 u< esi_8)
            
            goto label_44c87c
        
        *ecx_7 = *edx_2
    else if (esi_3 != 3)
        var_8 = 0x80004005
    else
        int32_t ecx_9 = ecx_8[5]
        
        if (ecx_9 != 1)
            if (ecx_9 u> 4)
                ecx_9 = 4
            
            if (ecx_9 u> 0)
                __builtin_memcpy(&var_1c, edx_2, ecx_9 << 2)
            
            goto label_44c87c
        
        *ecx_7 = __ftol(x87control, fconvert.t(*edx_2))
