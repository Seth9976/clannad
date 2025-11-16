// 函数: sub_41f7b0
// 地址: 0x41f7b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* esi = &arg1[0x24]
data_13570f0 = *(arg1 + 0x14)

if (arg2 - 0x24 s> 0)
    do
        uint32_t eax_1 = zx.d(i.b)
        esi += 1
        i += 1
        eax_1.b = *(eax_1 + 0x610a70)
        *(esi - 1) ^= eax_1.b
    while (i s< arg2 - 0x24)

BOOL eax_2 = sub_4d0f10(arg1, "FILESET")

if (eax_2 != 0)
    data_13570f0 = 0
else
    eax_2 = sub_4bb540(eax_2, &data_13570f4, &arg1[0x24], &data_13570f8)
    
    if (data_13570f0 s> 0)
        eax_2 = sub_4d6560(eax_2, eax_2, data_13570f4, "AvgFileSet")
        void* esi_1 = data_13570f8
        int32_t edi_1 = 0
        
        if (data_13570f0 s> 0)
            void* edx_2 = esi_1 + 0x60
            int32_t* eax_4
            
            while (true)
                char* ecx_3 = edx_2 - 0x40
                
                if (edx_2 != 0x40)
                    while (true)
                        void* eax_3
                        eax_3.b = *ecx_3
                        
                        if (eax_3.b u>= 0x80 && (eax_3.b u< 0xa0 || eax_3.b u> 0xdf)
                                && eax_3.b u< 0xfe)
                            ecx_3 = &ecx_3[2]
                            continue
                        
                        if (eax_3.b == 0)
                            break
                        
                        if (eax_3.b u>= 0x61 && eax_3.b u<= 0x7a)
                            eax_3.b -= 0x20
                            *ecx_3 = eax_3.b
                        
                        ecx_3 = &ecx_3[1]
                
                *edx_2 += esi_1
                int32_t i_1 = 0
                eax_4 = *edx_2
                
                if (*(edx_2 - 4) s> 0)
                    do
                        *eax_4 += esi_1
                        eax_4 = &eax_4[1]
                        i_1 += 1
                    while (i_1 s< *(edx_2 - 4))
                
                edi_1 += 1
                edx_2 += 0x64
                
                if (edi_1 s>= data_13570f0)
                    break
            
            return eax_4

return eax_2
