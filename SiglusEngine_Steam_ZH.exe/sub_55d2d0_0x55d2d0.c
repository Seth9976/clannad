// 函数: sub_55d2d0
// 地址: 0x55d2d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** edx = arg1

if (arg3 == 1)
    if (edx[5] u>= 8)
        edx = *edx
    
    *(edx + (arg2 << 1)) = arg4
    return arg4

if (edx[5] u>= 8)
    edx = *edx

uint32_t eax_1 = arg2
void* edi = edx + (eax_1 << 1)

if (arg3 != 0)
    uint32_t edx_1 = zx.d(arg4)
    eax_1 = edx_1 | edx_1 << 0x10
    int32_t ecx_3
    int32_t edi_1
    edi_1, ecx_3 = __memfill_u32(edi, eax_1, arg3 u>> 1)
    int32_t ecx_5
    int32_t edi_2
    edi_2, ecx_5 = __memfill_u16(edi_1, eax_1.w, adc.d(ecx_3, ecx_3, (arg3 & 1) != 0))

return eax_1
