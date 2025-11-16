// 函数: sub_723ef0
// 地址: 0x723ef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx = arg2
int32_t* esi = arg1

while (true)
    int32_t eax_1 = esi[0x1d]
    int32_t edx
    
    if (eax_1 u< 0x106)
        sub_723770(esi)
        eax_1 = esi[0x1d]
        
        if (eax_1 u< 0x106 && ebx == 0)
            break
        
        if (eax_1 == 0)
            if (esi[0x1a] != 0)
                edx.b = *(esi[0x1b] + esi[0xe] - 1)
                *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
                esi[0x5a6][esi[0x5a8]] = edx.b
                esi[0x5a8] += 1
                uint32_t eax_51 = zx.d(edx.b)
                esi[eax_51 + 0x25].w += 1
                esi[0x1a] = 0
            
            int32_t ecx_33 = esi[0x1b]
            int32_t eax_52 = 2
            
            if (ecx_33 u< 2)
                eax_52 = ecx_33
            
            esi[0x5ad] = eax_52
            
            if (ebx == 4)
                int32_t eax_53 = esi[0x17]
                void* edx_11
                
                if (eax_53 s< 0)
                    edx_11 = nullptr
                else
                    edx_11 = esi[0xe] + eax_53
                
                sub_7276b0(eax_53, edx_11, esi, ecx_33 - eax_53, 1)
                void* ecx_36 = *esi
                esi[0x17] = esi[0x1b]
                sub_722b30(ecx_36)
                int32_t ecx_37
                ecx_37.b = *(*esi + 0x10) != 0
                return ecx_37 + 2
            
            if (esi[0x5a8] != 0)
                int32_t eax_57 = esi[0x17]
                void* edx_13
                
                if (eax_57 s< 0)
                    edx_13 = nullptr
                else
                    edx_13 = esi[0xe] + eax_57
                
                sub_7276b0(eax_57, edx_13, esi, ecx_33 - eax_57, 0)
                void* ecx_40 = *esi
                esi[0x17] = esi[0x1b]
                sub_722b30(ecx_40)
            
            if (esi[0x5a8] == 0 || *(*esi + 0x10) != 0)
                return 1
            
            break
    
    uint32_t edi_1 = 0
    
    if (eax_1 u>= 3)
        int32_t edi_2 = esi[0x1b]
        int32_t edx_2 = esi[0xd] & edi_2
        int32_t ecx_4 = esi[0x10]
        int32_t ebx_4 = (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + edi_2 + 2))) & esi[0x15]
        int32_t eax_4 = esi[0x11]
        esi[0x12] = ebx_4
        ebx = arg2
        *(ecx_4 + (edx_2 << 1)) = *(eax_4 + (ebx_4 << 1))
        edi_1 = zx.d(*(esi[0x10] + ((esi[0x1b] & esi[0xd]) << 1)))
        *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
    
    esi[0x1e] = esi[0x18]
    esi[0x19] = esi[0x1c]
    esi[0x18] = 2
    
    if (edi_1 != 0 && esi[0x1e] u< esi[0x20] && esi[0x1b] - edi_1 u<= esi[0xb] - 0x106)
        char* eax_13
        eax_13, edx = sub_7235f0(esi, edi_1)
        esi[0x18] = eax_13
        
        if (eax_13 u<= 5)
            if (esi[0x22] == 1)
                esi[0x18] = 2
            else if (eax_13 == 3 && esi[0x1b] - esi[0x1c] u> 0x1000)
                esi[0x18] = 2
    
    int32_t eax_16 = esi[0x1e]
    
    if (eax_16 u>= 3 && esi[0x18] u<= eax_16)
        edx.b = eax_16.b
        eax_16.w = esi[0x1b].w
        eax_16.w -= esi[0x19].w
        edx.b -= 3
        eax_16.w -= 1
        int16_t ebx_5 = eax_16.w
        int32_t* edi_4 = esi[0x1d] + esi[0x1b] - 3
        arg1 = edi_4
        *(esi[0x5a9] + (esi[0x5a8] << 1)) = ebx_5
        esi[0x5a6][esi[0x5a8]] = edx.b
        esi[0x5a8] += 1
        uint32_t eax_20 = zx.d(*(zx.d(edx.b) + 0xadd300))
        esi[eax_20 + 0x126].w += 1
        uint32_t eax_21 = zx.d(ebx_5 - 1)
        uint32_t eax_22
        
        if (ebx_5 - 1 u>= 0x100)
            eax_22 = zx.d(*((eax_21 u>> 7) + 0xadd500))
        else
            eax_22 = zx.d(*(eax_21 + 0xadd400))
        
        esi[eax_22 + 0x262].w += 1
        int32_t ecx_15
        ecx_15.b = esi[0x5a8] == esi[0x5a7] - 1
        int32_t ecx_16 = esi[0x1e]
        esi[0x1d] += 1 - ecx_16
        esi[0x1e] = ecx_16 - 2
        int32_t i
        
        do
            esi[0x1b] += 1
            int32_t ebx_7 = esi[0x1b]
            
            if (ebx_7 u<= edi_4)
                int32_t ecx_18 = esi[0x10]
                int32_t edi_8 =
                    (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + ebx_7 + 2))) & esi[0x15]
                int32_t edx_5 = esi[0xd] & ebx_7
                int32_t eax_30 = esi[0x11]
                esi[0x12] = edi_8
                edi_4 = arg1
                *(ecx_18 + (edx_5 << 1)) = *(eax_30 + (edi_8 << 1))
                *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
            
            i = esi[0x1e]
            esi[0x1e] -= 1
        while (i != 1)
        esi[0x1b] += 1
        int32_t ecx_20 = esi[0x1b]
        ebx = arg2
        esi[0x1a] = 0
        esi[0x18] = 2
        
        if (ecx_15 == 0)
            continue
        else
            int32_t eax_33 = esi[0x17]
            void* edx_7
            
            if (eax_33 s< 0)
                edx_7 = nullptr
            else
                edx_7 = esi[0xe] + eax_33
            
            sub_7276b0(eax_33, edx_7, esi, ecx_20 - eax_33, 0)
            void* ecx_23 = *esi
            esi[0x17] = esi[0x1b]
            sub_722b30(ecx_23)
            
            if (*(*esi + 0x10) == 0)
                break
            
            continue
    
    if (esi[0x1a] == 0)
        esi[0x1b] += 1
        esi[0x1d] -= 1
        esi[0x1a] = 1
    else
        edx.b = *(esi[0x1b] + esi[0xe] - 1)
        *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
        esi[0x5a6][esi[0x5a8]] = edx.b
        esi[0x5a8] += 1
        uint32_t eax_40 = zx.d(edx.b)
        esi[eax_40 + 0x25].w += 1
        
        if (esi[0x5a8] == esi[0x5a7] - 1)
            int32_t ecx_27 = esi[0x17]
            void* edx_9
            
            if (ecx_27 s< 0)
                edx_9 = nullptr
            else
                edx_9 = esi[0xe] + ecx_27
            
            int32_t eax_44 = esi[0x1b] - ecx_27
            sub_7276b0(eax_44, edx_9, esi, eax_44, 0)
            void* ecx_29 = *esi
            esi[0x17] = esi[0x1b]
            sub_722b30(ecx_29)
        
        void* eax_46 = *esi
        esi[0x1b] += 1
        esi[0x1d] -= 1
        
        if (*(eax_46 + 0x10) == 0)
            return 0

return 0
