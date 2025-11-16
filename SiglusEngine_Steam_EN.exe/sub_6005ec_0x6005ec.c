// 函数: sub_6005ec
// 地址: 0x6005ec
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0 && arg3 != 0)
    if (*arg2 != 0)
        void* var_14
        sub_5f1b77(&var_14, arg4)
        int32_t result
        
        if (*(var_14 + 0xa8) != 0)
            if (sub_5f92dc(*arg2, &var_14) == 0)
                int32_t cchWideChar_1
                cchWideChar_1.b = arg1 != 0
                result = 1
                
                if (MultiByteToWideChar(*(var_14 + 4), MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, 
                        1, arg1, cchWideChar_1) == 0)
                    result = 0xffffffff
                    *__errno() = 0x2a
            else
                void* edi_1 = var_14
                bool cond:0_1
                
                if (*(edi_1 + 0x74) s<= 1)
                label_60068b:
                    cond:0_1 = arg3 u< *(edi_1 + 0x74)
                label_60068e:
                    
                    if (cond:0_1 || arg2[1] == 0)
                        result = 0xffffffff
                        *__errno() = 0x2a
                    else
                        result = *(edi_1 + 0x74)
                else
                    int32_t temp0_1 = *(edi_1 + 0x74)
                    cond:0_1 = arg3 u< temp0_1
                    
                    if (arg3 s< temp0_1)
                        goto label_60068e
                    
                    int32_t cchWideChar
                    cchWideChar.b = arg1 != 0
                    int32_t eax_7 = MultiByteToWideChar(*(edi_1 + 4), 
                        MB_ERR_INVALID_CHARS | MB_PRECOMPOSED, arg2, *(edi_1 + 0x74), arg1, 
                        cchWideChar)
                    edi_1 = var_14
                    
                    if (eax_7 == 0)
                        goto label_60068b
                    
                    result = *(edi_1 + 0x74)
        else
            if (arg1 != 0)
                *arg1 = zx.w(*arg2)
            
            result = 1
        
        char var_8
        void* var_c
        
        if (var_8 != 0)
            *(var_c + 0x70) &= 0xfffffffd
        return result
    
    if (arg1 != 0)
        *arg1 = 0

return 0
