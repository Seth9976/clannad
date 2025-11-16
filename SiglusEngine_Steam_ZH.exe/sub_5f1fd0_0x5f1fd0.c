// 函数: sub_5f1fd0
// 地址: 0x5f1fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5979b0(arg1, arg1[3] + 0x58)
int32_t result = *arg1

if (result == arg1[1])
    result = 0

int128_t* ecx_1 = arg1[3] + result
*ecx_1 = arg2
ecx_1[1] = arg3
ecx_1[2] = arg4
ecx_1[3] = arg5
ecx_1[4] = arg6
ecx_1[5].q = arg7
arg1[3] += 0x58
return result
