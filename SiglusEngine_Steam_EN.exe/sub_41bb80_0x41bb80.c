// 函数: sub_41bb80
// 地址: 0x41bb80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t esi = arg3

if (esi s<= 0)
    esi = 0
else if (esi s>= 7)
    esi = 7

if ((&data_98be10)[esi * 8] == 0)
    return 0xffffffff

int32_t edx = (&data_98be08)[esi * 8]
int32_t ecx = 0

if (edx s> 0)
    int32_t* ebx_1 = (&data_98be18)[esi * 8]
    int32_t* eax_1 = ebx_1
    
    do
        if (*eax_1 == arg2)
            if (ecx != 0xffffffff && ebx_1[ecx * 2 + 1] == 0x53)
                int32_t i = 0
                
                if ((&data_98be04)[esi * 8] s> 0)
                    char* eax_4 = arg4
                    int32_t* ebx_3 = (&data_98be1c)[esi * 8] + (ecx << 2)
                    
                    do
                        char* ecx_2 = *ebx_3 + (&data_98be20)[esi * 8]
                        int32_t eax_5
                        
                        if (arg5 != 0)
                            eax_5 = sub_4d1050(ecx_2, eax_4)
                        else
                            eax_5 = sub_4d0f10(ecx_2, eax_4)
                        
                        if (eax_5 == 0)
                            return *((&data_98be14)[esi * 8] + (i << 2))
                        
                        ebx_3 = &ebx_3[edx]
                        i += 1
                        eax_4 = arg4
                    while (i s< (&data_98be04)[esi * 8])
                    
                    return 0xffffffff
            
            break
        
        ecx += 1
        eax_1 = &eax_1[2]
    while (ecx s< edx)

return 0xffffffff
