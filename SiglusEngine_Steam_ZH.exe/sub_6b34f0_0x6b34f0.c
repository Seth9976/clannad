// 函数: sub_6b34f0
// 地址: 0x6b34f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg5 + arg3
int32_t ebx_1 = adc.d(arg6, arg4, arg5 + arg3 u< arg5)
int32_t* edx = *(arg1 + 0x20)
int32_t eax = *edx

if (eax != 0 && *(arg1 + 0x38) u< eax)
    *(arg1 + 0x38) = eax

if (esi_1 != 0xffffffff || ebx_1 != 0xffffffff)
    int32_t eax_2
    
    if ((arg7 & 1) != 0)
        eax_2 = **(arg1 + 0x1c)
    
    if ((arg7 & 1) == 0 || eax_2 == 0)
        if ((arg7 & 2) == 0 || *edx == 0)
            ebx_1 = 0xffffffff
            esi_1 = 0xffffffff
        else if (ebx_1 s< 0 || (ebx_1 s<= 0 && esi_1 u< 0))
            ebx_1 = 0xffffffff
            esi_1 = 0xffffffff
        else
            int32_t ecx_7 = **(arg1 + 0xc)
            int32_t eax_18
            int32_t edx_3
            edx_3:eax_18 = sx.q(*(arg1 + 0x38) - ecx_7)
            
            if (ebx_1 s> edx_3 || (ebx_1 s>= edx_3 && esi_1 u> eax_18))
                ebx_1 = 0xffffffff
                esi_1 = 0xffffffff
            else
                int32_t* eax_20 = *(arg1 + 0x30)
                int32_t ecx_9 = ecx_7 - **(arg1 + 0x20) + esi_1
                *eax_20 -= ecx_9
                int32_t* eax_21 = *(arg1 + 0x20)
                *eax_21 += ecx_9
    else if (ebx_1 s< 0 || (ebx_1 s<= 0 && esi_1 u< 0))
        ebx_1 = 0xffffffff
        esi_1 = 0xffffffff
    else
        int32_t ecx_1 = **(arg1 + 0xc)
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(*(arg1 + 0x38) - ecx_1)
        
        if (ebx_1 s> edx_1 || (ebx_1 s>= edx_1 && esi_1 u> eax_6))
            ebx_1 = 0xffffffff
            esi_1 = 0xffffffff
        else
            int32_t* eax_7 = *(arg1 + 0x2c)
            int32_t ecx_3 = ecx_1 - eax_2 + esi_1
            *eax_7 -= ecx_3
            int32_t* eax_8 = *(arg1 + 0x1c)
            *eax_8 += ecx_3
            
            if ((arg7 & 2) != 0)
                int32_t eax_10 = **(arg1 + 0x20)
                
                if (eax_10 != 0)
                    int32_t edx_2 = **(arg1 + 0x1c)
                    int32_t ecx_6 = **(arg1 + 0x30) + eax_10 - edx_2
                    **(arg1 + 0x20) = edx_2
                    **(arg1 + 0x30) = ecx_6

*arg2 = esi_1
arg2[1] = ebx_1
arg2[2] = 0
arg2[3] = 0
arg2[4] = 0
return arg2
