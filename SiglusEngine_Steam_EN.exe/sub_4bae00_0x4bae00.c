// 函数: sub_4bae00
// 地址: 0x4bae00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 0)
    int32_t eax_1 = sub_4cfc80("PACK")
    int32_t eax_2
    
    if (eax_1 s> 0)
        eax_2 = sub_4d0fe0(eax_1.b, "PACK", arg3, eax_1)
    
    if (eax_1 s<= 0 || eax_2 == 0)
        uint32_t dwBytes = *(arg3 + 8)
        
        if (dwBytes != 0)
            void* eax_5 = *(arg3 + 0xc) + arg3
            HGLOBAL hMem = GlobalAlloc(GHND, dwBytes)
            char* eax_6 = GlobalLock(hMem)
            *arg2 = hMem
            *arg4 = eax_6
            void* esi_2 = &arg3[0x10]
            char* edi_1 = eax_6
            int16_t edx = 0
            
            while (esi_2 s< eax_5)
                edx:1.b = edx:1.b
                
                if (edx:1.b != 0)
                    if ((edx.b & 0x80) == 0)
                        int32_t eax_7
                        eax_7.w = *esi_2
                        edi_1 =
                            __builtin_memcpy(edi_1, edi_1 - ((eax_7 u>> 4) + 1), (eax_7 & 0xf) + 2)
                        esi_2 += 2
                    else
                        *edi_1 = *esi_2
                        edi_1 = &edi_1[1]
                        esi_2 += 1
                    
                    edx.b <<= 1
                    edx:1.b -= 1
                else
                    edx.b = *esi_2
                    esi_2 += 1
                    edx:1.b = 8
            
            return dwBytes

return 0
