// 函数: sub_4d10f4
// 地址: 0x4d10f4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg3
void* eax_2 = *(*(arg1 + 0x14) + (**(esi + 0x10) << 2))
int32_t edx_1 = *(eax_2 + 0x48)
int32_t eax_3 = *(eax_2 + 0x54)
int32_t var_c = eax_3

if (eax_3 == 0xffffffff)
    return nullptr

int32_t i = 0
int32_t edi
int32_t var_30_1 = edi

if (*(esi + 4) u> 0)
    int32_t* edx_2 = *(esi + 8)
    
    do
        void* eax_5 = *(*(arg1 + 0x14) + (*edx_2 << 2))
        
        if (*(arg1 + 0x88) == *(eax_5 + 4))
            int32_t eax_6 = *(eax_5 + 0x50)
            
            if (eax_6 u> edx_1 && eax_6 u< var_c)
                goto label_4d1346_2
        
        i += 1
        edx_2 = &edx_2[1]
    while (i u< *(esi + 4))
    
    eax_3 = var_c

int32_t* result = *(*(arg1 + 0x18) + (eax_3 << 2))
int32_t edi_2 = *result

if (arg2 != edi_2)
labelid_28:
    result = nullptr
else
    int32_t i_1 = 0
    
    if (*(esi + 0xc) u> 0)
        int32_t* var_10_1 = *(esi + 0x10)
        
        do
            void* edx_8 = *(*(arg1 + 0x14) + (*var_10_1 << 2))
            
            if (*(edx_8 + 0x54) != var_c)
                goto label_4d1346_2
            
            if (*(edx_8 + 0x58) != var_c)
                goto label_4d1346_2
            
            bool cond:3_1
            
            if (*(esi + 0xc) != 1)
                cond:3_1 = *(edx_8 + 0x5c) != arg6
            else
                cond:3_1 = *(edx_8 + 0x5c) != (arg2 & 0xfffff) * arg6
            
            if (cond:3_1)
                goto label_4d1346_2
            
            i_1 += 1
            var_10_1 = &var_10_1[1]
        while (i_1 u< *(esi + 0xc))
    
    int32_t i_4 = edi_2 & 0xfffff
    arg2 = i_4
    
    if (result[3] != i_4)
    label_4d1346:
        result = nullptr
    else
        int32_t edi_4 = result[1]
        
        if (edi_4 u> i_4 * arg5)
        label_4d1346_1:
            result = nullptr
        else
            int32_t var_8_1 = 0
            
            if (edi_4 u> 0)
                int32_t* ecx_1 = result[2]
                
                do
                    void* ebx_10 = *(*(arg1 + 0x14) + (*ecx_1 << 2))
                    
                    if (*(arg1 + 0x88) == *(ebx_10 + 4) && *(ebx_10 + 0x48) u> edx_1)
                        goto label_4d1346_2
                    
                    var_8_1 += 1
                    edi_4 = result[1]
                    ecx_1 = &ecx_1[1]
                while (var_8_1 u< edi_4)
            
            int32_t var_8_2 = 0
            
            if (edi_4 u> 0)
                int32_t* ecx_4 = result[2]
                
                while (*ecx_4 != **(esi + 0x10))
                    var_8_2 += 1
                    ecx_4 = &ecx_4[1]
                    
                    if (var_8_2 u>= edi_4)
                        break
            
            if (var_8_2 == edi_4)
            label_4d1346_2:
                result = nullptr
            else
                if (var_8_2 u>= i_4)
                    int32_t ebx_12 = 0
                    
                    if (i_4 u> 0)
                        int32_t esi_2 = i_4 << 2
                        
                        do
                            int32_t ecx_5 = result[2]
                            int32_t* edx_11 = ecx_5 + (ebx_12 << 2)
                            int32_t edi_9 = *edx_11
                            *edx_11 = *(esi_2 + ecx_5)
                            *(esi_2 + result[2]) = edi_9
                            ebx_12 += 1
                            esi_2 += 4
                        while (ebx_12 u< arg2)
                        
                        i_4 = arg2
                        esi = arg3
                
                if (*(esi + 0xc) u> 1)
                    int32_t* ebx_13 = *(esi + 8)
                    void* ecx_9 = &ebx_13[*(esi + 4)]
                    
                    if (ebx_13 u< ecx_9)
                        while (true)
                            int32_t var_24[0x4]
                            
                            if (i_4 u> 0)
                                int32_t* ecx_10 = *(esi + 0x10)
                                int32_t* edi_10 = ebx_13
                                int32_t* ecx_12 = result[2] - ebx_13
                                int32_t i_3 = i_4
                                int32_t i_2
                                
                                do
                                    arg6 = 0
                                    arg5 = ecx_10
                                    
                                    do
                                        if (*arg5 == *(ecx_12 + edi_10))
                                            var_24[arg6] = *edi_10
                                            i_4 = arg2
                                            break
                                        
                                        arg6 += 1
                                        i_4 = arg2
                                        arg5 = &arg5[1]
                                    while (arg6 u< i_4)
                                    
                                    edi_10 = &edi_10[1]
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
                            
                            int32_t ecx_14 = i_4 << 2
                            int32_t esi_5
                            int32_t edi_12
                            edi_12, esi_5 = __builtin_memcpy(ebx_13, &var_24, ecx_14 u>> 2 << 2)
                            i_4 = arg2
                            __builtin_memcpy(edi_12, esi_5, ecx_14 & 3)
                            ebx_13 = &ebx_13[i_4]
                            
                            if (ebx_13 u>= ecx_9)
                                break
                            
                            esi = arg3
                
                if (arg4 != 0)
                    *arg4 = var_c

return result
