// 函数: sub_4c1e40
// 地址: 0x4c1e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg3 == 0 || arg4 == 0)
    return 

int32_t* ecx = *(arg3 + 8)
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t eax_1 = (*(*ecx + 0x2c))(ecx, *(arg3 + 0x10), arg4, &var_14, &var_c, &var_8, &var_10, 0)
int32_t ecx_1 = var_14
int32_t esi_1

if (arg2 != 0)
    sub_4d1c30(eax_1, arg2, ecx_1, var_c)
    esi_1 = var_8
    
    if (esi_1 != 0)
        sub_4d1c30(eax_1, var_c + arg2, esi_1, var_10)
        esi_1 = var_8
else
    int32_t eax_2 = sub_4d1ba0(eax_1, var_c, ecx_1, arg2.b)
    esi_1 = var_8
    
    if (esi_1 != 0)
        sub_4d1ba0(eax_2, var_10, esi_1, 0)
        esi_1 = var_8

int32_t* eax_3 = *(arg3 + 8)
(*(*eax_3 + 0x4c))(eax_3, var_14, var_c, esi_1, var_10)
*(arg3 + 0x10) += arg4
arg1 = *(arg3 + 0x10)
int32_t ecx_6 = *(arg3 + 0xc)

if (arg1 s< ecx_6)
    return 

do
    arg1 -= ecx_6
while (arg1 s>= ecx_6)

*(arg3 + 0x10) = arg1
