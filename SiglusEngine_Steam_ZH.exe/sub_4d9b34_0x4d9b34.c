// 函数: sub_4d9b34
// 地址: 0x4d9b34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg1[2]
int32_t i_1 = 0
int32_t ecx_1 = arg1[3]
int32_t ebx = *arg1
int32_t ecx_2 = arg1[6]
int32_t edi
int32_t var_38 = edi
int16_t* result_2 = arg1[5]
int16_t* result_1 = arg1[1]
__builtin_memset(arg2 + 0x1034, 0, 0x20)
*(ebx + (*(arg2 + (*(arg2 + 0x4c) << 2) + 0x1054) << 2) + 2) = 0
int32_t esi_1 = *(arg2 + 0x4c) + 1
int16_t* result = 0x23d

if (esi_1 s< 0x23d)
    void* var_14_1 = arg2 + (esi_1 << 2) + 0x1054
    int32_t i_3 = 0x23d - esi_1
    int32_t esi_2 = 0x23d + 0
    int32_t i
    
    do
        int32_t ecx_4 = *var_14_1
        int32_t eax_5 = ecx_4 << 2
        result = zx.d(*(ebx + (zx.d(*(eax_5 + ebx + 2)) << 2) + 2)) + 1
        
        if (result s> result_2)
            result = result_2
            i_1 += 1
        
        *(eax_5 + ebx + 2) = result.w
        
        if (ecx_4 s<= ecx_2)
            *(arg2 + (result << 1) + 0x1034) += 1
            int32_t edi_3 = 0
            
            if (ecx_4 s>= ecx_1)
                edi_3 = *(ecx + ((ecx_4 - ecx_1) << 2))
            
            uint32_t ecx_7 = zx.d(*(eax_5 + ebx))
            *(arg2 + 0x58) += (result + edi_3) * ecx_7
            result = result_1
            
            if (result != 0)
                result = (zx.d(result[ecx_4 * 2 + 1]) + edi_3) * ecx_7
                *(arg2 + 0x5c) += result
        
        var_14_1 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (i_1 != 0)
        do
            void* eax_14 = result_2 - 1
            void* edi_5 = arg2 + (eax_14 << 1) + 0x1034
            
            while (*edi_5 == 0)
                eax_14 -= 1
                edi_5 -= 2
            
            *(arg2 + (eax_14 << 1) + 0x1034) -= 1
            i_1 -= 2
            *(arg2 + (eax_14 << 1) + 0x1036) += 2
            *(arg2 + (result_2 << 1) + 0x1034) -= 1
        while (i_1 s> 0)
        
        result = result_2
        int16_t* i_2 = result
        
        if (result != 0)
            void* var_10_2 = arg2 + (result_2 << 1) + 0x1034
            
            do
                result = zx.d(*var_10_2)
                int16_t* j = result
                
                if (result != 0)
                    void* ecx_10 = arg2 + (esi_2 << 2) + 0x1054
                    
                    do
                        ecx_10 -= 4
                        result = *ecx_10
                        esi_2 -= 1
                        void* var_2c_2 = ecx_10
                        
                        if (result s<= ecx_2)
                            result = ebx + (result << 2)
                            ecx_10.w = result[1]
                            
                            if (ecx_10.w != i_2.w)
                                uint32_t ecx_12
                                ecx_12.w = i_2.w
                                *(arg2 + 0x58) += (i_2 - zx.d(ecx_10.w)) * zx.d(*result)
                                result[1] = ecx_12.w
                            
                            j -= 1
                            ecx_10 = var_2c_2
                    while (j != 0)
                
                i_2 -= 1
                var_10_2 -= 2
            while (i_2 != 0)

return result
