// 函数: sub_40bf46
// 地址: 0x40bf46
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d(*arg1) == arg2)
    return 0

if (zx.d(arg1[1]) == arg2)
    return 1

int32_t ecx_2
ecx_2.b = zx.d(arg1[2]) != arg2
return ecx_2 + 2
