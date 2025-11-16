// 函数: sub_4140f0
// 地址: 0x4140f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2

if (arg3 s>= 0x21)
    return 

int32_t edi_1 = arg4
int32_t ecx = data_70300c
int32_t edx = data_7030dc

if (esi s< 0)
    esi = 0

if (edi_1 s< 0)
    edi_1 = 0

if (esi s> ecx << 3)
    esi = ecx

if (edi_1 s> edx << 3)
    edi_1 = edx

if (arg3 == 0)
    esi = ecx
    edi_1 = edx
else if (arg3 == 1)
    if (esi s< ecx)
        esi = ecx
    
    if (edi_1 s< edx)
        edi_1 = edx

arg1 = sub_411350(arg3)

if (esi s> 0 && edi_1 s> 0)
    sub_411500(arg1, esi, arg3, edi_1)
