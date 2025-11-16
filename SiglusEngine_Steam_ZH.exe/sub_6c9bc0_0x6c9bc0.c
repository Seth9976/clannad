// 函数: sub_6c9bc0
// 地址: 0x6c9bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = *(arg2 + 0xf0)
void* var_8 = arg2

if (i != 0)
    void* esi_1 = *(arg2 + 0xec)
    i = esi_1 + i * 0x14
    
    if (esi_1 u< i)
        int32_t* esi_2 = esi_1 + 0xc
        
        do
            if ((esi_2[1].b & arg4) != 0)
                uint32_t eax_4
                
                if (arg3 != 0)
                    int32_t ecx = *(arg3 + 0x238)
                    
                    if (ecx != 0)
                        int32_t edx = *(arg3 + 0x23c)
                        int32_t* eax_3 = ecx * 5 + edx
                        
                        do
                            eax_3 -= 5
                            
                            if (esi_2[-3] == *eax_3)
                                eax_4 = zx.d(eax_3[1].b)
                                arg2 = var_8
                                
                                if (eax_4 == 1)
                                    goto label_6c9cab
                                
                                goto label_6c9c2f
                        while (eax_3 u> edx)
                        
                        arg2 = var_8
                
                eax_4 = 0
            label_6c9c2f:
                
                if ((*(esi_2 - 9) & 0x20) != 0 || eax_4 == 3)
                label_6c9c4a:
                    
                    if (*esi_2 == 0)
                        sub_6d4470(arg3, "Writing zero-length unknown chunk")
                    
                    int32_t ebx_1 = *esi_2
                    
                    if (arg3 != 0)
                        if (ebx_1 u> 0x7fffffff)
                            sub_6d42e0(arg3, "length exceeds PNG maximum")
                            noreturn
                        
                        uint32_t eax_8 = zx.d(*(esi_2 - 9))
                        sub_6d4b60(
                            sub_6d4aa0(eax_8, 
                                ((zx.d(esi_2[-3].b) << 8 | zx.d(*(esi_2 - 0xb))) << 8
                                    | zx.d(*(esi_2 - 0xa))) << 8 | eax_8, 
                                arg3, ebx_1), 
                            esi_2[-1], arg3, ebx_1)
                        sub_6d4bb0(arg3)
                    
                    arg2 = var_8
                else if (eax_4 == 0 && *(arg3 + 0x234) == 3)
                    goto label_6c9c4a
            
        label_6c9cab:
            esi_2 = &esi_2[5]
            i = &esi_2[-3]
        while (i u< *(arg2 + 0xec) + *(arg2 + 0xf0) * 0x14)

return i
