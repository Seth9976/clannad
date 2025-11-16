// 函数: sub_61cf50
// 地址: 0x61cf50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg3

if (arg4 == 0)
    switch (eax)
        case nullptr
            void* eax_9 = data_bac4a0
            *(arg2 + 0x2c) = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0xc)))
            int32_t eax_10 = arg1
            *(arg2 + 0x20) = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0xc)))
            
            if (eax_10 s< 0)
                eax_10 = 0
            else if (eax_10 s> 0x10000)
                eax_10 = 0x10000
            
            *(arg2 + 0x38) = 1f - _mm_cvtepi32_ps(zx.o(eax_10)) * 1.52587891e-05f
            return eax_10
        case 1
            int32_t eax_11 = arg1
            
            if (eax_11 s< 0)
                eax_11 = 0
            else if (eax_11 s> 0x10000)
                eax_11 = 0x10000
            
            *(arg2 + 0x38) = 1f - _mm_cvtepi32_ps(zx.o(eax_11)) * 1.52587891e-05f
            return arg2
        case 2
            void* eax_13 = data_bac4a0
            *(arg2 + 0x28) = _mm_cvtepi32_ps(zx.o(*(eax_13 + 8)))
            int32_t eax_14 = arg1
            *(arg2 + 0x1c) = _mm_cvtepi32_ps(zx.o(*(eax_13 + 8)))
            
            if (eax_14 s< 0)
                eax_14 = 0
            else if (eax_14 s> 0x10000)
                eax_14 = 0x10000
            
            *(arg2 + 0x34) = 1f - _mm_cvtepi32_ps(zx.o(eax_14)) * 1.52587891e-05f
            return eax_14
        case 3
            int32_t eax_15 = arg1
            
            if (eax_15 s< 0)
                eax_15 = 0
            else if (eax_15 s> 0x10000)
                eax_15 = 0x10000
            
            eax = arg2
            *(eax + 0x34) = 1f - _mm_cvtepi32_ps(zx.o(eax_15)) * 1.52587891e-05f
else
    switch (eax)
        case nullptr
            int32_t eax_1 = arg1
            
            if (eax_1 s< 0)
                eax_1 = 0
            else if (eax_1 s> 0x10000)
                eax_1 = 0x10000
            
            *(arg2 + 0x38) = _mm_cvtepi32_ps(zx.o(eax_1)) * 1.52587891e-05f + 0f
            return arg2
        case 1
            void* eax_3 = data_bac4a0
            *(arg2 + 0x2c) = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0xc)))
            int32_t eax_4 = arg1
            *(arg2 + 0x20) = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0xc)))
            
            if (eax_4 s< 0)
                eax_4 = 0
            else if (eax_4 s> 0x10000)
                eax_4 = 0x10000
            
            *(arg2 + 0x38) = _mm_cvtepi32_ps(zx.o(eax_4)) * 1.52587891e-05f + 0f
            return eax_4
        case 2
            int32_t eax_5 = arg1
            
            if (eax_5 s< 0)
                eax_5 = 0
            else if (eax_5 s> 0x10000)
                eax_5 = 0x10000
            
            *(arg2 + 0x34) = _mm_cvtepi32_ps(zx.o(eax_5)) * 1.52587891e-05f + 0f
            return arg2
        case 3
            void* eax_7 = data_bac4a0
            *(arg2 + 0x28) = _mm_cvtepi32_ps(zx.o(*(eax_7 + 8)))
            int32_t eax_8 = arg1
            *(arg2 + 0x1c) = _mm_cvtepi32_ps(zx.o(*(eax_7 + 8)))
            
            if (eax_8 s< 0)
                eax_8 = 0
            else if (eax_8 s> 0x10000)
                eax_8 = 0x10000
            
            *(arg2 + 0x34) = _mm_cvtepi32_ps(zx.o(eax_8)) * 1.52587891e-05f + 0f
            return eax_8

return eax
