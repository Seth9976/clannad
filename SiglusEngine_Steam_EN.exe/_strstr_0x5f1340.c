// 函数: _strstr
// 地址: 0x5f1340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* ecx = arg3
int128_t* eax = arg2
int32_t temp0 = data_6410f8

if (temp0 u< 1)
    char* edx
    edx.b = *ecx
    void* edi_3 = eax
    
    if (edx.b == 0)
        return edi_3
    
    edx:1.b = ecx[1]
    
    if (edx:1.b == 0)
        int32_t eax_5
        eax_5.b = edx.b
        return sub_5f5f6e(eax_5, edx) __tailcall
    
    while (true)
        void* ecx_4 = arg3
        eax.b = *edi_3
        void* esi_4 = edi_3 + 1
        
        if (eax.b != edx.b)
            if (eax.b == 0)
                return 0
            
            while (true)
                eax.b = *esi_4
                esi_4 += 1
            label_5f154d:
                
                if (eax.b == edx.b)
                    break
                
                if (eax.b == 0)
                    return 0
        
        eax.b = *esi_4
        esi_4 += 1
        
        if (eax.b != edx:1.b)
            break
        
        edi_3 = esi_4 - 1
        
        while (true)
            eax:1.b = *(ecx_4 + 2)
            
            if (eax:1.b != 0)
                eax.b = *esi_4
                esi_4 += 2
                
                if (eax.b != eax:1.b)
                    break
                
                eax.b = *(ecx_4 + 3)
                
                if (eax.b != 0)
                    eax:1.b = *(esi_4 - 1)
                    ecx_4 += 2
                    
                    if (eax.b != eax:1.b)
                        break
                    
                    continue
            
            return edi_3 - 1
    
    goto label_5f154d

if (temp0 u<= 1)
    uint32_t edx_1 = zx.d(*ecx)
    uint32_t edx_3 = edx_1 << 8 | edx_1
    
    if (edx_3 != 0)
        int64_t xmm3_2 = _mm_shufflelo_epi16(zx.o(edx_3), 0)
        char xmm3_3[0x10] = xmm3_2 | xmm3_2 << 0x40
        char* esi_1 = ecx
        int32_t edi_1 = 0xffffffff
        
        while (true)
            uint32_t ebx_2 = zx.d(*ecx)
            ecx = &ecx[1]
            
            if (ebx_2 == 0)
                break
            
            if ((ecx & 0xf) == 0)
                if (_mm_movemask_epi8(_mm_cmpeq_epi8(*ecx, zx.o(0))) == 0)
                    edi_1 = 0xf
                
                break
        
        while (true)
            char edx_4 = xmm3_3[0]
            
            while (true)
                if ((0xfff & eax) u<= 0xff0)
                    char xmm1_1[0x10] = *eax
                    char xmm2_3[0x10] = _mm_cmpeq_epi8(zx.o(0), xmm1_1)
                    uint32_t ebx_5 = _mm_movemask_epi8(_mm_cmpeq_epi8(xmm1_1, xmm3_3) | xmm2_3)
                    eax = &eax[1]
                    
                    if (ebx_5 == 0)
                        continue
                    else
                        int32_t eflags_1
                        int32_t ebx_6
                        ebx_6, eflags_1 = _bit_scan_forward(ebx_5)
                        eax = eax - 0x10 + ebx_6
                
                uint32_t ebx_7 = zx.d(*eax)
                
                if (ebx_7 == 0)
                    return nullptr
                
                eax += 1
                
                if (edx_4 == ebx_7.b)
                    break
            
            char* edx_5 = eax
            void* ecx_1 = &esi_1[1]
            
            while (true)
                if ((edi_1 & ecx_1) == 0 && (0xfff & edx_5) u<= 0xff0)
                    char xmm2_4[0x10] = *ecx_1
                    char xmm1_5[0x10] = _mm_cmpeq_epi8(*edx_5, xmm2_4)
                    uint32_t ebx_9 = _mm_movemask_epi8(_mm_cmpeq_epi8(xmm2_4, zx.o(0))
                        | _mm_cmpeq_epi8(xmm1_5, zx.o(0)))
                    
                    if (ebx_9 != 0)
                        int32_t eflags_2
                        int32_t ebx_10
                        ebx_10, eflags_2 = _bit_scan_forward(ebx_9)
                        edx_5 = &edx_5[ebx_10]
                        ecx_1 += ebx_10
                    else
                        edx_5 = &edx_5[0x10]
                        ecx_1 += 0x10
                        continue
                
                uint32_t ebx_11 = zx.d(*ecx_1)
                
                if (ebx_11 == 0)
                    return eax - 1
                
                if (ebx_11.b != *edx_5)
                    break
                
                edx_5 = &edx_5[1]
                ecx_1 += 1
else if (*ecx != 0)
    char* edi_2 = ecx
    
    if ((0xfff & ecx) u> 0xff0)
        int32_t ebx_13 = 0xf
        
        while (true)
            int32_t i = zx.d(*ecx)
            ecx = &ecx[1]
            
            do
                arg1 = _mm_bsrli_si128(_mm_insert_epi8(arg1, i, 0xf), 1)
                int32_t temp1_1 = ebx_13
                ebx_13 -= 1
                
                if (temp1_1 == 1)
                    goto label_5f1499
            while (i == 0)
    else
        arg1 = *ecx
    label_5f1499:
        
        while (true)
            char edx_6 = arg1[0].b
            
            while (true)
                if ((0xfff & eax) u<= 0xff0)
                    int128_t* temp2_1 = eax
                    eax = &eax[1]
                    bool c_1 = temp2_1 u>= 0xfffffff0
                    int32_t eflags_3
                    int32_t ecx_2
                    ecx_2, eflags_3 = __pcmpistri_xmmdq_memdq_immb(arg1, eax[-1], 0xc)
                    
                    if (temp2_1 != 0xfffffff0 && not(c_1))
                        continue
                    else if (c_1)
                        eax = eax - 0x10 + ecx_2
                        break
                else
                    uint32_t ebx_15 = zx.d(*eax)
                    
                    if (ebx_15 != 0)
                        if (edx_6 == ebx_15.b)
                            break
                        
                        eax += 1
                        continue
                
                return nullptr
            
            int32_t (* edx_7)[0x4] = edi_2
            int128_t* esi_2 = eax
            
            while (true)
                if ((0xfff & esi_2) u<= 0xff0 && (0xfff & edx_7) u<= 0xff0)
                    int32_t xmm1_7[0x4] = *edx_7
                    esi_2 = &esi_2[1]
                    int32_t (* temp3_1)[0x4] = edx_7
                    edx_7 = &edx_7[1]
                    int32_t eflags_4
                    int32_t ecx_3
                    ecx_3, eflags_4 = __pcmpistri_xmmdq_memdq_immb(xmm1_7, esi_2[-1], 0xc)
                    
                    if (not(add_overflow(temp3_1, 0x10)))
                        break
                    
                    if (&temp3_1[1] s< 0)
                        return eax
                    
                    continue
                
                uint32_t ebx_18 = zx.d(*edx_7)
                
                if (ebx_18 == 0)
                    return eax
                
                if (ebx_18.b != *esi_2)
                    break
                
                esi_2 += 1
                edx_7 += 1
            
            eax += 1

return eax
