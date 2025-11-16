// 函数: sub_5cb600
// 地址: 0x5cb600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xa0)
int32_t result = 1

if (eax == 0)
    if (arg2 == 0x20d)
        return result
    
    if (arg2 == 0x20e)
        return 2
    
    if (arg2 == 0x211)
        return 3
    
    return result

if (eax != 1 || arg2 - 1 u> 8)
    return result

switch (arg2)
    case 1, 4, 5, 6, 8
        return result
    case 2
        return 3
    case 3, 7, 9
        return 2
