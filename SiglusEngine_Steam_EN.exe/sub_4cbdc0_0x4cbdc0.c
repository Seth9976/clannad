// 函数: sub_4cbdc0
// 地址: 0x4cbdc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 u> 0x3f)
    return 

int32_t eax = arg4

if (eax s>= 0)
    if (eax s> 0xff)
        eax = 0xff
    
    *(arg3 * 0x3c0 + &data_20af850 + (arg2 << 2) + 0x38) = eax

int32_t esi_1 = arg5

if (esi_1 s< 0)
    esi_1 = 0
else if (esi_1 s> 0xff)
    esi_1 = 0xff

int32_t ecx = *(arg3 * 0x3c0 + &data_20af850 + (arg2 << 2) + 0x38)
int32_t ebx_1 = arg6
void* edx = arg3 * 0x3c0 + &data_20af850 + arg2 * 0x28
*(edx + 0x6c) = data_1392ccc
*(edx + 0x60) = ecx
*(edx + 0x54) = esi_1
*(edx + 0x58) = ecx
*(edx + 0x78) = 2

if (ebx_1 s< 0)
    ebx_1 = neg.d(ebx_1)

*(edx + 0x74) = ebx_1
*(edx + 0x64) = esi_1
*(edx + 0x70) = 0
*(edx + 0x68) = 0
*(edx + 0x5c) = 0
*(arg3 * 0x3c0 + &data_20af850 + (arg2 << 2) + 0x1c) = 1
