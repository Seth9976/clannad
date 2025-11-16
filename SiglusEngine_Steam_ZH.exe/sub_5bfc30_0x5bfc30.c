// 函数: sub_5bfc30
// 地址: 0x5bfc30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5bf760(arg1, 1)
*(arg1 + 0x128) = arg2

if (arg1 + 0x12c != arg4)
    sub_52e3c0(arg1 + 0x12c, arg4, 0, 0xffffffff)

if (arg1 + 0x144 != arg5)
    sub_52e3c0(arg1 + 0x144, arg5, 0, 0xffffffff)

void* eax_4

if (arg6 == 0)
    eax_4 = nullptr
else
    eax_4 = arg6 + 4

sub_5b1750(arg1 + 0x160, eax_4)
*(arg1 + 0x2b6) = 0
*(arg1 + 0x2c4) = 0

if (arg3 == 0)
    *(arg1 + 0x2b4) = 1
else
    *(arg1 + 0x2b4) = 0x101

int32_t eax_5 = sub_6980b0(data_bac45c, arg1 + 0x12c)
*(arg1 + 0x120) = eax_5
int32_t result = sub_697f50(eax_5, arg1 + 0x144)
*(arg1 + 0x124) = result
return result
