// 函数: sub_40104d
// 地址: 0x40104d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0

if (arg3 u> 0)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t ecx_2 = *(arg2 + (ebx << 2))
        int32_t ecx_3 = ecx_2 & 0x7fffffff
        int16_t edx_3 = (ecx_2 u>> 0x10).w & 0x8000
        int16_t ecx_4
        
        if (ecx_3 u<= 0x47ffefff)
            int32_t ecx_10
            
            if (ecx_3 u>= 0x38800000)
                ecx_10 = (ecx_3 u>> 0xd & 1) + ecx_3 - 0x37fff001
            else
                uint32_t esi_4
                
                if (0x71 - (ecx_3 u>> 0x17) s<= 0x1f)
                    esi_4 = ((ecx_3 & 0x7fffff) | 0x800000) u>> (0x71 - (ecx_3 u>> 0x17)).b
                else
                    esi_4 = 0
                
                ecx_10 = (esi_4 u>> 0xd & 1) + esi_4 + 0xfff
            
            ecx_4 = (ecx_10 u>> 0xd).w | edx_3
        else
            ecx_4 = edx_3 | 0x7fff
        
        *(arg1 + (ebx << 1)) = ecx_4
        ebx += 1
    while (ebx u< arg3)

return arg1
