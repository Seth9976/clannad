// 函数: sub_621090
// 地址: 0x621090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = data_bac4a0

if (*(result + 0xd1) == 0)
    char* ecx_1 = data_bac498
    
    if (ecx_1[1] != 0)
        if (*(result + 0x104) != 0 || *(data_bac458 + 0x354) != 0)
        label_6210d0:
            *ecx_1 = 1
            result = sub_660000()
            
            if (result.b == 0)
                *ecx_1 = result.b
        else
            result.b = *(data_bac4e4 + 0x19a)
            
            if (result.b != 0)
                goto label_6210d0

return result
