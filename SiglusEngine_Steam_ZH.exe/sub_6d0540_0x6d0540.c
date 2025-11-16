// 函数: sub_6d0540
// 地址: 0x6d0540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char edx = *(arg1 + 0x14f)

if ((edx & 4) == 0)
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff
    
    if (*(arg1 + 0x148) u<= 0)
        *(arg1 + 0x7c) &= 0xfffffe7f

int32_t edi = *(arg1 + 0x7c)

if ((edi & 0x100) == 0 || (edi & 0x1000) == 0 || (edx & 2) != 0)
    return 

uint32_t eax_1 = zx.d(*(arg1 + 0x150))
uint32_t edx_1 = zx.d(*(arg1 + 0x1b8))
uint32_t esi_1 = zx.d(*(arg1 + 0x168))

if (eax_1 == 1)
    esi_1 *= 0xff
    edx_1 *= 0xff
else if (eax_1 == 2)
    esi_1 *= 0x55
    edx_1 *= 0x55
else if (eax_1 == 4)
    esi_1 *= 0x11
    edx_1 *= 0x11

*(arg1 + 0x166) = esi_1.w
*(arg1 + 0x164) = esi_1.w
*(arg1 + 0x162) = esi_1.w

if ((edi & &data_2000000) != 0)
    return 

*(arg1 + 0x1b6) = edx_1.w
*(arg1 + 0x1b4) = edx_1.w
*(arg1 + 0x1b2) = edx_1.w
