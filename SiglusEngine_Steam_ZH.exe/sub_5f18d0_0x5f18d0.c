// 函数: sub_5f18d0
// 地址: 0x5f18d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5979b0(arg1, arg1[3] + 0x2c)
int32_t eax_2 = *arg1

if (eax_2 == arg1[1])
    eax_2 = 0

int128_t* ecx_1 = arg1[3] + eax_2
*ecx_1 = arg2
ecx_1[1] = arg3
ecx_1[2].q = arg4
*(ecx_1 + 0x28) = arg5
arg1[3] += 0x2c
return arg5
