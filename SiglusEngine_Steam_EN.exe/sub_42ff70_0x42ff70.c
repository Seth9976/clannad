// 函数: sub_42ff70
// 地址: 0x42ff70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* esi = *(arg3 + 0x50)

if (*(arg3 + 0x54) s<= 0)
    return 

arg1 = arg3

do
    int32_t edx_1 = *(esi + 0x170)
    
    if (edx_1 != 0)
        int32_t ecx = *(esi + 0x174)
        
        if (ecx s> 0)
            int32_t eax = *(esi + 0xc)
            
            if (eax s>= 0 && eax s< ecx)
                void* ecx_3 = eax * 0x30 + edx_1
                void* edi_1 = *(ecx_3 + 0x28)
                
                if (edi_1 != 0)
                    int32_t edx_2 = *(ecx_3 + 0x2c)
                    
                    if (edx_2 s> 0)
                        int32_t eax_1 = *(esi + 0x14)
                        
                        if ((eax_1 s>= 0 && eax_1 s< edx_2) || *(ecx_3 + 0x18) == 2)
                            if (*(ecx_3 + 0x18) != 2)
                                eax_1 *= 0xb8
                                edi_1 += eax_1
                            
                            void* var_20_1 = ecx_3
                            sub_42f8c0(eax_1, esi, arg3, ecx_3, edi_1, arg2, arg4, arg5, arg6)
            
            arg1 = arg3
    
    i += 1
    esi += 0x178
while (i s< *(arg1 + 0x54))
