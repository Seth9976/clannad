// 函数: sub_4625c0
// 地址: 0x4625c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t* esi = *(arg1 + 4)

if (*(arg1 + 8) s<= 0)
    return 

void* eax = arg1

do
    char* edx_1 = esi[6]
    
    if (edx_1 != 0 && *edx_1 != 0)
        int32_t eax_1 = *esi
        void* edi_3 = ((eax_1 + 2) << 4) + arg1
        int32_t ecx = *edi_3
        
        if (ecx == 0)
            if (eax_1 u<= 0x3f)
                sub_460f20(eax_1, edx_1, eax_1 * 0x3920 + &data_f8d35c, 0, 0, 0)
        else if (ecx == 1)
            *edi_3 = 2
            
            if (*(edi_3 + 4) == ecx)
                int32_t ecx_1 = *esi
                int32_t eax_2 = esi[8]
                
                if (ecx_1 u<= 0x3f)
                    if (eax_2 != 0xffffffff)
                        int32_t eax_3 = *(eax_2 * 0x98 + 0x12c9340)
                        
                        if (eax_3 != 0)
                            if (eax_3 == 1)
                                sub_57d6a0(eax_3, *(eax_2 * 0x98 + 0x12c9344), ecx_1, 
                                    *(eax_2 * 0x98 + 0x12c9348))
                            else if (eax_3 == 2)
                                *(ecx_1 * 0x2d0 + 0x8fcb04) = 0xffffffff
                                *(ecx_1 * 0x2d0 + &data_8fcb08) = 0xffffffff
                            else if (eax_3 == 3)
                                sub_57d6a0(eax_3, *(eax_2 * 0x98 + 0x12c9344), ecx_1, 
                                    *(eax_2 * 0x98 + 0x12c9348))
                    else
                        sub_542980(ecx_1)
            
            sub_57e5a0(*esi, *(edi_3 + 0xc))
            
            if (arg2 != 0)
                int32_t ecx_3 = *esi
                
                if (*(ecx_3 * 0x1d4 + 0x1090b30) != 0 && ecx_3 u<= 0x3f)
                    *(ecx_3 * 0x2d0 + 0x8fcb0c) = *(ecx_3 * 0x2d0 + 0x8fcb14)
                    *(ecx_3 * 0x2d0 + 0x8fcb10) += *(ecx_3 * 0x3920 + 0xf8d2f0)
                    sub_57ea10(ecx_3)
        
        eax = arg1
    
    i += 1
    esi = &esi[0x16]
while (i s< *(eax + 8))
