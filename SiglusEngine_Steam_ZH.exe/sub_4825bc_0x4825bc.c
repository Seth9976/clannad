// 函数: sub_4825bc
// 地址: 0x4825bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3 = *(arg1 + 0xc)

if (eax_3 != 0)
    int32_t ecx = *eax_3
    int32_t edx_1 = 0
    
    if (ecx u> 0)
        int32_t* eax = eax_3[3]
        
        do
            if (*(*eax + 4) != 0)
                return 0
            
            edx_1 += 1
            eax = &eax[1]
        while (edx_1 u< ecx)

return 1
