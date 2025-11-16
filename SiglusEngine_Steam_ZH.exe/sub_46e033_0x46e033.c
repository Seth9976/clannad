// 函数: sub_46e033
// 地址: 0x46e033
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = nullptr
void* const var_8 = 0xffffffff
void* const ebx = arg1
void* eax = *(ebx + 4)

if (eax == 0 || *(eax + 4) != 4)
    return nullptr

void* eax_1 = *(eax + 0x1c)
void* var_c_1 = eax_1

if (eax_1 != 0)
    int32_t edi
    int32_t var_28_1 = edi
    
    while (true)
        void* edi_1 = *(var_c_1 + 8)
        
        if (edi_1 != 0 && *(edi_1 + 4) == 6 && *(edi_1 + 0x10) == 2)
            char* esi_1 = arg2
            char* eax_4 = *(*(edi_1 + 0x14) + 0x18)
            int32_t eax_7
            
            while (true)
                char edx = *eax_4
                arg1.b = edx
                char temp1_1 = *esi_1
                bool c_1 = edx u< temp1_1
                
                if (edx == temp1_1)
                    if (arg1.b == 0)
                        eax_7 = 0
                        break
                    
                    edx = eax_4[1]
                    arg1.b = edx
                    char temp4_1 = esi_1[1]
                    c_1 = edx u< temp4_1
                    
                    if (edx == temp4_1)
                        eax_4 = &eax_4[2]
                        esi_1 = &esi_1[2]
                        
                        if (arg1.b != 0)
                            continue
                        
                        eax_7 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_7 = sbb.d(sbb.d(eax_4, eax_4, c_1), 0xffffffff, c_2)
                break
            
            if (eax_7 == 0)
                void* result_1 = *(edi_1 + 0x18)
                
                if (*(result_1 + 0x3c) != eax_7 && (*(result_1 + 0x18) & 2) == 0)
                    void* eax_8 = *(result_1 + 0x1c)
                    arg1 = nullptr
                    void var_1c
                    
                    if (eax_8 != 0)
                        void* var_18
                        
                        if (sub_46b27d(*(eax_8 + 0x18), 0, &var_1c) s< 0)
                            arg1 = 0xffffffff
                        else
                            arg1 = var_18
                    void* eax_11 = arg1 & 0xffff0000
                    
                    if (eax_11 == 0 || eax_11 == (*(ebx + 0x10) & 0xffff0000))
                        uint32_t eax_13 = zx.d(arg1.w)
                        
                        if ((eax_13 == 0 || eax_13 == zx.d((*(ebx + 0x10)).w))
                                && (var_8 == 0xffffffff || arg1 u> var_8))
                            result = result_1
                            var_8 = arg1
        
        void* eax_15 = *(var_c_1 + 0xc)
        var_c_1 = eax_15
        
        if (eax_15 == 0)
            break

return result
