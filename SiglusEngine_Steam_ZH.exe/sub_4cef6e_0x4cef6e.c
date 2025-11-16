// 函数: sub_4cef6e
// 地址: 0x4cef6e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
void* eax_1 = *(*(arg1 + 0x14) + (arg2 << 2))
int32_t edx_1 = *(eax_1 + 0x54)
int32_t esi = *(eax_1 + 0x48)
int32_t edi
int32_t var_18 = edi

if (edx_1 == edx_1 && *(eax_1 + 0x58) == edx_1)
    int32_t edx_2 = 0xffffffff
    
    if (esi != 0xffffffff)
        int32_t* edi_1 = *(*(arg1 + 0x18) + (esi << 2))
        int32_t eax_3 = *edi_1
        
        if ((eax_3 & 0xfff00000) == 0x20400000)
            int32_t var_8_1 = 0
            int32_t eax_5 = edi_1[3]
            
            if (eax_5 u> 0)
                int32_t* esi_3 = edi_1[4]
                
                do
                    if (*esi_3 == arg2)
                        edx_2 = var_8_1
                    
                    var_8_1 += 1
                    esi_3 = &esi_3[1]
                while (var_8_1 u< eax_5)
                
                if (edx_2 != 0xffffffff)
                    int32_t eax_6 = edi_1[2]
                    int32_t* esi_4 = eax_6 + (edx_2 << 2)
                    int32_t* esi_6 = eax_6 + ((edx_2 + (eax_3 & 0xfffff)) << 2)
                    int32_t eax_7 = *(arg1 + 0x14)
                    int32_t edx_4 = *(arg1 + 0x10)
                    int32_t* edx_5
                    
                    if ((*(*(edx_4 + (*(*(eax_7 + (*esi_6 << 2)) + 4) << 2)) + 5) & 1) != 0)
                        edx_5 = esi_4
                    label_4cf03d:
                        int32_t ecx = *(arg1 + 0x14)
                        long double x87_r7_1 = fconvert.t(1.0)
                        long double x87_r6_1 = fconvert.t(*(*(ecx + (*esi_6 << 2)) + 0x20))
                        x87_r6_1 - x87_r7_1
                        void* eax_12
                        eax_12.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                            int32_t eax_13 = *edx_5
                            
                            if ((*(*(ecx + (eax_13 << 2)) + 0x3c) & 0x1f0000) == 0x80000)
                                *arg4 = eax_13
                                *arg3 = edi_1
                                return 0
                    else if ((*(*(edx_4 + (*(*(eax_7 + (*esi_4 << 2)) + 4) << 2)) + 5) & 1) != 0)
                        edx_5 = esi_6
                        esi_6 = esi_4
                        goto label_4cf03d

return 1
