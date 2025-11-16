// 函数: sub_40b028
// 地址: 0x40b028
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t edi
int32_t var_20 = edi

if (arg1 == 0 || arg4 == 0 || arg5 == 0)
    return 0x8876086c

float* edi_1 = arg4

if (arg2 != 0)
    *edi_1 = *arg1
    void* edi_9 = &edi_1[1]
    void* esi_8 = &arg1[1]
    *edi_9 = *esi_8
    *(edi_9 + 4) = *(esi_8 + 4)
    *arg5 = *arg1
    void* edi_13 = &arg5[1]
    void* esi_12 = &arg1[1]
    *edi_13 = *esi_12
    *(edi_13 + 4) = *(esi_12 + 4)
    void* ecx_1 = arg1 + arg3
    
    if (arg2 u> 1)
        int32_t i_1 = arg2 - 1
        int32_t i
        
        do
            long double x87_r7_7 = fconvert.t(*ecx_1)
            long double temp1_1 = fconvert.t(*arg4)
            x87_r7_7 - temp1_1
            float eax_1
            eax_1.w = (x87_r7_7 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp1_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                long double x87_r7_8 = fconvert.t(*ecx_1)
                long double temp2_1 = fconvert.t(*arg5)
                x87_r7_8 - temp2_1
                eax_1.w = (x87_r7_8 < temp2_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe
                
                if ((eax_1:1.b & 0x41) == 0)
                    *arg5 = *ecx_1
            else
                *arg4 = *ecx_1
            
            long double x87_r7_9 = fconvert.t(*(ecx_1 + 4))
            long double temp3_1 = fconvert.t(arg4[1])
            x87_r7_9 - temp3_1
            eax_1.w = (x87_r7_9 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                long double x87_r7_10 = fconvert.t(*(ecx_1 + 4))
                long double temp4_1 = fconvert.t(arg5[1])
                x87_r7_10 - temp4_1
                eax_1.w = (x87_r7_10 < temp4_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe
                
                if ((eax_1:1.b & 0x41) == 0)
                    arg5[1] = *(ecx_1 + 4)
            else
                arg4[1] = *(ecx_1 + 4)
            
            long double x87_r7_11 = fconvert.t(*(ecx_1 + 8))
            long double temp5_1 = fconvert.t(arg4[2])
            x87_r7_11 - temp5_1
            eax_1.w = (x87_r7_11 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                long double x87_r7_12 = fconvert.t(*(ecx_1 + 8))
                long double temp6_1 = fconvert.t(arg5[2])
                x87_r7_12 - temp6_1
                eax_1.w = (x87_r7_12 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_12, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp6_1 ? 1 : 0) << 0xe
                
                if ((eax_1:1.b & 0x41) == 0)
                    arg5[2] = *(ecx_1 + 8)
            else
                arg4[2] = *(ecx_1 + 8)
            
            ecx_1 += arg3
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    result = 0
    float var_10 = fconvert.s(float.t(0))
    float var_c_1 = fconvert.s(float.t(0))
    *edi_1 = fconvert.s(float.t(0))
    void* edi_2 = &edi_1[1]
    float* esi_1 = &var_10
    *edi_2 = *esi_1
    *(edi_2 + 4) = esi_1[1]
    var_10 = fconvert.s(float.t(0))
    float var_c_2 = fconvert.s(float.t(0))
    *arg5 = fconvert.s(float.t(0))
    void* edi_6 = &arg5[1]
    float* esi_4 = &var_10
    *edi_6 = *esi_4
    *(edi_6 + 4) = esi_4[1]

return result
