// 函数: sub_49ede0
// 地址: 0x49ede0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || *arg1 == 0)
    return 0xfffffffe

int32_t result = sub_4c3da0(sub_4c3960(arg1, &data_61737c), 5, arg1, 0x1b)

if (result == 1)
    return result

if (sub_4c3da0(sub_4c3960(arg1, &data_617380), 5, arg1, 0x1b) == 1)
    return 2

if (sub_4c3da0(sub_4c3960(arg1, &data_617384), 5, arg1, 0x1b) == 1)
    return 0

sub_4c3960(arg1, &data_61737c)
int32_t edi = data_7031a8

if (sub_4c5530(edi) == 1)
    return 0xb

sub_4c3960(arg1, &data_617380)

if (sub_4c5530(edi) == 1)
    return 0xc

sub_4c3960(arg1, &data_617384)
int32_t eax_12 = sub_4c5530(edi) - 1
int32_t eax_13 = neg.d(eax_12)
return (sbb.d(eax_13, eax_13, eax_12 != 0) & 0xfffffff5) + 0xa
