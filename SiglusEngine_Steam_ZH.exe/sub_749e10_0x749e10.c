// 函数: sub_749e10
// 地址: 0x749e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg2 != 0 && arg3 != 0)
    if (arg4 != 0 && arg1 != 0 && arg3 u<= divu.dp.d(0:0xffffffff, arg2))
        void* edi_2 = arg2 * arg3
        void* ebx_2 = edi_2
        int32_t ecx_2
        
        if ((arg4[3] & 0x10c) == 0)
            ecx_2 = 0x1000
        else
            ecx_2 = arg4[6]
        
        int32_t var_8_1 = ecx_2
        
        if (edi_2 != 0)
            while (true)
                int32_t edx_4 = arg4[3] & 0x108
                void* var_c_1
                void* eax_5
                
                if (edx_4 != 0)
                    eax_5 = arg4[1]
                    var_c_1 = eax_5
                
                if (edx_4 != 0 && eax_5 != 0)
                    if (eax_5 s>= 0)
                        if (ebx_2 u< eax_5)
                            eax_5 = ebx_2
                            var_c_1 = ebx_2
                        
                        sub_748840(*arg4, arg1, eax_5)
                        arg4[1] -= var_c_1
                        ebx_2 -= var_c_1
                        *arg4 += var_c_1
                        arg1 += var_c_1
                        goto label_749f1a
                    
                    arg4[3] |= 0x20
                else if (ebx_2 u< ecx_2)
                    int32_t* var_1c_4 = arg4
                    
                    if (sub_74ddff(sx.d(*arg1)) != 0xffffffff)
                        arg1 += 1
                        ebx_2 -= 1
                        ecx_2 = arg4[6]
                        var_8_1 = ecx_2
                        
                        if (ecx_2 s<= 0)
                            ecx_2 = 1
                            var_8_1 = 1
                        
                        goto label_749f47
                else
                    if (edx_4 == 0)
                        goto label_749ed7
                    
                    if (__flush(arg4) == 0)
                        ecx_2 = var_8_1
                    label_749ed7:
                        void* eax_9 = ebx_2
                        void* var_c_2
                        
                        if (ecx_2 == 0)
                            var_c_2 = ebx_2
                        else
                            eax_9 = ebx_2 - modu.dp.d(0:eax_9, ecx_2)
                            var_c_2 = eax_9
                        
                        void* eax_11 = sub_759401(__fileno(arg4), arg1, eax_9)
                        
                        if (eax_11 == 0xffffffff)
                            arg4[3] |= 0x20
                        else
                            void* edx_7 = var_c_2
                            
                            if (eax_11 u<= var_c_2)
                                edx_7 = eax_11
                            
                            arg1 += edx_7
                            ebx_2 -= edx_7
                            
                            if (eax_11 u< var_c_2)
                                arg4[3] |= 0x20
                            else
                            label_749f1a:
                                ecx_2 = var_8_1
                            label_749f47:
                                
                                if (ebx_2 == 0)
                                    break
                                
                                continue
                
                return divu.dp.d(0:(edi_2 - ebx_2), arg2)
        
        return arg3
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()

return 0
