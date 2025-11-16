// 函数: sub_4107c9
// 地址: 0x4107c9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x23c)
*arg2 = 0
*arg3 = 0
int32_t eax_4 = *(arg1 + 0x23c) << 2
int32_t edi
int32_t var_58 = edi
int32_t result = 0
int32_t var_8 = 0
int32_t var_14 = 0
int32_t var_44 = 0
int32_t var_24 = 0
int32_t var_48 = 0
int32_t var_2c = 0
int32_t var_30 = 0
int32_t eax_5 = sub_745f3f(eax_4)
void* eax_8 = sub_745f3f(*(arg1 + 0x23c) << 2)

if (eax_5 == 0 || eax_8 == 0)
label_4109fe:
    result = 0x8007000e
else
    int32_t ecx_2 = *(arg1 + 0x23c) << 2
    __builtin_memset(__builtin_memset(eax_8, 0xffffffff, ecx_2 u>> 2 << 2), 0xff, ecx_2 & 3)
    int32_t ecx_7 = *(arg1 + 0x23c) << 2
    __builtin_memset(__builtin_memset(eax_5, 0xffffffff, ecx_7 u>> 2 << 2), 0xff, ecx_7 & 3)
    int32_t i = 0
    
    if (*(arg1 + 0x264) u> 0)
        int32_t var_28_1 = 0
        
        do
            int32_t ecx_12 = *(arg1 + 0x24c) + var_28_1
            int32_t var_38_1 = ecx_12
            
            if (*ecx_12 != 0xffffffff)
                int32_t var_18 = *(*(arg1 + 0x254) + (i << 2))
                
                for (int32_t j = 0; j u< 3; j += 1)
                    int32_t* edi_5 = ecx_12 + (j << 2)
                    int32_t eax_13 = *edi_5 << 2
                    int32_t* edx_5 = eax_8 + eax_13
                    int32_t ebx_1 = *edx_5
                    
                    if (ebx_1 != var_18)
                        if (ebx_1 != 0xffffffff)
                            int32_t eax_27
                            int32_t ecx_15
                            
                            for (int32_t k = *(eax_13 + eax_5); k != 0xffffffff; 
                                    k = *(ecx_15 + var_8))
                                ecx_15 = k << 2
                                
                                if (*(ecx_15 + var_14) == var_18)
                                    eax_27 = k + eax
                                    goto label_4109cb
                            
                            if (var_24 == 0)
                                var_2c = 0x100
                                var_24 = 0x100
                                var_30 = 0x100
                                var_8 = sub_745f3f(0x400)
                                var_14 = sub_745f3f(0x400)
                                int32_t eax_18 = sub_745f3f(0x400)
                                bool cond:3_1 = var_8 == 0
                                *arg2 = eax_18
                                
                                if (cond:3_1)
                                    goto label_4109fe
                                
                                if (var_14 == 0)
                                    goto label_4109fe
                                
                                if (eax_18 == 0)
                                    goto label_4109fe
                            
                            int32_t eax_19 = *(arg1 + 0x23c)
                            int32_t var_34 = eax_19
                            *(arg1 + 0x23c) = eax_19 + 1
                            int32_t ebx_2 = *arg3
                            
                            if (sub_40d48e(&var_14, &var_18, &var_44, &var_24) == 0)
                                goto label_4109fe
                            
                            if (sub_40d48e(&var_8, &var_34, &var_48, &var_2c) == 0)
                                goto label_4109fe
                            
                            int32_t var_4c = *edi_5
                            
                            if (sub_40d48e(arg2, &var_4c, arg3, &var_30) == 0)
                                goto label_4109fe
                            
                            *(var_8 + (ebx_2 << 2)) = *(eax_5 + (*edi_5 << 2))
                            *(eax_5 + (*edi_5 << 2)) = ebx_2
                            eax_27 = var_34
                        label_4109cb:
                            ecx_12 = var_38_1
                            *edi_5 = eax_27
                        else
                            *edx_5 = var_18
            
            i += 1
            var_28_1 += 0xc
        while (i u< *(arg1 + 0x264))

j__free(eax_5)
j__free(var_8)
j__free(eax_8)
j__free(var_14)
return result
