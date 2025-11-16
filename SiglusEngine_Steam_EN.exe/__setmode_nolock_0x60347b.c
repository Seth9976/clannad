// 函数: __setmode_nolock
// 地址: 0x60347b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_1 = arg1 s>> 5
int32_t esi_2 = (arg1 & 0x1f) << 6
int32_t edi = (&data_640ff8)[ebx_1]
char ecx = *(edi + esi_2 + 4)
int32_t eax_1
eax_1.b = *(edi + esi_2 + 0x24)
eax_1.b *= 2
int32_t edx_1 = sx.d(eax_1.b) s>> 1

if (arg2 == 0x4000)
    *(edi + esi_2 + 4) = ecx | 0x80
    int32_t eax_3 = (&data_640ff8)[ebx_1]
    *(eax_3 + esi_2 + 0x24) &= 0x80
else if (arg2 == 0x8000)
    *(edi + esi_2 + 4) = ecx & 0x7f
else
    int32_t eax_2
    int32_t ecx_1
    
    if (arg2 == 0x10000 || arg2 == 0x20000)
        *(edi + esi_2 + 4) = ecx | 0x80
        ecx_1 = (&data_640ff8)[ebx_1]
        eax_2.b = *(ecx_1 + esi_2 + 0x24)
        eax_2.b &= 0x82
        eax_2.b |= 2
        *(ecx_1 + esi_2 + 0x24) = eax_2.b
    else if (arg2 == 0x40000)
        *(edi + esi_2 + 4) = ecx | 0x80
        ecx_1 = (&data_640ff8)[ebx_1]
        eax_2.b = *(ecx_1 + esi_2 + 0x24)
        eax_2.b &= 0x81
        eax_2.b |= 1
        *(ecx_1 + esi_2 + 0x24) = eax_2.b

if ((zx.d(ecx) & 0x80) == 0)
    return 0x8000

int32_t edx_2 = neg.d(edx_1)
return (sbb.d(edx_2, edx_2, edx_1 != 0) & 0xc000) + 0x4000
