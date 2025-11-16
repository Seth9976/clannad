// 函数: sub_4e386f
// 地址: 0x4e386f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t ebx = arg2
void* i = nullptr
int32_t edi
int32_t var_20 = edi

if (*(arg1 + 0x1698) != 0)
    do
        uint32_t edi_1 = zx.d(*(*(arg1 + 0x169c) + (i << 1)))
        uint32_t esi_1 = zx.d(*(i + *(arg1 + 0x1690)))
        int32_t ecx_4
        
        if (edi_1 != 0)
            uint32_t edx_9 = zx.d(*(esi_1 + 0xace800))
            uint32_t ecx_6 = edx_9 << 2
            uint32_t ecx_7 = zx.d(*(ecx_6 + ebx + 0x406))
            int32_t ecx_8 = *(arg1 + 0x16b4)
            int32_t ecx_12
            
            if (ecx_8 s<= 0x10 - ecx_7)
                edx_9.w = *(arg2 + (edx_9 << 2) + 0x404)
                edx_9.w <<= ecx_8.b
                *(arg1 + 0x16b0) |= edx_9.w
                ecx_12 = ecx_8 + ecx_7
            else
                uint32_t edi_4 = zx.d(*(arg2 + (edx_9 << 2) + 0x404))
                char* ecx_9 = *(arg1 + 8)
                *(arg1 + 0x16b0) |= (edi_4 << ecx_8.b).w
                int32_t ebx_1
                ebx_1.b = *(arg1 + 0x16b0)
                ecx_9[*(arg1 + 0x14)] = ebx_1.b
                *(arg1 + 0x14) += 1
                ebx_1.b = *(arg1 + 0x16b1)
                (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_1.b
                int32_t edx_14 = *(arg1 + 0x16b4)
                *(arg1 + 0x14) += 1
                char* ecx_10
                ecx_10.b = 0x10
                ecx_10.b = 0x10 - edx_14.b
                edi_4.w u>>= ecx_10.b
                ecx_12 = edx_14 + ecx_7 - 0x10
                *(arg1 + 0x16b0) = edi_4.w
            
            *(arg1 + 0x16b4) = ecx_12
            int32_t edx_16 = *(ecx_6 + 0xacdfb8)
            
            if (edx_16 != 0)
                int32_t esi_4 = esi_1 - *(ecx_6 + 0xace900)
                int32_t ecx_14 = *(arg1 + 0x16b4)
                int32_t ecx_18
                
                if (ecx_14 s<= 0x10 - edx_16)
                    *(arg1 + 0x16b0) |= (esi_4 << ecx_14.b).w
                    ecx_18 = ecx_14 + edx_16
                else
                    char* ecx_15 = *(arg1 + 8)
                    *(arg1 + 0x16b0) |= (esi_4 << ecx_14.b).w
                    int32_t ebx_3
                    ebx_3.b = *(arg1 + 0x16b0)
                    ecx_15[*(arg1 + 0x14)] = ebx_3.b
                    *(arg1 + 0x14) += 1
                    ebx_3.b = *(arg1 + 0x16b1)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_3.b
                    int32_t edx_21 = *(arg1 + 0x16b4)
                    *(arg1 + 0x14) += 1
                    char* ecx_16
                    ecx_16.b = 0x10
                    ecx_16.b = 0x10 - edx_21.b
                    esi_4.w u>>= ecx_16.b
                    ecx_18 = edx_21 + edx_16 - 0x10
                    *(arg1 + 0x16b0) = esi_4.w
                
                *(arg1 + 0x16b4) = ecx_18
            
            uint32_t ecx_19
            
            if (edi_1 - 1 u>= 0x100)
                ecx_19 = zx.d(*(((edi_1 - 1) u>> 7) + 0xace700))
            else
                ecx_19 = zx.d(*(edi_1 + 0xace5ff))
            
            uint32_t esi_7 = ecx_19 << 2
            uint32_t edx_22 = esi_7 + arg3
            uint32_t ecx_23 = zx.d(*(edx_22 + 2))
            int32_t ecx_24 = *(arg1 + 0x16b4)
            int32_t ecx_28
            
            if (ecx_24 s<= 0x10 - ecx_23)
                edx_22.w = *edx_22
                edx_22.w <<= ecx_24.b
                *(arg1 + 0x16b0) |= edx_22.w
                ecx_28 = ecx_24 + ecx_23
            else
                uint32_t esi_8 = zx.d(*edx_22)
                char* ecx_25 = *(arg1 + 8)
                *(arg1 + 0x16b0) |= (esi_8 << ecx_24.b).w
                int32_t ebx_4
                ebx_4.b = *(arg1 + 0x16b0)
                ecx_25[*(arg1 + 0x14)] = ebx_4.b
                *(arg1 + 0x14) += 1
                ebx_4.b = *(arg1 + 0x16b1)
                (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_4.b
                int32_t edx_27 = *(arg1 + 0x16b4)
                *(arg1 + 0x14) += 1
                char* ecx_26
                ecx_26.b = 0x10
                ecx_26.b = 0x10 - edx_27.b
                esi_8.w u>>= ecx_26.b
                ecx_28 = edx_27 + ecx_23 - 0x10
                *(arg1 + 0x16b0) = esi_8.w
            
            ebx = arg2
            *(arg1 + 0x16b4) = ecx_28
            int32_t edx_29 = *(esi_7 + 0xace030)
            
            if (edx_29 != 0)
                void* edi_6 = edi_1 - 1 - *(esi_7 + 0xace978)
                
                if (ecx_28 s<= 0x10 - edx_29)
                    *(arg1 + 0x16b0) |= (edi_6 << ecx_28.b).w
                    ecx_4 = ecx_28 + edx_29
                else
                    char* ecx_29 = *(arg1 + 8)
                    uint32_t var_10_2 = ebx
                    *(arg1 + 0x16b0) |= (edi_6 << ecx_28.b).w
                    ebx.b = *(arg1 + 0x16b0)
                    ecx_29[*(arg1 + 0x14)] = ebx.b
                    *(arg1 + 0x14) += 1
                    int32_t edx_32
                    edx_32.b = *(arg1 + 0x16b1)
                    ebx = var_10_2
                    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_32.b
                    int32_t edx_33 = *(arg1 + 0x16b4)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_30
                    ecx_30.b = 0x10
                    ecx_30.b = 0x10 - edx_33.b
                    edi_6.w u>>= ecx_30.b
                    ecx_4 = edx_33 + edx_29 - 0x10
                    *(arg1 + 0x16b0) = edi_6.w
                
                *(arg1 + 0x16b4) = ecx_4
        else
            int32_t ecx_1 = *(arg1 + 0x16b4)
            int16_t* esi_2 = ebx + (esi_1 << 2)
            uint32_t edi_2 = zx.d(esi_2[1])
            
            if (ecx_1 s<= 0x10 - edi_2)
                int32_t edx_3
                edx_3.w = *esi_2
                edx_3.w <<= ecx_1.b
                *(arg1 + 0x16b0) |= edx_3.w
                ecx_4 = ecx_1 + edi_2
            else
                uint32_t esi_3 = zx.d(*esi_2)
                char* ecx_2 = *(arg1 + 8)
                *(arg1 + 0x16b0) |= (esi_3 << ecx_1.b).w
                ebx.b = *(arg1 + 0x16b0)
                ecx_2[*(arg1 + 0x14)] = ebx.b
                *(arg1 + 0x14) += 1
                ebx.b = *(arg1 + 0x16b1)
                (*(arg1 + 0x14))[*(arg1 + 8)] = ebx.b
                int32_t edx_8 = *(arg1 + 0x16b4)
                *(arg1 + 0x14) += 1
                ebx = arg2
                char* ecx_3
                ecx_3.b = 0x10
                ecx_3.b = 0x10 - edx_8.b
                esi_3.w u>>= ecx_3.b
                ecx_4 = edx_8 + edi_2 - 0x10
                *(arg1 + 0x16b0) = esi_3.w
            
            *(arg1 + 0x16b4) = ecx_4
        i += 1
    while (i u< *(arg1 + 0x1698))

uint32_t edx_34 = zx.d(*(ebx + 0x402))
int32_t ecx_32 = *(arg1 + 0x16b4)
int32_t ecx_36

if (ecx_32 s<= 0x10 - edx_34)
    int32_t esi_11
    esi_11.w = *(ebx + 0x400)
    esi_11.w <<= ecx_32.b
    *(arg1 + 0x16b0) |= esi_11.w
    ecx_36 = ecx_32 + edx_34
else
    uint32_t esi_12 = zx.d(*(ebx + 0x400))
    char* ecx_33 = *(arg1 + 8)
    arg3 = ebx
    *(arg1 + 0x16b0) |= (esi_12 << ecx_32.b).w
    ebx.b = *(arg1 + 0x16b0)
    ecx_33[*(arg1 + 0x14)] = ebx.b
    *(arg1 + 0x14) += 1
    int32_t edx_37
    edx_37.b = *(arg1 + 0x16b1)
    ebx = arg3
    (*(arg1 + 0x14))[*(arg1 + 8)] = edx_37.b
    int32_t edx_38 = *(arg1 + 0x16b4)
    *(arg1 + 0x14) += 1
    int32_t ecx_34
    ecx_34.b = 0x10
    ecx_34.b = 0x10 - edx_38.b
    esi_12.w u>>= ecx_34.b
    ecx_36 = edx_38 + edx_34 - 0x10
    *(arg1 + 0x16b0) = esi_12.w

*(arg1 + 0x16b4) = ecx_36
*(arg1 + 0x16ac) = zx.d(*(ebx + 0x402))
