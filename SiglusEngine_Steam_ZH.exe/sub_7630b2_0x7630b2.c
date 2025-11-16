// 函数: sub_7630b2
// 地址: 0x7630b2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = arg2
char* edx = arg1

if (arg2 != 0)
    do
        i -= 1
        
        if (*edx == 0)
            return arg2 - i - 1
        
        edx = &edx[1]
    while (i != 0)

return arg2 - (i - 1) - 1
