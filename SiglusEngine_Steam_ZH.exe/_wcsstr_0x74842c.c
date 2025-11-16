// 函数: _wcsstr
// 地址: 0x74842c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int16_t* edi = arg2
uint32_t ecx_1 = zx.d(*edi)
uint32_t var_18 = ecx_1

if (0 == ecx_1.w)
    return arg1

int32_t eax_1 = data_b94f20
int128_t* edx_1

if (eax_1 s> 1)
    int32_t xmm0_1[0x4]
    
    if ((edi & 0xfff) u> 0xff0)
        xmm0_1 = zx.o(0)
        int16_t ecx_2 = ecx_1.w
        int32_t i_1 = 8
        int32_t i
        
        do
            xmm0_1 = _mm_insert_epi16(_mm_bsrli_si128(xmm0_1, 2), zx.d(ecx_2), 7)
            
            if (0 != ecx_2)
                edi = &edi[1]
                ecx_2 = *edi
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        ecx_1 = var_18
    else
        xmm0_1 = *edi
    
    edx_1 = arg1
    
    while (true)
        void* eax_6 = edx_1 & 0xfff
        
        if (eax_6 u> 0xff0)
            int16_t eax_11 = *edx_1
            
            if (0 == eax_11)
                break
            
            if (eax_11 != ecx_1.w)
                edx_1 += 2
                continue
            
        label_7484e0:
            int128_t* ecx_5 = arg2
            int128_t* edi_1 = edx_1
            
            while (true)
                void* eax_10
                
                if ((edi_1 & 0xfff) u<= 0xff0)
                    eax_10 = ecx_5 & 0xfff
                
                if ((edi_1 & 0xfff) u> 0xff0 || (eax_10 != 0xff0 && eax_10 u>= 0xff0))
                    int16_t eax_12 = *ecx_5
                    int32_t var_14_2 = 0
                    
                    if (0 != eax_12)
                        if (*edi_1 != eax_12)
                            break
                        
                        edi_1 += 2
                        ecx_5 += 2
                        continue
                else
                    int32_t eflags_3
                    int32_t ecx_6
                    ecx_6, eflags_3 = _mm_cmpistri(*ecx_5, *edi_1, 0xd)
                    
                    if (not(add_overflow(eax_10, 0xfffff010)))
                        break
                    
                    if (eax_10 - 0xff0 s>= 0)
                        edi_1 = &edi_1[1]
                        ecx_5 = &ecx_5[1]
                        continue
                
                return edx_1
            
            edx_1 += 2
        else
            int32_t xmm1_1[0x4] = *edx_1
            int32_t eflags_1
            int32_t ecx_3
            ecx_3, eflags_1 = _mm_cmpistri(xmm0_1, xmm1_1, 0xd)
            
            if (eax_6 u<= 0xff0)
                if (eax_6 u>= 0xff0)
                    break
                
                int32_t eflags_2
                int32_t ecx_4
                ecx_4, eflags_2 = _mm_cmpistri(xmm0_1, xmm1_1, 0xd)
                edx_1 += ecx_4 << 1
                goto label_7484e0
            
            edx_1 = &edx_1[1]
        
        ecx_1 = var_18
else if (eax_1 != 1)
    edx_1 = arg1
    int16_t eax_28 = *edx_1
    
    if (eax_28 != 0)
        int16_t* eax_30 = edx_1 - edi
        int16_t* var_14_3 = eax_30
        
        if (eax_28 == 0)
            goto label_748699
        
        while (true)
            if (*edi == 0)
                return edx_1
            
            bool cond:2_1 = zx.d(*(eax_30 + edi)) != zx.d(*edi)
            eax_30 = var_14_3
            
            if (not(cond:2_1))
                edi = &edi[1]
                
                if (*(eax_30 + edi) != 0)
                    continue
            
        label_748699:
            
            if (*edi == 0)
                return edx_1
            
            edi = arg2
            edx_1 += 2
            eax_30 = &eax_30[1]
            var_14_3 = eax_30
            
            if (*edx_1 == 0)
                return nullptr
else
    int128_t* ecx_8 = arg1
    uint32_t xmm4_1[0x4] = _mm_shuffle_epi32(_mm_shufflelo_epi16(zx.o(ecx_1.w), 0), 0)
    
    while (true)
        if ((ecx_8 & 0xfff) u<= 0xff0)
            int16_t xmm1_3[0x8] = *ecx_8
            uint32_t eax_16 = _mm_movemask_epi8(_mm_cmpeq_epi16(zx.o(0), xmm1_3)
                | _mm_cmpeq_epi16(xmm1_3, xmm4_1))
            
            if (eax_16 != 0)
                int32_t eflags_4
                int32_t eax_17
                eax_17, eflags_4 = _bit_scan_forward(eax_16)
                int32_t var_18_1 = eax_17
                ecx_8 += eax_17 u>> 1 << 1
            else
                ecx_8 = &ecx_8[1]
                continue
        
        int16_t eax_19 = *ecx_8
        
        if (0 == eax_19)
            break
        
        if (*edi == eax_19)
            int128_t* edx_3 = ecx_8
            
            while (true)
                if ((edi & 0xfff) u<= 0xff0 && (edx_3 & 0xfff) u<= 0xff0)
                    int16_t xmm2_2[0x8] = *edi
                    int16_t xmm1_6[0x8] = _mm_cmpeq_epi16(*edx_3, xmm2_2)
                    int16_t xmm0_7[0x8] = _mm_cmpeq_epi16(zx.o(0), xmm2_2)
                    uint32_t eax_24 = _mm_movemask_epi8(_mm_cmpeq_epi16(xmm1_6, zx.o(0)) | xmm0_7)
                    
                    if (eax_24 != 0)
                        int32_t eflags_5
                        int32_t eax_25
                        eax_25, eflags_5 = _bit_scan_forward(eax_24)
                        int32_t var_18_2 = eax_25
                        int32_t eax_26 = eax_25 & 0xfffffffe
                        edx_3 += eax_26
                        edi += eax_26
                    else
                        edx_3 = &edx_3[1]
                        edi = &edi[8]
                        continue
                
                int16_t eax_27 = *edi
                int32_t var_18_3 = 0
                
                if (0 == eax_27)
                    return ecx_8
                
                if (*edx_3 != eax_27)
                    break
                
                edx_3 += 2
                edi = &edi[1]
            
            edi = arg2
        
        ecx_8 += 2
return nullptr
