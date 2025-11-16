// 函数: sub_58d0e0
// 地址: 0x58d0e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = data_20f3390
int32_t ecx = data_20f3384
int32_t result_1 = data_20f3394
int32_t result_3 = data_20f338c
int32_t esi = data_20f3380
int32_t var_c = data_20f337c
int32_t eax_2 = data_20f3378
int32_t edi = data_20f3388
int32_t var_8 = eax_2
int32_t result = data_20f338c
int32_t var_10 = edi

if (eax_2 s> esi)
    var_8 = esi
    esi = data_20f3378

if (data_20f337c s> ecx)
    var_c = ecx
    ecx = data_20f337c

if (edi s> edx)
    var_10 = edx
    edx = edi

int32_t result_2

if (result s<= result_1)
    result_2 = result_3
else
    result_2 = result_1
    result_1 = result
    result_3 = result_2

int32_t ecx_2 = ecx - var_c + 1
int32_t var_18 = ecx_2

if (esi - var_8 + 1 != edx - var_10 + 1)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q((*arg3 - var_8) * (edx - var_10 + 1))
    *arg1 = divs.dp.d(sx.q((*arg1 - var_8) * (edx - var_10 + 1)), esi - var_8 + 1) + var_10
    ecx_2 = var_18
    result = divs.dp.d(edx_3:eax_6, esi - var_8 + 1) + var_10
    *arg3 = result

if (ecx_2 != result_1 - result_2 + 1)
    int32_t eax_17
    int32_t edx_6
    edx_6:eax_17 = sx.q((*arg4 - var_c) * (result_1 - result_2 + 1))
    *arg2 = divs.dp.d(sx.q((*arg2 - var_c) * (result_1 - result_2 + 1)), var_18) + result_3
    result = divs.dp.d(edx_6:eax_17, ecx_2) + result_3
    *arg4 = result

return result
