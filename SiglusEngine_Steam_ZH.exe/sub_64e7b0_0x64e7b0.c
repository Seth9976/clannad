// 函数: sub_64e7b0
// 地址: 0x64e7b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
int32_t eax
eax.w = *(arg2 + 0xc)
*(arg1 + 0xc) = eax.w

if (&arg1[2] != &arg2[2])
    sub_52e3c0(&arg1[2], &arg2[2], 0, 0xffffffff)

if (&arg1[5] != &arg2[5])
    sub_52e3c0(&arg1[5], &arg2[5], 0, 0xffffffff)

if (&arg1[8] != &arg2[8])
    sub_52e3c0(&arg1[8], &arg2[8], 0, 0xffffffff)

if (&arg1[0xb] != &arg2[0xb])
    sub_52e3c0(&arg1[0xb], &arg2[0xb], 0, 0xffffffff)

if (&arg1[0xe] != &arg2[0xe])
    sub_52e3c0(&arg1[0xe], &arg2[0xe], 0, 0xffffffff)

sub_5970d0(&arg1[0x11], &arg2[0x11])
*(arg1 + 0x94) = *(arg2 + 0x94)
sub_5970d0(&arg1[0x13], &arg2[0x13])
*(arg1 + 0xa4) = *(arg2 + 0xa4)
return arg1
