// 函数: sub_4708d0
// 地址: 0x4708d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = zx.d(*(arg3 + 0x28)) + arg4
int32_t ecx

if (arg5 != 0)
    int32_t edi_2 = zx.d(*(arg3 + 0xd0)) + *arg5
    
    if (edi_2 != 0xff)
        result = edi_2 * result s/ 0xff
    
    int32_t edi_5 = zx.d(*(arg3 + 0xd1)) + *(arg5 + 4)
    
    if (edi_5 != 0xff)
        result = edi_5 * result s/ 0xff
    
    int32_t edi_8 = zx.d(*(arg3 + 0xd2)) + *(arg5 + 8)
    
    if (edi_8 != 0xff)
        result = edi_8 * result s/ 0xff
    
    int32_t edi_11 = zx.d(*(arg3 + 0xd3)) + *(arg5 + 0xc)
    
    if (edi_11 != 0xff)
        result = edi_11 * result s/ 0xff
    
    int32_t edi_14 = zx.d(*(arg3 + 0xd4)) + *(arg5 + 0x10)
    
    if (edi_14 != 0xff)
        result = edi_14 * result s/ 0xff
    
    int32_t edi_17 = zx.d(*(arg3 + 0xd5)) + *(arg5 + 0x14)
    
    if (edi_17 != 0xff)
        result = edi_17 * result s/ 0xff
    
    int32_t edi_20 = zx.d(*(arg3 + 0xd6)) + *(arg5 + 0x18)
    
    if (edi_20 != 0xff)
        result = edi_20 * result s/ 0xff
    
    int32_t edi_23 = zx.d(*(arg3 + 0xd7)) + *(arg5 + 0x1c)
    
    if (edi_23 != 0xff)
        result = edi_23 * result s/ 0xff
else
    ecx.b = *(arg3 + 0xd0)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd1)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd2)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd3)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd4)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd5)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd6)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff
    
    ecx.b = *(arg3 + 0xd7)
    
    if (ecx.b != 0xff)
        result = zx.d(ecx.b) * result s/ 0xff

ecx.b = *(arg3 + 0xe0)

if (ecx.b != 0xff)
    result = zx.d(ecx.b) * result s/ 0xff

ecx.b = *(arg3 + 0xf4)

if (ecx.b != 0xff)
    result = zx.d(ecx.b) * result s/ 0xff

if (result s< 0)
    *arg2 = 0
    return result

if (result s> 0xff)
    result = 0xff

*arg2 = result.b
return result
