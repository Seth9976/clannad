// 函数: sub_740063
// 地址: 0x740063
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg6 += arg3.b
arg2:1.b = 0xc
*(arg1 - 0x49f0fdb5) ^= arg3
arg1.b |= 0x32

while (true)
    int32_t edx = arg4[-0x91]
    void* entry_ebx
    *(entry_ebx + 5) = arg3.b
    int32_t ebx = arg4[-0x8a]
    void* esi = arg4[-0x83]
    *(esi + 3) = ((ebx + edx) s>> 0x12 & 0x3ff)[arg5]
    *(esi + 4) = ((ebx - edx) s>> 0x12 & 0x3ff)[arg4[-0x8d]]
    int32_t ecx_8 = arg4[-0x87] + 1
    arg4[-0x87] = ecx_8
    
    if (ecx_8 s>= 0x10)
        break
    
    int32_t esi_2 = *arg1
    int32_t ebx_6 = *(arg1 - 0x18) + 0x10
    int32_t edx_2 = *(arg1 - 0x10)
    arg4[-0x83] = *(arg4[-0x97] + (ecx_8 << 2)) + arg4[-0x98]
    int32_t edi_1 = (esi_2 + edx_2) * 0x1151
    int32_t edx_4 = edx_2 * 0x187e + edi_1
    int32_t edi_2 = edi_1 - esi_2 * 0x3b21
    int32_t ecx_15 = *(arg1 - 8)
    int32_t esi_4 = (ecx_15 + ebx_6) << 0xd
    int32_t ebx_8 = (ebx_6 - ecx_15) << 0xd
    int32_t edx_5 = *(arg1 - 0xc)
    arg4[-0x90] = edx_4 + esi_4
    arg4[-0x94] = edi_2 + ebx_8
    int32_t edi_3 = *(arg1 + 4)
    int32_t edx_6 = edx_5 + edi_3
    arg4[-0x8a] = esi_4 - edx_4
    int32_t esi_6 = *(arg1 - 4)
    arg4[-0x8f] = ebx_8 - edi_2
    int32_t ebx_10 = *(arg1 - 0x14)
    int32_t esi_7 = esi_6 + ebx_10
    arg4[-0x8b] = (esi_7 + edx_6) * 0x25a1
    int32_t edx_8 = arg4[-0x8b] - edx_6 * 0x3ec5
    int32_t esi_8 = arg4[-0x8b]
    arg4[-0x92] = edx_8
    int32_t esi_9 = esi_8 - esi_7 * 0xc7c
    int32_t ecx_23 = (ebx_10 + edi_3) * 0xffffe333
    int32_t ebx_11 = *(arg1 - 0xc)
    arg4[-0x91] = edi_3 * 0x98e + edx_8 + ecx_23
    int32_t edi_7 = *(arg1 - 4)
    int32_t edx_11 = ebx_10 * 0x300b + esi_9 + ecx_23
    int32_t ecx_25 = (ebx_11 + edi_7) * 0xffffadfd
    int32_t ebx_12 = arg4[-0x90]
    arg4[-0x93] = edi_7 * 0x41b3 + esi_9 + ecx_25
    int32_t esi_12 = ebx_11 * 0x6254 + arg4[-0x92] + ecx_25
    int32_t edx_12 = arg4[-0x94]
    *arg4[-0x83] = ((edx_11 + ebx_12) s>> 0x12 & 0x3ff)[arg4[-0x8d]]
    int32_t edi_13 = arg4[-0x8d]
    entry_ebx = arg4[-0x83]
    *(entry_ebx + 7) = ((ebx_12 - edx_11) s>> 0x12 & 0x3ff)[edi_13]
    arg1 += 0x20
    arg5 = edi_13
    int32_t edi_14 = arg4[-0x93]
    *(entry_ebx + 1) = ((edx_12 + esi_12) s>> 0x12 & 0x3ff)[edi_13]
    int32_t edx_16 = arg4[-0x8f]
    *(entry_ebx + 6) = ((edx_12 - esi_12) s>> 0x12 & 0x3ff)[arg5]
    *(entry_ebx + 2) = ((edx_16 + edi_14) s>> 0x12 & 0x3ff)[arg5]
    arg3 = zx.d(*(((edx_16 - edi_14) s>> 0x12 & 0x3ff) + arg5))

sub_745f2b(arg4[-1] ^ arg4)
*arg4
return arg1
