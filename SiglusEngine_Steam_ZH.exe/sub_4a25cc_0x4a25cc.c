// 函数: sub_4a25cc
// 地址: 0x4a25cc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t var_1c = 0

if (*(arg1 + 8) u> 0)
    do
        *(*(*(arg1 + 0x14) + (i << 2)) + 0x30) = 0xffffffff
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    int32_t edi
    int32_t var_28_1 = edi
    
    do
        int32_t* ebx_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        
        if ((*(ebx_1 + 2) & 0xfff0) != 0)
            int32_t var_18_1 = 0
            int32_t* var_10
            int32_t* var_2c_1 = &var_10
            int32_t var_30_1 = 0
            
            while (true)
                int32_t eax_14 = sub_49e7de(ebx_1, var_30_1, var_2c_1)
                
                if (eax_14 == 0)
                    break
                
                if (*(*((*var_10 << 2) + *(arg1 + 0x14)) + 0x30) != 0xffffffff)
                    int32_t var_c_1 = 1
                    
                    if (eax_14 u> 1)
                        do
                            if (*(*((var_10[var_c_1] << 2) + *(arg1 + 0x14)) + 0x30) == 0xffffffff)
                                break
                            
                            int32_t* edi_1 = *(arg1 + 0x14)
                            
                            if (*(edi_1[*(edi_1[*var_10] + 0x30)] + 0xc)
                                    != *(edi_1[*(edi_1[var_10[var_c_1]] + 0x30)] + 0xc))
                                break
                            
                            var_c_1 += 1
                        while (var_c_1 u< eax_14)
                    
                    if (eax_14 u<= 1 || var_c_1 u>= eax_14)
                        int32_t ecx_8 = 0
                        
                        if (eax_14 u> 0)
                            do
                                void* eax_13 = &var_10[ecx_8]
                                ecx_8 += 1
                                *eax_13 = *(*(*(arg1 + 0x14) + (*eax_13 << 2)) + 0x30)
                            while (ecx_8 u< eax_14)
                        
                        var_1c = 1
                
                var_18_1 += 1
                var_2c_1 = &var_10
                var_30_1 = var_18_1
            
            if ((*ebx_1 & 0xfff00000) == 0x10000000)
                int32_t j = 0
                
                if (ebx_1[3] u> 0)
                    do
                        int32_t edx_9 = j << 2
                        int32_t ecx_10 = *(edx_9 + ebx_1[4])
                        int32_t eax_18 = *(arg1 + 0x14)
                        void* ecx_11 = *(eax_18 + (ecx_10 << 2))
                        void* eax_19 = *(eax_18 + (*(edx_9 + ebx_1[2]) << 2))
                        
                        if (*(ecx_11 + 4) == *(eax_19 + 4) && *(ecx_11 + 8) == *(eax_19 + 8)
                                && *(ecx_11 + 0x10) == *(eax_19 + 0x10)
                                && *(ecx_11 + 0x14) == *(eax_19 + 0x14)
                                && *(ecx_11 + 0x18) == *(eax_19 + 0x18)
                                && *(eax_19 + 0x38) == 0xffffffff && *(ecx_11 + 0x3c) == 0)
                            *(eax_19 + 0x30) = ecx_10
                        
                        j += 1
                    while (j u< ebx_1[3])
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

int32_t result
result.b = var_1c == 0
return result
