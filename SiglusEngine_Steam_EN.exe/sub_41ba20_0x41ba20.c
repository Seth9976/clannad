// 函数: sub_41ba20
// 地址: 0x41ba20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s<= 0)
    arg1 = 0
else if (arg1 s>= 7)
    arg1 = 7

int32_t eax = 0

if ((&data_98be10)[arg1 * 8] != 0)
    int32_t edx = (&data_98be04)[arg1 * 8]
    
    if (edx s> 0)
        int32_t* ecx_2 = (&data_98be14)[arg1 * 8]
        
        do
            if (*ecx_2 == arg2)
                if (eax != 0xffffffff)
                    return 1
                
                break
            
            eax += 1
            ecx_2 = &ecx_2[1]
        while (eax s< edx)

return 0
