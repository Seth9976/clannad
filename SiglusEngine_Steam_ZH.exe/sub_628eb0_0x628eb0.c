// 函数: sub_628eb0
// 地址: 0x628eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg2 = *(arg3 + 8)
arg2[1] = *(arg3 + 0xc)
arg2[2] = *(arg3 + 0x10)
int32_t eax_2
eax_2.b = *arg3 != 0
*arg4 = eax_2.b
arg4[3] = 0
*(arg4 + 0x18) = *(arg3 + 0x14) f+ *(arg3 + 0x2c)
*(arg4 + 0x1c) = *(arg3 + 0x18) f+ *(arg3 + 0x30)
*(arg4 + 0x20) = *(arg3 + 0x1c) f+ *(arg3 + 0x34)
*(arg4 + 0x24) = *(arg3 + 0x20) f+ *(arg3 + 0x2c)
*(arg4 + 0x28) = *(arg3 + 0x24) f+ *(arg3 + 0x30)
*(arg4 + 0x2c) = *(arg3 + 0x28) f+ *(arg3 + 0x34)
*(arg4 + 0x30) = *(arg3 + 0x38)
*(arg4 + 0x34) = *(arg3 + 0x3c)
*(arg4 + 0x38) = *(arg3 + 0x40)
*(arg4 + 0x3c) = *(arg3 + 0x44)
*(arg4 + 0x40) = *(arg3 + 0x48)
*(arg4 + 0x44) = *(arg3 + 0x4c)
int32_t eax_8
eax_8.b = *(arg3 + 0x50) != 0
arg4[4] = eax_8.b
*(arg4 + 0x58) = *(arg3 + 0x54)
*(arg4 + 0x5c) = *(arg3 + 0x58)
*(arg4 + 0x60) = *(arg3 + 0x5c)
*(arg4 + 0x64) = *(arg3 + 0x60)
int32_t eax_12
eax_12.b = *(arg3 + 0x64) != 0
arg4[5] = eax_12.b
*(arg4 + 0x68) = *(arg3 + 0x68)
*(arg4 + 0x6c) = *(arg3 + 0x6c)
*(arg4 + 0x70) = *(arg3 + 0x70)
*(arg4 + 0x74) = *(arg3 + 0x74)
arg4[0x78] = *(arg3 + 0x78)
arg4[0x79] = *(arg3 + 0x7c)
arg4[0x7a] = *(arg3 + 0x80)
arg4[0x7b] = *(arg3 + 0x84)
arg4[0x7c] = *(arg3 + 0x88)
arg4[0x7d] = *(arg3 + 0x8c)
arg4[0x7e] = *(arg3 + 0x90)
arg4[0x7f] = *(arg3 + 0x94)
arg4[0x80] = *(arg3 + 0x98)
arg4[0x81] = *(arg3 + 0x9c)
arg4[0x82] = *(arg3 + 0xa0)
arg4[0x83] = *(arg3 + 0xa4)
arg4[6] = *(arg3 + 0xb4)
arg4[7] = *(arg3 + 0xb5)
arg4[8] = *(arg3 + 0xb6)
int32_t result = *(arg3 + 0xb8)

switch (result)
    case 1
        *(arg4 + 0x98) = 1
        return result
    case 2
        *(arg4 + 0x98) = 2
        return result
    case 3
        *(arg4 + 0x98) = 3
        return result
    case 4
        *(arg4 + 0x98) = 4
        return result

*(arg4 + 0x98) = 0
return result
