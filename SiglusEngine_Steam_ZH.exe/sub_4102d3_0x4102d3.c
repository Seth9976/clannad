// 函数: sub_4102d3
// 地址: 0x4102d3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t eax = (*(arg1 + 0x23c)).w
*arg2 = 0
*arg3 = 0
int32_t eax_4 = *(arg1 + 0x23c) << 1
int32_t edi
int32_t var_5c = edi
int32_t result = 0
uint32_t var_8 = 0
int32_t var_14 = 0
int32_t var_48 = 0
int32_t var_24 = 0
int32_t var_4c = 0
int32_t var_2c = 0
int32_t var_30 = 0
int32_t eax_5 = sub_745f3f(eax_4)
int32_t eax_8 = sub_745f3f(*(arg1 + 0x23c) << 2)

if (eax_5 == 0 || eax_8 == 0)
label_410529:
    result = 0x8007000e
else
    int32_t ecx_2 = *(arg1 + 0x23c) << 2
    __builtin_memset(__builtin_memset(eax_8, 0xffffffff, ecx_2 u>> 2 << 2), 0xff, ecx_2 & 3)
    int32_t ecx_7 = *(arg1 + 0x23c) << 1
    __builtin_memset(__builtin_memset(eax_5, 0xffffffff, ecx_7 u>> 2 << 2), 0xff, ecx_7 & 3)
    int32_t i = 0
    
    if (*(arg1 + 0x264) u> 0)
        int32_t var_28_1 = 0
        
        do
            int32_t edx_4 = *(arg1 + 0x24c) + var_28_1
            int32_t var_3c_1 = edx_4
            
            if (*edx_4 != 0xffff)
                int32_t var_18 = *(*(arg1 + 0x254) + (i << 2))
                
                for (int32_t j = 0; j u< 3; j += 1)
                    int16_t* edi_5 = edx_4 + (j << 1)
                    uint32_t eax_12 = zx.d(*edi_5)
                    int32_t* ecx_13 = eax_8 + (eax_12 << 2)
                    int32_t ebx_1 = *ecx_13
                    
                    if (ebx_1 != var_18)
                        if (ebx_1 != 0xffffffff)
                            int32_t ebx_2 = eax_5
                            eax_12.w = *(ebx_2 + (eax_12 << 1))
                            
                            while (eax_12.w != 0xffff)
                                uint32_t ecx_14 = zx.d(eax_12.w)
                                
                                if (*(var_14 + (ecx_14 << 2)) == var_18)
                                    *edi_5 = eax + eax_12.w
                                    goto label_4104f5
                                
                                eax_12.w = *(var_8 + (ecx_14 << 1))
                            
                            if (var_24 == 0)
                                var_2c = 0x100
                                var_24 = 0x100
                                var_30 = 0x100
                                var_8 = sub_745f3f(0x200)
                                var_14 = sub_745f3f(0x400)
                                eax_12 = sub_745f3f(0x400)
                                bool cond:3_1 = var_8 == 0
                                *arg2 = eax_12
                                
                                if (cond:3_1)
                                    goto label_410529
                                
                                if (var_14 == 0)
                                    goto label_410529
                                
                                if (eax_12 == 0)
                                    goto label_410529
                                
                                ebx_2 = eax_5
                            
                            eax_12.w = *(arg1 + 0x23c)
                            *(arg1 + 0x23c) += 1
                            int16_t var_38 = eax_12.w
                            int32_t* eax_16
                            eax_16.w = *arg3
                            int16_t var_34_1 = eax_16.w
                            
                            if (sub_40d48e(&var_14, &var_18, &var_48, &var_24) == 0)
                                goto label_410529
                            
                            if (sub_40d0e7(&var_8, &var_38, &var_4c, &var_2c) == 0)
                                goto label_410529
                            
                            uint32_t var_50 = zx.d(*edi_5)
                            
                            if (sub_40d48e(arg2, &var_50, arg3, &var_30) == 0)
                                goto label_410529
                            
                            uint32_t eax_21
                            eax_21.w = *(ebx_2 + (zx.d(*edi_5) << 1))
                            *(var_8 + (zx.d(var_34_1) << 1)) = eax_21.w
                            uint32_t ecx_16
                            ecx_16.w = var_34_1
                            *(ebx_2 + (zx.d(*edi_5) << 1)) = ecx_16.w
                            uint32_t eax_22
                            eax_22.w = var_38
                            *edi_5 = eax_22.w
                        label_4104f5:
                            edx_4 = var_3c_1
                        else
                            *ecx_13 = var_18
            
            i += 1
            var_28_1 += 6
        while (i u< *(arg1 + 0x264))

j__free(eax_5)
j__free(var_8)
j__free(eax_8)
j__free(var_14)
return result
