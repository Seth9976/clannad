// 函数: sub_651740
// 地址: 0x651740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *arg1
int32_t* edx = eax
int32_t* esi = eax[1]
int32_t* var_c = eax

if (*(esi + 0xd) == 0)
    int16_t ecx = *arg3
    int32_t* esi_1 = eax
    int32_t* ebx_1 = esi
    
    do
        int16_t eax_1 = ebx_1[4].w
        
        if (eax_1 u< ecx)
            ebx_1 = ebx_1[2]
        else if (eax_1 u> ecx)
        label_6517da:
            
            if (*(esi_1 + 0xd) != 0 && sub_5cd6f0(arg3, &ebx_1[4]) != 0)
                esi_1 = ebx_1
            
            var_c = ebx_1
            ebx_1 = *ebx_1
        else
            int16_t eax_2 = *(ebx_1 + 0x12)
            int16_t ecx_1 = arg3[1]
            
            if (eax_2 u< ecx_1)
                ebx_1 = ebx_1[2]
            else
                if (eax_2 u> ecx_1)
                    goto label_6517da
                
                int16_t eax_3 = ebx_1[5].w
                int16_t ecx_2 = arg3[2]
                
                if (eax_3 u< ecx_2)
                    ebx_1 = ebx_1[2]
                else
                    if (eax_3 u> ecx_2)
                        goto label_6517da
                    
                    int16_t eax_4 = *(ebx_1 + 0x16)
                    int16_t ecx_3 = arg3[3]
                    
                    if (eax_4 u< ecx_3)
                        ebx_1 = ebx_1[2]
                    else
                        if (eax_4 u> ecx_3)
                            goto label_6517da
                        
                        int16_t eax_5 = ebx_1[6].w
                        int16_t ecx_4 = arg3[4]
                        
                        if (eax_5 u< ecx_4)
                            ebx_1 = ebx_1[2]
                        else
                            if (eax_5 u> ecx_4)
                                goto label_6517da
                            
                            int16_t eax_6 = *(ebx_1 + 0x1a)
                            int16_t ecx_5 = arg3[5]
                            
                            if (eax_6 u>= ecx_5 && (eax_6 u> ecx_5 || ebx_1[7].w u>= arg3[6]))
                                goto label_6517da
                            
                            ebx_1 = ebx_1[2]
        
        ecx = *arg3
    while (*(ebx_1 + 0xd) == 0)
    
    edx = esi_1

if (*(edx + 0xd) == 0)
    esi = *edx

if (*(esi + 0xd) == 0)
    int16_t ebx_2 = *arg3
    
    do
        int16_t eax_9 = esi[4].w
        
        if (ebx_2 u< eax_9)
            edx = esi
            esi = *esi
        else if (ebx_2 u> eax_9)
            esi = esi[2]
        else
            int16_t eax_10 = arg3[1]
            int16_t ecx_8 = *(esi + 0x12)
            
            if (eax_10 u< ecx_8)
                edx = esi
                esi = *esi
            else if (eax_10 u> ecx_8)
                esi = esi[2]
            else
                int16_t eax_11 = arg3[2]
                int16_t ecx_9 = esi[5].w
                
                if (eax_11 u< ecx_9)
                    edx = esi
                    esi = *esi
                else if (eax_11 u> ecx_9)
                    esi = esi[2]
                else
                    int16_t eax_12 = arg3[3]
                    int16_t ecx_10 = *(esi + 0x16)
                    
                    if (eax_12 u< ecx_10)
                        edx = esi
                        esi = *esi
                    else if (eax_12 u> ecx_10)
                        esi = esi[2]
                    else
                        int16_t eax_13 = arg3[4]
                        int16_t ecx_11 = esi[6].w
                        
                        if (eax_13 u< ecx_11)
                            edx = esi
                            esi = *esi
                        else if (eax_13 u> ecx_11)
                            esi = esi[2]
                        else
                            int16_t eax_14 = arg3[5]
                            int16_t ecx_12 = *(esi + 0x1a)
                            
                            if (eax_14 u< ecx_12 || (eax_14 u<= ecx_12 && arg3[6] u< esi[7].w))
                                edx = esi
                                esi = *esi
                            else
                                esi = esi[2]
    while (*(esi + 0xd) == 0)

*arg2 = var_c
arg2[1] = edx
return arg2
