// 函数: sub_4ba3c2
// 地址: 0x4ba3c2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* i = arg3
int32_t edi
int32_t var_30 = edi

for (; i u< arg4; i += 1)
    int32_t* ecx_1 = *(arg2 + (i << 2))
    int32_t* var_20_1 = ecx_1
    
    if (ecx_1 != 0)
        int32_t eax = *ecx_1
        int32_t j_4 = eax & 0xfffff
        int32_t j_5 = j_4
        
        if (eax != 0)
            uint32_t temp0_1 = divu.dp.d(0:(ecx_1[1]), j_4)
            int32_t var_10_1 = 0
            
            if (temp0_1 u> 0)
                arg3 = nullptr
                
                do
                    int32_t var_8_1 = 0
                    
                    if (j_4 u> 0)
                        int32_t* edx_4 = ecx_1[2] + arg3
                        int32_t j_2 = j_4
                        int32_t j
                        
                        do
                            int32_t esi_2 = *edx_4
                            void* ebx_1 = *(*(arg1 + 0x14) + (esi_2 << 2))
                            int32_t eax_4 = 0
                            
                            if (arg6 u> 0)
                                do
                                    int32_t ecx_3 = *(arg5 + (eax_4 << 2))
                                    
                                    if ((esi_2 == ecx_3 || *(ebx_1 + 0x38) == ecx_3)
                                            && *(ebx_1 + 0xc) == 0xffffffff)
                                        var_8_1 = 1
                                    
                                    eax_4 += 1
                                while (eax_4 u< arg6)
                                
                                ecx_1 = var_20_1
                            
                            edx_4 = &edx_4[1]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        
                        if (var_8_1 != 0)
                            int32_t var_c_1 = 0
                            int32_t* var_8_2 = arg3
                            
                            do
                                int32_t j_3 = *(var_8_2 + ecx_1[2])
                                int32_t j_1 = *(*(*(arg1 + 0x14) + (j_3 << 2)) + 0x38)
                                
                                if (j_1 == 0xffffffff)
                                    j_1 = j_3
                                
                                int32_t edx_6 = *arg8
                                int32_t edi_2 = 0
                                
                                if (edx_6 u> 0)
                                    while (*(arg7 + (edi_2 << 2)) != j_1)
                                        edi_2 += 1
                                        
                                        if (edi_2 u>= *arg8)
                                            break
                                
                                if (edi_2 == edx_6)
                                    if (edi_2 == 0x20)
                                        sub_4a4100(arg1, nullptr, 0x12c3, 
                                            "internal error: arguments not vectorized")
                                        return 0x80004005
                                    
                                    *(arg7 + (edx_6 << 2)) = j_1
                                    *arg8 += 1
                                
                                var_c_1 += 1
                                var_8_2 = &var_8_2[1]
                            while (var_c_1 u< j_5)
                        
                        j_4 = j_5
                    
                    var_10_1 += 1
                    arg3 = &arg3[j_4]
                while (var_10_1 u< temp0_1)

return 0
