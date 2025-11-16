// 函数: sub_41bae0
// 地址: 0x41bae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s<= 0)
    arg3 = 0
else if (arg3 s>= 7)
    arg3 = 7

if ((&data_98be10)[arg3 * 8] == 0)
    return 0xffffffff

int32_t ebx = (&data_98be08)[arg3 * 8]
int32_t edx = 0

if (ebx s> 0)
    int32_t* edi_1 = (&data_98be18)[arg3 * 8]
    int32_t* eax_1 = edi_1
    
    do
        if (*eax_1 == arg2)
            if (edx != 0xffffffff && edi_1[edx * 2 + 1] == 0x56)
                int32_t edi_2 = (&data_98be04)[arg3 * 8]
                int32_t esi_1 = 0
                
                if (edi_2 s> 0)
                    int32_t* eax_4 = (&data_98be1c)[arg3 * 8] + (edx << 2)
                    
                    do
                        if (*eax_4 == arg4)
                            return *((&data_98be14)[arg3 * 8] + (esi_1 << 2))
                        
                        esi_1 += 1
                        eax_4 = &eax_4[ebx]
                    while (esi_1 s< edi_2)
                    
                    return 0xffffffff
            
            break
        
        edx += 1
        eax_1 = &eax_1[2]
    while (edx s< ebx)

return 0xffffffff
