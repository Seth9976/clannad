// 函数: sub_4288c5
// 地址: 0x4288c5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t eax = *esi
int32_t edi
int32_t var_10 = edi

if (eax u>= 0x46580200 && (eax u<= 0x46580201 || eax == 0x54580100))
    int32_t eax_1 = sub_46ad8d(esi, 0x434c5846, arg2, nullptr)
    
    if (eax_1 s>= 0 && eax_1 != 1)
        int32_t eax_2 = sub_46ad8d(esi, 0x54494c43, arg3, nullptr)
        
        if (eax_2 s>= 0 && eax_2 != 1)
            int32_t* eax_3 = *arg2
            
            if (eax_3 != 0 && *arg3 != 0)
                int32_t esi_1 = *eax_3
                void* eax_4 = &eax_3[1]
                int32_t edi_2 = 0
                
                if (esi_1 u> 0)
                    while (true)
                        int32_t ecx_1 = *(eax_4 + 4)
                        arg1 = eax_4 + 8
                        int32_t result = sub_428828(ecx_1, &arg1)
                        
                        if (result s< 0)
                            return result
                        
                        result = sub_428888(&arg1)
                        
                        if (result s< 0)
                            return result
                        
                        edi_2 += 1
                        
                        if (edi_2 u>= esi_1)
                            break
                        
                        eax_4 = arg1
                
                return 0

return 0x80004005
