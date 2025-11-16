// 函数: sub_61ce00
// 地址: 0x61ce00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg3
int32_t var_8_1
int32_t eax_11

if (arg4 == 0)
    if (eax u<= 3)
        int32_t eax_12
        
        switch (eax)
            case nullptr
                eax_12 = data_bac4a0
                *(arg2 + 0x20) =
                    _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_12, 0, arg1, 0, 0x10000, *(eax_12 + 0xc))))
                return arg2
            case 1
                eax_12 = neg.d(*(data_bac4a0 + 0xc))
                *(arg2 + 0x20) =
                    _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_12, 0, arg1, 0, 0x10000, eax_12)))
                return arg2
            case 2
                eax_11 = data_bac4a0
                var_8_1 = *(eax_11 + 8)
            case 3
                eax_11 = neg.d(*(data_bac4a0 + 8))
                var_8_1 = eax_11
        
        int32_t var_c_3 = 0x10000
        eax = arg2
        *(eax + 0x1c) = _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_11, 0, arg1, 0, 0x10000, var_8_1)))
else if (eax u<= 3)
    int32_t var_10_3
    
    switch (eax)
        case nullptr
            int32_t eax_3 = neg.d(*(data_bac4a0 + 0xc))
            *(arg2 + 0x20) = _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_3, 0, arg1, eax_3, 0x10000, 0)))
            return arg2
        case 1
            void* eax_6 = data_bac4a0
            *(arg2 + 0x20) =
                _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_6, 0, arg1, *(eax_6 + 0xc), 0x10000, 0)))
            return arg2
        case 2
            var_8_1 = 0
            int32_t var_c_1 = 0x10000
            eax_11 = neg.d(*(data_bac4a0 + 8))
            var_10_3 = eax_11
        case 3
            eax_11 = data_bac4a0
            var_8_1 = 0
            int32_t var_c_2 = 0x10000
            var_10_3 = *(eax_11 + 8)
    
    eax = arg2
    *(eax + 0x1c) = _mm_cvtepi32_ps(zx.o(sub_5b08c0(eax_11, 0, arg1, var_10_3, 0x10000, var_8_1)))
return eax
