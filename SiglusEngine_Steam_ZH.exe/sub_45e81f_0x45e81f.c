// 函数: sub_45e81f
// 地址: 0x45e81f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_6 = arg5
uint32_t i_7 = 0
int32_t edi
int32_t var_24 = edi

if (i_6 u> 4)
    i_6 = 4

uint32_t eax_1 = zx.d(arg2[2].b)
float var_18
int32_t __saved_ebp
uint32_t eax_3

if (eax_1 - 4 u> 0xa)
label_45e90a:
    
    if (i_6 u<= 0)
        __builtin_memset(&(&__saved_ebp)[i_7 - 5], 0, (3 - i_7) << 2)
        i_7 = 3 + 0
    else
        __builtin_memcpy(&var_18, arg4, i_6 << 2)
        i_7 = i_6
    label_45e91a:
        
        if (i_6 u< 3)
            __builtin_memset(&(&__saved_ebp)[i_7 - 5], 0, (3 - i_7) << 2)
            i_7 = 3 + 0
else
    switch (eax_1 + &jump_table_45ec36[3])
        case &lookup_table_45ec46, &lookup_table_45ec46[4], &lookup_table_45ec46[7], 
                &lookup_table_45ec46[8]
            if (i_6 u> 0)
                float* esi_1 = arg4
                void* ecx = &var_18 - esi_1
                uint32_t i_3 = i_6
                i_7 = i_6
                uint32_t i
                
                do
                    long double x87_r7_1 = float.t(0)
                    long double temp1_1 = fconvert.t(*esi_1)
                    x87_r7_1 - temp1_1
                    eax_3.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
                    long double x87_r7_2
                    
                    if ((eax_3:1.b & 0x41) != 0)
                        long double x87_r7_3 = float.t(1)
                        long double temp4_1 = fconvert.t(*esi_1)
                        x87_r7_3 - temp4_1
                        eax_3.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (p_1)
                            x87_r7_2 = fconvert.t(*esi_1)
                        else
                            x87_r7_2 = float.t(1)
                    else
                        x87_r7_2 = float.t(0)
                    
                    *(ecx + esi_1) = fconvert.s(x87_r7_2)
                    esi_1 = &esi_1[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                goto label_45e91a
            
            __builtin_memset(&(&__saved_ebp)[i_7 - 5], 0, (3 - i_7) << 2)
            i_7 = 3 + 0
        case &lookup_table_45ec46[1], &lookup_table_45ec46[9]
            if (i_6 u> 0)
                float* esi_3 = arg4
                void* ecx_2 = &var_18 - esi_3
                uint32_t i_5 = i_6
                i_7 = i_6
                uint32_t i_1
                
                do
                    long double x87_r7_5 = float.t(0)
                    long double temp3_1 = fconvert.t(*esi_3)
                    x87_r7_5 - temp3_1
                    eax_3.w = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe
                    long double x87_r7_6
                    
                    if ((eax_3:1.b & 0x41) != 0)
                        x87_r7_6 = fconvert.t(*esi_3)
                    else
                        x87_r7_6 = float.t(0)
                    
                    *(esi_3 + ecx_2) = fconvert.s(x87_r7_6)
                    esi_3 = &esi_3[1]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                goto label_45e91a
            
            __builtin_memset(&(&__saved_ebp)[i_7 - 5], 0, (3 - i_7) << 2)
            i_7 = 3 + 0
        case &lookup_table_45ec46[2], &lookup_table_45ec46[3]
            goto label_45e90a
        case &lookup_table_45ec46[5], &lookup_table_45ec46[6], &lookup_table_45ec46[0xa]
            if (i_6 u> 0)
                float* esi_2 = arg4
                long double x87_r7_4 = fconvert.t(-1f)
                int32_t ecx_1 = &var_18 - esi_2
                uint32_t i_4 = i_6
                i_7 = i_6
                uint32_t i_2
                
                do
                    long double temp2_1 = fconvert.t(*esi_2)
                    x87_r7_4 - temp2_1
                    eax_3.w = (x87_r7_4 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800
                    long double x87_r6_1
                    
                    if ((eax_3:1.b & 0x41) != 0)
                        long double x87_r6_2 = float.t(1)
                        long double temp5_1 = fconvert.t(*esi_2)
                        x87_r6_2 - temp5_1
                        eax_3.w = (x87_r6_2 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r6_2 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (p_2)
                            x87_r6_1 = fconvert.t(*esi_2)
                        else
                            x87_r6_1 = float.t(1)
                    else
                        x87_r6_1 = x87_r7_4
                    
                    *(esi_2 + ecx_1) = fconvert.s(x87_r6_1)
                    esi_2 = &esi_2[1]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                goto label_45e91a
            
            __builtin_memset(&(&__saved_ebp)[i_7 - 5], 0, (3 - i_7) << 2)
            i_7 = 3 + 0
int32_t ecx_6
int32_t edi_3

if (i_7 u< 4)
    edi_3, ecx_6 = __memfill_u32(&(&__saved_ebp)[i_7 - 5], 0x3f800000, 4 - i_7)
int32_t* eax_4 = sub_45e3ec(arg1, arg2, arg3)
float var_14
float var_10
float var_c
int16_t x87control
int16_t x87control_3
int16_t x87control_7
long double x87_r6_3
long double x87_r7_7
long double x87_r7_18

switch (eax_1)
    case 0
        *eax_4 = var_18
    case 1
        *eax_4 = var_18
        eax_4[1] = var_14
    case 2
        *eax_4 = var_18
        eax_4[1] = var_14
        eax_4[2] = var_10
    case 3
        *eax_4 = var_18
        eax_4[1] = var_14
        eax_4[2] = var_10
        eax_4[3] = var_c
    case 4
        x87_r7_7 = fconvert.t(255f)
        x87_r6_3 = fconvert.t(0.5f)
        char eax_16
        int16_t x87control_1
        eax_16, x87control_1 = __ftol(x87control, fconvert.t(var_18) * x87_r7_7 + x87_r6_3)
        int32_t eax_17
        int16_t x87control_2
        eax_17, x87control_2 = __ftol(x87control_1, fconvert.t(var_c) * x87_r7_7 + x87_r6_3)
        char eax_19
        eax_19, x87control_3 = __ftol(x87control_2, fconvert.t(var_14) * x87_r7_7 + x87_r6_3)
        *eax_4 = ((zx.d(eax_16) | eax_17 << 8) << 8 | zx.d(eax_19)) << 8
            | (__ftol(x87control_3, fconvert.t(var_10) * x87_r7_7 + x87_r6_3) & 0xff)
    case 5
        long double x87_r7_8 = fconvert.t(0.5f)
        char eax_21
        int16_t x87control_4
        eax_21, x87control_4 = __ftol(x87control, fconvert.t(var_18) + x87_r7_8)
        *eax_4 = eax_21
        char eax_22
        int16_t x87control_5
        eax_22, x87control_5 = __ftol(x87control_4, fconvert.t(var_14) + x87_r7_8)
        *(eax_4 + 1) = eax_22
        char eax_23
        int16_t x87control_6
        eax_23, x87control_6 = __ftol(x87control_5, fconvert.t(var_10) + x87_r7_8)
        *(eax_4 + 2) = eax_23
        *(eax_4 + 3) = __ftol(x87control_6, fconvert.t(var_c) + x87_r7_8)
    case 6
        int16_t eax_25
        eax_25, x87control_7 = __ftol(x87control, fconvert.t(var_18) + fconvert.t(0.5f))
        *eax_4 = eax_25
        *(eax_4 + 2) = __ftol(x87control_7, fconvert.t(var_14) + fconvert.t(0.5f))
    case 7
        long double x87_r7_12 = fconvert.t(0.5f)
        int16_t eax_26
        int16_t x87control_8
        eax_26, x87control_8 = __ftol(x87control, fconvert.t(var_18) + x87_r7_12)
        *eax_4 = eax_26
        int16_t eax_27
        int16_t x87control_9
        eax_27, x87control_9 = __ftol(x87control_8, fconvert.t(var_14) + x87_r7_12)
        *(eax_4 + 2) = eax_27
        int16_t eax_28
        int16_t x87control_10
        eax_28, x87control_10 = __ftol(x87control_9, fconvert.t(var_10) + x87_r7_12)
        eax_4[1].w = eax_28
        *(eax_4 + 6) = __ftol(x87control_10, fconvert.t(var_c) + x87_r7_12)
    case 8
        long double x87_r7_13 = fconvert.t(255f)
        long double x87_r6_20 = fconvert.t(0.5f)
        char eax_30
        int16_t x87control_11
        eax_30, x87control_11 = __ftol(x87control, fconvert.t(var_18) * x87_r7_13 + x87_r6_20)
        *eax_4 = eax_30
        char eax_31
        int16_t x87control_12
        eax_31, x87control_12 = __ftol(x87control_11, fconvert.t(var_14) * x87_r7_13 + x87_r6_20)
        *(eax_4 + 1) = eax_31
        char eax_32
        int16_t x87control_13
        eax_32, x87control_13 = __ftol(x87control_12, fconvert.t(var_10) * x87_r7_13 + x87_r6_20)
        *(eax_4 + 2) = eax_32
        *(eax_4 + 3) = __ftol(x87control_13, fconvert.t(var_c) * x87_r7_13 + x87_r6_20)
    case 9
        int16_t eax_33
        eax_33, x87control_7 =
            __ftol(x87control, fconvert.t(var_18) * fconvert.t(32767f) + fconvert.t(0.5f))
        *eax_4 = eax_33
        *(eax_4 + 2) =
            __ftol(x87control_7, fconvert.t(var_14) * fconvert.t(32767f) + fconvert.t(0.5f))
    case 0xa
        x87_r7_18 = fconvert.t(32767f)
    label_45eb49:
        long double x87_r6_21 = fconvert.t(0.5f)
        int16_t eax_36
        int16_t x87control_14
        eax_36, x87control_14 = __ftol(x87control, fconvert.t(var_18) * x87_r7_18 + x87_r6_21)
        *eax_4 = eax_36
        int16_t eax_37
        int16_t x87control_15
        eax_37, x87control_15 = __ftol(x87control_14, fconvert.t(var_14) * x87_r7_18 + x87_r6_21)
        *(eax_4 + 2) = eax_37
        int16_t eax_38
        int16_t x87control_16
        eax_38, x87control_16 = __ftol(x87control_15, fconvert.t(var_10) * x87_r7_18 + x87_r6_21)
        eax_4[1].w = eax_38
        *(eax_4 + 6) = __ftol(x87control_16, fconvert.t(var_c) * x87_r7_18 + x87_r6_21)
    case 0xb
        int16_t eax_34
        eax_34, x87control_7 =
            __ftol(x87control, fconvert.t(var_18) * fconvert.t(65535f) + fconvert.t(0.5f))
        *eax_4 = eax_34
        *(eax_4 + 2) =
            __ftol(x87control_7, fconvert.t(var_14) * fconvert.t(65535f) + fconvert.t(0.5f))
    case 0xc
        x87_r7_18 = fconvert.t(65535f)
        goto label_45eb49
    case 0xd
        long double x87_r7_24 = fconvert.t(0.5f)
        int32_t eax_39
        int16_t x87control_17
        eax_39, x87control_17 = __ftol(x87control, fconvert.t(var_10) + x87_r7_24)
        int32_t eax_40
        int16_t x87control_18
        eax_40, x87control_18 = __ftol(x87control_17, fconvert.t(var_14) + x87_r7_24)
        *eax_4 = ((eax_39 & 0x3ff) << 0xa | (eax_40 & 0x3ff)) << 0xa
            | (__ftol(x87control_18, fconvert.t(var_18) + x87_r7_24) & 0x3ff)
    case 0xe
        x87_r7_7 = fconvert.t(511f)
        x87_r6_3 = fconvert.t(0.5f)
        int32_t eax_43
        int16_t x87control_19
        eax_43, x87control_19 = __ftol(x87control, fconvert.t(var_10) * x87_r7_7 + x87_r6_3)
        int32_t eax_44
        eax_44, x87control_3 = __ftol(x87control_19, fconvert.t(var_14) * x87_r7_7 + x87_r6_3)
        *eax_4 = ((eax_43 & 0x3ff) << 0xa | (eax_44 & 0x3ff)) << 0xa
            | (__ftol(x87control_3, fconvert.t(var_18) * x87_r7_7 + x87_r6_3) & 0x3ff)
    case 0xf
        j_sub_401034(eax_4, &var_18, 2)
    case 0x10
        j_sub_401034(eax_4, &var_18, 4)
