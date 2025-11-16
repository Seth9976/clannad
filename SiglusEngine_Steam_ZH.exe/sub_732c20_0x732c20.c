// 函数: sub_732c20
// 地址: 0x732c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg1
int32_t edi = *(edx + 0x1a0)
int32_t eax_1 = *(edx + 0x128) - 1

while (true)
    int32_t eax_2 = *(edx + 0x7c)
    int32_t ecx_1 = *(edx + 0x84)
    
    if (eax_2 s>= ecx_1 && (eax_2 != ecx_1 || *(edx + 0x80) u> *(edx + 0x88)))
        int32_t ebx
        int32_t var_30_2 = ebx
        int32_t i = 0
        void* esi = *(edx + 0xc4)
        int32_t i_1 = 0
        
        if (*(edx + 0x24) s> 0)
            do
                if (*(esi + 0x34) != 0)
                    int32_t ecx_2 = *(esi + 0xc)
                    int32_t eax_12 = (*(*(edx + 4) + 0x20))(arg1, *(edi + 0x48 + (i << 2)), 
                        *(arg1 + 0x88) * ecx_2, ecx_2, 0)
                    edx = arg1
                    uint32_t edi_2
                    
                    if (*(edx + 0x88) u>= eax_1)
                        edi_2 = modu.dp.d(0:(*(esi + 0x20)), *(esi + 0xc))
                        edx = arg1
                        
                        if (edi_2 == 0)
                            edi_2 = *(esi + 0xc)
                    else
                        edi_2 = *(esi + 0xc)
                    
                    int32_t eax_17 = *(*(edx + 0x1b4) + (i << 2) + 4)
                    int32_t eax_19 = *(arg2 + (i << 2))
                    int32_t ebx_2 = 0
                    int32_t var_8_1 = eax_19
                    int32_t var_14_1 = 0
                    
                    if (edi_2 s> 0)
                        int32_t ecx_3 = *(esi + 0x1c)
                        
                        do
                            int32_t edi_4 = *(eax_12 + (ebx_2 << 2))
                            int32_t ebx_3 = 0
                            int32_t var_10_1 = 0
                            
                            if (ecx_3 != 0)
                                bool cond:1_1
                                
                                do
                                    eax_17(edx, esi, edi_4, eax_19, ebx_3)
                                    ebx_3 += *(esi + 0x24)
                                    ecx_3 = *(esi + 0x1c)
                                    edi_4 -= 0xffffff80
                                    edx = arg1
                                    cond:1_1 = var_10_1 + 1 u< ecx_3
                                    var_10_1 += 1
                                    eax_19 = var_8_1
                                while (cond:1_1)
                            
                            ebx_2 = var_14_1 + 1
                            var_14_1 = ebx_2
                            int32_t edi_6 = var_8_1 + (*(esi + 0x28) << 2)
                            eax_19 = edi_6
                            var_8_1 = edi_6
                        while (ebx_2 s< edi_2)
                    
                    i = i_1
                
                i += 1
                esi += 0x58
                i_1 = i
            while (i s< *(edx + 0x24))
        
        *(edx + 0x88) += 1
        int32_t eax_23 = *(edx + 0x88)
        return sbb.d(eax_23, eax_23, eax_23 u< *(edx + 0x128)) + 4
    
    if ((**(edx + 0x1a8))(edx) == 0)
        break
    
    edx = arg1

return 0
