// 函数: sub_4e3193
// 地址: 0x4e3193
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_18 = 0xffffffff
int32_t edi
int32_t var_28 = edi
uint32_t var_c = zx.d(*(arg3 + 2))
int32_t edi_1 = 7
int32_t j_1 = 0
int32_t ebx = 4

if (var_c == 0)
    edi_1 = 0x8a
    ebx = 3

if (arg2 s< 0)
    return 

void* var_10_1 = arg3 + 6
int32_t i_1 = arg2 + 1
int32_t i

do
    uint32_t ecx_2 = zx.d(*var_10_1)
    uint32_t edx_1 = var_c
    j_1 += 1
    uint32_t var_14_1 = edx_1
    var_c = ecx_2
    int32_t j_2 = j_1
    
    if (j_1 s>= edi_1 || edx_1 != ecx_2)
        if (j_1 s< ebx)
            int32_t j
            
            do
                uint32_t edi_2 = zx.d(*(arg1 + (edx_1 << 2) + 0xa76))
                int32_t ecx_3 = *(arg1 + 0x16b4)
                int32_t ecx_6
                int32_t ebx_1
                
                if (ecx_3 s<= 0x10 - edi_2)
                    ebx_1.w = *(arg1 + (edx_1 << 2) + 0xa74)
                    ebx_1.w <<= ecx_3.b
                    int32_t ecx_7 = *(arg1 + 0x16b4)
                    *(arg1 + 0x16b0) |= ebx_1.w
                    ecx_6 = ecx_7 + edi_2
                else
                    uint32_t esi_1 = zx.d(*(arg1 + (edx_1 << 2) + 0xa74))
                    char* ecx_4 = *(arg1 + 8)
                    *(arg1 + 0x16b0) |= (esi_1 << ecx_3.b).w
                    ebx_1.b = *(arg1 + 0x16b0)
                    ecx_4[*(arg1 + 0x14)] = ebx_1.b
                    *(arg1 + 0x14) += 1
                    ebx_1.b = *(arg1 + 0x16b1)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_1.b
                    int32_t edx_6 = *(arg1 + 0x16b4)
                    *(arg1 + 0x14) += 1
                    char* ecx_5
                    ecx_5.b = 0x10
                    ecx_5.b = 0x10 - edx_6.b
                    esi_1.w u>>= ecx_5.b
                    ecx_6 = edx_6 + edi_2 - 0x10
                    edx_1 = var_14_1
                    *(arg1 + 0x16b0) = esi_1.w
                    j_1 = j_2
                j = j_1
                j_1 -= 1
                *(arg1 + 0x16b4) = ecx_6
                j_2 = j_1
            while (j != 1)
        else
            int32_t esi_4
            
            if (edx_1 == 0)
                int32_t ecx_21 = *(arg1 + 0x16b4)
                
                if (j_1 s> 0xa)
                    uint32_t edi_24 = zx.d(*(arg1 + 0xabe))
                    uint32_t var_14_4 = edi_24
                    int32_t ecx_31
                    int32_t ebx_8
                    
                    if (ecx_21 s<= 0x10 - edi_24)
                        edi_24.w = *(arg1 + 0xabc)
                        edi_24.w <<= ecx_21.b
                        *(arg1 + 0x16b0) |= edi_24.w
                        ecx_31 = ecx_21 + var_14_4
                    else
                        uint32_t esi_8 = zx.d(*(arg1 + 0xabc))
                        char* ecx_28 = *(arg1 + 8)
                        *(arg1 + 0x16b0) |= (esi_8 << ecx_21.b).w
                        ebx_8.b = *(arg1 + 0x16b0)
                        ecx_28[*(arg1 + 0x14)] = ebx_8.b
                        *(arg1 + 0x14) += 1
                        ebx_8.b = *(arg1 + 0x16b1)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_8.b
                        ebx_8 = *(arg1 + 0x16b4)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_29
                        ecx_29.b = 0x10
                        ecx_29.b = 0x10 - ebx_8.b
                        esi_8.w u>>= ecx_29.b
                        ecx_31 = ebx_8 + var_14_4 - 0x10
                        *(arg1 + 0x16b0) = esi_8.w
                        j_1 = j_2
                    
                    *(arg1 + 0x16b4) = ecx_31
                    
                    if (ecx_31 s<= 9)
                        *(arg1 + 0x16b0) |= ((j_1 - 0xb) << ecx_31.b).w
                        *(arg1 + 0x16b4) = ecx_31 + 7
                    else
                        char* ecx_32 = *(arg1 + 8)
                        *(arg1 + 0x16b0) |= ((j_1 - 0xb) << ecx_31.b).w
                        ebx_8.b = *(arg1 + 0x16b0)
                        ecx_32[*(arg1 + 0x14)] = ebx_8.b
                        *(arg1 + 0x14) += 1
                        ebx_8.b = *(arg1 + 0x16b1)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_8.b
                        int32_t ebx_9 = *(arg1 + 0x16b4)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_33
                        ecx_33.b = 0x10
                        ecx_33.b = 0x10 - ebx_9.b
                        esi_4.w = (j_1 - 0xb).w u>> ecx_33.b
                        *(arg1 + 0x16b0) = esi_4.w
                        *(arg1 + 0x16b4) = ebx_9 - 9
                else
                    uint32_t edi_14 = zx.d(*(arg1 + 0xaba))
                    uint32_t var_14_3 = edi_14
                    int32_t ecx_25
                    int32_t ebx_6
                    
                    if (ecx_21 s<= 0x10 - edi_14)
                        edi_14.w = *(arg1 + 0xab8)
                        edi_14.w <<= ecx_21.b
                        *(arg1 + 0x16b0) |= edi_14.w
                        ecx_25 = ecx_21 + var_14_3
                    else
                        uint32_t esi_6 = zx.d(*(arg1 + 0xab8))
                        char* ecx_22 = *(arg1 + 8)
                        *(arg1 + 0x16b0) |= (esi_6 << ecx_21.b).w
                        ebx_6.b = *(arg1 + 0x16b0)
                        ecx_22[*(arg1 + 0x14)] = ebx_6.b
                        *(arg1 + 0x14) += 1
                        ebx_6.b = *(arg1 + 0x16b1)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_6.b
                        ebx_6 = *(arg1 + 0x16b4)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_23
                        ecx_23.b = 0x10
                        ecx_23.b = 0x10 - ebx_6.b
                        esi_6.w u>>= ecx_23.b
                        ecx_25 = ebx_6 + var_14_3 - 0x10
                        *(arg1 + 0x16b0) = esi_6.w
                        j_1 = j_2
                    
                    *(arg1 + 0x16b4) = ecx_25
                    
                    if (ecx_25 s<= 0xd)
                        *(arg1 + 0x16b0) |= ((j_1 - 3) << ecx_25.b).w
                        *(arg1 + 0x16b4) = ecx_25 + 3
                    else
                        char* ecx_26 = *(arg1 + 8)
                        *(arg1 + 0x16b0) |= ((j_1 - 3) << ecx_25.b).w
                        ebx_6.b = *(arg1 + 0x16b0)
                        ecx_26[*(arg1 + 0x14)] = ebx_6.b
                        *(arg1 + 0x14) += 1
                        ebx_6.b = *(arg1 + 0x16b1)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_6.b
                        int32_t ebx_7 = *(arg1 + 0x16b4)
                        *(arg1 + 0x14) += 1
                        int32_t ecx_27
                        ecx_27.b = 0x10
                        ecx_27.b = 0x10 - ebx_7.b
                        esi_4.w = (j_1 - 3).w u>> ecx_27.b
                        *(arg1 + 0x16b0) = esi_4.w
                        *(arg1 + 0x16b4) = ebx_7 - 0xd
            else
                if (edx_1 != var_18)
                    uint32_t edi_3 = zx.d(*(arg1 + (edx_1 << 2) + 0xa76))
                    int32_t ecx_8 = *(arg1 + 0x16b4)
                    int32_t ecx_11
                    int32_t ebx_2
                    
                    if (ecx_8 s<= 0x10 - edi_3)
                        ebx_2.w = *(arg1 + (edx_1 << 2) + 0xa74)
                        ebx_2.w <<= ecx_8.b
                        int32_t ecx_12 = *(arg1 + 0x16b4)
                        *(arg1 + 0x16b0) |= ebx_2.w
                        ecx_11 = ecx_12 + edi_3
                    else
                        uint32_t esi_2 = zx.d(*(arg1 + (edx_1 << 2) + 0xa74))
                        char* ecx_9 = *(arg1 + 8)
                        *(arg1 + 0x16b0) |= (esi_2 << ecx_8.b).w
                        ebx_2.b = *(arg1 + 0x16b0)
                        ecx_9[*(arg1 + 0x14)] = ebx_2.b
                        *(arg1 + 0x14) += 1
                        ebx_2.b = *(arg1 + 0x16b1)
                        (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_2.b
                        int32_t edx_11 = *(arg1 + 0x16b4)
                        *(arg1 + 0x14) += 1
                        char* ecx_10
                        ecx_10.b = 0x10
                        ecx_10.b = 0x10 - edx_11.b
                        esi_2.w u>>= ecx_10.b
                        ecx_11 = edx_11 + edi_3 - 0x10
                        edx_1 = var_14_1
                        *(arg1 + 0x16b0) = esi_2.w
                        j_1 = j_2
                    j_1 -= 1
                    *(arg1 + 0x16b4) = ecx_11
                    j_2 = j_1
                
                uint32_t edi_8 = zx.d(*(arg1 + 0xab6))
                int32_t ecx_13 = *(arg1 + 0x16b4)
                uint32_t var_14_2 = edi_8
                int32_t ecx_17
                int32_t ebx_3
                
                if (ecx_13 s<= 0x10 - edi_8)
                    edi_8.w = *(arg1 + 0xab4)
                    edi_8.w <<= ecx_13.b
                    *(arg1 + 0x16b0) |= edi_8.w
                    ecx_17 = ecx_13 + var_14_2
                else
                    uint32_t esi_3 = zx.d(*(arg1 + 0xab4))
                    char* ecx_14 = *(arg1 + 8)
                    *(arg1 + 0x16b0) |= (esi_3 << ecx_13.b).w
                    ebx_3.b = *(arg1 + 0x16b0)
                    ecx_14[*(arg1 + 0x14)] = ebx_3.b
                    *(arg1 + 0x14) += 1
                    ebx_3.b = *(arg1 + 0x16b1)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_3.b
                    ebx_3 = *(arg1 + 0x16b4)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_15
                    ecx_15.b = 0x10
                    ecx_15.b = 0x10 - ebx_3.b
                    esi_3.w u>>= ecx_15.b
                    ecx_17 = ebx_3 + var_14_2 - 0x10
                    *(arg1 + 0x16b0) = esi_3.w
                    j_1 = j_2
                
                *(arg1 + 0x16b4) = ecx_17
                
                if (ecx_17 s<= 0xe)
                    *(arg1 + 0x16b0) |= ((j_1 - 3) << ecx_17.b).w
                    *(arg1 + 0x16b4) = ecx_17 + 2
                else
                    char* ecx_18 = *(arg1 + 8)
                    *(arg1 + 0x16b0) |= ((j_1 - 3) << ecx_17.b).w
                    ebx_3.b = *(arg1 + 0x16b0)
                    ecx_18[*(arg1 + 0x14)] = ebx_3.b
                    *(arg1 + 0x14) += 1
                    ebx_3.b = *(arg1 + 0x16b1)
                    (*(arg1 + 0x14))[*(arg1 + 8)] = ebx_3.b
                    int32_t ebx_4 = *(arg1 + 0x16b4)
                    *(arg1 + 0x14) += 1
                    int32_t ecx_19
                    ecx_19.b = 0x10
                    ecx_19.b = 0x10 - ebx_4.b
                    esi_4.w = (j_1 - 3).w u>> ecx_19.b
                    *(arg1 + 0x16b0) = esi_4.w
                    *(arg1 + 0x16b4) = ebx_4 - 0xe
        
        j_1 = 0
        var_18 = edx_1
        int32_t var_2c_1
        
        if (var_c == 0)
            edi_1 = 0x8a
            var_2c_1 = 3
        else if (edx_1 != var_c)
            edi_1 = 7
            var_2c_1 = 4
        else
            edi_1 = 6
            var_2c_1 = 3
        
        ebx = var_2c_1
    
    var_10_1 += 4
    i = i_1
    i_1 -= 1
while (i != 1)
