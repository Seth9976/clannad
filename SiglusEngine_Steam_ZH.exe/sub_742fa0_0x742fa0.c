// 函数: sub_742fa0
// 地址: 0x742fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (arg2 u<= 0x20)
    int32_t ecx = arg1[4]
    int32_t eax_1 = *((arg2 << 2) + &data_ade8d8)
    int32_t edx = arg1[1]
    int32_t esi_1 = arg2 + edx
    int32_t ebx_1 = *arg1
    
    if (ebx_1 s< ecx - 4)
    label_742fec:
        char* eax_6 = arg1[3]
        ecx.b = edx.b
        uint32_t ebx_3 = zx.d(*eax_6) u>> ecx.b
        
        if (esi_1 s> 8)
            ebx_3 |= zx.d(eax_6[1]) << (8 - edx.b)
            
            if (esi_1 s> 0x10)
                ebx_3 |= zx.d(*(arg1[3] + 2)) << (0x10 - edx.b)
                
                if (esi_1 s> 0x18)
                    ebx_3 |= zx.d(*(arg1[3] + 3)) << (0x18 - edx.b)
                    
                    if (esi_1 s> 0x20 && edx != 0)
                        ebx_3 |= zx.d(*(arg1[3] + 4)) << (0x20 - edx.b)
        
        int32_t eax_19
        int32_t edx_1
        edx_1:eax_19 = sx.q(esi_1)
        arg1[1] = esi_1 & 7
        int32_t eax_21 = (eax_19 + (edx_1 & 7)) s>> 3
        arg1[3] += eax_21
        *arg1 += eax_21
        return ebx_3 & eax_1
    
    if (ebx_1 s<= ecx - ((esi_1 + 7) s>> 3))
        if (esi_1 == 0)
            return 0
        
        goto label_742fec

*arg1 = arg1[4]
arg1[3] = 0
arg1[1] = 1
return 0xffffffff
