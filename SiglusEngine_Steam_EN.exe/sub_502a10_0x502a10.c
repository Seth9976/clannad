// 函数: sub_502a10
// 地址: 0x502a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
char** eax = sub_4ef190(arg1, arg2 + 0x20, *(arg2 + 0x20), "$%%%%", &data_1b8a720)
int32_t edx_1 = data_1b8a720
int32_t ecx_3 = 0xfff0bdc1
int32_t var_8_1 = 0xfff0bdc1
int32_t ebx = 0xfff0bdc1
int32_t edi = 0xfff0bdc1
int32_t esi = 0xfff0bdc1

if (edx_1 s>= 0 && edx_1 s< data_7031bc)
    eax = (arg3 + (edx_1 << 1)) * 0x650 + &data_72d7fc
    ecx_3 = eax[0x10]
    ebx = eax[0x11]
    edi = eax[0x12]
    esi = eax[0x13]
    var_8_1 = ecx_3

int32_t eax_5 = sub_4e8000(sub_4e8000(eax, data_1b8a744, data_1b8a740, ecx_3, &data_704898), 
    data_1b8a758, data_1b8a754, ebx, &data_704898)
int32_t edx_4 = data_1b8a76c
int32_t ecx_6 = data_1b8a768

if (arg4 == 0)
    return sub_4e8000(sub_4e8000(eax_5, edx_4, ecx_6, edi, &data_704898), data_1b8a780, 
        data_1b8a77c, esi, &data_704898)

int32_t edi_2

if (var_8_1 s> edi)
    edi_2 = edi - var_8_1 - 1
else
    edi_2 = edi - var_8_1 + 1

int32_t eax_9 = sub_4e8000(var_8_1, edx_4, ecx_6, edi_2, &data_704898)
int32_t edx_6 = data_1b8a780
int32_t ecx_8 = data_1b8a77c

if (ebx s> esi)
    return sub_4e8000(eax_9, edx_6, ecx_8, esi - ebx - 1, &data_704898)

return sub_4e8000(eax_9, edx_6, ecx_8, esi - ebx + 1, &data_704898)
