// 函数: sub_486e10
// 地址: 0x486e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1b8a67c
uint32_t ecx = data_1b8a678
int32_t esi = ecx + eax

if (data_1b8a6d4 == 0)
    esi = data_131310c

int32_t esi_1 = esi - eax
uint32_t edi

if (esi_1 u< ecx)
    int32_t edx_1 = 0
    int32_t eax_2 = ecx * esi_1
    
    if (ecx s< 0)
        edi = neg.d(divu.dp.d(edx_1:(neg.d(eax_2)), ecx))
        
        if (edi s< ecx)
            edi = ecx
    else
        edi = divu.dp.d(edx_1:eax_2, ecx)
        
        if (edi s> ecx)
            edi = ecx
else
    edi = ecx

uint32_t result

if (esi_1 u< ecx)
    result = divu.dp.d(0:(esi_1 * 0xff), ecx)
    
    if (result s> 0xff)
        result = 0xff
else
    result = 0xff

void* esi_2 = data_1b8a674

if (esi_2 s>= 0)
    int32_t ecx_1 = data_1b8a658
    int32_t edx_5 = data_1b8a654
    int32_t eax_13 = data_1b8a65c - edx_5
    result = sub_4128b0(eax_13, 0, nullptr, eax_13, data_1b8a660 - ecx_1, esi_2, edx_5, ecx_1, 
        data_1b8a670, 0xffffffff, 0, 0, 0, 0, 0, 0, zx.d(data_1b8a664), zx.d(data_1b8a668), 
        zx.d(data_1b8a66c), result.b, 0xff)
    ecx = data_1b8a678
    esi_2 = data_1b8a674

if (edi == ecx)
    sub_411350(esi_2)
    
    if (data_1af1768 != 0)
        data_1af177c = 1
        data_1af1768 = 0
    
    sub_48d140()
    result = data_1af1788
    
    if (data_71929c == 0x11)
        result = 1
    
    data_1af1788 = result

return result
