// 函数: sub_49f070
// 地址: 0x49f070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004005

arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
*(arg1 + 0x20) = fconvert.d(fconvert.t(*(arg2 + 0x20)))
*(arg1 + 0x28) = fconvert.d(fconvert.t(*(arg2 + 0x28)))
*arg1 = *arg2
arg1[0xc] = arg2[0xc]
arg1[0xd] = arg2[0xd]
arg1[0xe] = arg2[0xe]
arg1[0x10] = arg2[0x10]
arg1[0xf] = arg2[0xf]
arg1[0x11] = arg2[0x11]
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
arg1[0x19] = arg2[0x19]
arg1[0x1a] = arg2[0x1a]
arg1[0x1b] = arg2[0x1b]
arg1[0x1c] = arg2[0x1c]
arg1[0x1d] = arg2[0x1d]
return 0
