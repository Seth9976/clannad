// 函数: sub_49fee7
// 地址: 0x49fee7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x14)
int32_t* i = *(*(ecx + (arg2 << 2)) + 0x14)
int32_t edx = 0

if (i != 0xffffffff)
    do
        i = *(*(ecx + (i << 2)) + 0x14)
        edx += 1
    while (i != 0xffffffff)
    
    i = arg3
    
    if (*i u< edx)
        *i = edx

return i
