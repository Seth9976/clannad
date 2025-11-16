// 函数: sub_42da90
// 地址: 0x42da90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i

do
    i = *arg2
    arg2 = &arg2[1]
    
    if (i - 0x9ca4 u<= 3)
        switch (i)
            case 0x9ca4
                int32_t eax_34 = *arg2
                sub_4d1c30(eax_34, &arg2[1], arg3 + 8, eax_34)
                arg2 = &arg2[1] + eax_34
                *(arg3 + 0x28) = *arg2
                *(arg3 + 0x2c) = arg2[1]
                arg2 = &arg2[2]
            case 0x9ca5
                *(arg3 + 0x30) = *arg2
                *(arg3 + 0x34) = arg2[1]
                *(arg3 + 0x38) = arg2[2]
                *(arg3 + 0x3c) = arg2[3]
                *(arg3 + 0x40) = arg2[4]
                *(arg3 + 0x44) = arg2[5]
                *(arg3 + 0x48) = arg2[6]
                *(arg3 + 0x4c) = arg2[7]
                *(arg3 + 0x50) = arg2[8]
                *(arg3 + 0x54) = arg2[9]
                *(arg3 + 0x58) = arg2[0xa]
                *(arg3 + 0x5c) = arg2[0xb]
                *(arg3 + 0x60) = arg2[0xc]
                *(arg3 + 0x64) = arg2[0xd]
                *(arg3 + 0x68) = arg2[0xe]
                *(arg3 + 0x6c) = arg2[0xf]
                *(arg3 + 0x70) = arg2[0x10]
                *(arg3 + 0x74) = arg2[0x11]
                *(arg3 + 0x78) = arg2[0x12]
                *(arg3 + 0x7c) = arg2[0x13]
                *(arg3 + 0x80) = arg2[0x14]
                *(arg3 + 0x84) = arg2[0x15]
                *(arg3 + 0x88) = arg2[0x16]
                *(arg3 + 0x8c) = arg2[0x17]
                *(arg3 + 0x90) = arg2[0x18]
                *(arg3 + 0x94) = arg2[0x19]
                *(arg3 + 0x98) = arg2[0x1a]
                *(arg3 + 0x9c) = arg2[0x1b]
                *(arg3 + 0xa0) = arg2[0x1c]
                *(arg3 + 0xa4) = arg2[0x1d]
                int32_t eax_31 = arg2[0x1e]
                arg2 = &arg2[0x1f]
                *(arg3 + 0xa8) = eax_31
            case 0x9ca6
                int32_t eax
                eax.b = *arg2
                arg2 = &arg2[1]
                *(arg3 + 0xb4) = eax.b
            case 0x9ca7
                *(arg3 + 0xac) = *arg2
                *(arg3 + 0xb0) = arg2[1]
                arg2 = &arg2[2]
while (i != 0x9ca4)
*arg4 = arg2
return 0
