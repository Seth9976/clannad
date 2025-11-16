// 函数: sub_4c0650
// 地址: 0x4c0650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s>= 0)
    if (arg2 s> 0xff)
        arg2 = 0xff
    
    (&data_208c710)[arg3] = arg2

int32_t edx = arg4

if (edx s< 0)
    edx = 0
else if (edx s> 0xff)
    edx = 0xff

int32_t esi = arg5

if (esi s>= 0x3a98)
    esi = 0x3a98

if (data_63e788 == 0)
    (&data_208c710)[arg3] = edx
    (&data_208c6f0)[arg3] = 0
    return 0x3a98

int32_t ecx = (&data_208c710)[arg3]
int32_t result = data_1392ccc
int32_t edi = arg3 * 5
*((edi << 3) + &data_208c748) = result
*((edi << 3) + &data_208c73c) = ecx
*((edi << 3) + &data_208c730) = edx
*((edi << 3) + &data_208c734) = ecx
*((edi << 3) + &data_208c754) = 2

if (esi s< 0)
    esi = neg.d(esi)

*((edi << 3) + &data_208c750) = esi
*((edi << 3) + &data_208c74c) = 0
*((edi << 3) + &data_208c740) = edx
*((edi << 3) + &data_208c744) = 0
*((edi << 3) + &data_208c738) = 0
(&data_208c6f0)[arg3] = 1
return result
