// 函数: sub_4b2b60
// 地址: 0x4b2b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
int32_t var_8 = edx
int32_t ecx
int32_t var_c = ecx
int32_t ebx
ebx.b = data_703054 == 0
int32_t result = data_703050 - 0x70

if (result u> 7)
    return result

int32_t var_34_1
int32_t var_30_1
int32_t var_20_1
int32_t var_1c_1
int32_t esi_1
int32_t edi_1

switch (result)
    case 0, 2
        var_1c_1 = 0
        var_20_1 = 0
    label_4b2bca:
        edi_1 = arg2
        esi_1 = arg1
        sub_4b28a0(result, edx, ecx, esi_1, edi_1, ebx, var_20_1, var_1c_1)
        var_30_1 = 0
        var_34_1 = 1
    case 1, 3
        edi_1 = arg2
        esi_1 = arg1
        sub_4b28a0(result, edx, ecx, esi_1, edi_1, ebx, 1, 0)
        var_30_1 = 0
        var_34_1 = 0
    case 4, 5
        var_1c_1 = 0
        goto label_4b2bc8
    case 6
        var_1c_1 = 1
    label_4b2bc8:
        var_20_1 = 1
        goto label_4b2bca
    case 7
        edi_1 = arg2
        esi_1 = arg1
        sub_4b28a0(result, edx, ecx, esi_1, edi_1, ebx, 1, 0)
        var_30_1 = 1
        var_34_1 = 1

return sub_4b2a00(esi_1, edi_1, ebx, var_34_1, var_30_1)
