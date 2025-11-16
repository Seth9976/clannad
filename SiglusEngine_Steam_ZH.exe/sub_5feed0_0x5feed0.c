// 函数: sub_5feed0
// 地址: 0x5feed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa].b = arg2[0xa].b
arg1[0xb] = arg2[0xb]
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe].b = arg2[0xe].b
*(arg1 + 0x39) = *(arg2 + 0x39)
*(arg1 + 0x3a) = *(arg2 + 0x3a)
arg1[0xf] = arg2[0xf]
arg1[0x10] = arg2[0x10]
arg1[0x11] = arg2[0x11]
arg1[0x12] = arg2[0x12]
arg1[0x13].b = arg2[0x13].b
*(arg1 + 0x4d) = *(arg2 + 0x4d)
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
__builtin_memcpy(&arg1[0x18], &arg2[0x18], 0xc0)
arg1[0x48] = arg2[0x48]
void* eax_28 = arg2[0x49]
arg1[0x49] = eax_28

if (eax_28 != 0)
    *(eax_28 + 4)
    *(eax_28 + 4) += 1

return arg1
