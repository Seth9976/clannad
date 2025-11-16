// 函数: sub_4b0d90
// 地址: 0x4b0d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
sub_4b0560(&var_c, &var_14, &var_8, &var_c, &var_10, data_703058)
int32_t eax_1 = data_703054
int32_t edi = 0
int32_t ebx = var_14
int32_t esi = 0

if (eax_1 == 0)
    edi = var_10 + ebx
else if (eax_1 == 1)
    edi = ebx - var_10
else
    int32_t esi_1 = var_8
    
    if (eax_1 == 2)
        esi = esi_1 + var_c
    else
        esi = esi_1 - var_c

int32_t edx_3 = data_7030b0 + edi
int32_t ecx_3 = data_7030ac + esi
int32_t var_30_1 = edx_3
int32_t var_34_1 = ecx_3
int32_t var_38_1 = data_7030b8 + edi
int32_t var_3c = data_7030b4 + esi
sub_4b0780(arg1, arg2, ecx_3, edx_3)
int32_t eax_9 = data_703054
int32_t edx_5 = 0
int32_t ecx_5 = 0

if (eax_9 == 0 || eax_9 == 1)
    edx_5 = ebx
else
    ecx_5 = var_8

int32_t var_30_2 = data_7030b8 + edx_5
int32_t var_34_2 = data_7030b4 + ecx_5
int32_t var_38_2 = data_7030b0 + edx_5
int32_t var_3c_1 = data_7030ac + ecx_5
return sub_4b0920(arg1, arg2)
