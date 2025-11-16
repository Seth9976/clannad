// 函数: sub_466b2c
// 地址: 0x466b2c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    return 

*(arg2 + 0x1a) = arg8
arg2[1] = arg4
int32_t eax_1
eax_1.b = arg6
int32_t edi
int32_t var_c_1 = edi
*(arg2 + 0x1b) = arg9
*arg2 = arg3
arg2[6].b = arg5
*(arg2 + 0x19) = eax_1.b
arg2[7].b = arg7

if (eax_1.b == 3 || (eax_1.b & 2) == 0)
    *(arg2 + 0x1d) = 1
else
    *(arg2 + 0x1d) = 3

if ((eax_1.b & 4) != 0)
    *(arg2 + 0x1d) += 1

eax_1.b = *(arg2 + 0x1d)
eax_1.w = muls.dp.b(eax_1.b, arg5)
uint32_t ecx_1 = zx.d(eax_1.b)
*(arg2 + 0x1e) = eax_1.b

if (arg3 u<= divu.dp.d(0:0x7fffffff, (ecx_1 + 7) s>> 3))
    arg2[3] = (ecx_1 * arg3 + 7) u>> 3
else
    sub_46693e(arg1, "Width too large to process image data; rowbytes will overflow.")
    arg2[3] = 0
