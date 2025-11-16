// 函数: sub_6ec050
// 地址: 0x6ec050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((arg1 & (arg1 - 1)) != 0 || 0xffffffff - arg1 u< 0xdf50)
    return nullptr

void* const result = _malloc(arg1 + 0xdf50)

if (result == 0)
    return result

void* edx_1 = (result - 1) & (arg1 - 1)
char* eax_3 = result + edx_1
*eax_3 = edx_1.b
return &eax_3[1]
