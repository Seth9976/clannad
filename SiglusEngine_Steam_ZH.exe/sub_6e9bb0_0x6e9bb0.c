// 函数: sub_6e9bb0
// 地址: 0x6e9bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 == 0)
    return &arg5[-5]

if (arg3 == 0)
    return 0xffffffff

int32_t ecx = *arg5
int32_t eax_2 = arg5[1]
int128_t var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t eax_3 = eax_2 + ecx
var_18:4.d = ecx
var_18.d = eax_3
return sub_6e9990(eax_3, arg3, &var_18, arg2, arg4, arg5)
