// 函数: sub_74005f
// 地址: 0x74005f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* ecx_40 = arg3 - 1

if (ecx_40 == 0)
    return sub_740061(arg1) __tailcall

int32_t* entry_ebx
*entry_ebx += 1
*arg1 += arg1.b

while (true)
    *(entry_ebx + 2) = ecx_40[arg5]
    int32_t edx = arg4[-0x91]
    *(entry_ebx + 5) = arg2[arg5]
    int32_t ebx = arg4[-0x8a]
    void* esi = arg4[-0x83]
    *(esi + 3) = ((ebx + edx) s>> 0x12 & 0x3ff)[arg5]
    *(esi + 4) = ((ebx - edx) s>> 0x12 & 0x3ff)[arg4[-0x8d]]
    int32_t ecx_9 = arg4[-0x87] + 1
    arg4[-0x87] = ecx_9
    
    if (ecx_9 s>= 0x10)
        break
    
    int32_t esi_2 = *arg1
    int32_t ebx_6 = *(arg1 - 0x18) + 0x10
    int32_t edx_3 = *(arg1 - 0x10)
    arg4[-0x83] = *(arg4[-0x97] + (ecx_9 << 2)) + arg4[-0x98]
    int32_t edi_2 = (esi_2 + edx_3) * 0x1151
    int32_t edx_5 = edx_3 * 0x187e + edi_2
    int32_t edi_3 = edi_2 - esi_2 * 0x3b21
    int32_t ecx_17 = *(arg1 - 8)
    int32_t esi_4 = (ecx_17 + ebx_6) << 0xd
    int32_t ebx_8 = (ebx_6 - ecx_17) << 0xd
    int32_t edx_6 = *(arg1 - 0xc)
    arg4[-0x90] = edx_5 + esi_4
    arg4[-0x94] = edi_3 + ebx_8
    int32_t edi_4 = *(arg1 + 4)
    int32_t edx_7 = edx_6 + edi_4
    arg4[-0x8a] = esi_4 - edx_5
    int32_t esi_6 = *(arg1 - 4)
    arg4[-0x8f] = ebx_8 - edi_3
    int32_t ebx_10 = *(arg1 - 0x14)
    int32_t esi_7 = esi_6 + ebx_10
    arg4[-0x8b] = (esi_7 + edx_7) * 0x25a1
    int32_t edx_9 = arg4[-0x8b] - edx_7 * 0x3ec5
    int32_t esi_8 = arg4[-0x8b]
    arg4[-0x92] = edx_9
    int32_t esi_9 = esi_8 - esi_7 * 0xc7c
    int32_t ecx_25 = (ebx_10 + edi_4) * 0xffffe333
    int32_t ebx_11 = *(arg1 - 0xc)
    arg4[-0x91] = edi_4 * 0x98e + edx_9 + ecx_25
    int32_t edi_8 = *(arg1 - 4)
    int32_t edx_12 = ebx_10 * 0x300b + esi_9 + ecx_25
    int32_t ecx_27 = (ebx_11 + edi_8) * 0xffffadfd
    int32_t ebx_12 = arg4[-0x90]
    arg4[-0x93] = edi_8 * 0x41b3 + esi_9 + ecx_27
    int32_t esi_12 = ebx_11 * 0x6254 + arg4[-0x92] + ecx_27
    int32_t edx_13 = arg4[-0x94]
    *arg4[-0x83] = ((edx_12 + ebx_12) s>> 0x12 & 0x3ff)[arg4[-0x8d]]
    int32_t edi_14 = arg4[-0x8d]
    entry_ebx = arg4[-0x83]
    *(entry_ebx + 7) = ((ebx_12 - edx_12) s>> 0x12 & 0x3ff)[edi_14]
    arg1 = &arg1[0x20]
    arg5 = edi_14
    int32_t edi_15 = arg4[-0x93]
    *(entry_ebx + 1) = ((edx_13 + esi_12) s>> 0x12 & 0x3ff)[edi_14]
    int32_t edx_17 = arg4[-0x8f]
    *(entry_ebx + 6) = ((edx_13 - esi_12) s>> 0x12 & 0x3ff)[arg5]
    ecx_40 = (edx_17 + edi_15) s>> 0x12 & 0x3ff
    arg2 = (edx_17 - edi_15) s>> 0x12 & 0x3ff

sub_745f2b(arg4[-1] ^ arg4)
*arg4
