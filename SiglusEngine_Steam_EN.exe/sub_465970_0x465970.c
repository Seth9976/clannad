// 函数: sub_465970
// 地址: 0x465970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x248)

if (result != 1 && result != 2 && result != 3)
    int32_t eax = *(arg1 + 0xc)
    result = eax - 1
    
    if (eax == 1)
        *(arg1 + 0x248) = 3
    else
        int32_t result_1 = result
        result -= 1
        
        if (result_1 == 1)
            *(arg1 + 0x248) = 2

return result
