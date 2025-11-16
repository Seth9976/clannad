// 函数: sub_4b0e80
// 地址: 0x4b0e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18
int32_t var_14
int32_t var_c
int32_t var_8
sub_4b0560(&var_8, &var_18, &var_14, &var_8, &var_c, data_703058)
int32_t eax_1 = data_703054
int32_t edx_1 = 0
int32_t edi = var_14
int32_t esi = var_18
int32_t ecx_1 = 0

if (eax_1 == 0)
    edx_1 = var_c + esi
else if (eax_1 == 1)
    edx_1 = esi - var_c
else if (eax_1 == 2)
    ecx_1 = var_8 + edi
else
    ecx_1 = edi - var_8

int32_t var_28_1 = data_7030b8 + edx_1
int32_t var_2c_1 = data_7030b4 + ecx_1
int32_t var_30_1 = data_7030b0 + edx_1
int32_t var_34 = data_7030ac + ecx_1
sub_4b0880(arg1, arg2)
int32_t eax_13 = data_703054
int32_t edx_4 = 0
int32_t ecx_4 = 0

if (eax_13 == 0 || eax_13 == 1)
    edx_4 = esi
else
    ecx_4 = edi

int32_t var_28_2 = data_7030b8 + edx_4
int32_t var_2c_2 = data_7030b4 + ecx_4
int32_t var_30_2 = data_7030b0 + edx_4
int32_t var_34_1 = data_7030ac + ecx_4
return sub_4b0920(arg1, arg2)
