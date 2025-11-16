// 函数: sub_458ea0
// 地址: 0x458ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL var_c = 0
uint32_t var_18 = 0
uint32_t var_14
uint32_t var_8
uint32_t edi

if (arg2 == 0)
    edi = var_18
else
    edi = zx.d(*arg2)
    var_14 = zx.d(*(arg2 + 1))
    var_8 = zx.d(*(arg2 + 3))

uint32_t var_1c
sub_427180(&var_18, arg4, arg2, &var_18, &var_c, 0, nullptr, &var_14, &var_8, &var_1c, 
    "AVG_MASK_EXPAND_TMP", 0, arg5)
uint32_t ecx_1 = var_8
uint32_t ebx = var_14
arg3[3] = ecx_1
arg3[2] = ebx
uint32_t eax_5 = ebx * ecx_1
BOOL eax_6 = sub_4d6960(eax_5, &arg3[1], arg3, eax_5, "AVGMASK")
int32_t ecx_3 = arg3[1]

if (ecx_3 != 0)
    uint32_t var_30_1 = var_8
    
    if (edi == 0 || edi == 1)
        sub_4a5030(eax_6, var_c, ecx_3, ebx, var_30_1)
        return sub_4d6c40(&var_18, &var_c)
    
    sub_4a4fa0(arg3, arg3[2], ecx_3, arg3[3], var_c, ebx, var_30_1)

return sub_4d6c40(&var_18, &var_c)
