// 函数: sub_4a58b2
// 地址: 0x4a58b2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t var_10 = 0
int32_t var_14 = 0
int32_t var_18 = 0
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* ebx_1 = *(*(arg1 + 0x14) + (i << 2))
        
        if (*(arg1 + 0x74) != *(ebx_1 + 4))
            void* edi_1 = ebx_1 + 8
            
            if (*edi_1 != 0xffffffff)
                if (var_18 == 0)
                    sub_4a39e3(arg1)
                    var_18 = 1
                
                int32_t j = *edi_1
                int32_t eax_3 = *(*(*(arg1 + 0x14) + (j << 2)) + 0x48)
                
                if (eax_3 != 0xffffffff)
                    int32_t* eax_4 = *(*(arg1 + 0x18) + (eax_3 << 2))
                    
                    if ((*eax_4 & 0xfff00000) == 0x10000000)
                        int32_t var_8_1 = 0
                        
                        if (eax_4[3] u> 0)
                            int32_t* edx_5 = eax_4[4]
                            
                            while (*edx_5 != j)
                                var_8_1 += 1
                                edx_5 = &edx_5[1]
                                
                                if (var_8_1 u>= eax_4[3])
                                    break
                        
                        edi_1 = eax_4[2] + (var_8_1 << 2)
                
                int32_t j_1 = *edi_1
                void* eax_7 = *(*(arg1 + 0x14) + (j_1 << 2))
                long double x87_r7_1
                
                if ((*(arg1 + 0x6f) & 1) == 0)
                    x87_r7_1 = fconvert.t(0.5)
                else
                    x87_r7_1 = float.t(0)
                
                double var_28_1 = fconvert.d(x87_r7_1)
                int16_t ecx_6 = (*(*(*(arg1 + 0x10) + (*(eax_7 + 4) << 2)) + 4)).w
                int16_t x87control
                
                if ((ecx_6:1.b & 1) != 0 && *(eax_7 + 8) == 0xffffffff)
                    int32_t eax_8
                    eax_8, x87control =
                        __ftol(x87control, fconvert.t(var_28_1) + fconvert.t(*(eax_7 + 0x20)))
                    int32_t ecx_7 = *(arg1 + 8)
                    int32_t var_8_3 = 0
                    int32_t edi_5 = eax_8 + *(ebx_1 + 0xc)
                    
                    if (ecx_7 u> 0)
                        int32_t* var_10_1 = *(arg1 + 0x14)
                        
                        do
                            if (var_8_3 != i)
                                void* eax_12 = *var_10_1
                                
                                if (*(eax_12 + 4) == *(ebx_1 + 4) && *(eax_12 + 8) == 0xffffffff
                                        && *(eax_12 + 0xc) == edi_5
                                        && *(eax_12 + 0x10) == *(ebx_1 + 0x10)
                                        && *(eax_12 + 0x14) == *(ebx_1 + 0x14)
                                        && *(eax_12 + 0x18) == *(ebx_1 + 0x18))
                                    if (var_14 == 0)
                                        sub_4a3f75(arg1)
                                        var_14 = 1
                                    
                                    *(ebx_1 + 0x30) = var_8_3
                                    break
                            
                            var_8_3 += 1
                            var_10_1 = &var_10_1[1]
                        while (var_8_3 u< ecx_7)
                    
                    if (var_8_3 == *(arg1 + 8))
                        *(ebx_1 + 8) = 0xffffffff
                        int32_t eax_16 = *(ebx_1 + 4)
                        *(ebx_1 + 0xc) = edi_5
                        
                        if (edi_5 u>= *(*(*(arg1 + 0x10) + (eax_16 << 2)) + 8))
                            sub_4a4100(arg1, *(ebx_1 + 0x60), 0xfa7, "array index out of bounds")
                            return 0x80004005
                    
                    var_10 = 1
                else if ((ecx_6.b & 2) != 0)
                    int32_t eax_19 = *(eax_7 + 0x48)
                    
                    if (eax_19 != 0xffffffff)
                        int32_t* eax_20 = *(*(arg1 + 0x18) + (eax_19 << 2))
                        
                        if ((*eax_20 & 0xfff00000) == 0x20400000)
                            int32_t ebx_2 = eax_20[3]
                            int32_t edi_6 = 0
                            
                            if (ebx_2 u> 0)
                                int32_t* ecx_13 = eax_20[4]
                                
                                while (*ecx_13 != j_1)
                                    edi_6 += 1
                                    ecx_13 = &ecx_13[1]
                                    
                                    if (edi_6 u>= ebx_2)
                                        break
                            
                            int32_t eax_21 = eax_20[2]
                            int32_t edx_9 = *(eax_21 + (edi_6 << 2))
                            int32_t ecx_14 = *(arg1 + 0x14)
                            int32_t edi_7 = *(eax_21 + ((ebx_2 + edi_6) << 2))
                            int32_t eax_22 = *(arg1 + 0x10)
                            char* edx_10 = *(ecx_14 + (edx_9 << 2))
                            char* ecx_15 = *(ecx_14 + (edi_7 << 2))
                            char ebx_6
                            
                            if ((*(*(eax_22 + (*(edx_10 + 4) << 2)) + 5) & 1) != 0
                                    && *(edx_10 + 8) == 0xffffffff)
                                ebx_6 = (*edx_10).b
                            
                            int32_t var_10_2
                            int32_t eax_24
                            
                            if ((*(*(eax_22 + (*(edx_10 + 4) << 2)) + 5) & 1) != 0
                                    && *(edx_10 + 8) == 0xffffffff && (ebx_6 & 4) != 0
                                    && ((ebx_6 & 2) != 0 || (*ecx_15 & 2) != 0))
                                int32_t eax_23
                                eax_23, x87control = __ftol(x87control, 
                                    fconvert.t(var_28_1) + fconvert.t(*(edx_10 + 0x20)))
                                var_10_2 = eax_23
                                eax_24 = edi_7
                            label_4a5b36:
                                int32_t j_2 = 0
                                int32_t var_1c_2 = eax_24
                                
                                if (*edi_1 != j)
                                    if (*(arg1 + 8) u> 0)
                                        do
                                            void* ecx_20 = *(*(arg1 + 0x14) + (j_2 << 2))
                                            
                                            if (j == *(ecx_20 + 8))
                                                *(ecx_20 + 0xc) += var_10_2
                                                eax_24 = var_1c_2
                                            
                                            j_2 += 1
                                        while (j_2 u< *(arg1 + 8))
                                    
                                    *edi_1 = eax_24
                                else if (*(arg1 + 8) u> 0)
                                    do
                                        void* ecx_18 = *(*(arg1 + 0x14) + (j_2 << 2))
                                        
                                        if (j == *(ecx_18 + 8))
                                            *(ecx_18 + 0xc) += var_10_2
                                            *(ecx_18 + 8) = eax_24
                                        
                                        j_2 += 1
                                    while (j_2 u< *(arg1 + 8))
                                
                                var_10 = 1
                            else if ((*(*(eax_22 + (*(ecx_15 + 4) << 2)) + 5) & 1) != 0
                                    && *(ecx_15 + 8) == 0xffffffff)
                                char eax_26 = (*ecx_15).b
                                
                                if ((eax_26 & 4) != 0 && ((*edx_10 & 2) != 0 || (eax_26 & 2) != 0))
                                    int32_t eax_27
                                    eax_27, x87control = __ftol(x87control, 
                                        fconvert.t(var_28_1) + fconvert.t(*(ecx_15 + 0x20)))
                                    var_10_2 = eax_27
                                    eax_24 = edx_9
                                    goto label_4a5b36
        
        i += 1
    while (i u< *(arg1 + 8))
    
    if (var_10 != 0)
        if (var_14 != 0)
            sub_4a3f8e(arg1)
        
        return 0

return 1
