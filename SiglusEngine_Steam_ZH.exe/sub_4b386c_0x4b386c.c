// 函数: sub_4b386c
// 地址: 0x4b386c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_b4 = edi

if (arg2 == 0)
    return 1

int32_t eax_1 = *arg2
int32_t ebx_2 = eax_1 & 0xfff00000

if (ebx_2 != 0 && ebx_2 != 0x20700000)
    int32_t eax_2 = eax_1 & 0xfffff
    uint32_t var_c_1 = divu.dp.d(0:(arg2[1]), eax_2)
    
    if (ebx_2 == 0x70500000 || ebx_2 == 0x70600000 || ebx_2 == 0x70700000)
        var_c_1 = 2
    
    if (var_c_1 u> 1)
        int32_t ecx_1 = arg1[0x22]
        int32_t edx_3 = arg1[0x1f]
        arg1[0x20]
        int32_t var_64[0x12]
        var_64[arg1[0x20]] = 0
        var_64[ecx_1] = 0
        var_64[edx_3] = 0
        int32_t edi_1 = arg1[0x25]
        int32_t var_ac[0x12]
        var_ac[arg1[0x20]] = 1
        var_64[edi_1] = 0
        var_ac[ecx_1] = 3
        var_ac[edx_3] = 1
        var_ac[edi_1] = 1
        int32_t var_1c_1 = 0
        int32_t var_8_1 = 0
        
        if (var_c_1 u> 0)
            int32_t* var_10_1 = nullptr
            
            do
                void* edi_3 = *(arg1[5] + (*(var_10_1 + arg2[2]) << 2))
                void* eax_11 = *(arg1[4] + (*(edi_3 + 4) << 2))
                int32_t ecx_6 = *(edi_3 + 0x6c)
                
                if (ecx_6 != 0x11 || (*(eax_11 + 4) & 0x10) == 0)
                    int32_t eax_12 = *(eax_11 + 4)
                    int32_t edx_6 = eax_12 & 0x200
                    int32_t edx_7
                    
                    if (edx_6 == 0)
                        if (eax_12.b s>= 0)
                            int32_t eax_14
                            
                            if ((eax_12.b & 0x10) != 0 && edx_6 == 0)
                                eax_14 = (*(*arg1 + 0x54))(ecx_6)
                            
                            if ((eax_12.b & 0x10) == 0 || edx_6 != 0 || eax_14 == 0xffff)
                                edx_7 = arg1[0x22]
                            else
                                edx_7 = arg1[0x20]
                        else
                            edx_7 = arg1[0x25]
                    else if (eax_12.b s< 0)
                        edx_7 = arg1[0x25]
                    else
                        edx_7 = arg1[0x1f]
                    
                    int32_t var_18_1 = 0
                    
                    if (var_8_1 u> 0)
                        int32_t* ecx_8 = arg2[2]
                        
                        do
                            void* eax_17 = *(arg1[5] + (*ecx_8 << 2))
                            
                            if (*(edi_3 + 4) == *(eax_17 + 4) && *(edi_3 + 8) == *(eax_17 + 8)
                                    && *(edi_3 + 0xc) == *(eax_17 + 0xc))
                                break
                            
                            var_18_1 += 1
                            ecx_8 = &ecx_8[eax_2]
                        while (var_18_1 u< var_8_1)
                    
                    if (var_18_1 == var_8_1)
                        int32_t __saved_ebp
                        (&__saved_ebp)[edx_7 - 0x18] += 1
                        
                        if ((&__saved_ebp)[edx_7 - 0x18] u> var_ac[edx_7])
                            if (arg3 == 0)
                                return 1
                            
                            *arg3 = var_8_1
                            return 1
                    
                    if (arg1[0x1f] == edx_7)
                        var_1c_1 += 1
                        
                        if (var_1c_1 u> 2)
                            if (arg3 == 0)
                                return 1
                            
                            *arg3 = var_8_1
                            return 1
                
                var_8_1 += 1
                var_10_1 = &var_10_1[eax_2]
            while (var_8_1 u< var_c_1)
        
        int32_t var_8_2 = 0
        
        if (var_c_1 u> 0)
            int32_t* ebx_7 = nullptr
            
            do
                if ((*arg2 & 0xf0000000) == 0x60000000)
                    void* edi_4 = *(arg1[5] + (*(ebx_7 + arg2[2]) << 2))
                    
                    if ((*(*arg1 + 0x54))(*(edi_4 + 0x6c)) == 0x12 && *(edi_4 + 4) == arg1[0x20])
                        if (arg3 != 0)
                            *arg3 = var_8_2
                        
                        return 1
                
                var_8_2 += 1
                ebx_7 = &ebx_7[eax_2]
            while (var_8_2 u< var_c_1)

return 0
