// 函数: sub_4439e9
// 地址: 0x4439e9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
char* esi = arg2
int32_t edi
int32_t var_10 = edi

if (zx.d(esi.w) == esi)
    return nullptr

if (esi s<= 0)
    int32_t esi_2 = not.d(esi)
    
    if (*(esi_2 + 0x10) == 3)
        int32_t edx_3 = *(esi_2 + 0x14)
        
        if (edx_3 u< *(arg1 + 0xa8) && *(esi_2 + 0x18) == 0 && *(esi_2 + 0x1c) == 0
                && *(esi_2 + 8) == 0xffffffff)
            void* edx_4 = *(*(arg1 + 0xb0) + (edx_3 << 2))
            int32_t eax_15
            eax_15.b = *(edx_4 + 0x28)
            eax_15.b &= 4
            char temp1_1 = eax_15.b
            eax_15.b = neg.b(eax_15.b)
            return not.d(sbb.d(eax_15, eax_15, temp1_1 != 0)) & edx_4
else
    int32_t var_8_1 = 0
    
    if (*(arg1 + 0x98) u> 0)
        void* ecx_1 = *(arg1 + 0x9c) + 0x2c
        
        while (true)
            void* eax_3
            
            if (*(ecx_1 + 0x14) != 0)
                eax_3 = *(*(arg1 + 0x38) + 0x10)
            else
                eax_3 = *(arg1 + 0x20)
            
            int32_t* eax_5 = eax_3 + *(eax_3 + *ecx_1 + 8)
            void* eax_6
            
            if (*eax_5 != 0)
                eax_6 = &eax_5[1]
            
            if (*eax_5 == 0 || eax_6 == 0)
                if (esi == 0)
                    break
            else if (esi != 0)
                int32_t eax_9
                
                while (true)
                    char ebx_1 = *eax_6
                    int32_t edx_2
                    edx_2.b = ebx_1
                    char temp2_1 = *esi
                    bool c_1 = ebx_1 u< temp2_1
                    
                    if (ebx_1 == temp2_1)
                        if (edx_2.b == 0)
                            eax_9 = 0
                            break
                        
                        ebx_1 = *(eax_6 + 1)
                        edx_2.b = ebx_1
                        char temp5_1 = esi[1]
                        c_1 = ebx_1 u< temp5_1
                        
                        if (ebx_1 == temp5_1)
                            eax_6 += 2
                            esi = &esi[2]
                            
                            if (edx_2.b != 0)
                                continue
                            
                            eax_9 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    eax_9 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                    break
                
                if (eax_9 == 0)
                    break
                
                esi = arg2
            
            var_8_1 += 1
            ecx_1 += 0x50
            
            if (var_8_1 u>= *(arg1 + 0x98))
                break
    
    if (var_8_1 != *(arg1 + 0x98))
        return var_8_1 * 0x50 + *(arg1 + 0x9c)

return nullptr
