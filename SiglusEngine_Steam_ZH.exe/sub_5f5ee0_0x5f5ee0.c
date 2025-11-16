// 函数: sub_5f5ee0
// 地址: 0x5f5ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x1550) - *(arg1 + 0x154c))
int32_t edx_3 = edx_2 s>> 2
int32_t result = (edx_3 u>> 0x1f) + edx_3
int32_t var_2c = result

if (result s> 0)
    int32_t* ebx_1 = nullptr
    int32_t edi_1 = result * 0x260
    void* edx_4 = nullptr
    int32_t* var_28_1 = nullptr
    void* var_1c_1 = nullptr
    int32_t var_20_1 = edi_1
    void* var_18_1 = result * 0x130
    int32_t edi_2 = edi_1
    int32_t i
    
    do
        void* eax_7 = *(arg1 + 0x1588)
        sub_628eb0(eax_7 + 0x120, edx_4 + eax_7 + 0x120, arg1 + 0x12d0, eax_7 + 4 + edx_4)
        *(var_1c_1 + *(arg1 + 0x1588) + 0x18) = 0
        int32_t eax_10 = *(arg1 + 0x1588)
        sub_628eb0(eax_10, var_18_1 + 0x120 + eax_10, arg1 + 0x12d0, var_18_1 + 4 + eax_10)
        *(var_18_1 + *(arg1 + 0x1588) + 0x18) = 0
        void* eax_12 = *(arg1 + 0x1588)
        sub_628eb0(eax_12, eax_12 + 0x120 + edi_2, arg1 + 0x12d0, eax_12 + 4 + edi_2)
        *(edi_2 + *(arg1 + 0x1588) + 0x18) = 0
        int32_t ecx_11 = *(arg1 + 0x1ec)
        int32_t var_14_1 = ecx_11
        
        if (ecx_11 == 0xffffffff)
            ecx_11 = *(data_bac4a0 + 0x194)
            var_14_1 = ecx_11
        
        if (ecx_11 == 1 || ecx_11 == 3)
            void* ebx_2 = nullptr
            
            if (*(data_bac4a0 + 0x190) != 0)
                ebx_2.b = ecx_11 == 3
                ebx_2 = (ebx_2 << 1) + 1
            else if (ecx_11 == 3)
                ebx_2 = 2
            
            int32_t* ecx_12 = data_bac4c0
            int32_t edi_3 = *(arg1 + 0x1e4)
            int32_t eax_19 = ((ecx_12[1] - *ecx_12) s>> 2) - 1
            
            if (edi_3 s< 0)
                edi_3 = 0
            else if (edi_3 s> eax_19)
                edi_3 = eax_19
            
            int32_t edx_11 = *(arg1 + 0x154c)
            int32_t* var_70_4 = ecx_12
            void* ecx_13
            ecx_13.b = *(data_bac510 + 0x10bd8) == 1
            ebx_1 = var_28_1
            int32_t var_34
            sub_69cf70(&var_34, *(ebx_1 + edx_11), *(ebx_1 + edx_11 + 4), *(ebx_1 + edx_11 + 0x10), 
                *(*ecx_12 + (edi_3 << 2)), ebx_2, ecx_13.b)
            int32_t var_8_1 = 0
            int32_t edx_12 = var_34
            int32_t* var_30
            
            if (edx_12 != 0)
                int32_t ecx_15 = *(ebx_1 + *(arg1 + 0x154c) + 0x10)
                float var_24_1
                float xmm0_5
                float xmm1_5
                
                if (var_14_1 != 3)
                    int32_t eax_24
                    
                    if (ecx_15 s>= 0)
                        eax_24 = ecx_15
                        
                        if (ecx_15 s> 0x20)
                            eax_24 = 0x20
                    else
                        eax_24 = 0
                    
                    xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_24)) * 1.5f * 0.03125f + 0.5f
                    var_24_1 = xmm1_5
                    int32_t eax_25
                    
                    if (ecx_15 s>= 0)
                        eax_25 = ecx_15
                        
                        if (ecx_15 s> 0x20)
                            eax_25 = 0x20
                    else
                        eax_25 = 0
                    
                    xmm0_5 = _mm_cvtepi32_ps(zx.o(eax_25)) * 1.5f * 0.03125f + 0.5f
                else
                    int32_t eax_22
                    
                    if (ecx_15 s>= 0)
                        eax_22 = ecx_15
                        
                        if (ecx_15 s> 0x20)
                            eax_22 = 0x20
                    else
                        eax_22 = 0
                    
                    xmm1_5 = _mm_cvtepi32_ps(zx.o(eax_22)) * 0.03125f + 0.5f - 1f
                    var_24_1 = xmm1_5
                    int32_t eax_23
                    
                    if (ecx_15 s>= 0)
                        eax_23 = ecx_15
                        
                        if (ecx_15 s> 0x20)
                            eax_23 = 0x20
                    else
                        eax_23 = 0
                    
                    xmm0_5 = _mm_cvtepi32_ps(zx.o(eax_23)) * 0.03125f + 0.5f - 1f
                
                if (*(data_bac510 + 0x10bd8) == 1)
                    var_24_1 = xmm1_5 - _mm_cvtepi32_ps(zx.o(ecx_15))
                
                int32_t var_4c = edx_12
                int32_t* var_48_1 = var_30
                
                if (var_30 != 0)
                    var_30[1]
                    var_30[1] += 1
                
                var_8_1.b = 1
                sub_5b17d0(*(arg1 + 0x1588) + 0xd8 + var_1c_1, &var_4c)
                var_8_1.b = 0
                
                if (var_30 != 0)
                    bool cond:17_1 = var_30[1] != 1
                    var_30[1]
                    var_30[1] -= 1
                    
                    if (not(cond:17_1))
                        (*(*var_30 + 4))(eax_2)
                        bool cond:20_1 = var_30[2] != 1
                        var_30[2]
                        var_30[2] -= 1
                        
                        if (not(cond:20_1))
                            (*(*var_30 + 8))()
                
                int32_t ecx_23 = *(arg1 + 0x1588)
                float xmm1_12 = _mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 8)))
                *(var_1c_1 + ecx_23 + 0x28) = *(var_1c_1 + ecx_23 + 0x28) - (xmm1_12 + var_24_1)
                int32_t ecx_24 = *(arg1 + 0x1588)
                *(var_1c_1 + ecx_24 + 0x2c) = *(var_1c_1 + ecx_24 + 0x2c)
                    - (_mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 0xc))) + xmm0_5)
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_30 != 0)
                bool cond:3_1 = var_30[1] != 1
                var_30[1]
                var_30[1] -= 1
                
                if (not(cond:3_1))
                    (*(*var_30 + 4))(eax_2)
                    bool cond:4_1 = var_30[2] != 1
                    var_30[2]
                    var_30[2] -= 1
                    
                    if (not(cond:4_1))
                        (*(*var_30 + 8))()
            
            ecx_11 = var_14_1
        
        if (ecx_11 == 2 || ecx_11 == 3)
            int32_t edi_6 = *(arg1 + 0x1e8)
            int32_t ecx_28
            ecx_28.b = *(data_bac4a0 + 0x190) != 0
            int32_t* ecx_30 = data_bac4c0
            int32_t eax_42 = ((ecx_30[1] - *ecx_30) s>> 2) - 1
            
            if (edi_6 s< 0)
                edi_6 = 0
            else if (edi_6 s> eax_42)
                edi_6 = eax_42
            
            int32_t edx_16 = *(arg1 + 0x154c)
            int32_t* var_70_6 = ecx_30
            void* ecx_31
            ecx_31.b = *(data_bac510 + 0x10bd8) == 1
            int32_t var_3c
            sub_69cf70(&var_3c, *(ebx_1 + edx_16), *(ebx_1 + edx_16 + 4), *(ebx_1 + edx_16 + 0x10), 
                *(*ecx_30 + (edi_6 << 2)), ecx_28 + 2, ecx_31.b)
            int32_t var_8_3 = 2
            int32_t ecx_33 = var_3c
            int32_t* var_38
            
            if (ecx_33 != 0)
                float var_28_4 = -1f
                
                if (*(data_bac510 + 0x10bd8) == 1)
                    var_28_4 = -1f - _mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 0x10)))
                
                int32_t var_54 = ecx_33
                int32_t* var_50_1 = var_38
                
                if (var_38 != 0)
                    var_38[1]
                    var_38[1] += 1
                
                var_8_3.b = 3
                sub_5b17d0(*(arg1 + 0x1588) + 0xd8 + var_18_1, &var_54)
                var_8_3.b = 2
                
                if (var_38 != 0)
                    bool cond:14_1 = var_38[1] != 1
                    var_38[1]
                    var_38[1] -= 1
                    
                    if (not(cond:14_1))
                        (*(*var_38 + 4))(eax_2)
                        bool cond:15_1 = var_38[2] != 1
                        var_38[2]
                        var_38[2] -= 1
                        
                        if (not(cond:15_1))
                            (*(*var_38 + 8))()
                
                int32_t ecx_41 = *(arg1 + 0x1588)
                float xmm1_19 = _mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 8)))
                *(var_18_1 + ecx_41 + 0x28) = *(var_18_1 + ecx_41 + 0x28) - (xmm1_19 + var_28_4)
                int32_t ecx_42 = *(arg1 + 0x1588)
                *(var_18_1 + ecx_42 + 0x2c) = *(var_18_1 + ecx_42 + 0x2c)
                    - (_mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 0xc))) - 1f)
            
            int32_t var_8_4 = 0xffffffff
            
            if (var_38 != 0)
                bool cond:7_1 = var_38[1] != 1
                var_38[1]
                var_38[1] -= 1
                
                if (not(cond:7_1))
                    (*(*var_38 + 4))(eax_2)
                    bool cond:12_1 = var_38[2] != 1
                    var_38[2]
                    var_38[2] -= 1
                    
                    if (not(cond:12_1))
                        (*(*var_38 + 8))()
        
        int32_t edx_20 = *(arg1 + 0x154c)
        int32_t ecx_46
        ecx_46.b = *(data_bac4a0 + 0x190) != 0
        int32_t var_70_8 = ecx_46
        void* eax_58
        eax_58.b = *(data_bac510 + 0x10bd8) == 1
        int32_t var_44
        result = sub_69cf70(&var_44, *(ebx_1 + edx_20), *(ebx_1 + edx_20 + 4), 
            *(ebx_1 + edx_20 + 0x10), *(ebx_1 + edx_20 + 0x14), ecx_46, eax_58.b)
        int32_t var_8_5 = 4
        int32_t edx_21 = var_44
        int32_t* var_40
        
        if (edx_21 != 0)
            float var_28_5 = 0f
            
            if (*(data_bac510 + 0x10bd8) == 1)
                var_28_5 = 0f - _mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 0x10)))
            
            int32_t var_5c_1 = edx_21
            int32_t* var_58_1 = var_40
            
            if (var_40 != 0)
                var_40[1] += 1
            
            void* eax_64 = *(arg1 + 0x1588) + var_20_1
            var_8_5.b = 5
            
            if (var_40 != 0)
                var_40[1] += 1
            
            *(eax_64 + 0xd8) = edx_21
            int32_t* edx_22 = *(eax_64 + 0xdc)
            *(eax_64 + 0xdc) = var_40
            
            if (edx_22 != 0)
                bool cond:16_1 = edx_22[1] != 1
                edx_22[1] -= 1
                
                if (not(cond:16_1))
                    (*(*edx_22 + 4))(eax_2)
                    bool cond:19_1 = edx_22[2] != 1
                    edx_22[2]
                    edx_22[2] -= 1
                    
                    if (not(cond:19_1))
                        (*(*edx_22 + 8))()
            
            var_8_5.b = 4
            
            if (var_40 != 0)
                bool cond:18_1 = var_40[1] != 1
                var_40[1]
                var_40[1] -= 1
                
                if (not(cond:18_1))
                    (*(*var_40 + 4))(eax_2)
                    bool cond:21_1 = var_40[2] != 1
                    var_40[2]
                    var_40[2] -= 1
                    
                    if (not(cond:21_1))
                        (*(*var_40 + 8))()
            
            int32_t ecx_52 = *(arg1 + 0x1588)
            float xmm1_26 = _mm_cvtepi32_ps(zx.o(*(ebx_1 + *(arg1 + 0x154c) + 8)))
            *(var_20_1 + ecx_52 + 0x28) = *(var_20_1 + ecx_52 + 0x28) - (xmm1_26 + var_28_5)
            result = *(arg1 + 0x154c)
            int32_t ecx_53 = *(arg1 + 0x1588)
            float xmm1_30 = _mm_cvtepi32_ps(zx.o(*(ebx_1 + result + 0xc))) + 0f
            *(var_20_1 + ecx_53 + 0x2c) = *(var_20_1 + ecx_53 + 0x2c) - xmm1_30
        
        int32_t var_8_6 = 0xffffffff
        
        if (var_40 != 0)
            result = &var_40[1]
            bool cond:9_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:9_1))
                (*(*var_40 + 4))(eax_2)
                result = &var_40[2]
                bool cond:13_1 = *result != 1
                *result
                *result -= 1
                
                if (not(cond:13_1))
                    result = (*(*var_40 + 8))()
        
        ebx_1 = &ebx_1[6]
        edx_4 = var_1c_1 + 0x130
        var_18_1 += 0x130
        edi_2 = var_20_1 + 0x130
        i = var_2c
        var_2c -= 1
        var_1c_1 = edx_4
        var_20_1 = edi_2
        var_28_1 = ebx_1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
