// 函数: sub_41eb10
// 地址: 0x41eb10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ecx_1 = data_1356ed8

if (ecx_1 == 0)
    data_1356f58 = ecx_1
    return 

int32_t eax = data_71929c

if (eax == 0x22 || eax == 0x23 || eax == 0x24 || data_1311178 != 0)
    data_1356ed8 = 0
    return 

int32_t edx = data_1356efc
data_1356f70 = data_1356edc
data_1356f74 = data_1356ee0
data_1356f78 = data_1356ee4
int32_t esi = data_131310c
data_1356f7c = data_1356ee8
int32_t eax_6 = esi - data_1356f04

if (eax_6 u< edx)
    return 

if (data_1356f08 != 0)
    data_1356f04 = esi
    data_1356f58 = 1
    data_1356f08 = 0
    return 

int32_t edi_1 = data_1356f00

if (edi_1 == 0)
    int32_t eax_8 = data_1356ef8 - 1
    data_1356f04 = esi
    data_1356ef8 = eax_8
    
    if (eax_8 s<= 0)
        ecx_1 = 0
    
    data_1356f58 = 0
    data_1356ed8 = ecx_1
    data_1356f08 = 1
    return 

int32_t ecx_2 = data_1356ef8

if (ecx_2 s> 1)
    edi_1 = 0x50

if (eax_6 u>= edx + edi_1)
    data_1356f04 = esi
    data_1356ef8 = ecx_2 - 1
    
    if (ecx_2 - 1 s> 0)
        data_1356f58 = 1
        data_1356f54 = 0xff
        return 
    
    data_1356ed8 = 0
    data_1356f58 = 0
    return 

int32_t edx_2 = edx - eax_6 + edi_1
data_1356f58 = 1

if (ecx_2 s<= 1)
    data_1356f54 = (divs.dp.d(sx.q(edx_2 * 0xff), edi_1)).b
    return 

eax_6.b = divs.dp.d(sx.q(edx_2 * 0xc0), edi_1).b + 0x3f
data_1356f54 = eax_6.b
