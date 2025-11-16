// 函数: sub_4cbb85
// 地址: 0x4cbb85
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t* eax = *(arg1 + 0x100)
int32_t ecx_1 = *eax & 0xfff00000

if ((ecx_1 == 0x50000000 || ecx_1 == 0x10500000 || ecx_1 == 0x10600000 || ecx_1 == 0x10300000
        || ecx_1 == 0x10700000) && eax[3] == 1)
    int32_t eax_2 = *eax[4]
    int32_t ecx_2 = *(arg1 + 0x14)
    int32_t var_8_1 = 0
    void* eax_3 = *(ecx_2 + (eax_2 << 2))
    int32_t edx_1 = *(eax_3 + 0x54)
    
    if (edx_1 != 0xffffffff)
        int32_t var_c_1 = 0
        int32_t* esi_2 = *(*(arg1 + 0x18) + (edx_1 << 2))
        int32_t i_5 = esi_2[3]
        
        if (i_5 u> 0)
            int32_t* ebx_1 = esi_2[4]
            int32_t i_3 = i_5
            int32_t i
            
            do
                int32_t edx_4 = *(*(ecx_2 + (*ebx_1 << 2)) + 0x4c)
                
                if (edx_4 u> var_c_1)
                    var_c_1 = edx_4
                
                ebx_1 = &ebx_1[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        void* edx_7 = *(ecx_2 + (*esi_2[4] << 2))
        int32_t ebx_2 = *(edx_7 + 4)
        
        if (ebx_2 == *(eax_3 + 4) && *(edx_7 + 0xc) == *(eax_3 + 0xc)
                && *(edx_7 + 8) == *(eax_3 + 8) && *(eax_3 + 0x54) != *(eax_3 + 0x58))
            var_8_1 = 1
        
        if (var_c_1 u<= *(arg1 + 0xfc) && (var_8_1 != 0 || *(eax_3 + 0x54) == *(eax_3 + 0x58)))
            if ((*(arg1 + 0x6c) & 1) == 0)
            label_4cbc96:
                
                if ((*esi_2 & 0xfff00000) == 0x10000000
                        && (*(*(*(arg1 + 0x10) + (ebx_2 << 2)) + 4) & 4) == 0)
                    int32_t i_1 = 0
                    
                    if (esi_2[1] u> 0)
                        int32_t* eax_12 = esi_2[2]
                        
                        do
                            if (*eax_12 != eax_2)
                                return 1
                            
                            i_1 += 1
                            eax_12 = &eax_12[1]
                        while (i_1 u< esi_2[1])
                    
                    int32_t* ebx_5 = nullptr
                    
                    if (*(*(ecx_2 + (*esi_2[2] << 2)) + 0x3c) == 0)
                        void* eax_16 = sub_49ec23(0x74)
                        
                        if (eax_16 != 0)
                            ebx_5 = sub_49e789(eax_16)
                        
                        if (ebx_5 == 0)
                            return 0x8007000e
                        
                        int32_t* eax_19 = *(arg1 + 0x100)
                        int32_t ecx_4
                        ecx_4.b = var_8_1 != 0
                        int32_t result = sub_49ec6e(ebx_5, *eax_19, eax_19[1], ecx_4 + esi_2[3], 1)
                        
                        if (result s< 0)
                            sub_46cb59(ebx_5, 1)
                            return result
                        
                        int32_t ecx_9 = esi_2[3] << 2
                        int32_t esi_4
                        int32_t edi_4
                        edi_4, esi_4 = __builtin_memcpy(ebx_5[4], esi_2[4], ecx_9 u>> 2 << 2)
                        void* eax_21 = arg1
                        __builtin_memcpy(edi_4, esi_4, ecx_9 & 3)
                        
                        if (var_8_1 != 0)
                            *(ebx_5[4] + (esi_2[3] << 2)) = **(*(eax_21 + 0x100) + 0x10)
                        
                        int32_t ecx_16 = ebx_5[3]
                        int32_t var_8_2 = 0
                        
                        if (ecx_16 u> 0)
                            int32_t i_4 = 1
                            
                            do
                                int32_t i_2 = i_4
                                
                                if (i_4 u< ecx_16)
                                    do
                                        int32_t ecx_17 = ebx_5[4]
                                        int32_t edx_16 = *(eax_21 + 0x14)
                                        void* edi_5 = *(edx_16 + (*(ecx_17 + (var_8_2 << 2)) << 2))
                                        int32_t esi_9 = i_2 << 2
                                        void* edx_17 = *(edx_16 + (*(esi_9 + ecx_17) << 2))
                                        
                                        if (*(edi_5 + 0x10) u> *(edx_17 + 0x10))
                                            int32_t ecx_20 = ebx_5[4]
                                            int32_t* esi_10 = esi_9 + ecx_20
                                            int32_t edx_18 = *esi_10
                                            *esi_10 = *(ecx_20 + (var_8_2 << 2))
                                            *(ebx_5[4] + (var_8_2 << 2)) = edx_18
                                        
                                        if (*(edi_5 + 0x10) == *(edx_17 + 0x10))
                                            sub_4a4100(eax_21, *(*(eax_21 + 0x100) + 0x3c), 0x12d6, 
                                                "internal error: multiple write to same output")
                                            sub_46cb59(esi_2, 1)
                                            return 0x80004005
                                        
                                        i_2 += 1
                                    while (i_2 u< ebx_5[3])
                                
                                var_8_2 += 1
                                ecx_16 = ebx_5[3]
                                i_4 += 1
                            while (var_8_2 u< ecx_16)
                        
                        void* edx_21 = *(eax_21 + 0x100)
                        int32_t ecx_26 = *(edx_21 + 4) << 2
                        int32_t esi_13
                        int32_t edi_7
                        edi_7, esi_13 = __builtin_memcpy(ebx_5[2], *(edx_21 + 8), ecx_26 u>> 2 << 2)
                        __builtin_memcpy(edi_7, esi_13, ecx_26 & 3)
                        void* ecx_31 = *(*(eax_21 + 0x18) + (*(eax_21 + 0xfc) << 2))
                        
                        if (ecx_31 != 0)
                            sub_46cb59(ecx_31, 1)
                            eax_21 = arg1
                        
                        *(*(eax_21 + 0x18) + (*(eax_21 + 0xfc) << 2)) = ebx_5
                        *esi_2 = 0
                        return 0
            else if (esi_2[3] != 0 && *(*(ecx_2 + (*esi_2[4] << 2)) + 4) != *(arg1 + 0x84))
                goto label_4cbc96

return 1
