// 函数: sub_6eb130
// 地址: 0x6eb130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_4 = arg1

if (arg2 == 0)
    return 0xffffffff

int32_t edx = *(arg2 + 4)

if ((edx.b & 0xf) == 0)
    int32_t ecx_1 = *(arg2 + 8)
    
    if ((ecx_1.b & 0xf) == 0 && edx != 0 && edx u< 0x100000 && ecx_1 != 0 && ecx_1 u< 0x100000)
        int32_t ebx_1 = *(arg2 + 0x14)
        
        if (*(arg2 + 0xc) + ebx_1 u<= edx)
            int32_t edx_1 = *(arg2 + 0x18)
            
            if (*(arg2 + 0x10) + edx_1 u<= ecx_1 && ebx_1 u<= 0xff
                    && ecx_1 - *(arg2 + 0x10) - edx_1 u<= 0xff)
                int32_t eax_6 = *(arg2 + 0x2c)
                
                if (eax_6 s>= 0 && eax_6 s< 3)
                    int32_t eax_7 = *(arg2 + 0x30)
                    
                    if (eax_7 s>= 0 && eax_7 s< 4)
                        _memset(arg1, 0, 0xc9e0)
                        *arg1 = *arg2
                        *(arg1 + 0x10) = *(arg2 + 0x10)
                        *(arg1 + 0x20) = *(arg2 + 0x20)
                        *(arg1 + 0x30) = *(arg2 + 0x30)
                        *(arg1 + 0x18) = *(arg2 + 8) - *(arg2 + 0x18) - *(arg2 + 0x10)
                        arg1[0x390] = 0xff
                        sub_6ed5e0(arg1)
                        int32_t result = sub_6eaa50(arg1)
                        
                        if (result s>= 0)
                            result = sub_6eadc0(arg1)
                            
                            if (result s>= 0)
                                int32_t eax_13 = *(arg2 + 0x3c)
                                
                                if (eax_13 s< 0 || eax_13 s> 0x1f)
                                    *(arg1 + 0x3c) = 0x1f
                                
                                *(arg1 + 0x378) = 0
                                *(arg1 + 0x37c) = 0
                                *(arg1 + 0x380) = 0xffffffff
                                *(arg1 + 0x384) = 0xffffffff
                                eax_13.b = *arg2
                                
                                if (eax_13.b u<= 3)
                                    if (eax_13.b != 3)
                                        arg1[0x391] = 0
                                        return 0
                                    
                                    eax_13.b = arg2[1]
                                    
                                    if (eax_13.b u<= 2 && (eax_13.b != 2 || arg2[2] u< 1))
                                        arg1[0x391] = 0
                                        return 0
                                
                                arg1[0x391] = 1
                                return 0
                        
                        sub_6ead60(arg1)
                        return result

return 0xfffffff6
