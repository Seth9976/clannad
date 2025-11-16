// 函数: sub_6a6570
// 地址: 0x6a6570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = data_bac4a0

if (*(result + 0xa8) s< 2)
    result = *arg1
    
    if (result == 0xdc)
        *arg1 = 0xdd
        arg2[4] = 0
        return result
    
    if (result == 0xf0 || result == 0xf1)
        int32_t ecx = *arg2
        result = arg2[1]
        *arg1 = 0xd6
        *arg2 = 0xb
        arg2[2] = ecx
        arg2[3] = result
        arg2[1] = 0
    else if (result == 0xf2 || result == 0xf3)
        *arg1 = 0xd6
        *arg2 = 0
        arg2[1] = 0

return result
