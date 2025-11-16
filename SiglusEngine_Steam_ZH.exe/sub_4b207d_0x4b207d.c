// 函数: sub_4b207d
// 地址: 0x4b207d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = sub_4a4788(arg1)

if (result s>= 0)
    result = sub_4a4f2f(arg1)
    
    if (result s>= 0)
        result = sub_4ad8ba(arg1)
        
        if (result s>= 0)
            result = sub_49ff18(arg1)
            
            if (result s>= 0)
                result = sub_4a6590(arg1)
                
                if (result s>= 0)
                    int32_t i = 0
                    
                    if (*(arg1 + 0xc) u> 0)
                        do
                            int32_t* eax_1 = *(*(arg1 + 0x18) + (i << 2))
                            
                            if ((*eax_1 & 0xfff00000) == 0x10200000)
                                *eax_1 = (eax_1[3] & 0xfffff) | 0x10000000
                            
                            i += 1
                        while (i u< *(arg1 + 0xc))
                    
                    if ((*(arg1 + 0xcc) & 4) != 0)
                        *(arg1 + 0xd8) = 1
                        return 0
                    
                    result = sub_4a86fc(arg1)
                    
                    if (result s>= 0)
                        result = sub_4a4c49(arg1)
                        
                        if (result s>= 0)
                            int32_t var_8_1 = 0
                            int32_t edi
                            int32_t var_14_1 = edi
                            
                            while (true)
                                result = sub_4acd11(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_7
                                ecx_7.b = result == 0
                                result = sub_4a4f2f(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_9
                                ecx_9.b = result == 0
                                result = sub_4ada86(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_11
                                ecx_11.b = result == 0
                                result = sub_4adf5e(arg1, 0)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_13
                                ecx_13.b = result == 0
                                result = sub_4a53e1(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_15
                                ecx_15.b = result == 0
                                result = sub_4ae1e5(arg1)
                                int16_t top = top - 1
                                unimplemented  {call 0x4ae1e5}
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_17
                                ecx_17.b = result == 0
                                result = sub_4a58b2(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_19
                                ecx_19.b = result == 0
                                result = sub_4a5bb6(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_21
                                ecx_21.b = result == 0
                                result = sub_4afa34(arg1)
                                
                                if (result == 0)
                                    result = 0
                                else if (result s< 0)
                                    break
                                
                                int32_t ecx_23
                                ecx_23.b = result == 0
                                
                                if ((ecx_23 | ecx_7 | ecx_9 | ecx_11 | ecx_13 | ecx_15 | ecx_17
                                        | ecx_19 | ecx_21) != 0)
                                    var_8_1 += 1
                                    
                                    if (var_8_1 u< 0x100)
                                        continue
                                
                                if (var_8_1 == 0x100)
                                    sub_4a4195(arg1, nullptr, 0, 
                                        "internal warning: optimization did not converge")
                                
                                int32_t i_1 = 0
                                
                                if (*(arg1 + 8) u> 0)
                                    do
                                        void* eax_3 = *(*(arg1 + 0x14) + (i_1 << 2))
                                        int16_t ecx_27 =
                                            (*(*(*(arg1 + 0x10) + (*(eax_3 + 4) << 2)) + 4)).w
                                        
                                        if ((ecx_27:1.b & 1) != 0 && (ecx_27:1.b & 0xc) == 0)
                                            int32_t ecx_28 = *(arg1 + 0x78)
                                            *(eax_3 + 0xc) = 0xffffffff
                                            *(eax_3 + 0x10) = 0xffffffff
                                            *(eax_3 + 4) = ecx_28
                                        
                                        i_1 += 1
                                    while (i_1 u< *(arg1 + 8))
                                
                                result = sub_4ac7b5(arg1)
                                
                                if (result s>= 0)
                                    result = sub_4a62d8(arg1)
                                    
                                    if (result s>= 0)
                                        result = sub_4ad8ba(arg1)
                                        
                                        if (result s>= 0)
                                            result = sub_49ff18(arg1)
                                            
                                            if (result s>= 0)
                                                result = sub_4a6590(arg1)
                                                
                                                if (result s>= 0)
                                                    *(arg1 + 0xd8) = 1
                                                    result = 0
                                
                                break

return result
