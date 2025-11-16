// 函数: sub_634910
// 地址: 0x634910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t var_8_1 = arg2
int32_t ecx = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx - 1)
int32_t esi_1 = (eax_1 - edx) s>> 1

if (arg4 s< ecx)
    while (true)
        int32_t eax_3 = *(arg3 + (esi_1 << 3))
        int32_t ecx_1 = *arg5
        
        if (eax_3 s>= ecx_1)
            if (eax_3 s> ecx_1)
                break
            
            if (*(arg3 + (esi_1 << 3) + 4) s>= arg5[1])
                break
        
        int32_t edx_1 = var_8_1
        int32_t ecx_2 = esi_1
        var_8_1 = ecx_2
        *(arg3 + (edx_1 << 3)) = *(arg3 + (esi_1 << 3))
        *(arg3 + (edx_1 << 3) + 4) = *(arg3 + (esi_1 << 3) + 4)
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = sx.q(esi_1 - 1)
        esi_1 = (eax_8 - edx_2) s>> 1
        
        if (arg4 s>= ecx_2)
            *(arg3 + (ecx_2 << 3)) = *arg5
            int32_t eax_11 = arg5[1]
            *(arg3 + (ecx_2 << 3) + 4) = eax_11
            return eax_11
    
    ecx = var_8_1

*(arg3 + (ecx << 3)) = *arg5
int32_t eax_13 = arg5[1]
*(arg3 + (ecx << 3) + 4) = eax_13
return eax_13
