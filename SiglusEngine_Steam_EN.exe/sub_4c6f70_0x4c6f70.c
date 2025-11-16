// 函数: sub_4c6f70
// 地址: 0x4c6f70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
HDC eax_3 = GetDC(data_7027bc)
HGDIOBJ h_1

if (arg3 u> 0xff)
    h_1 = data_702774

HGDIOBJ h

if (arg3 u<= 0xff || h_1 == 0)
    h = data_1333e4c
else
    h = h_1

SelectObject(eax_3, h)
GLYPHMETRICS lpgm
uint32_t cjBuffer = GetGlyphOutlineA(eax_3, arg3, GGO_BITMAP, &lpgm, 0, nullptr, &data_63e78c)

if (cjBuffer != 0xffffffff)
    uint32_t eax_5 =
        GetGlyphOutlineA(eax_3, arg3, GGO_BITMAP, &lpgm, cjBuffer, data_20a1b54, &data_63e78c)
    HWND hWnd = data_7027bc
    
    if (eax_5 != 0xffffffff)
        ReleaseDC(hWnd, eax_3)
        uint32_t gmBlackBoxX = lpgm.gmBlackBoxX
        int32_t edi_2 = data_1c041f4 + lpgm.gmptGlyphOrigin.y
        uint32_t gmBlackBoxY = lpgm.gmBlackBoxY
        int32_t x = lpgm.gmptGlyphOrigin.x
        uint32_t gmBlackBoxX_1 = gmBlackBoxX
        uint32_t var_34_1 = gmBlackBoxY
        int32_t var_20_1 = edi_2
        
        if (gmBlackBoxX != 0 && gmBlackBoxY != 0)
            char* eax_6 = data_20a1b54
            char* ecx_3 = data_20a1b58 + 4
            _memset(ecx_3, 0, gmBlackBoxY * gmBlackBoxX)
            
            if (arg3 != 0x20 && arg3 != 0x8140)
                int32_t j_7 = (gmBlackBoxX + 7) s>> 3
                int32_t k_1 = gmBlackBoxX & 7
                uint32_t i = gmBlackBoxY
                char* esi_1 = eax_6
                char* edi_3 = ecx_3
                
                do
                    int32_t j = j_7
                    
                    do
                        int32_t eax_15
                        eax_15.b = *esi_1
                        esi_1 = &esi_1[1]
                        int16_t ebx_1
                        ebx_1.b = eax_15.b
                        
                        if (k_1 == 0 || j != 1)
                            eax_15:1.b = ebx_1.b
                            ebx_1:1.b = ebx_1.b
                            int32_t eax_17
                            eax_17.w = ebx_1
                            *edi_3 = eax_17 & 0x10204080
                            void* edi_4 = &edi_3[4]
                            *edi_4 = eax_17 & 0x1020408
                            edi_3 = edi_4 + 4
                        else
                            int32_t k = k_1
                            
                            if (k s< 4)
                                goto label_4c713f
                            
                            eax_15:1.b = ebx_1.b
                            ebx_1:1.b = ebx_1.b
                            int32_t eax_16
                            eax_16.w = ebx_1
                            *edi_3 = eax_16 & 0x10204080
                            edi_3 = &edi_3[4]
                            int32_t k_2 = k
                            k -= 4
                            
                            if (k_2 != 4)
                                ebx_1.b <<= 4
                                eax_15.b = ebx_1.b
                            label_4c713f:
                                
                                do
                                    eax_15.b &= 0x80
                                    *edi_3 = eax_15.b
                                    edi_3 = &edi_3[1]
                                    ebx_1.b <<= 1
                                    eax_15.b = ebx_1.b
                                    k -= 1
                                while (k != 0)
                        
                        j -= 1
                    while (j != 0)
                    
                    esi_1 = &esi_1[((gmBlackBoxX + 0x1f) s>> 3 & 0xfffffffc) - j_7]
                    i -= 1
                while (i != 0)
                
                gmBlackBoxX = gmBlackBoxX_1
                gmBlackBoxY = var_34_1
                edi_2 = var_20_1
            
            int32_t eax_20 = data_1c041fc
            int16_t* ecx_12
            
            if (eax_20 != 1)
                if (eax_20 != 2)
                    int16_t* ecx_25 = data_20a1b58
                    bool cond:1 = edi_2 s> data_1c04200
                    *ecx_25 = gmBlackBoxX.w
                    
                    if (cond:1)
                        edi_2 = data_1c04200
                    
                    ecx_25[1] = gmBlackBoxY.w
                    *arg2 = x
                    *arg4 = edi_2
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return ecx_25
                
                char* edi_8 = data_20a1b58 + 4
                int32_t esi_8 = data_20a1b5c + 4
                int32_t ecx_13 = data_1c04200 << 2
                int32_t eax_32 = var_20_1
                
                if (data_1c041f8 == 0)
                    if (eax_32 s> ecx_13)
                        eax_32 = ecx_13
                    
                    sub_4d1ba0(eax_32, ecx_13 * ecx_13, esi_8, 0)
                    uint32_t i_8 = var_34_1
                    char* esi_10 = esi_8 + (ecx_13 - eax_32) * ecx_13 + x
                    
                    if (i_8 s> 0)
                        uint32_t i_1
                        
                        do
                            if (gmBlackBoxX s> 0)
                                uint32_t eax_42 = gmBlackBoxX
                                uint32_t j_1
                                
                                do
                                    if (*edi_8 != 0)
                                        *esi_10 = 1
                                    
                                    edi_8 = &edi_8[1]
                                    esi_10 = &esi_10[1]
                                    j_1 = eax_42
                                    eax_42 -= 1
                                while (j_1 != 1)
                            
                            esi_10 = &esi_10[ecx_13 - gmBlackBoxX]
                            i_1 = i_8
                            i_8 -= 1
                        while (i_1 != 1)
                else
                    if (eax_32 s> ecx_13)
                        eax_32 = ecx_13
                    
                    sub_4d1ba0(eax_32, ecx_13 * ecx_13, esi_8, 0)
                    uint32_t j_8 = gmBlackBoxX_1
                    int32_t var_20_5 = ecx_13 - j_8
                    int32_t* esi_9 = esi_8 + (ecx_13 - eax_32) * ecx_13 + x
                    int32_t* eax_37 = &esi_9[data_1c04200]
                    int32_t* ecx_15 = &eax_37[data_1c04200]
                    int32_t* edx_7 = &ecx_15[data_1c04200]
                    
                    if (var_34_1 s> 0)
                        uint32_t i_2
                        
                        do
                            if (j_8 s> 0)
                                uint32_t j_2
                                
                                do
                                    if (*edi_8 != 0)
                                        *esi_9 = 0x1010101
                                        *eax_37 = 0x1010101
                                        *ecx_15 = 0x1010101
                                        *edx_7 = 0x1010101
                                    
                                    edi_8 = &edi_8[1]
                                    esi_9 += 1
                                    eax_37 += 1
                                    ecx_15 += 1
                                    edx_7 += 1
                                    j_2 = j_8
                                    j_8 -= 1
                                while (j_2 != 1)
                                j_8 = gmBlackBoxX_1
                            
                            esi_9 += var_20_5
                            eax_37 += var_20_5
                            ecx_15 += var_20_5
                            edx_7 += var_20_5
                            i_2 = var_34_1
                            var_34_1 -= 1
                        while (i_2 != 1)
                
                ecx_12 = data_20a1b5c
                void* edx_12 = &ecx_12[2 + data_1c04200 * 2]
                void* esi_11 = &ecx_12[2]
                void* eax_43 = ecx_13 + edx_12
                void* edi_9 = eax_43 + ecx_13
                void* ebx_7 = &ecx_12[2]
                
                if (ecx_13 s> 0)
                    int32_t ecx_21 = ((ecx_13 - 1) u>> 2) + 1
                    int32_t var_3c_2 = ecx_21
                    int32_t i_6 = ecx_21
                    int32_t i_3
                    
                    do
                        int32_t j_6 = ecx_21
                        int32_t j_3
                        
                        do
                            ecx_21.b = *(edi_9 + 3)
                            ecx_21.b += *(edi_9 + 2)
                            ecx_21.b += *(edi_9 + 1)
                            ecx_21.b += *(eax_43 + 3)
                            ecx_21.b += *(eax_43 + 2)
                            ecx_21.b += *(eax_43 + 1)
                            ecx_21.b += *(edx_12 + 3)
                            ecx_21.b += *(edx_12 + 2)
                            ecx_21.b += *(edx_12 + 1)
                            ecx_21.b += *(esi_11 + 3)
                            ecx_21.b += *(esi_11 + 2)
                            ecx_21.b += *(esi_11 + 1)
                            ecx_21.b += *edi_9
                            edi_9 += 4
                            ecx_21.b += *eax_43
                            eax_43 += 4
                            ecx_21.b += *edx_12
                            edx_12 += 4
                            ecx_21.b += *esi_11
                            esi_11 += 4
                            *ebx_7 = ecx_21.b
                            ebx_7 += 1
                            j_3 = j_6
                            j_6 -= 1
                        while (j_3 != 1)
                        void* ecx_22 = ecx_13 * 3
                        esi_11 += ecx_22
                        edx_12 += ecx_22
                        eax_43 += ecx_22
                        edi_9 += ecx_22
                        i_3 = i_6
                        i_6 -= 1
                        ecx_21 = var_3c_2
                    while (i_3 != 1)
                    ecx_12 = data_20a1b5c
            else
                int32_t eax_22 = data_1c04200 * 2
                char* edi_6 = data_20a1b58 + 4
                int32_t ecx_6 = var_20_1
                int32_t esi_3 = data_20a1b5c + 4
                
                if (ecx_6 s> eax_22)
                    ecx_6 = eax_22
                
                sub_4d1ba0(eax_22, eax_22 * eax_22, esi_3, 0)
                uint32_t i_9 = var_34_1
                int16_t* esi_4 = esi_3 + (eax_22 - ecx_6) * eax_22 + x
                int16_t* eax_27 = &esi_4[data_1c04200]
                void* ecx_9 = eax_22 - gmBlackBoxX
                void* var_2c_2 = ecx_9
                
                if (i_9 s> 0)
                    uint32_t i_4
                    
                    do
                        if (gmBlackBoxX s> 0)
                            uint32_t ecx_10 = gmBlackBoxX
                            uint32_t j_4
                            
                            do
                                if (*edi_6 != 0)
                                    *esi_4 = 0x101
                                    *eax_27 = 0x101
                                
                                edi_6 = &edi_6[1]
                                esi_4 += 1
                                eax_27 += 1
                                j_4 = ecx_10
                                ecx_10 -= 1
                            while (j_4 != 1)
                            ecx_9 = var_2c_2
                        
                        esi_4 += ecx_9
                        eax_27 += ecx_9
                        i_4 = i_9
                        i_9 -= 1
                    while (i_4 != 1)
                
                int16_t* esi_5 = data_20a1b5c
                char* esi_6 = &esi_5[2]
                void* ecx_11 = esi_6
                void* edx_3 = &esi_6[eax_22]
                
                if (eax_22 s<= 0)
                    ecx_12 = esi_5
                else
                    int32_t eax_30 = ((eax_22 - 1) u>> 1) + 1
                    int32_t var_2c_4 = eax_30
                    int32_t i_7 = eax_30
                    int32_t i_5
                    
                    do
                        int32_t j_9 = eax_30
                        int32_t j_5
                        
                        do
                            eax_30.b = *(edx_3 + 1)
                            eax_30.b += *(ecx_11 + 1)
                            eax_30.b += *edx_3
                            edx_3 += 2
                            eax_30.b += *ecx_11
                            ecx_11 += 2
                            *esi_6 = eax_30.b
                            esi_6 = &esi_6[1]
                            j_5 = j_9
                            j_9 -= 1
                        while (j_5 != 1)
                        eax_30 = var_2c_4
                        ecx_11 += eax_22
                        edx_3 += eax_22
                        i_5 = i_7
                        i_7 -= 1
                    while (i_5 != 1)
                    ecx_12 = data_20a1b5c
            
            int32_t eax_44 = data_1c04200
            *ecx_12 = eax_44.w
            ecx_12[1] = eax_44.w
            *arg2 = 0
            *arg4 = eax_44
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return ecx_12
    else
        ReleaseDC(hWnd, eax_3)
        
        if (data_641b6c == 0)
            int32_t var_5c_4 = 0
            char const* const var_60_4 = "Font Error"
            MessageBoxA(data_7027bc, "Font Error\n\nFailed to get Glyph Outline Data.\n", 
                "Font Error", MB_OK)
            data_641b6c = 1
else
    ReleaseDC(data_7027bc, eax_3)
    
    if (data_641b6c == 0)
        int32_t var_5c_2 = 0
        char const* const var_60_2 = "Font Error"
        MessageBoxA(data_7027bc, "Font Error\n\nFailed to get Glyph Outline Size.\n", "Font Error", 
            MB_OK)
        data_641b6c = 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
