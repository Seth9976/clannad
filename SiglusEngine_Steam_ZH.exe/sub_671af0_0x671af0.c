// 函数: sub_671af0
// 地址: 0x671af0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 != 0)
    *(data_bac458 + 0x378) = 0
    char eax_6 = sub_671d30()
    int32_t ecx_5 = data_bac510
    int32_t edx_1 = 0
    int32_t edi_1 = 0
    void* eax_13
    
    if (eax_6 == 0)
        *(eax_1 + 0x338) = 1
        
        if (*(eax_1 + 0x228) != *(eax_1 + 0x22c))
            void* eax_25 = *(eax_1 + 0x22c)
            edx_1 = *(eax_25 - 0xe0)
            edi_1 = *(eax_25 - 0xdc)
            
            if (*(ecx_5 + 0x10bd8) == 1)
                edx_1 = neg.d(edx_1)
        
        eax_13 = *(eax_1 + 0x14c) + edi_1
        *(eax_1 + 0x340) = *(eax_1 + 0x148) + edx_1
        *(eax_1 + 0x344) = eax_13
        eax_13.b = 0
        return eax_13
    
    *(eax_1 + 0x338) = 0
    *(eax_1 + 0x348) = 0
    
    if (*(eax_1 + 0x228) != *(eax_1 + 0x22c))
        void* eax_8 = *(eax_1 + 0x22c)
        edx_1 = *(eax_8 - 0xe0)
        edi_1 = *(eax_8 - 0xdc)
        
        if (*(ecx_5 + 0x10bd8) == 1)
            edx_1 = neg.d(edx_1)
    
    int32_t eax_9 = *(eax_1 + 0x14c)
    *(eax_1 + 0x340) = *(eax_1 + 0x148) + edx_1
    int32_t* ecx_8 = data_bac458
    *(eax_1 + 0x344) = eax_9 + edi_1
    sub_62f9b0(ecx_8, ecx_8[0x57] - 0x158)
    void* esi_2 = data_bac458
    sub_54ae40(*(esi_2 + 0x15c) - 0xcc)
    eax_13 = data_bac4a0
    *(esi_2 + 0x15c) -= 0x158
    
    if (*(eax_13 + 0xa5) == 0)
        eax_13.b = 0
        return eax_13
    
    *(eax_13 + 0x19c) += 1
    
    if (timeGetTime() - *data_bac47c u> 0x64)
        void* eax_16 = data_bac4a0
        *(eax_16 + 0x19c) = 0
        *(eax_16 + 0x1a0) = 0
        eax_16.b = 0
        return eax_16
    
    void* ecx_12 = data_bac4a0
    int32_t esi_3 = *(ecx_12 + 0x1a0)
    
    if (*(ecx_12 + 0x19c) s>= esi_3 s/ 0x64)
        void* eax_20 = *(ecx_12 + 0xd4)
        *(ecx_12 + 0x19c) = 0
        
        if (eax_20 s>= 0x1e)
            eax_13 = eax_20 - 0x1d + esi_3
            *(ecx_12 + 0x1a0) = eax_13
            
            if (eax_13 s> 0xbb8)
                *(ecx_12 + 0x1a0) = 0xbb8
                eax_13.b = 0
                return eax_13
        else
            eax_13 = esi_3 + ((eax_20 * 5 - 0x96) << 1)
            *(ecx_12 + 0x1a0) = eax_13
            
            if (eax_13 s< 0)
                *(ecx_12 + 0x1a0) = 0
                eax_13.b = 0
                return eax_13
        
        eax_13.b = 0
        return eax_13
else
    int32_t* ecx_2 = data_bac458
    sub_62f9b0(ecx_2, ecx_2[0x57] - 0x158)
    void* esi_1 = data_bac458
    sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
    *(esi_1 + 0x15c) -= 0x158

int32_t eax_4
eax_4.b = 1
return eax_4
