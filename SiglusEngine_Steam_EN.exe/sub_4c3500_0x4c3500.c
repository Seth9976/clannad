// 函数: sub_4c3500
// 地址: 0x4c3500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (data_641b5c == 0 || arg3 u> 0x3f || (&data_208cd58)[arg3 * 0x60] == 0
        || (&data_208cd54)[arg3 * 0x60] == 0)
    return 

int32_t eax = arg4

if (eax s>= 0)
    if (eax s> 0xff)
        eax = 0xff
    
    *(arg3 * 0x180 + &data_208cd50 + (arg2 << 2) + 0x48) = eax

int32_t edi_1 = arg5

if (edi_1 s< 0)
    edi_1 = 0
else if (edi_1 s> 0xff)
    edi_1 = 0xff

int32_t ecx = *(arg3 * 0x180 + &data_208cd50 + (arg2 << 2) + 0x48)
int32_t ebx_1 = arg6
void* esi_1 = arg3 * 0x180 + &data_208cd50 + arg2 * 0x28
*(esi_1 + 0x7c) = data_1392ccc
*(esi_1 + 0x70) = ecx
*(esi_1 + 0x64) = edi_1
*(esi_1 + 0x68) = ecx
*(esi_1 + 0x88) = 2

if (ebx_1 s< 0)
    ebx_1 = neg.d(ebx_1)

*(esi_1 + 0x74) = edi_1
*(esi_1 + 0x84) = ebx_1
*(esi_1 + 0x80) = 0
*(esi_1 + 0x78) = 0
*(esi_1 + 0x6c) = 0
*(arg3 * 0x180 + &data_208cd50 + (arg2 << 2) + 0x2c) = 1
