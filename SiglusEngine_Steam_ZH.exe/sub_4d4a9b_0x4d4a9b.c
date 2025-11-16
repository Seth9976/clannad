// 函数: sub_4d4a9b
// 地址: 0x4d4a9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x15c) = 0
int32_t* edx = *(arg1 + 0x100)
int32_t eax = *edx
int32_t esi_1 = eax & 0xfff00000
int32_t edi
int32_t var_20 = edi

if (esi_1 == 0x20500000)
    int32_t eax_1 = eax & 0xfffff
    int32_t* eax_2 = edx[2]
    void* edx_1 = &eax_2[eax_1]
    int32_t esi_3 = *(arg1 + 0x14)
    int32_t edx_2 = *(arg1 + 0x10)
    void* edx_3
    
    if ((*(*(edx_2 + (*(*(esi_3 + (*eax_2 << 2)) + 4) << 2)) + 4) & 0x100) != 0)
        edx_3 = eax_2
        eax_2 = edx_1
    label_4d4b20:
        int32_t* var_10_1 = edx_3
        
        if (eax_1 u> 0)
            int32_t ebx_6 = 0
            int32_t* var_8_3 = eax_2 - edx_3
            
            do
                long double x87_r7_1 = fconvert.t(2.0)
                long double x87_r6_1 = fconvert.t(*(*(esi_3 + (*(var_8_3 + edx_3) << 2)) + 0x20))
                x87_r6_1 - x87_r7_1
                void* eax_5
                eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    return 1
                
                if ((*(*(esi_3 + (*edx_3 << 2)) + 0x3c) & 0x1f0000) != 0x20000
                        && (*(arg1 + 0x6e) & 8) != 0)
                    return 1
                
                ebx_6 += 1
                edx_3 += 4
            while (ebx_6 u< eax_1)
        
        int32_t var_24_1 = 0
        int32_t var_28_1 = 0
        int32_t var_2c_1 = 0x40000
        return sub_4d3501(arg1, 0x40000, 0x20000, var_10_1, 0x40000, nullptr, 0)
    
    if ((*(*(edx_2 + (*(*(esi_3 + (*edx_1 << 2)) + 4) << 2)) + 4) & 0x100) != 0)
        edx_3 = edx_1
        goto label_4d4b20
else if (esi_1 == 0x20400000)
    int32_t* edx_5 = edx[2]
    int32_t eax_10 = eax & 0xfffff
    int32_t var_c_2 = 0
    
    if (eax_10 u> 0)
        int32_t* esi_4 = edx_5
        
        do
            int32_t eax_12 = *esi_4
            
            if (eax_12 != esi_4[eax_10])
                return 1
            
            if ((*(*(*(arg1 + 0x14) + (eax_12 << 2)) + 0x3c) & 0x1f0000) != 0x20000
                    && (*(arg1 + 0x6e) & 8) != 0)
                return 1
            
            var_c_2 += 1
            esi_4 = &esi_4[1]
        while (var_c_2 u< eax_10)
    
    int32_t var_24_2 = 0
    int32_t var_28_2 = 0
    int32_t var_2c_2 = 0x40000
    return sub_4d3501(arg1, 0x40000, 0x20000, edx_5, 0x40000, nullptr, 0)

return 1
