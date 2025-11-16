// 函数: sub_40c448
// 地址: 0x40c448
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = 0
int32_t edi
int32_t var_1c = edi
int32_t edi_1 = arg4

if (*(arg1 + 0x23c) u> 0)
    uint32_t i = 0
    
    do
        edx += 1
        *(edi_1 + (i << 2)) = 0xffff
        i = zx.d(edx.w)
    while (i u< *(arg1 + 0x23c))

int32_t edx_1 = 0

if (*(arg1 + 0x264) u> 0)
    uint32_t i_1 = 0
    
    do
        edx_1 += 1
        *(arg3 + (i_1 << 2)) = i_1
        i_1 = zx.d(edx_1.w)
    while (i_1 u< *(arg1 + 0x264))

int32_t var_8 = 0
int32_t var_c = 0

if (*(arg1 + 0x264) u> 0)
    uint32_t i_2 = 0
    
    do
        int16_t* esi_3 = *(arg1 + 0x24c) + i_2 * 6
        
        if (*esi_3 == 0xffff)
            *(arg2 + (i_2 << 2)) = 0xffff
        else
            uint32_t edi_2 = zx.d(var_8.w)
            var_8 += 1
            *(arg2 + (i_2 << 2)) = edi_2
            *(arg3 + (edi_2 << 2)) = i_2
            edi_1 = arg4
            *(edi_1 + (zx.d(*esi_3) << 2)) = 1
            *(edi_1 + (zx.d(esi_3[1]) << 2)) = 1
            *(edi_1 + (zx.d(esi_3[2]) << 2)) = 1
        
        var_c += 1
        i_2 = zx.d(var_c.w)
    while (i_2 u< *(arg1 + 0x264))

int32_t edx_2 = var_8

while (true)
    uint32_t eax_7 = zx.d(edx_2.w)
    
    if (eax_7 u>= *(arg1 + 0x264))
        break
    
    *(arg3 + (eax_7 << 2)) = 0xffff
    edx_2 += 1

int32_t esi_5 = 0
int32_t edx_3 = 0

if (*(arg1 + 0x23c) u> 0)
    uint32_t i_3 = 0
    
    do
        int32_t* eax_8 = edi_1 + (i_3 << 2)
        
        if (*eax_8 != 0xffff)
            *eax_8 = zx.d(esi_5.w)
            esi_5 += 1
        
        edx_3 += 1
        i_3 = zx.d(edx_3.w)
    while (i_3 u< *(arg1 + 0x23c))

if (var_8.w != 0 && esi_5.w != 0)
    return 0

return 0x88760b5a
