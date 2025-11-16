// 函数: sub_492490
// 地址: 0x492490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = data_131310c
int32_t* edi_1 = arg3 * 0x110 + arg4
void* ecx_1 = arg3 * 0x124 + arg2

if (*(ecx_1 + 4) != 0)
    if (arg5 s<= 0 || *(ecx_1 + 0x10) != 0)
        sub_490910(ecx_1 + 4, edi_1)
    else
        *(ecx_1 + 0x10) = 1
        edi_1[5] = ebx
        edi_1[6] = arg5

if (*(ecx_1 + 0x4c) != 0)
    if (arg5 s<= 0 || *(ecx_1 + 0x58) != 0)
        sub_490910(ecx_1 + 0x4c, &edi_1[0x11])
    else
        *(ecx_1 + 0x58) = 1
        edi_1[0x16] = ebx
        edi_1[0x17] = arg5

if (*(ecx_1 + 0x94) != 0)
    if (arg5 s<= 0 || *(ecx_1 + 0xa0) != 0)
        sub_490910(ecx_1 + 0x94, &edi_1[0x22])
    else
        *(ecx_1 + 0xa0) = 1
        edi_1[0x27] = ebx
        edi_1[0x28] = arg5

if (*(ecx_1 + 0xdc) == 0)
    return 

if (arg5 s> 0 && *(ecx_1 + 0xe8) == 0)
    *(ecx_1 + 0xe8) = 1
    edi_1[0x39] = arg5
    edi_1[0x38] = ebx
    return 

sub_490910(ecx_1 + 0xdc, &edi_1[0x33])
