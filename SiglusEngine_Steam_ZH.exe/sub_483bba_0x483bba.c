// 函数: sub_483bba
// 地址: 0x483bba
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** result

if (*(arg1 + 8) != arg2)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1 = 0
    
    if (*(arg1 + 0x14) u<= 0)
    label_483bf5:
        result.b = 0
    else
        while (true)
            if ((*(**(*(arg1 + 0x20) + (edi_1 << 2)) + 0x34))(arg2, arg3).b != 0)
                result.b = 1
                break
            
            edi_1 += 1
            
            if (edi_1 u>= *(arg1 + 0x14))
                goto label_483bf5
else
    *arg3 = arg1
    result.b = 1

return result
