// 函数: _strcat_s
// 地址: 0x766998
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result
void* eax_1

if (arg1 == 0)
    eax_1 = __errno()
    result = 0x16
else
    int32_t i_1 = arg2
    
    if (i_1 == 0)
        eax_1 = __errno()
        result = 0x16
    else
        char* esi_1 = arg3
        char* edx_1
        
        if (esi_1 != 0)
            edx_1 = arg1
            
            while (*edx_1 != 0)
                edx_1 = &edx_1[1]
                int32_t i_2 = i_1
                i_1 -= 1
                
                if (i_2 == 1)
                    break
        
        if (esi_1 == 0 || i_1 == 0)
            *arg1 = 0
            eax_1 = __errno()
            result = 0x16
        else
            void* edx_2 = edx_1 - esi_1
            int32_t i
            
            do
                char eax = *esi_1
                *(edx_2 + esi_1) = eax
                esi_1 = &esi_1[1]
                
                if (eax == 0)
                    break
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (i_1 != 0)
                return 0
            
            *arg1 = i_1.b
            eax_1 = __errno()
            result = 0x22

*eax_1 = result
__invalid_parameter_noinfo()
return result
