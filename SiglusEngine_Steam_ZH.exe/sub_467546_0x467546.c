// 函数: sub_467546
// 地址: 0x467546
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0 || arg6 == 0)
    return 0

*arg3 = *arg2
*arg4 = arg2[1]
*arg5 = zx.d(arg2[6].b)
*arg6 = zx.d(*(arg2 + 0x19))

if (arg8 != 0)
    *arg8 = zx.d(*(arg2 + 0x1a))

if (arg9 != 0)
    *arg9 = zx.d(*(arg2 + 0x1b))

if (arg7 != 0)
    *arg7 = zx.d(arg2[7].b)

uint32_t ecx_2 = *arg6
int32_t eax_3

if (ecx_2 != 3)
    eax_3 = (sx.d(ecx_2.b) & 2) | 1
else
    eax_3 = 1

if ((ecx_2.b & 4) != 0)
    eax_3 += 1

if (*arg3 u> divu.dp.d(0:0x7fffffff, (*arg5 * eax_3 + 7) s>> 3))
    sub_46693e(arg1, "Width too large for libpng to process image data.")

return 1
