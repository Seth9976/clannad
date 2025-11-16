// 函数: sub_4a2834
// 地址: 0x4a2834
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* esi = *(*(ebx + 0x18) + (arg2 << 2))
int32_t edi
int32_t var_1c = edi
int32_t i = 0
void* var_8 = ebx

if (*(esi + 0x24) == 0)
    int32_t* var_10
    int32_t* var_c
    
    if (*(esi + 0x14) u> 0)
        do
            int32_t eax_1 = *(esi + 0x18)
            int32_t edx_1 = *(ebx + 0x18)
            var_10 = nullptr
            int32_t* eax_2 = eax_1 + (i << 2)
            void* ebx_1 = *(edx_1 + (*eax_2 << 2))
            var_c = nullptr
            sub_4a27b4(var_8, ebx_1, &var_c, &var_10, *eax_2)
            i += 1
            *(ebx_1 + 0x30) = divs.dp.d(sx.q(var_10), var_c + 1)
            ebx = var_8
        while (i u< *(esi + 0x14))
    
    sub_458e55(sub_49f9e0, *(esi + 0x18), *(esi + 0x14), ebx)
    int32_t i_1 = 0
    int32_t result
    
    if (*(esi + 0x14) u> 0)
        do
            result = sub_4a2834(*(*(esi + 0x18) + (i_1 << 2)), arg3, arg4)
            
            if (result s< 0)
            label_4a29bc:
                return result
            
            i_1 += 1
        while (i_1 u< *(esi + 0x14))
    
    if (*(esi + 0x24) == 0)
        int32_t i_2 = 0
        *(esi + 0x24) = 1
        *(arg3 + (*arg4 << 2)) = arg2
        *arg4 += 1
        
        if (*(esi + 0x14) u> 0)
            do
                int32_t eax_9 = *(ebx + 0x18)
                void* ecx_8 = *(eax_9 + (*(*(esi + 0x18) + (i_2 << 2)) << 2))
                int32_t edx_6 = *(ecx_8 + 0x1c)
                arg2 = 0
                int32_t edi_2 = 0xffffffff
                
                if (edx_6 u> 0)
                    int32_t* ecx_9 = *(ecx_8 + 0x20)
                    var_10 = ecx_9
                    var_c = ecx_9
                    
                    while (true)
                        if (*(*(eax_9 + (*var_c << 2)) + 0x24) == 0)
                            if (edi_2 != 0xffffffff)
                            label_4a2957:
                                
                                if (arg2 != edx_6)
                                    goto label_4a29a7
                                
                                int32_t edx_7 = var_10[edi_2]
                                void* ecx_14 = *(eax_9 + (edx_7 << 2))
                                int32_t edi_3 = *(ecx_14 + 0x14)
                                arg2 = 0
                                
                                if (edi_3 u> 0)
                                    var_c = *(ecx_14 + 0x18)
                                    
                                    while (*(*(eax_9 + (*var_c << 2)) + 0x24) != 0)
                                        arg2 += 1
                                        var_c = &var_c[1]
                                        
                                        if (arg2 u>= edi_3)
                                            break
                                
                                if (arg2 u< edi_3)
                                    goto label_4a29a7
                                
                                result = sub_4a2834(edx_7, arg3, arg4)
                                
                                if (result s< 0)
                                    goto label_4a29bc
                                
                                break
                            
                            edi_2 = arg2
                        
                        arg2 += 1
                        var_c = &var_c[1]
                        
                        if (arg2 u>= edx_6)
                            if (edi_2 == 0xffffffff)
                                goto label_4a29a7
                            
                            goto label_4a2957
                    
                    goto label_4a29a7
                
            label_4a29a7:
                i_2 += 1
            while (i_2 u< *(esi + 0x14))

return 0
