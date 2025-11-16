// 函数: sub_4e20f0
// 地址: 0x4e20f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 0x1c8)
int32_t edi
int32_t var_18 = edi
int32_t* ebx
int32_t edi_1

if (*(esi + 0x24) == 0)
    int32_t eax_3 = *(esi + 0x2c)
    edi_1 = 2
    
    if (eax_3 u< 2)
        edi_1 = eax_3
    
    ebx = arg5
    int32_t eax_4 = *ebx
    int32_t ecx_3 = arg6 - eax_4
    
    if (edi_1 u> ecx_3)
        edi_1 = ecx_3
    
    int32_t var_c = *(arg4 + (eax_4 << 2))
    
    if (edi_1 u<= 1)
        int32_t var_8_2 = *(esi + 0x20)
        *(esi + 0x24) = 1
    else
        int32_t var_8_1 = *(arg4 + (eax_4 << 2) + 4)
    
    (*(esi + 0xc))(arg1, arg2, *arg3, &var_c)
else
    ebx = arg5
    sub_498570(esi + 0x20, 0, arg4 + (*ebx << 2), 0, 1, *(esi + 0x28))
    edi_1 = 1
    *(esi + 0x24) = 0

int32_t* result = *(esi + 0x24)
int32_t edx_5 = *ebx + edi_1
*(esi + 0x2c) -= edi_1
*ebx = edx_5

if (result == 0)
    result = arg3
    *result += 1

return result
