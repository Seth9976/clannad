// 函数: sub_41ba70
// 地址: 0x41ba70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s<= 0)
    arg1 = 0
else if (arg1 s>= 7)
    arg1 = 7

int32_t eax = 0

if ((&data_98be10)[arg1 * 8] != 0)
    int32_t edx = (&data_98be08)[arg1 * 8]
    
    if (edx s> 0)
        int32_t* edi_1 = (&data_98be18)[arg1 * 8]
        int32_t* ecx_2 = edi_1
        
        do
            if (*ecx_2 == arg2)
                if (eax == 0xffffffff)
                    break
                
                int32_t ecx_3 = edi_1[eax * 2 + 1]
                
                if (ecx_3 == 0x56)
                    return 1
                
                if (ecx_3 == 0x53)
                    return 2
                
                return 0
            
            eax += 1
            ecx_2 = &ecx_2[2]
        while (eax s< edx)

return 0
