// 函数: sub_100060d9
// 地址: 0x100060d9
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void* result = arg2

while (*(result + 4) != arg1)
    result += 0xc
    
    if (result u>= 0x90 + arg2)
        break

if (result u< 0x90 + arg2 && *(result + 4) == arg1)
    return result

return nullptr
