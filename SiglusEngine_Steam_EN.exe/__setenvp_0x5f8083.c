// 函数: __setenvp
// 地址: 0x5f8083
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_20f4594 == 0)
    ___initmbctable()

char* esi = data_640fac
int32_t edi = 0

if (esi != 0)
    while (true)
        void* eax
        eax.b = *esi
        
        if (eax.b == 0)
            break
        
        if (eax.b != 0x3d)
            edi += 1
        
        esi = &esi[1] + _strlen(esi)
    
    char** edi_1 = sub_5f6a6e(edi + 1, 4)
    data_640fc8 = edi_1
    
    if (edi_1 != 0)
        char* esi_2 = data_640fac
        int32_t result
        
        if (*esi_2 != 0)
            do
                void* eax_3 = _strlen(esi_2)
                
                if (*esi_2 != 0x3d)
                    char* eax_4 = sub_5f6a6e(eax_3 + 1, 1)
                    *edi_1 = eax_4
                    
                    if (eax_4 == 0)
                        _free(data_640fc8)
                        data_640fc8 = 0
                        result = 0xffffffff
                        goto label_5f813f
                    
                    if (_strcpy_s(eax_4, eax_3 + 1, esi_2) != 0)
                        int32_t var_20
                        __builtin_memset(&var_20, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    edi_1 = &edi_1[1]
                
                esi_2 += eax_3 + 1
            while (*esi_2 != 0)
            
            esi_2 = data_640fac
        
        _free(esi_2)
        data_640fac = 0
        *edi_1 = nullptr
        result = 0
        data_20f4598 = 1
    label_5f813f:
        return result

return 0xffffffff
