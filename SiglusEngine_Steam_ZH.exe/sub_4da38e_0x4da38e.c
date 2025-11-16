// 函数: sub_4da38e
// 地址: 0x4da38e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
esi.w = arg1
int16_t ecx = *(arg2 + 0x44)
int32_t edi
int32_t var_20 = edi
int16_t var_c

if (ecx u<= 0x7efa)
    var_c = 0
else
    var_c = ecx - 0x7efa

uint32_t edi_1 = zx.d(esi.w)
uint32_t ecx_3 = zx.d(*(*(arg2 + 0x1c) + edi_1))
int16_t* edx_1 = *(arg2 + 0x20) + (ecx_3 << 1)
*(arg2 + 0x28) = ecx_3
ecx_3.w = *edx_1
*edx_1 = esi.w
int32_t esi_3 = (edi_1 & 0x7fff) << 1
*(esi_3 + *(arg2 + 0x14)) = ecx_3.w
int32_t edx_3 = *(arg2 + 0x1c)
int32_t ebx
ebx.b = *(edx_3 + edi_1 + 1)
int32_t var_8 = 0x1000

while (ecx_3.w != 0)
    uint32_t edi_2 = zx.d(ecx_3.w)
    uint32_t var_10_1 = edi_2
    
    if (ebx.b == *(edi_2 + edx_3 + 1))
        break
    
    ecx_3.w = *(*(arg2 + 0x14) + ((edi_2 & 0x7fff) << 1))
    
    if (ecx_3.w u> var_c)
        var_8 += 0xffff
    
    if (ecx_3.w u<= var_c || var_8.w == 0)
        ecx_3 = 0

*(esi_3 + *(arg2 + 0x18)) = ecx_3.w
int32_t edx_5 = *(arg2 + 0x1c)
ebx.b = *(edx_5 + edi_1 + 2)

while (ecx_3.w != 0)
    uint32_t edi_4 = zx.d(ecx_3.w)
    
    if (ebx.b == *(edi_4 + edx_5 + 2))
        break
    
    ecx_3.w = *(*(arg2 + 0x18) + ((edi_4 & 0x7fff) << 1))
    
    if (ecx_3.w u> var_c)
        var_8 += 0xffff
        
        if (var_8.w != 0)
            continue
    
    ecx_3 = 0

*(esi_3 + *(arg2 + 0x24)) = ecx_3.w
*arg3 = ecx_3.w
return arg3
