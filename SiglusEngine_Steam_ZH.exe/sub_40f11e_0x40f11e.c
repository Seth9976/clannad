// 函数: sub_40f11e
// 地址: 0x40f11e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg2
char var_6 = 0
char var_5 = 0

if (eax != 0)
    goto label_40f138

void* var_c
void* result

if (*(arg1 + 0x24c) == 0)
    result = sub_40b67c(arg1, &var_c, 0x10)
    
    if (result s>= 0)
        goto label_40f16a
else
    eax = *(arg1 + 0x24c)
    arg2 = eax
label_40f138:
    var_c = eax
label_40f16a:
    void* var_18_1 = nullptr
    int32_t edi
    int32_t var_48_2 = edi
    
    if (*(arg1 + 0x264) u> 0)
        void* eax_2 = *(arg1 + 0x250)
        void* ecx_1 = var_c
        void** ebx_1 = ecx_1 + 4
        void* var_14_1 = eax_2
        void** var_28_1 = ebx_1
        
        while (true)
            int32_t edx_1 = ebx_1[-1]
            
            if (edx_1 != 0xffffffff)
                int32_t temp3_1 = *(arg1 + 0x218) & 2
                void* eax_5 = *ebx_1
                bool cond:4_1
                
                if (temp3_1 != 0)
                    int32_t ecx_3 = *(arg1 + 0x244)
                    int32_t edx_3 = edx_1 << 2
                    int32_t eax_6 = eax_5 << 2
                    
                    if (*(edx_3 + ecx_3) == *(eax_6 + ecx_3))
                        var_5 = 1
                    else
                        int32_t edi_2 = *(arg1 + 0x244)
                        int32_t ecx_5 = ebx_1[1] << 2
                        
                        if (*(eax_6 + edi_2) != *(ecx_5 + edi_2))
                            cond:4_1 = *(ecx_5 + edi_2) != *(edx_3 + edi_2)
                            goto label_40f233
                        
                        var_5 = 1
                else if (edx_1 == eax_5)
                    var_5 = 1
                else
                    int32_t ecx_7 = ebx_1[1]
                    
                    if (eax_5 == ecx_7)
                        var_5 = 1
                    else
                        cond:4_1 = ecx_7 != edx_1
                    label_40f233:
                        
                        if (not(cond:4_1))
                            var_5 = 1
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t eax_9 = 0
                    void* var_10_1 = var_14_1
                    
                    while (true)
                        int32_t edi_3 = *(&ebx_1[-1] - var_14_1 + var_10_1)
                        int32_t ecx_10 = *(arg1 + 0x23c)
                        result = ebx_1[-1 + modu.dp.d(0:(eax_9 + 1), 3)]
                        void* result_1 = result
                        
                        if (edi_3 u>= ecx_10)
                            break
                        
                        if (result u>= ecx_10)
                            break
                        
                        result = *var_10_1
                        
                        if (result != 0xffffffff)
                            if (result u>= *(arg1 + 0x264))
                                break
                            
                            int32_t eax_13 = result * 0xc
                            void* edi_4 = eax_13 + var_c
                            result = sub_40d636(eax_13 + *(arg1 + 0x250), var_18_1)
                            
                            if (result u>= 3)
                                break
                            
                            if (temp3_1 != 0)
                                int32_t ecx_16 = *(edi_4 + (result << 2)) << 2
                                int32_t eax_16 = *(edi_4 + (modu.dp.d(0:(result + 1), 3) << 2))
                                int32_t* eax_17 = *(arg1 + 0x244)
                                
                                if (eax_17[edi_3] == eax_17[*(edi_4 + (result << 2))])
                                    ebx_1 = var_28_1
                                
                                if (eax_17[edi_3] != eax_17[*(edi_4 + (result << 2))]
                                        || eax_17[result_1] != eax_17[eax_16])
                                    result = *(arg1 + 0x244)
                                    
                                    if (*(result + (result_1 << 2)) != *(result + ecx_16))
                                        break
                                    
                                    if (*(result + (edi_3 << 2)) != *(result + (eax_16 << 2)))
                                        break
                        
                        eax_9 += 1
                        var_10_1 += 4
                        
                        if (eax_9 u>= 3)
                            goto label_40f33e
                    
                    goto label_40f38c
            else
                result = *ebx_1
                
                if (edx_1 != result)
                    goto label_40f38c
                
                if (result != ebx_1[1])
                    goto label_40f38c
                
                if ((*(arg1 + 0x218) & 1) != 0)
                    int32_t ecx_2 = *var_14_1
                    
                    if (ecx_2 != edx_1)
                        goto label_40f38c
                    
                    void* edx_2 = eax_2 - ecx_1 + ebx_1
                    result = *edx_2
                    
                    if (ecx_2 != result)
                        goto label_40f38c
                    
                    if (result != *(edx_2 + 4))
                        goto label_40f38c
            
        label_40f33e:
            var_18_1 += 1
            var_14_1 += 0xc
            ebx_1 = &ebx_1[3]
            var_28_1 = ebx_1
            
            if (var_18_1 u>= *(arg1 + 0x264))
                if (var_5 == 0)
                    break
                
                var_6 = 0
                goto label_40f38c
    
    if ((*(arg1 + 0x218) & 0x10) != 0 && *(arg1 + 0x25c) != 0)
        void* var_4c_2 = var_c
        result = sub_40e6c1(arg1)
    
    if ((*(arg1 + 0x218) & 0x10) == 0 || *(arg1 + 0x25c) == 0 || result.b != 0)
        var_6 = 1

label_40f38c:

if (var_c != 0 && arg2 == 0)
    int32_t* esi_1 = *(arg1 + 0x248)
    (*(*esi_1 + 0x30))(esi_1)

result.b = var_6
return result
