// 函数: sub_502e40
// 地址: 0x502e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4ef190(arg1, arg2 + 0x20, *(arg2 + 0x20), "$$%%%%", &data_1b8a720)
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8
int32_t eax_1 =
    sub_47ecb0(&var_8, arg3, data_1b8a720, data_1b8a734, &var_8, &var_c, &var_10, &var_14)
int32_t edx_2 = data_1b8a758
int32_t ecx_3 = data_1b8a754

if (arg4 == 0)
    return sub_4e8000(
        sub_4e8000(
            sub_4e8000(sub_4e8000(eax_1, edx_2, ecx_3, var_8, &data_704898), data_1b8a76c, 
                data_1b8a768, var_c, &data_704898), 
            data_1b8a780, data_1b8a77c, var_10, &data_704898), 
        data_1b8a794, data_1b8a790, var_14, &data_704898)

int32_t edi = var_8
int32_t eax_6 = sub_4e8000(eax_1, edx_2, ecx_3, edi, &data_704898)
int32_t esi = var_c
sub_4e8000(eax_6, data_1b8a76c, data_1b8a768, esi, &data_704898)
int32_t eax_7 = var_10
int32_t eax_9

if (edi s> eax_7)
    eax_9 = eax_7 - edi - 1
else
    eax_9 = eax_7 - edi + 1

sub_4e8000(eax_9, data_1b8a780, data_1b8a77c, eax_9, &data_704898)
int32_t eax_11 = var_14
int32_t edx_8 = data_1b8a794
int32_t ecx_9 = data_1b8a790

if (esi s> eax_11)
    return sub_4e8000(eax_11 - esi - 1, edx_8, ecx_9, eax_11 - esi - 1, &data_704898)

return sub_4e8000(eax_11 - esi + 1, edx_8, ecx_9, eax_11 - esi + 1, &data_704898)
