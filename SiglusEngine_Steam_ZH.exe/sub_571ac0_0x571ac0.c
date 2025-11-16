// 函数: sub_571ac0
// 地址: 0x571ac0
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
arg1[0xf] = 7
arg1[0xe] = 0
arg1[0xa].w = 0
sub_52e3c0(&arg1[0xa], &arg2[0xa], 0, 0xffffffff)
arg1[0x10] = arg2[0x10]
int32_t eax_11
eax_11.w = arg2[0x11].w
arg1[0x11].w = eax_11.w
*(arg1 + 0x46) = *(arg2 + 0x46)
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
int32_t eax_14
eax_14.b = arg2[0x15].b
arg1[0x15].b = eax_14.b
arg1[0x16] = arg2[0x16]
void* eax_16 = arg2[0x17]
arg1[0x17] = eax_16

if (eax_16 != 0)
    *(eax_16 + 8)
    *(eax_16 + 8) += 1

arg1[0x18] = arg2[0x18]
void* eax_19 = arg2[0x19]
arg1[0x19] = eax_19

if (eax_19 != 0)
    *(eax_19 + 8)
    *(eax_19 + 8) += 1

arg1[0x1a] = arg2[0x1a]
void* eax_22 = arg2[0x1b]
arg1[0x1b] = eax_22

if (eax_22 != 0)
    *(eax_22 + 8)
    *(eax_22 + 8) += 1

arg1[0x1c] = arg2[0x1c]
void* eax_25 = arg2[0x1d]
arg1[0x1d] = eax_25

if (eax_25 != 0)
    *(eax_25 + 8)
    *(eax_25 + 8) += 1

arg1[0x1e] = arg2[0x1e]
void* eax_28 = arg2[0x1f]
arg1[0x1f] = eax_28

if (eax_28 != 0)
    *(eax_28 + 8)
    *(eax_28 + 8) += 1

return arg1
