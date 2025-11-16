// 函数: sub_5d5e90
// 地址: 0x5d5e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0)
    arg4 = 0
else
    arg4 += 4

*(arg1 + 0x80) = 0x528
void arg_10
__builtin_memcpy(arg1, &arg_10, 0x80)

if (arg1 + 0x84 != arg3)
    sub_52e3c0(arg1 + 0x84, arg3, 0, 0xffffffff)

*(arg1 + 0x9c) = arg4
void arg_90
__builtin_memcpy(arg1 + 0xa4, &arg_90, 0x80)
*(arg1 + 0xa0) = arg2
void var_90
__builtin_memcpy(&var_90, &arg_10, 0x80)
Concurrency::agent::wait_for_one(arg1 + 0x234, arg3)
__builtin_memcpy(&var_90, &arg_10, 0x80)
Concurrency::agent::wait_for_one(arg1 + 0xf28, arg3)
return sub_5d5f50(arg1, 1)
