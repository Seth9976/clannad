// 函数: sub_40e6c1
// 地址: 0x40e6c1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t var_8_1 = 0
int32_t edi
int32_t var_14 = edi
void* result

if (*(arg1 + 0x260) u<= 0)
label_40e713:
    result.b = 1
else
    result = *(arg1 + 0x25c)
label_40e6dd:
    int32_t esi_1 = *(result + 4)
    int32_t edx_2 = *(result + 8) + esi_1
    
    while (true)
        if (esi_1 u>= edx_2)
            var_8_1 += 1
            result += 0x14
            
            if (var_8_1 u< *(arg1 + 0x260))
                goto label_40e6dd
            
            goto label_40e713
        
        if ((*(arg1 + 0x218) & 4) != 0 && *(*(arg1 + 0x254) + (esi_1 << 2)) != *result)
            result.b = 0
            break
        
        esi_1 += 1

return result
