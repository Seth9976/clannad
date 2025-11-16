// 函数: sub_59004d
// 地址: 0x59004d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 += arg1.b
arg4[0x14090913].b += arg3.b
void var_10
void var_c
sub_6c3da0(arg3, var_10, var_c)
char arg_60 = 0

if (arg10 u>= 8)
    j__free(arg9)

int32_t result_1
int32_t arg_14 = sub_6c40b0(&result_1)
sub_6c42e0(arg5, &result_1, arg5 + 0x98, *(arg5 + 0xb0), *(arg5 + 0xb1), arg6)
int32_t result = result_1

if (result != 0)
    result = j__free(result)

TEB* fsbase
fsbase->NtTib.ExceptionList = arg12
void arg_24
sub_745f2b(arg11 ^ &arg_24)
*arg4
return result
