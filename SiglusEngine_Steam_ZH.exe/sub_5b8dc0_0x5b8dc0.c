// 函数: sub_5b8dc0
// 地址: 0x5b8dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xc0) == 0)
    return 0

int32_t edx = *(arg1 + 0xb4)
int32_t ecx = 0

if (edx s> 0)
    int32_t* eax_2 = *(arg1 + 0xbc)
    
    do
        if (*eax_2 == arg2)
            if (ecx == 0xffffffff)
                break
            
            int32_t ecx_1 = *(*(arg1 + 0xbc) + (ecx << 3) + 4)
            
            if (ecx_1 == 0x56)
                return ecx_1 - 0x55
            
            if (ecx_1 == 0x53)
                return 2
            
            return 0
        
        ecx += 1
        eax_2 = &eax_2[2]
    while (ecx s< edx)

return 0
