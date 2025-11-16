// 函数: sub_4b0ba0
// 地址: 0x4b0ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_1c
int32_t var_10
int32_t var_c
int32_t var_8
sub_4b0560(&var_c, &var_1c, &var_8, &var_c, &var_10, data_703058)
int32_t eax_1 = data_703054
int32_t edi = 0
int32_t ebx = var_1c
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

int32_t edx_2 = data_7030b0 + edi
int32_t ecx_2 = data_7030ac + esi
int32_t var_30_1 = edx_2
int32_t var_34_1 = ecx_2
int32_t var_38_1 = data_7030b8 + edi
int32_t var_3c = data_7030b4 + esi
sub_4b0780(arg1, arg2, ecx_2, edx_2)
int32_t eax_9 = data_703054
int32_t edi_3 = 0
int32_t esi_2 = 0

if (eax_9 == 0 || eax_9 == 1)
    edi_3 = ebx
else
    esi_2 = var_8

int32_t edx_4 = data_7030b0 + edi_3
int32_t ecx_4 = data_7030ac + esi_2
int32_t var_30_2 = edx_4
int32_t var_34_2 = ecx_4
int32_t var_38_2 = data_7030b8 + edi_3
int32_t var_3c_1 = data_7030b4 + esi_2
return sub_4b0800(arg1, arg2, ecx_4, edx_4)
