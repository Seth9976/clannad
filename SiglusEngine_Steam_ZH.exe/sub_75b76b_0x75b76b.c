// 函数: sub_75b76b
// 地址: 0x75b76b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2

while (*(result + 4) != arg1)
    result += 0xc
    
    if (result u>= 0x90 + arg2)
        break

if (result u< 0x90 + arg2 && *(result + 4) == arg1)
    return result

return nullptr
