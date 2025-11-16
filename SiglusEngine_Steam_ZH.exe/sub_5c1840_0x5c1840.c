// 函数: sub_5c1840
// 地址: 0x5c1840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* result = arg2
void* var_8_1 = arg1

if (result s< arg3)
    int32_t ebx_1 = result * 0x1d4
    void* i_1 = arg3 - result
    void* i
    
    do
        result = *(arg1 + 0xa4) + ebx_1
        ebx_1 += 0x1d4
        *(result + 0x124) = 0
        *(result + 0x128) = 0
        *(result + 0x12c) = 0
        *(result + 0x130) = 0xffffffff
        *(result + 0x134) = 0xfffffffe
        *(result + 0x138) = 0
        *(result + 0x13c) = 0
        *(result + 0x140) = 0
        *(result + 0x1cc) = 0xffffffff
        *(result + 0x1d0) = 0xffffffff
        *(result + 0x1c4) = 0xffffffff
        *(result + 0x1c8) = 0xffffffff
        __builtin_memcpy(result + 0x144, result + 0xa4, 0x80)
        arg1 = var_8_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
