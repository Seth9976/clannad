// 函数: sub_7272d0
// 地址: 0x7272d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t ecx = *(arg3 + 0x16bc)

if (ecx s<= 0xb)
    *(arg3 + 0x16b8) |= (arg2.w - 0x101) << ecx.b
    *(arg3 + 0x16bc) = ecx + 5
else
    char* edx = *(arg3 + 0x14)
    int32_t eax
    eax.w = arg2.w - 0x101
    eax.w <<= ecx.b
    *(arg3 + 0x16b8) |= eax.w
    edx[*(arg3 + 8)] = *(arg3 + 0x16b8)
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
    int32_t ecx_2
    ecx_2.b = 0x10
    ecx_2.b = 0x10 - *(arg3 + 0x16bc)
    *(arg3 + 0x14) += 1
    *(arg3 + 0x16bc) -= 0xb
    *(arg3 + 0x16b8) = (arg2.w - 0x101) u>> ecx_2.b

int32_t ecx_3 = *(arg3 + 0x16bc)

if (ecx_3 s<= 0xb)
    *(arg3 + 0x16b8) |= (arg4.w - 1) << ecx_3.b
    *(arg3 + 0x16bc) = ecx_3 + 5
else
    char* edx_2 = *(arg3 + 0x14)
    uint32_t eax_2
    eax_2.w = arg4.w - 1
    eax_2.w <<= ecx_3.b
    *(arg3 + 0x16b8) |= eax_2.w
    edx_2[*(arg3 + 8)] = *(arg3 + 0x16b8)
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
    int32_t ecx_5
    ecx_5.b = 0x10
    ecx_5.b = 0x10 - *(arg3 + 0x16bc)
    *(arg3 + 0x14) += 1
    *(arg3 + 0x16bc) -= 0xb
    *(arg3 + 0x16b8) = (arg4.w - 1) u>> ecx_5.b

int32_t ecx_6 = *(arg3 + 0x16bc)

if (ecx_6 s<= 0xc)
    *(arg3 + 0x16b8) |= (arg5.w - 4) << ecx_6.b
    *(arg3 + 0x16bc) = ecx_6 + 4
else
    char* edx_4 = *(arg3 + 0x14)
    uint32_t eax_5
    eax_5.w = arg5.w - 4
    eax_5.w <<= ecx_6.b
    *(arg3 + 0x16b8) |= eax_5.w
    edx_4[*(arg3 + 8)] = *(arg3 + 0x16b8)
    *(arg3 + 0x14) += 1
    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
    int32_t ecx_8
    ecx_8.b = 0x10
    ecx_8.b = 0x10 - *(arg3 + 0x16bc)
    *(arg3 + 0x14) += 1
    *(arg3 + 0x16bc) -= 0xc
    *(arg3 + 0x16b8) = (arg5.w - 4) u>> ecx_8.b

void* ebx = nullptr

if (arg5 s> 0)
    do
        int32_t ecx_9 = *(arg3 + 0x16bc)
        uint32_t eax_13 = zx.d(*(ebx + 0xaddf50))
        
        if (ecx_9 s<= 0xd)
            eax_13.w = *(arg3 + (eax_13 << 2) + 0xa7e)
            eax_13.w <<= ecx_9.b
            *(arg3 + 0x16b8) |= eax_13.w
            *(arg3 + 0x16bc) = ecx_9 + 3
        else
            uint16_t edi_6 = *(arg3 + (eax_13 << 2) + 0xa7e)
            char* edx_6 = *(arg3 + 0x14)
            eax_13.w = edi_6
            eax_13.w <<= ecx_9.b
            *(arg3 + 0x16b8) |= eax_13.w
            edx_6[*(arg3 + 8)] = *(arg3 + 0x16b8)
            *(arg3 + 0x14) += 1
            (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
            int32_t ecx_11
            ecx_11.b = 0x10
            ecx_11.b = 0x10 - *(arg3 + 0x16bc)
            *(arg3 + 0x14) += 1
            *(arg3 + 0x16bc) -= 0xd
            *(arg3 + 0x16b8) = edi_6 u>> ecx_11.b
        
        ebx += 1
    while (ebx s< arg5)

sub_726cd0(arg2 - 1, arg3 + 0x94, arg3, arg2 - 1)
return sub_726cd0(arg4 - 1, arg3 + 0x988, arg3, arg4 - 1)
