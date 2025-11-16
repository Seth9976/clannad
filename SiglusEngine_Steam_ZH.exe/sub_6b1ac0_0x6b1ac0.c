// 函数: sub_6b1ac0
// 地址: 0x6b1ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
int32_t edx = arg3

while (edx != arg2)
    if (result != 0)
        __builtin_memcpy(result, edx, 0x11c)
    
    edx += 0x11c
    result += 0x11c

return result
