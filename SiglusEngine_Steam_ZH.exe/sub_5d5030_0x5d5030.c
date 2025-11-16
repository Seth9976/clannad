// 函数: sub_5d5030
// 地址: 0x5d5030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5979b0(arg1, arg1[3] + 0xe)
int32_t eax_2 = *arg1

if (eax_2 == arg1[1])
    eax_2 = 0

int64_t* ecx_1 = arg1[3] + eax_2
*ecx_1 = arg2
ecx_1[1].d = arg3
*(ecx_1 + 0xc) = arg4
arg1[3] += 0xe
return arg4
