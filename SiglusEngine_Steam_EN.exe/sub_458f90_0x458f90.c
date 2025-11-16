// 函数: sub_458f90
// 地址: 0x458f90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t esi = 0
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = 0

if (sub_4d0f10(arg2, "PDT10") != 0)
    if (sub_4d0f10(arg2, "PDT11") == 0)
        var_8 = 3
        goto label_458fda
else
    var_8 = *(arg2 + 0x1c)
label_458fda:
    ebx = *(arg2 + 0x10)
    esi = *(arg2 + 0xc)
    var_c = ebx
    var_10 = esi

arg1[2] = esi
arg1[3] = ebx
sub_4d6960(arg1, &arg1[1], arg1, esi * ebx, "AVGMASK")
uint32_t result = &arg1[1]

if (*result == 0)
    return result

return sub_4cf6e0(result, arg1, arg2, result, &var_10, &var_c, &var_8)
