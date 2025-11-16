// 函数: sub_4ba37b
// 地址: 0x4ba37b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 1

if (*(arg2 + 0x28) == 1)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1 = 0
    
    if (*(arg2 + 0x14) u<= 0)
    label_4ba3b4:
        result = 0
    else
        while (true)
            if (sub_4ba37b(*(*(arg1 + 0x18) + (*(*(arg2 + 0x18) + (edi_1 << 2)) << 2))) != 0)
                result = 1
                break
            
            edi_1 += 1
            
            if (edi_1 u>= *(arg2 + 0x14))
                goto label_4ba3b4

return result
