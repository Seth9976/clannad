// 函数: sub_4a53e1
// 地址: 0x4a53e1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_60 = edi
uint32_t eax_2 = sub_745f3f(*(arg1 + 8) << 2)
int32_t result

if (eax_2 != 0)
    int32_t var_40_1 = 0
    
    while (true)
        int32_t var_54_1 = 0
        int32_t i_4 = 0
        sub_4a39e3(arg1)
        sub_4a3f75(arg1)
        int32_t i = 0
        
        if (*(arg1 + 8) u> 0)
            do
                void* eax_4 = *(*(arg1 + 0x14) + (i << 2))
                
                if (*(eax_4 + 8) == 0xffffffff)
                    int32_t ecx_4 = *(eax_4 + 0x48)
                    
                    if (ecx_4 != 0xffffffff)
                        char eax_7 = (*(*(*(arg1 + 0x10) + (*(eax_4 + 4) << 2)) + 4)).b
                        
                        if ((eax_7 & 2) != 0 && (eax_7 & 0x20) == 0)
                            int32_t* edi_1 = *(*(arg1 + 0x18) + (ecx_4 << 2))
                            int32_t ecx_5 = *edi_1
                            int32_t eax_10 = ecx_5 & 0xf0000000
                            
                            if (eax_10 u>= 0x10000000 && eax_10 u<= 0x40000000)
                                int32_t ebx_2 = ecx_5 & 0xfff00000
                                bool cond:9_1
                                
                                if (ebx_2 u> 0x11400000)
                                    if (ebx_2 != 0x11500000 && ebx_2 != 0x20700000
                                            && ebx_2 != 0x20800000)
                                        cond:9_1 = ebx_2 == 0x20900000
                                    label_4a5501:
                                        
                                        if (not(cond:9_1))
                                            int32_t var_20_1 = 0
                                            
                                            if (edi_1[3] u> 0)
                                                int32_t* edx_2 = edi_1[4]
                                                
                                                while (i != *edx_2)
                                                    var_20_1 += 1
                                                    edx_2 = &edx_2[1]
                                                    
                                                    if (var_20_1 u>= edi_1[3])
                                                        break
                                            
                                            uint32_t temp0_1 =
                                                divu.dp.d(0:(edi_1[1]), ecx_5 & 0xfffff)
                                            int32_t eax_15 = sub_49e878(edi_1)
                                            int32_t var_1c_1 = 0
                                            
                                            if (temp0_1 u> 0)
                                                do
                                                    ebx_2 = ebx_2 * 0x83f + sub_49fe82(arg1, edi_1, 
                                                        var_1c_1, var_20_1, eax_15)
                                                    var_1c_1 += 1
                                                while (var_1c_1 u< temp0_1)
                                            
                                            int32_t i_5 = i_4
                                            i_4 += 1
                                            *(eax_4 + 0x40) = ebx_2
                                            *(eax_2 + (i_5 << 2)) = i
                                else if (ebx_2 != 0x11400000 && ebx_2 != 0x10f00000
                                        && ebx_2 != 0x11100000 && ebx_2 != 0x11200000)
                                    cond:9_1 = ebx_2 == 0x11300000
                                    goto label_4a5501
                
                i += 1
            while (i u< *(arg1 + 8))
        
        sub_458e55(sub_49fcf2, eax_2, i_4, arg1)
        
        if (i_4 u<= 0)
            break
        
        int32_t j_1 = 1
        uint32_t var_38_1 = eax_2
        int32_t i_3 = i_4
        int32_t i_1
        
        do
            int32_t ecx_10 = *var_38_1
            void* eax_23 = *(*(arg1 + 0x14) + (ecx_10 << 2))
            int32_t* edi_4 = *(*(arg1 + 0x18) + (*(eax_23 + 0x48) << 2))
            void* var_28_1 = eax_23
            int32_t* var_4c_2 = edi_4
            
            if (*(eax_23 + 0x30) == ecx_10)
                int32_t j = j_1
                int32_t j_2 = j
                
                for (; j u< i_4; j = j_2)
                    int32_t edx_7 = *(eax_2 + (j_2 << 2))
                    void* ecx_13 = *(*(arg1 + 0x14) + (edx_7 << 2))
                    
                    if (*(eax_23 + 0x40) != *(ecx_13 + 0x40))
                        break
                    
                    if (*(ecx_13 + 0x30) == edx_7)
                        int32_t edx_8 = *(ecx_13 + 0x48)
                        
                        if (*(eax_23 + 0x48) != edx_8 && *(eax_23 + 4) == *(ecx_13 + 4)
                                && *(eax_23 + 0x14) == *(ecx_13 + 0x14)
                                && *(eax_23 + 0x18) == *(ecx_13 + 0x18))
                            int32_t ecx_14 = *edi_4
                            
                            if (((**(*(arg1 + 0x18) + (edx_8 << 2)) ^ ecx_14) & 0xfff00000) == 0)
                                uint32_t temp0_2 = divu.dp.d(0:(edi_4[1]), ecx_14 & 0xfffff)
                                int32_t eax_26 = sub_49e878(edi_4)
                                
                                for (int32_t k = 0; k u< 2; k += 1)
                                    void* eax_27 = ecx_13
                                    
                                    if (k == 0)
                                        eax_27 = var_28_1
                                    
                                    int32_t edx_14 = *(eax_27 + 0x48)
                                    void* eax_28 = var_28_1
                                    int32_t var_48_1 = edx_14
                                    
                                    if (k == 0)
                                        eax_28 = ecx_13
                                    
                                    int32_t eax_29 = *(arg1 + 0x18)
                                    int32_t* edi_5 = *(eax_29 + (*(eax_28 + 0x48) << 2))
                                    void* ebx_10 = *(eax_29 + (edx_14 << 2))
                                    int32_t var_1c_2 = 0
                                    void* var_c_1 = ebx_10
                                    
                                    if (edi_5[3] u> 0)
                                        int32_t* var_34_1 = edi_5[4]
                                        
                                        while (*(*(*(arg1 + 0x14) + (*var_34_1 << 2)) + 0x54)
                                                u> edx_14)
                                            int32_t var_18_1 = 0
                                            
                                            if (*(ebx_10 + 0xc) u> 0)
                                                do
                                                    int32_t var_8_1 = 0
                                                    
                                                    if (temp0_2 u> 0)
                                                        while (true)
                                                            int32_t eax_34 = sub_49fe82(arg1, 
                                                                edi_5, var_8_1, var_1c_2, eax_26)
                                                            
                                                            if (sub_49fe82(arg1, ebx_10, var_8_1, 
                                                                    var_18_1, eax_26) != eax_34)
                                                                break
                                                            
                                                            var_8_1 += 1
                                                            
                                                            if (var_8_1 u>= temp0_2)
                                                                break
                                                            
                                                            ebx_10 = var_c_1
                                                        
                                                        ebx_10 = var_c_1
                                                    
                                                    if (var_8_1 == temp0_2)
                                                        break
                                                    
                                                    var_18_1 += 1
                                                while (var_18_1 u< *(ebx_10 + 0xc))
                                                
                                                edx_14 = var_48_1
                                            
                                            if (var_18_1 == *(ebx_10 + 0xc))
                                                break
                                            
                                            var_1c_2 += 1
                                            var_34_1 = &var_34_1[1]
                                            
                                            if (var_1c_2 u>= edi_5[3])
                                                break
                                    
                                    if (var_1c_2 u>= edi_5[3])
                                        int32_t var_1c_3 = 0
                                        
                                        if (edi_5[3] u> 0)
                                            do
                                                int32_t var_20_2 = 0
                                                
                                                if (*(ebx_10 + 0xc) u> 0)
                                                    do
                                                        int32_t var_8_2 = 0
                                                        
                                                        if (temp0_2 u> 0)
                                                            while (sub_49fe82(arg1, ebx_10, 
                                                                    var_8_2, var_20_2, eax_26) ==
                                                                    sub_49fe82(arg1, edi_5, var_8_2, 
                                                                    var_1c_3, eax_26))
                                                                var_8_2 += 1
                                                                
                                                                if (var_8_2 u>= temp0_2)
                                                                    break
                                                                
                                                                ebx_10 = var_c_1
                                                            
                                                            ebx_10 = var_c_1
                                                        
                                                        if (var_8_2 == temp0_2)
                                                            break
                                                        
                                                        var_20_2 += 1
                                                    while (var_20_2 u< *(ebx_10 + 0xc))
                                                
                                                void* ecx_26 = *(*(arg1 + 0x14)
                                                    + (*(edi_5[4] + (var_1c_3 << 2)) << 2))
                                                var_1c_3 += 1
                                                *(ecx_26 + 0x30) =
                                                    *(*(ebx_10 + 0x10) + (var_20_2 << 2))
                                            while (var_1c_3 u< edi_5[3])
                                        
                                        *edi_5 = 0
                                        var_54_1 = 1
                                        break
                                
                                eax_23 = var_28_1
                                edi_4 = var_4c_2
                    
                    j_2 += 1
            
            var_38_1 += 4
            j_1 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        
        if (var_54_1 == 0)
            break
        
        int32_t i_2 = 0
        
        if (*(arg1 + 8) u> 0)
            int32_t eax_50 = *(arg1 + 0x14)
            
            do
                void* ecx_27 = *(eax_50 + (i_2 << 2))
                
                while (true)
                    int32_t edx_19 = *(ecx_27 + 0x30)
                    
                    if (edx_19 == *(*(eax_50 + (edx_19 << 2)) + 0x30))
                        break
                    
                    *(ecx_27 + 0x30) = *(*(eax_50 + (*(ecx_27 + 0x30) << 2)) + 0x30)
                    eax_50 = *(arg1 + 0x14)
                
                i_2 += 1
            while (i_2 u< *(arg1 + 8))
        
        sub_4a3f8e(arg1)
        var_40_1 += 1
    
    int32_t result_1
    result_1.b = var_40_1 == 0
    result = result_1
else
    result = 0x8007000e

j__free(eax_2)
return result
