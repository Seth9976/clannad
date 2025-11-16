// 函数: sub_405f15
// 地址: 0x405f15
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* result = nullptr

if (*(((*(arg1 + 4) * 5 + *(arg2 + 4)) << 2) + &data_ab5488) != 0)
    int32_t edi
    int32_t var_14_1 = edi
    int32_t var_8_1 = 0
    void* esi_2 = arg1 + 0xc
    int32_t i_1 = 5
    int32_t i
    
    do
        int32_t ecx = *esi_2
        
        if (ecx u> 0)
            var_8_1 += 1
        
        int32_t edx = *(arg2 - arg1 + esi_2)
        
        if (ecx u>= edx)
            if (ecx u> edx)
                if (edx != 0)
                    result += (ecx - edx) << 0x10
                else
                    result += &data_1000000
        else if (ecx != 0)
            result += edx - ecx
        else
            result += 0x100
        
        esi_2 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (var_8_1 != result u>> 0x18)
        return result

return 0xffffffff
