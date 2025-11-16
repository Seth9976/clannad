// 函数: sub_688de0
// 地址: 0x688de0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x17] u>= 8)
    j__free(arg1[0x12])

arg1[0x17] = 7
arg1[0x16] = 0
arg1[0x12].w = 0

if (arg1[0x11] u>= 8)
    j__free(arg1[0xc])

arg1[0x11] = 7
arg1[0x10] = 0
arg1[0xc].w = 0

if (arg1[0xb] u>= 8)
    j__free(arg1[6])

int32_t result = 0
arg1[0xb] = 7
arg1[0xa] = 0
arg1[6].w = 0
int32_t* ecx = *arg1

if (ecx != 0)
    int32_t* var_10_4 = arg1
    int32_t* var_14_1 = ecx
    sub_688da0(ecx, arg1[1])
    result = j__free(*arg1)
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0

return result
