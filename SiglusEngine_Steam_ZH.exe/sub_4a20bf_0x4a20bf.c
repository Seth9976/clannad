// 函数: sub_4a20bf
// 地址: 0x4a20bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
void* eax_4 = *(*(arg1 + 0x14) + (**(*(*(arg1 + 0x18) + (arg2 << 2)) + 0x10) << 2))
int32_t ecx_2 = *(eax_4 + 0x18)
int32_t eax_5 = *(eax_4 + 0x14)
int32_t i = *arg3
int32_t edi
int32_t var_4c = edi
void var_40

do
    void* eax_8 = *(*(arg1 + 0x14) + (i << 2))
    void* var_10_1 = eax_8
    
    if (*(eax_8 + 0x10) == 0)
        int32_t ecx_3 = *(eax_8 + 0x48)
        
        if (ecx_3 == 0xffffffff || arg2 u> ecx_3)
            int32_t j = eax_5
            int32_t esi_1 = ecx_2
            
            if (j != 0xffffffff)
                while (j != *(eax_8 + 0x14))
                    void* ecx_4 = *(*(arg1 + 0x14) + (j << 2))
                    esi_1 = *(ecx_4 + 0x18)
                    j = *(ecx_4 + 0x14)
                    
                    if (j == 0xffffffff)
                        break
            
            if (j == *(eax_8 + 0x14) && esi_1 == *(eax_8 + 0x18))
                int32_t var_30[0x4]
                var_30[0] = i
                int32_t var_8_1 = 1
                
                if (arg4 u> 1)
                    void* esi_3 = &arg3[1]
                    void* var_c_1 = esi_3
                label_4a2171:
                    int32_t j_1 = *esi_3
                    
                    do
                        void* edx_1 = *(*(arg1 + 0x14) + (j_1 << 2))
                        
                        if (*(edx_1 + 0x10) == var_8_1)
                            int32_t ecx_8 = *(edx_1 + 0x48)
                            
                            if ((ecx_8 == 0xffffffff || arg2 u> ecx_8)
                                    && *(edx_1 + 4) == *(eax_8 + 4)
                                    && *(edx_1 + 0xc) == *(eax_8 + 0xc)
                                    && *(edx_1 + 8) == *(eax_8 + 8))
                                int32_t k = eax_5
                                int32_t ecx_12 = ecx_2
                                
                                if (k != 0xffffffff)
                                    while (k != *(edx_1 + 0x14))
                                        void* esi_4 = *(*(arg1 + 0x14) + (k << 2))
                                        ecx_12 = *(esi_4 + 0x18)
                                        k = *(esi_4 + 0x14)
                                        
                                        if (k == 0xffffffff)
                                            break
                                
                                if (k == *(edx_1 + 0x14) && ecx_12 == *(edx_1 + 0x18))
                                    var_8_1 += 1
                                    *(&var_30 - arg3 + var_c_1) = j_1
                                    esi_3 = var_c_1 + 4
                                    eax_8 = var_10_1
                                    var_c_1 = esi_3
                                    
                                    if (var_8_1 u< arg4)
                                        goto label_4a2171
                                    
                                    goto label_4a2206
                                
                                eax_8 = var_10_1
                                esi_3 = var_c_1
                        
                        j_1 = *(edx_1 + 0x34)
                    while (j_1 != *esi_3)
                
            label_4a2206:
                
                if (var_8_1 == arg4)
                    int32_t edi_2 = 0
                    int32_t ecx_14 = 0
                    
                    if (arg4 u> 0)
                        do
                            int32_t edx_4 = var_30[ecx_14] << 2
                            
                            if (*(*(edx_4 + *(arg1 + 0x14)) + 0x48) != 0)
                                int32_t edx_6 = arg2 - *(*(edx_4 + *(arg1 + 0x14)) + 0x48)
                                edi_2 += edx_6 * edx_6
                            
                            ecx_14 += 1
                        while (ecx_14 u< arg4)
                    
                    if (var_14 u> edi_2)
                        var_14 = edi_2
                        __builtin_memcpy(&var_40, &var_30, arg4 << 2)
    
    i = *(eax_8 + 0x34)
while (i != *arg3)

if (var_14 == 0xffffffff)
    int32_t esi_12 = sub_49f5a4(arg1, (arg4 & 0xfffff) | 0x10000000, 0xffffffff, 0xffffffff)
    
    if (esi_12 == 0xffffffff)
        return 0x8007000e
    
    int32_t eax_16 = *(arg1 + 0x18)
    void* edi_4 = *(eax_16 + (esi_12 << 2))
    sub_49e7bf(edi_4, *(eax_16 + (arg2 << 2)))
    int32_t var_8_2 = 0
    
    if (arg4 u> 0)
        do
            int32_t var_50_2 = var_8_2
            int32_t esi_14 = var_8_2 << 2
            void* eax_18 = &arg3[var_8_2]
            int32_t var_54_1 = var_8_2
            var_54_1.q = fconvert.d(float.t(0))
            *(esi_14 + *(edi_4 + 8)) = *eax_18
            *(esi_14 + *(edi_4 + 0x10)) = sub_49f544(arg1, *(arg1 + 0x88), *arg5, var_8_2, var_54_1)
            int32_t eax_22 = *(edi_4 + 0x10)
            
            if (*(esi_14 + eax_22) == 0xffffffff)
                return 0x8007000e
            
            *(*(*(arg1 + 0x14) + (*(esi_14 + eax_22) << 2)) + 0x18) = ecx_2
            *(*(*(arg1 + 0x14) + (*(esi_14 + *(edi_4 + 0x10)) << 2)) + 0x14) = eax_5
            int32_t eax_28 = *(arg1 + 0x14)
            **(eax_28 + (*(esi_14 + *(edi_4 + 0x10)) << 2)) =
                **(eax_28 + (*(esi_14 + *(edi_4 + 8)) << 2))
            int32_t eax_30 = *(arg1 + 0x14)
            var_8_2 += 1
            *(*(eax_30 + (*(esi_14 + *(edi_4 + 0x10)) << 2)) + 0x34) =
                *(*(eax_30 + (*(esi_14 + *(edi_4 + 8)) << 2)) + 0x34)
            *(*(*(arg1 + 0x14) + (*(esi_14 + *(edi_4 + 8)) << 2)) + 0x34) =
                *(esi_14 + *(edi_4 + 0x10))
            *eax_18 = *(esi_14 + *(edi_4 + 0x10))
        while (var_8_2 u< arg4)
    
    int32_t eax_38
    
    while (true)
        eax_38 = *(arg1 + 0x18)
        
        if (esi_12 u<= arg2)
            break
        
        int32_t* eax_37 = eax_38 + (esi_12 << 2)
        *eax_37 = eax_37[-1]
        esi_12 -= 1
    
    *(eax_38 + (esi_12 << 2)) = edi_4
    *arg5 += 1
else
    __builtin_memcpy(arg3, &var_40, arg4 << 2)

return 0
