// 函数: sub_4b22fb
// 地址: 0x4b22fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4a86fc(arg1)

if (result s>= 0)
    result = sub_4affea(arg1)
    
    if (result s>= 0)
        result = sub_4a9f2a(arg1, 1)
        
        if (result s>= 0)
            int32_t edi
            int32_t var_c_1 = edi
            int32_t edi_1 = 0
            
            while (true)
                result = sub_4adf5e(arg1, 1)
                
                if (result == 0)
                label_4b2349:
                    edi_1 += 1
                    
                    if (edi_1 u< 0x100)
                        continue
                else
                    if (result s< 0)
                        break
                    
                    if (result != 1)
                        goto label_4b2349
                
                result = sub_4a8935(arg1)
                
                if (result s>= 0)
                    result = sub_4b06b1(arg1)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x10))()
                        
                        if (result s>= 0)
                            result = sub_4a9f2a(arg1, 0)
                            
                            if (result s>= 0)
                                result = sub_4b1555(arg1)
                                
                                if (result s>= 0)
                                    arg1[0x37] = 1
                                    result = sub_4aa174(arg1)
                                    
                                    if (result s>= 0)
                                        result = sub_4b1aaf(arg1)
                                        
                                        if (result s>= 0)
                                            result = sub_4a25cc(arg1)
                                            
                                            if (result s>= 0)
                                                result = (*(*arg1 + 0x14))()
                                                
                                                if (result s>= 0)
                                                    result = (*(*arg1 + 0x18))()
                                                    
                                                    if (result s>= 0)
                                                        result = sub_49ff18(arg1)
                                                        
                                                        if (result s>= 0)
                                                            result = sub_4a6590(arg1)
                                                            
                                                            if (result s>= 0)
                                                                result = sub_4b1ce3(arg1)
                                                                
                                                                if (result s>= 0)
                                                                    sub_4aa4b0(arg1)
                                                                    result = 0
                
                break

return result
