// 函数: sub_7278b0
// 地址: 0x7278b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i = nullptr

if (*(arg3 + 0x16a0) != 0)
    do
        uint32_t ebx_1 = zx.d(*(*(arg3 + 0x16a4) + (i << 1)))
        uint32_t edi_1 = zx.d(*(i + *(arg3 + 0x1698)))
        
        if (ebx_1 != 0)
            uint32_t ecx_8 = zx.d(*(edi_1 + 0xadd300))
            uint32_t ecx_9 = zx.d(*(arg2 + (ecx_8 << 2) + 0x406))
            int32_t ecx_10 = *(arg3 + 0x16bc)
            uint32_t edx_6
            
            if (ecx_10 s<= 0x10 - ecx_9)
                edx_6.w = *(arg2 + (ecx_8 << 2) + 0x404)
                edx_6.w <<= ecx_10.b
                *(arg3 + 0x16b8) |= edx_6.w
                *(arg3 + 0x16bc) = ecx_10 + ecx_9
            else
                uint16_t edi_4 = *(arg2 + (ecx_8 << 2) + 0x404)
                char* esi_4 = *(arg3 + 8)
                edx_6.w = edi_4
                edx_6.w <<= ecx_10.b
                *(arg3 + 0x16b8) |= edx_6.w
                esi_4[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_12 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_4 u>> ecx_12
                *(arg3 + 0x16bc) += ecx_9 - 0x10
            int32_t esi_6 = *((ecx_8 << 2) + &data_added0)
            
            if (esi_6 != 0)
                uint16_t edi_5 = edi_1.w - (*((ecx_8 << 2) + &data_addd90)).w
                int32_t ecx_17 = *(arg3 + 0x16bc)
                
                if (ecx_17 s<= 0x10 - esi_6)
                    *(arg3 + 0x16b8) |= edi_5 << ecx_17.b
                    *(arg3 + 0x16bc) = ecx_17 + esi_6
                else
                    char* esi_7 = *(arg3 + 8)
                    int32_t edx_9
                    edx_9.w = edi_5
                    edx_9.w <<= ecx_17.b
                    *(arg3 + 0x16b8) |= edx_9.w
                    esi_7[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_19 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_5 u>> ecx_19
                    *(arg3 + 0x16bc) += esi_6 - 0x10
            
            uint32_t ecx_23
            
            if (ebx_1 - 1 u>= 0x100)
                ecx_23 = zx.d(*(((ebx_1 - 1) u>> 7) + 0xadd500))
            else
                ecx_23 = zx.d(*(ebx_1 + 0xadd3ff))
            
            int16_t* edi_6 = arg4 + (ecx_23 << 2)
            uint32_t ecx_26 = zx.d(edi_6[1])
            int32_t ecx_27 = *(arg3 + 0x16bc)
            int32_t edx_13
            
            if (ecx_27 s<= 0x10 - ecx_26)
                edx_13.w = *edi_6
                edx_13.w <<= ecx_27.b
                *(arg3 + 0x16b8) |= edx_13.w
                *(arg3 + 0x16bc) = ecx_27 + ecx_26
            else
                uint16_t edi_7 = *edi_6
                char* esi_9 = *(arg3 + 8)
                edx_13.w = edi_7
                edx_13.w <<= ecx_27.b
                *(arg3 + 0x16b8) |= edx_13.w
                esi_9[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_29 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_7 u>> ecx_29
                *(arg3 + 0x16bc) += ecx_26 - 0x10
            int32_t edi_8 = *((ecx_23 << 2) + &data_addb50)
            
            if (edi_8 != 0)
                uint16_t ebx_4 = (ebx_1 - 1).w - (*((ecx_23 << 2) + &data_adde10)).w
                int32_t ecx_34 = *(arg3 + 0x16bc)
                
                if (ecx_34 s<= 0x10 - edi_8)
                    *(arg3 + 0x16b8) |= ebx_4 << ecx_34.b
                    *(arg3 + 0x16bc) = ecx_34 + edi_8
                else
                    char* esi_11 = *(arg3 + 8)
                    int32_t edx_16
                    edx_16.w = ebx_4
                    edx_16.w <<= ecx_34.b
                    *(arg3 + 0x16b8) |= edx_16.w
                    esi_11[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_36 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) += edi_8 - 0x10
                    *(arg3 + 0x16b8) = ebx_4 u>> ecx_36
        else
            uint32_t ebx_2 = zx.d(*(arg2 + (edi_1 << 2) + 2))
            int16_t* edi_2 = arg2 + (edi_1 << 2)
            int32_t ecx_3 = *(arg3 + 0x16bc)
            int32_t edx_1
            
            if (ecx_3 s<= 0x10 - ebx_2)
                edx_1.w = *edi_2
                edx_1.w <<= ecx_3.b
                *(arg3 + 0x16b8) |= edx_1.w
                *(arg3 + 0x16bc) = ecx_3 + ebx_2
            else
                uint16_t edi_3 = *edi_2
                char* esi_1 = *(arg3 + 8)
                edx_1.w = edi_3
                edx_1.w <<= ecx_3.b
                *(arg3 + 0x16b8) |= edx_1.w
                esi_1[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_5 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16bc) += ebx_2 - 0x10
                *(arg3 + 0x16b8) = edi_3 u>> ecx_5
        
        i += 1
    while (i u< *(arg3 + 0x16a0))

uint32_t edi_9 = zx.d(*(arg2 + 0x402))
int32_t ecx_38 = *(arg3 + 0x16bc)

if (ecx_38 s<= 0x10 - edi_9)
    i.w = *(arg2 + 0x400)
    i.w <<= ecx_38.b
    *(arg3 + 0x16b8) |= i.w
    *(arg3 + 0x16bc) = ecx_38 + edi_9
    return arg3

uint16_t edi_10 = *(arg2 + 0x400)
char* esi_14 = *(arg3 + 8)
i.w = edi_10
i.w <<= ecx_38.b
*(arg3 + 0x16b8) |= i.w
esi_14[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
*(arg3 + 0x14) += 1
(*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
char ecx_40 = 0x10 - *(arg3 + 0x16bc)
*(arg3 + 0x14) += 1
*(arg3 + 0x16b8) = edi_10 u>> ecx_40
*(arg3 + 0x16bc) += edi_9 - 0x10
return arg3
