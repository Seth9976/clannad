// 函数: sub_5f1870
// 地址: 0x5f1870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5979b0(arg1, arg1[3] + 0x38)
int32_t result = *arg1

if (result == arg1[1])
    result = 0

int128_t* ecx_1 = arg1[3] + result
*ecx_1 = arg2
ecx_1[1] = arg3
ecx_1[2] = arg4
ecx_1[3].q = arg5
arg1[3] += 0x38
return result
