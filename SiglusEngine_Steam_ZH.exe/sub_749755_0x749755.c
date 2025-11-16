// 函数: sub_749755
// 地址: 0x749755
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int16_t (* result)[0x8] = arg1

if (data_b94f20 s< 1)
    while (true)
        int16_t eax_5 = *result
        
        if (eax_5 == 0)
            break
        
        if (eax_5 == arg2)
            break
        
        result = &(*result)[1]
else
    uint32_t xmm2_1[0x4] = _mm_shuffle_epi32(_mm_shufflelo_epi16(zx.o(arg2), 0), 0)
    
    while (true)
        if ((result & 0xfff) u> 0xff0)
            int16_t eax_9 = *result
            
            if (eax_9 == arg2)
                return result
            
            if (eax_9 == 0)
                return nullptr
            
            result = &(*result)[1]
        else
            int16_t xmm0_3[0x8] = *result
            uint32_t eax_4 = _mm_movemask_epi8(_mm_cmpeq_epi16(zx.o(0), xmm0_3)
                | _mm_cmpeq_epi16(xmm0_3, xmm2_1))
            
            if (eax_4 != 0)
                int32_t eflags_1
                int32_t eax_10
                eax_10, eflags_1 = _bit_scan_forward(eax_4)
                int32_t var_14_1 = eax_10
                result += eax_10
                break
            
            result = &result[1]

int32_t eax_6
eax_6.b = *result != arg2
return (eax_6 - 1) & result
