// 函数: sub_4a4c49
// 地址: 0x4a4c49
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_34 = edi
uint32_t var_10 = 0
sub_4a39e3(arg1)
int32_t var_8 = 0
int32_t result

if (*(arg1 + 8) u<= 0)
label_4a4d41:
    result = 0
else
    do
        void* edi_1 = *(*(arg1 + 0x14) + (i << 2))
        int32_t ecx = *(arg1 + 0x10)
        
        if ((*(*(ecx + (*(edi_1 + 4) << 2)) + 4) & 0x20) == 0)
            *(edi_1 + 0x30) = i
        else
            int32_t var_38_1 = ecx
            int32_t var_3c_1 = ecx
            var_3c_1.q = fconvert.d(float.t(0))
            int32_t eax_4 = sub_49f544(arg1, *(arg1 + 0x88), 0, 0, var_3c_1)
            *(edi_1 + 0x30) = eax_4
            
            if (eax_4 == 0xffffffff)
                goto label_4a4ec5_1
            
            var_8 += 1
            *(*(*(arg1 + 0x14) + (eax_4 << 2)) + 0x14) = *(edi_1 + 0x14)
            *(*(*(arg1 + 0x14) + (*(edi_1 + 0x30) << 2)) + 0x18) = *(edi_1 + 0x18)
        
        i += 1
    while (i u< *(arg1 + 8))
    
    if (var_8 == 0)
    label_4a4d41_1:
        result = 0
    else
        sub_4a3f8e(arg1)
        uint32_t eax_10 = sub_745f3f(var_8 << 2)
        var_10 = eax_10
        
        if (eax_10 == 0)
        label_4a4ec5:
            result = 0x8007000e
        else
            int32_t i_1 = 0
            int32_t var_8_1 = 0
            
            if (*(arg1 + 8) u> 0)
                do
                    if ((*(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (i_1 << 2)) + 4) << 2)) + 4)
                            & 0x20) != 0)
                        int32_t edx_2 = var_8_1
                        var_8_1 += 1
                        *(var_10 + (edx_2 << 2)) = i_1
                    
                    i_1 += 1
                while (i_1 u< *(arg1 + 8))
            
            sub_458e55(sub_49f952, var_10, var_8_1, arg1)
            int32_t edx_3 = 0
            int32_t var_18_1 = 0
            
            if (var_8_1 u> 0)
                while (true)
                    int32_t edi_3 = var_10 + (edx_3 << 2)
                    int32_t eax_13 = *(arg1 + 0x14)
                    void* ecx_15 = *(eax_13 + (*edi_3 << 2))
                    int32_t var_28_1 = edi_3
                    int32_t var_c_1 = 1
                    
                    if (edx_3 + 1 u< var_8_1)
                        int32_t var_14_1 = edx_3 + 1
                        int32_t* var_1c_1 = edi_3 + 4
                        
                        do
                            void* edx_8 = *(eax_13 + (*var_1c_1 << 2))
                            
                            if (*(ecx_15 + 4) != *(edx_8 + 4))
                                break
                            
                            if (*(ecx_15 + 8) != *(edx_8 + 8))
                                break
                            
                            if (*(ecx_15 + 0xc) != *(edx_8 + 0xc))
                                break
                            
                            var_c_1 += 1
                            var_14_1 += 1
                            var_1c_1 = &var_1c_1[1]
                        while (var_14_1 u< var_8_1)
                    
                    int32_t eax_17 =
                        sub_49f5a4(arg1, (var_c_1 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
                    
                    if (eax_17 == 0xffffffff)
                        break
                    
                    void* eax_18 = *(*(arg1 + 0x18) + (eax_17 << 2))
                    int32_t var_24_1 = 0
                    
                    if (var_c_1 u> 0)
                        int32_t var_20_1 = edi_3
                        
                        while (true)
                            void* eax_21 = *(*(arg1 + 0x14) + (*var_20_1 << 2))
                            int32_t i_2 = *(eax_21 + 0x30)
                            int32_t eax_22 = *(eax_21 + 0x48)
                            
                            if (eax_22 != 0xffffffff)
                                while (true)
                                    int32_t* edi_4 = *(*(arg1 + 0x18) + (eax_22 << 2))
                                    
                                    if (edi_4[0xf] != 0)
                                        int32_t result_1 = sub_49e7bf(eax_18, edi_4)
                                        result = result_1
                                        
                                        if (result_1 s< 0)
                                            goto label_4a4d48
                                    
                                    if ((*edi_4 & 0xfff00000) == 0x10000000)
                                        int32_t ecx_21 = edi_4[3]
                                        int32_t eax_25 = 0
                                        
                                        if (ecx_21 u> 0)
                                            int32_t* edx_10 = edi_4[4]
                                            
                                            while (i_2 != *edx_10)
                                                eax_25 += 1
                                                edx_10 = &edx_10[1]
                                                
                                                if (eax_25 u>= ecx_21)
                                                    break
                                        
                                        i_2 = *(edi_4[2] + (eax_25 << 2))
                                        eax_22 = *(*(*(arg1 + 0x14) + (i_2 << 2)) + 0x48)
                                        
                                        if (eax_22 != 0xffffffff)
                                            continue
                                    
                                    edi_3 = var_28_1
                                    break
                            
                            if (*(eax_18 + 0x3c) != 0)
                                break
                            
                            var_24_1 += 1
                            var_20_1 += 4
                            
                            if (var_24_1 u>= var_c_1)
                                break
                    
                    int32_t edx_11 = 0
                    
                    if (var_c_1 u> 0)
                        int32_t eax_30 = edi_3
                        
                        do
                            *(*(eax_18 + 8) + (edx_11 << 2)) =
                                *(*(*(arg1 + 0x14) + (*eax_30 << 2)) + 0x30)
                            *(*(eax_18 + 0x10) + (edx_11 << 2)) = *eax_30
                            edx_11 += 1
                            eax_30 += 4
                        while (edx_11 u< var_c_1)
                    
                    var_18_1 += var_c_1
                    
                    if (var_18_1 u>= var_8_1)
                        goto label_4a4d41_2
                    
                    edx_3 = var_18_1
                
            label_4a4ec5_1:
                result = 0x8007000e
            else
            label_4a4d41_2:
                result = 0

label_4a4d48:
j__free(var_10)
return result
