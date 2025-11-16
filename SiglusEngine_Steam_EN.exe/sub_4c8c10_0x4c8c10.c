// 函数: sub_4c8c10
// 地址: 0x4c8c10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t* eax = arg8
int32_t var_8 = 0
arg8 = nullptr
*eax = zx.d(*arg3)
uint32_t* arg_18
*arg_18 = zx.d(*(arg3 + 1))
uint32_t* arg_1c
*arg_1c = zx.d(*(arg3 + 3))
int32_t eax_3 = *(arg3 + 5)
int32_t esi_3 = eax_3 * 0x18
sub_4d1c30(sub_4d6960(eax_3, &arg8, &var_8, esi_3, "G00_CUT_DATA"), &arg3[9], arg8, esi_3)
void* edi_2 = &arg3[9 + esi_3]
arg_18 = nullptr
arg_1c = nullptr
BOOL result

if (arg12 != 0)
    result = sub_4bb5f0(&arg_18, arg3 - edi_2 + arg2, edi_2, &arg_18, &arg_1c, arg12)
else
    result = sub_4bb540(&arg_1c, &arg_18, edi_2, &arg_1c)

uint32_t* esi_4 = arg_18
sub_4d6560(result, result, esi_4, arg7)
*arg4 = esi_4
*arg5 = arg_1c

if (arg6 != 0)
    *arg6 = result

if (arg9 == 0 || arg10 == 0 || arg11 == 0)
    sub_4d6c40(&var_8, &arg8)
    return result

*arg9 = var_8
*arg10 = arg8
*arg11 = eax_3
return result
