// 函数: __wsetenvp
// 地址: 0x7559f9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = data_b94ef4
int32_t edi = 0

if (esi != 0)
    while (true)
        int16_t eax_2 = *esi
        
        if (eax_2 == 0)
            break
        
        if (eax_2 != 0x3d)
            edi += 1
        
        esi = &esi[_wcslen(esi) + 1]
    
    int16_t** edi_1 = sub_74cccf(edi + 1, 4)
    data_b94f3c = edi_1
    
    if (edi_1 != 0)
        int16_t* esi_2 = data_b94ef4
        int32_t result
        
        if (*esi_2 != 0)
            do
                int32_t ebx_1 = _wcslen(esi_2) + 1
                
                if (*esi_2 != 0x3d)
                    int16_t* eax_6 = sub_74cccf(ebx_1, 2)
                    *edi_1 = eax_6
                    
                    if (eax_6 == 0)
                        _free(data_b94f3c)
                        data_b94f3c = 0
                        result = 0xffffffff
                        goto label_755ab6
                    
                    if (_wcscpy_s(eax_6, ebx_1, esi_2) != 0)
                        int32_t var_20
                        __builtin_memset(&var_20, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    edi_1 = &edi_1[1]
                
                esi_2 = &esi_2[ebx_1]
            while (*esi_2 != 0)
            
            esi_2 = data_b94ef4
        
        _free(esi_2)
        data_b94ef4 = 0
        result = 0
        *edi_1 = nullptr
        data_4ecd2d8 = 1
    label_755ab6:
        return result

return 0xffffffff
