// 函数: sub_46be20
// 地址: 0x46be20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t edx = arg6
int32_t esi_1 = arg4

if (esi_1 s> edx)
    int32_t eax = esi_1
    esi_1 = edx
    edx = eax

int32_t edi_1 = arg5
int32_t ebx_1 = arg7

if (edi_1 s> ebx_1)
    int32_t eax_1 = edi_1
    edi_1 = ebx_1
    ebx_1 = eax_1

*((arg2 + (arg3 << 1)) * 0x650 + 0x72d73c) = edi_1
*((arg2 + (arg3 << 1)) * 0x650 + 0x72d738) = esi_1
*((arg2 + (arg3 << 1)) * 0x650 + 0x72d744) = ebx_1
*((arg2 + (arg3 << 1)) * 0x650 + 0x72d740) = edx
