// 函数: sub_726cd0
// 地址: 0x726cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx = 0xffffffff
uint32_t ecx = zx.d(*(arg2 + 2))
int32_t j_1 = 0
int32_t edi = 7
int32_t esi = 4

if (ecx == 0)
    edi = 0x8a
    esi = 3

if (arg4 s< 0)
    return 

void* var_8_1 = arg2 + 6
int32_t i_1 = arg4 + 1
int32_t i

do
    j_1 += 1
    uint32_t ecx_1 = zx.d(*var_8_1)
    
    if (j_1 s>= edi || ecx != ecx_1)
        if (j_1 s< esi)
            void* edx_2 = (ecx << 2) + 0xa7e + arg3
            int16_t* edi_2 = arg3 + ((ecx + 0x29f) << 2)
            void* var_20_1 = edx_2
            int16_t* var_1c_1 = edi_2
            int32_t j
            
            do
                uint32_t esi_1 = zx.d(*edx_2)
                int32_t ecx_3 = *(arg3 + 0x16bc)
                int32_t edx_3
                
                if (ecx_3 s<= 0x10 - esi_1)
                    edx_3.w = *edi_2
                    edx_3.w <<= ecx_3.b
                    *(arg3 + 0x16b8) |= edx_3.w
                    *(arg3 + 0x16bc) = ecx_3 + esi_1
                else
                    uint16_t edi_3 = *edi_2
                    char* esi_2 = *(arg3 + 8)
                    edx_3.w = edi_3
                    edx_3.w <<= ecx_3.b
                    *(arg3 + 0x16b8) |= edx_3.w
                    esi_2[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_5 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_3 u>> ecx_5
                    *(arg3 + 0x16bc) += esi_1 - 0x10
                    edi_2 = var_1c_1
                edx_2 = var_20_1
                j = j_1
                j_1 -= 1
            while (j != 1)
        else if (ecx == 0)
            int32_t ecx_26 = *(arg3 + 0x16bc)
            
            if (j_1 s> 0xa)
                uint32_t esi_17 = zx.d(*(arg3 + 0xac6))
                int32_t edx_19
                
                if (ecx_26 s<= 0x10 - esi_17)
                    edx_19.w = *(arg3 + 0xac4)
                    edx_19.w <<= ecx_26.b
                    *(arg3 + 0x16b8) |= edx_19.w
                    *(arg3 + 0x16bc) = ecx_26 + esi_17
                else
                    uint16_t edi_10 = *(arg3 + 0xac4)
                    char* esi_18 = *(arg3 + 8)
                    edx_19.w = edi_10
                    edx_19.w <<= ecx_26.b
                    *(arg3 + 0x16b8) |= edx_19.w
                    esi_18[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_36 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_10 u>> ecx_36
                    *(arg3 + 0x16bc) += esi_17 - 0x10
                
                int32_t ecx_40 = *(arg3 + 0x16bc)
                
                if (ecx_40 s<= 9)
                    *(arg3 + 0x16b8) |= (j_1.w - 0xb) << ecx_40.b
                    *(arg3 + 0x16bc) = ecx_40 + 7
                else
                    char* esi_20 = *(arg3 + 8)
                    edx_19.w = j_1.w - 0xb
                    edx_19.w <<= ecx_40.b
                    *(arg3 + 0x16b8) |= edx_19.w
                    esi_20[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_42 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) -= 9
                    *(arg3 + 0x16b8) = (j_1.w - 0xb) u>> ecx_42
            else
                uint32_t esi_12 = zx.d(*(arg3 + 0xac2))
                int32_t edx_14
                
                if (ecx_26 s<= 0x10 - esi_12)
                    edx_14.w = *(arg3 + 0xac0)
                    edx_14.w <<= ecx_26.b
                    *(arg3 + 0x16b8) |= edx_14.w
                    *(arg3 + 0x16bc) = ecx_26 + esi_12
                else
                    uint16_t edi_8 = *(arg3 + 0xac0)
                    char* esi_13 = *(arg3 + 8)
                    edx_14.w = edi_8
                    edx_14.w <<= ecx_26.b
                    *(arg3 + 0x16b8) |= edx_14.w
                    esi_13[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_28 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_8 u>> ecx_28
                    *(arg3 + 0x16bc) += esi_12 - 0x10
                
                int32_t ecx_32 = *(arg3 + 0x16bc)
                
                if (ecx_32 s<= 0xd)
                    *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_32.b
                    *(arg3 + 0x16bc) = ecx_32 + 3
                else
                    char* esi_15 = *(arg3 + 8)
                    edx_14.w = j_1.w - 3
                    edx_14.w <<= ecx_32.b
                    *(arg3 + 0x16b8) |= edx_14.w
                    esi_15[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_34 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16bc) -= 0xd
                    *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_34
        else
            if (ecx != edx)
                uint32_t edi_4 = zx.d(*(arg3 + (ecx << 2) + 0xa7e))
                int32_t esi_4 = *(arg3 + 0x16bc)
                int32_t edx_6
                
                if (esi_4 s<= 0x10 - edi_4)
                    edx_6.w = *(arg3 + (ecx << 2) + 0xa7c)
                    edx_6.w <<= esi_4.b
                    *(arg3 + 0x16b8) |= edx_6.w
                    *(arg3 + 0x16bc) = esi_4 + edi_4
                else
                    uint16_t edi_5 = *(arg3 + (ecx << 2) + 0xa7c)
                    char* esi_5 = *(arg3 + 8)
                    edx_6.w = edi_5
                    edx_6.w <<= esi_4.b
                    *(arg3 + 0x16b8) |= edx_6.w
                    esi_5[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                    *(arg3 + 0x14) += 1
                    (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                    char ecx_11 = 0x10 - *(arg3 + 0x16bc)
                    *(arg3 + 0x14) += 1
                    *(arg3 + 0x16b8) = edi_5 u>> ecx_11
                    *(arg3 + 0x16bc) += edi_4 - 0x10
                j_1 -= 1
            
            uint32_t esi_7 = zx.d(*(arg3 + 0xabe))
            int32_t ecx_16 = *(arg3 + 0x16bc)
            int32_t edx_9
            
            if (ecx_16 s<= 0x10 - esi_7)
                edx_9.w = *(arg3 + 0xabc)
                edx_9.w <<= ecx_16.b
                *(arg3 + 0x16b8) |= edx_9.w
                *(arg3 + 0x16bc) = ecx_16 + esi_7
            else
                uint16_t edi_6 = *(arg3 + 0xabc)
                char* esi_8 = *(arg3 + 8)
                edx_9.w = edi_6
                edx_9.w <<= ecx_16.b
                *(arg3 + 0x16b8) |= edx_9.w
                esi_8[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_18 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16b8) = edi_6 u>> ecx_18
                *(arg3 + 0x16bc) += esi_7 - 0x10
            
            int32_t ecx_22 = *(arg3 + 0x16bc)
            
            if (ecx_22 s<= 0xe)
                *(arg3 + 0x16b8) |= (j_1.w - 3) << ecx_22.b
                *(arg3 + 0x16bc) = ecx_22 + 2
            else
                char* esi_10 = *(arg3 + 8)
                edx_9.w = j_1.w - 3
                edx_9.w <<= ecx_22.b
                *(arg3 + 0x16b8) |= edx_9.w
                esi_10[*(arg3 + 0x14)] = *(arg3 + 0x16b8)
                *(arg3 + 0x14) += 1
                (*(arg3 + 0x14))[*(arg3 + 8)] = *(arg3 + 0x16b9)
                char ecx_24 = 0x10 - *(arg3 + 0x16bc)
                *(arg3 + 0x14) += 1
                *(arg3 + 0x16bc) -= 0xe
                *(arg3 + 0x16b8) = (j_1.w - 3) u>> ecx_24
        
        j_1 = 0
        edx = ecx
        
        if (ecx_1 == 0)
            edi = 0x8a
            esi = 3
        else if (ecx != ecx_1)
            edi = 7
            esi = 4
        else
            edi = 6
            esi = 3
    
    var_8_1 += 4
    i = i_1
    i_1 -= 1
    ecx = ecx_1
while (i != 1)
