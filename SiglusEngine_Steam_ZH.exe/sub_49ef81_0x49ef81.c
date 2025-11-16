// 函数: sub_49ef81
// 地址: 0x49ef81
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg1
int32_t eax_1 = edx & 0xfff00000
int32_t result

if (eax_1 == 0)
    result = 0
else if (eax_1 == 0x50000000)
    result = arg1[3]
else if (eax_1 == 0x50200000)
    result = 1
else if (eax_1 == 0x70800000)
    result = arg1[3]
else if ((edx & 0xf0000000) != 0x60000000)
    result = edx & 0xfffff
else
    result = 4

int32_t edx_3 = result * arg2

if (edx_3 + result u<= arg1[3])
    if (arg3 != 0)
        *arg3 = arg1[4] + (edx_3 << 2)
    
    return result

if (arg3 != 0)
    *arg3 = 0

return 0
