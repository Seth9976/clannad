// 函数: sub_41310d
// 地址: 0x41310d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1
int32_t result = 0

if (arg3 u> 0)
    do
        ecx[result] = result
        result += 1
    while (result u< arg3)

if (arg3 u> 1)
    int32_t* i = (arg3 u>> 1) - 1
    int32_t edi
    int32_t var_20_1 = edi
    
    if (i != 0xffffffff)
        int32_t* var_8_1 = i * 2 + 1
        
        do
            int32_t* edx_1 = var_8_1
            int32_t result_1 = ecx[i]
            arg1 = i
            
            while (edx_1 u< arg3)
                int32_t edi_2 = ecx[edx_1]
                
                if (edx_1 + 1 u< arg3)
                    int32_t eax_3 = ecx[edx_1 + 1]
                    long double x87_r7_1 = fconvert.t(*(arg2 + (eax_3 << 2)))
                    int32_t var_14_1 = eax_3
                    long double temp2_1 = fconvert.t(*(arg2 + (edi_2 << 2)))
                    x87_r7_1 - temp2_1
                    eax_3.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        edi_2 = var_14_1
                        edx_1 += 1
                
                long double x87_r7_2 = fconvert.t(*(arg2 + (edi_2 << 2)))
                long double temp1_1 = fconvert.t(*(arg2 + (result_1 << 2)))
                x87_r7_2 - temp1_1
                float* eax_4
                eax_4.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
                
                if ((eax_4:1.b & 0x41) == 0)
                    break
                
                int32_t* edi_3 = arg1
                int32_t eax_5 = ecx[edx_1]
                arg1 = edx_1
                edx_1 = edx_1 * 2 + 1
                ecx[edi_3] = eax_5
            
            result = result_1
            var_8_1 -= 2
            i -= 1
            ecx[arg1] = result
        while (i != 0xffffffff)
    
    int32_t esi_2 = arg3
    
    while (true)
        esi_2 -= 1
        
        if (esi_2 == 0xffffffff)
            break
        
        int32_t result_2 = ecx[esi_2]
        arg1 = nullptr
        ecx[esi_2] = *ecx
        int32_t* edx_4 = 1
        
        if (esi_2 u> 1)
            do
                int32_t edi_5 = ecx[edx_4]
                
                if (edx_4 + 1 u< esi_2)
                    int32_t ebx_2 = ecx[edx_4 + 1]
                    long double x87_r7_3 = fconvert.t(*(arg2 + (ebx_2 << 2)))
                    long double temp4_1 = fconvert.t(*(arg2 + (edi_5 << 2)))
                    x87_r7_3 - temp4_1
                    int32_t eax_8
                    eax_8.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_2))
                        edx_4 += 1
                        edi_5 = ebx_2
                
                long double x87_r7_4 = fconvert.t(*(arg2 + (edi_5 << 2)))
                long double temp3_1 = fconvert.t(*(arg2 + (result_2 << 2)))
                x87_r7_4 - temp3_1
                float* eax_10
                eax_10.w = (x87_r7_4 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp3_1 ? 1 : 0) << 0xe
                
                if ((eax_10:1.b & 0x41) == 0)
                    break
                
                int32_t* edi_6 = arg1
                int32_t eax_11 = ecx[edx_4]
                arg1 = edx_4
                edx_4 = edx_4 * 2 + 1
                ecx[edi_6] = eax_11
            while (edx_4 u< esi_2)
        
        result = result_2
        ecx[arg1] = result

return result
