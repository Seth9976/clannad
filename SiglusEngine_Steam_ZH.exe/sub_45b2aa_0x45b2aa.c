// 函数: sub_45b2aa
// 地址: 0x45b2aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
void* var_a4 = arg3
int32_t result

if (arg2 == 0 || arg3 == 0)
    result = 0x8876086c
else
    int32_t edi
    int32_t var_b0_1 = edi
    *(arg1 + 8) = arg2
    (*(*arg2 + 4))(arg2)
    
    if (data_b972fc != 0)
        goto label_45b52e
    
    data_b972fc = 1
    sub_4078b6()
    HMODULE hModule
    
    if (data_b95af8 == 0)
    label_45b394:
        HMODULE hModule_1 = GetModuleHandleA("usp10.dll")
        
        if (hModule_1 == 0)
            hModule_1 = LoadLibraryA("usp10.dll")
            
            if (hModule_1 == 0)
                goto label_45b52e
        
        data_b9730c = 1
        int32_t eax_6 = GetProcAddress(hModule_1, "ScriptItemize")
        data_b97310 = eax_6
        
        if (eax_6 == 0)
            result = 0x8007000e
        else
            int32_t eax_7 = GetProcAddress(hModule_1, "ScriptShape")
            data_b97314 = eax_7
            
            if (eax_7 == 0)
                result = 0x8007000e
            else
                int32_t eax_8 = GetProcAddress(hModule_1, "ScriptPlace")
                data_b97318 = eax_8
                
                if (eax_8 == 0)
                    result = 0x8007000e
                else
                    int32_t eax_9 = GetProcAddress(hModule_1, "ScriptBreak")
                    data_b9731c = eax_9
                    
                    if (eax_9 == 0)
                        result = 0x8007000e
                    else
                        int32_t eax_10 = GetProcAddress(hModule_1, "ScriptJustify")
                        data_b97320 = eax_10
                        
                        if (eax_10 == 0)
                            result = 0x8007000e
                        else
                            int32_t eax_11 = GetProcAddress(hModule_1, "ScriptTextOut")
                            data_b97324 = eax_11
                            
                            if (eax_11 == 0)
                                result = 0x8007000e
                            else
                                int32_t eax_12 = GetProcAddress(hModule_1, "ScriptGetProperties")
                                data_b97328 = eax_12
                                
                                if (eax_12 == 0)
                                    result = 0x8007000e
                                else
                                    int32_t eax_13 = GetProcAddress(hModule_1, "ScriptFreeCache")
                                    data_b9732c = eax_13
                                    
                                    if (eax_13 == 0)
                                        result = 0x8007000e
                                    else
                                        int32_t eax_14 = GetProcAddress(hModule_1, 
                                            "ScriptRecordDigitSubstitution")
                                        data_b97330 = eax_14
                                        
                                        if (eax_14 == 0)
                                            result = 0x8007000e
                                        else
                                            int32_t eax_15 = GetProcAddress(hModule_1, 
                                                "ScriptApplyDigitSubstitution")
                                            data_b97334 = eax_15
                                            
                                            if (eax_15 == 0)
                                                result = 0x8007000e
                                            else
                                                int32_t eax_16 = GetProcAddress(hModule_1, 
                                                    "ScriptGetFontProperties")
                                                data_b97338 = eax_16
                                                
                                                if (eax_16 == 0)
                                                    result = 0x8007000e
                                                else
                                                    int32_t eax_17 = GetProcAddress(hModule_1, 
                                                        "ScriptStringAnalyse")
                                                    data_b9733c = eax_17
                                                    
                                                    if (eax_17 == 0)
                                                        result = 0x8007000e
                                                    else
                                                        int32_t eax_18 = GetProcAddress(hModule_1, 
                                                            "ScriptStringOut")
                                                        data_b97340 = eax_18
                                                        
                                                        if (eax_18 == 0)
                                                            result = 0x8007000e
                                                        else
                                                            int32_t eax_19 = GetProcAddress(
                                                                hModule_1, "ScriptStringFree")
                                                            data_b97344 = eax_19
                                                            
                                                            if (eax_19 == 0)
                                                                result = 0x8007000e
                                                            else
                                                                int32_t eax_20 = GetProcAddress(
                                                                    hModule_1, "ScriptStringCPtoX")
                                                                data_b97348 = eax_20
                                                                
                                                                if (eax_20 == 0)
                                                                    result = 0x8007000e
                                                                else
                                                                    int32_t eax_21 = GetProcAddress(
                                                                        hModule_1, "ScriptString_pSize")
                                                                    data_b9734c = eax_21
                                                                    
                                                                    if (eax_21 == 0)
                                                                        result = 0x8007000e
                                                                    else
                                                                        data_b97328(0xb9735c, &hModule)
                                                                        data_b97330(0x400, 0xb97350)
                                                                    label_45b52e:
                                                                        HDC hdc_4 = CreateCompatibleDC(nullptr)
                                                                        *(arg1 + 0x10) = hdc_4
                                                                        
                                                                        if (hdc_4 == 0)
                                                                            result = 0x8007000e
                                                                        else
                                                                            SetMapMode(hdc_4, MM_TEXT)
                                                                            
                                                                            if (data_b95af8 == 0)
                                                                                SetTextAlign(*(arg1 + 0x10), 
                                                                                    TA_UPDATECP)
                                                                            
                                                                            void lptm
                                                                            HFONT eax_25
                                                                            
                                                                            if (arg4 == 0)
                                                                            label_45b61a:
                                                                                void lplf_1
                                                                                __builtin_memset(&lplf_1, 0, 0x3c)
                                                                                lplf_1.d = *var_a4
                                                                                lptm.d = *(var_a4 + 4)
                                                                                lptm:0xc.d = *(var_a4 + 8)
                                                                                int32_t ecx_7
                                                                                ecx_7.b = *(var_a4 + 0x10)
                                                                                lptm:0x10.b = ecx_7.b
                                                                                ecx_7.b = *(var_a4 + 0x14)
                                                                                lptm:0x13.b = ecx_7.b
                                                                                ecx_7.b = *(var_a4 + 0x15)
                                                                                lptm:0x14.b = ecx_7.b
                                                                                ecx_7.b = *(var_a4 + 0x16)
                                                                                lptm:0x16.b = ecx_7.b
                                                                                ecx_7.b = *(var_a4 + 0x17)
                                                                                lptm:0x17.b = ecx_7.b
                                                                                var_28
                                                                                __builtin_memcpy(&var_28, 
                                                                                    var_a4 + 0x18, 0x20)
                                                                                
                                                                                if ((lptm:0x16.b & 7) == 0)
                                                                                    lptm:0x16.b |= 4
                                                                                
                                                                                eax_25 = CreateFontIndirectA(&lplf_1)
                                                                            else
                                                                                if (data_b95af8 == 0)
                                                                                    void var_9c
                                                                                    __builtin_memcpy(&var_9c, var_a4, 0x18)
                                                                                    void multiByteStr
                                                                                    WideCharToMultiByte(0, 0, 
                                                                                        var_a4 + 0x18, 0xffffffff, 
                                                                                        &multiByteStr, 0x20, nullptr, nullptr)
                                                                                    arg4 = 0
                                                                                    char var_65_1 = 0
                                                                                    var_a4 = &var_9c
                                                                                
                                                                                if (arg4 == 0)
                                                                                    goto label_45b61a
                                                                                
                                                                                LOGFONTW lplf
                                                                                __builtin_memset(&lplf, 0, 0x5c)
                                                                                lplf.lfHeight = *var_a4
                                                                                lplf.lfWidth = *(var_a4 + 4)
                                                                                lplf.lfWeight = *(var_a4 + 8)
                                                                                int32_t ecx_4
                                                                                ecx_4.b = *(var_a4 + 0x10)
                                                                                lplf.lfItalic = ecx_4.b
                                                                                ecx_4.b = *(var_a4 + 0x14)
                                                                                lplf.lfCharSet = ecx_4.b
                                                                                ecx_4.b = *(var_a4 + 0x15)
                                                                                lplf.lfOutPrecision = ecx_4.b
                                                                                ecx_4.b = *(var_a4 + 0x16)
                                                                                lplf.lfQuality = ecx_4.b
                                                                                ecx_4.b = *(var_a4 + 0x17)
                                                                                lplf.lfPitchAndFamily = ecx_4.b
                                                                                var_48
                                                                                __builtin_memcpy(&var_48, 
                                                                                    var_a4 + 0x18, 0x40)
                                                                                
                                                                                if ((lplf.lfQuality & 7) == 0)
                                                                                    lplf.lfQuality |= 4
                                                                                
                                                                                eax_25 = CreateFontIndirectW(&lplf)
                                                                            
                                                                            *(arg1 + 0x14) = eax_25
                                                                            
                                                                            if (eax_25 == 0)
                                                                                result = 0x8007000e
                                                                            else
                                                                                HGDIOBJ h = *(arg1 + 0x14)
                                                                                HDC hdc_2 = *(arg1 + 0x10)
                                                                                *(arg1 + 0x4fc) = *(var_a4 + 0xc)
                                                                                HGDIOBJ eax_29 = SelectObject(hdc_2, h)
                                                                                HDC hdc_3 = *(arg1 + 0x10)
                                                                                *(arg1 + 0x18) = eax_29
                                                                                *(arg1 + 0x6c) =
                                                                                    GetFontLanguageInfo(hdc_3)
                                                                                
                                                                                if (data_b95af8 == 0)
                                                                                    GetTextMetricsA(*(arg1 + 0x10), &lptm)
                                                                                    *(arg1 + 0x5c) = zx.w(lptm:0x2c.b)
                                                                                    *(arg1 + 0x5e) = zx.w(lptm:0x2d.b)
                                                                                    uint16_t eax_32 = zx.w(lptm:0x2e.b)
                                                                                    __builtin_memcpy(arg1 + 0x30, &lptm, 
                                                                                        0x2c)
                                                                                    *(arg1 + 0x64) = lptm:0x30.d
                                                                                    *(arg1 + 0x60) = eax_32
                                                                                    eax_32 = zx.w(lptm:0x2f.b)
                                                                                    var_c
                                                                                    *(arg1 + 0x68) = var_c
                                                                                    *(arg1 + 0x62) = eax_32
                                                                                else
                                                                                    GetTextMetricsW(*(arg1 + 0x10), 
                                                                                        arg1 + 0x30)
                                                                                
                                                                                *(arg1 + 0x24) = *(arg1 + 0x48)
                                                                                *(arg1 + 0x28) = *(arg1 + 0x30)
                                                                                HBITMAP eax_34 = sub_45ad2f(arg1, 
                                                                                    arg1 + 0x24, arg1 + 0x2c)
                                                                                *(arg1 + 0x1c) = eax_34
                                                                                
                                                                                if (eax_34 == 0)
                                                                                    result = 0x8007000e
                                                                                else
                                                                                    SetBkMode(*(arg1 + 0x10), 2)
                                                                                    SetBkColor(*(arg1 + 0x10), 0)
                                                                                    SetTextColor(*(arg1 + 0x10), 0xffffff)
                                                                                    *(arg1 + 0x20) = SelectObject(
                                                                                        *(arg1 + 0x10), *(arg1 + 0x1c))
                                                                                    *(arg1 + 0x8c) = 0
                                                                                    __builtin_memset(arg1 + 0x90, 0, 0x400)
                                                                                    bool cond:13_1 = *(arg1 + 0x30) u<= 1
                                                                                    *(arg1 + 0x494) = 0x15
                                                                                    *(arg1 + 0x498) = 0
                                                                                    *(arg1 + 0x4a4) = 0
                                                                                    *(arg1 + 0x4c0) = 0
                                                                                    *(arg1 + 0x4ac) = 1
                                                                                    *(arg1 + 0x4b4) = 1
                                                                                    
                                                                                    if (not(cond:13_1))
                                                                                        do
                                                                                            *(arg1 + 0x4ac) <<= 1
                                                                                            *(arg1 + 0x4b4) += 1
                                                                                        while (*(arg1 + 0x4ac)
                                                                                            u< *(arg1 + 0x30))
                                                                                    
                                                                                    int32_t i = *(arg1 + 0x4ac)
                                                                                    int32_t ecx_12 = *(arg1 + 0x4b4)
                                                                                    *(arg1 + 0x4c8) = i
                                                                                    *(arg1 + 0x4d0) = ecx_12
                                                                                    
                                                                                    for (; i u< *(arg1 + 0x44); 
                                                                                            i = *(arg1 + 0x4ac))
                                                                                        *(arg1 + 0x4ac) <<= 1
                                                                                        *(arg1 + 0x4b4) += 1
                                                                                    
                                                                                    while (*(arg1 + 0x4c8)
                                                                                            u< *(arg1 + 0x48))
                                                                                        *(arg1 + 0x4c8) <<= 1
                                                                                        *(arg1 + 0x4d0) += 1
                                                                                    
                                                                                    int32_t esi_6 = *(arg1 + 0x4c8)
                                                                                    int32_t ecx_13 = *(arg1 + 0x4ac)
                                                                                    int32_t esi_7 = *(arg1 + 0x4fc)
                                                                                    int32_t eax_39 = ecx_13 * ecx_13
                                                                                    *(arg1 + 0x4b0) = eax_39
                                                                                    *(arg1 + 0x4cc) = esi_6 * esi_6
                                                                                    
                                                                                    if (esi_7 != 0)
                                                                                        if (*(arg1 + 0x4b4) u> esi_7)
                                                                                            *(arg1 + 0x4b4) = esi_7
                                                                                        
                                                                                        if (*(arg1 + 0x4d0) u> esi_7)
                                                                                            *(arg1 + 0x4d0) = esi_7
                                                                                    
                                                                                    HMODULE hModule_4 = zx.d(*(arg1 + 0x5e))
                                                                                        - zx.d(*(arg1 + 0x5c)) + 1
                                                                                    hModule = hModule_4
                                                                                    
                                                                                    if (hModule_4 u> 0x80)
                                                                                        hModule = 0x80
                                                                                    
                                                                                    bool cond:25_1 =
                                                                                        eax_39 * hModule u<= eax_39
                                                                                    *(arg1 + 0x4b8) = ecx_13
                                                                                    *(arg1 + 0x4d4) = *(arg1 + 0x4c8)
                                                                                    
                                                                                    if (not(cond:25_1))
                                                                                        int32_t eax_42
                                                                                        
                                                                                        do
                                                                                            int32_t eax_41 = *(arg1 + 0x4b8)
                                                                                            
                                                                                            if (eax_41 u>= 0x100)
                                                                                                break
                                                                                            
                                                                                            eax_42 = eax_41 * 2
                                                                                            *(arg1 + 0x4b8) = eax_42
                                                                                        while (*(arg1 + 0x4b0) * hModule
                                                                                            u> eax_42 * eax_42)
                                                                                    
                                                                                    int32_t ecx_17 = *(arg1 + 0x4b8)
                                                                                    
                                                                                    if (*(arg1 + 0x4c8) u< ecx_17)
                                                                                        *(arg1 + 0x4d4) = ecx_17
                                                                                    
                                                                                    int32_t eax_45 = *(arg1 + 0x4d4)
                                                                                    int32_t ecx_18 = ecx_17 * ecx_17
                                                                                    int32_t eax_46 = eax_45 * eax_45
                                                                                    *(arg1 + 0x4d8) = eax_46
                                                                                    *(arg1 + 0x4c4) = eax_46
                                                                                    int32_t* var_cc_1 = *(arg1 + 8)
                                                                                    *(arg1 + 0x4bc) = ecx_18
                                                                                    *(arg1 + 0x4a8) = ecx_18
                                                                                    result = sub_406624(var_cc_1, 
                                                                                        arg1 + 0x4b8, arg1 + 0x4b8, 
                                                                                        arg1 + 0x4b4, 0, arg1 + 0x494, 1)
                                                                                    
                                                                                    if (result s>= 0)
                                                                                        result = sub_406624(*(arg1 + 8), 
                                                                                            arg1 + 0x4d4, arg1 + 0x4d4, 
                                                                                            arg1 + 0x4d0, 0, arg1 + 0x494, 1)
                                                                                        
                                                                                        if (result s>= 0)
                                                                                            if (*(arg1 + 0x494) != 0x15
                                                                                                    || *(arg1 + 0x4b8) u< *(arg1 + 0x4ac)
                                                                                                    || *(arg1 + 0x4d4) u< *(arg1 + 0x4c8))
                                                                                                result = 0x88760b59
                                                                                            else
                                                                                                bool cond:30_1 = *(arg1 + 0x4d0) u<= 1
                                                                                                __builtin_memcpy(arg1 + 0x4dc, 
                                                                                                    arg1 + 0x4a4, 0x1c)
                                                                                                int32_t eax_54
                                                                                                
                                                                                                if (not(cond:30_1))
                                                                                                    eax_54 =
                                                                                                        sub_745f3f(*(arg1 + 0x4cc) << 3)
                                                                                                    *(arg1 + 0x4f8) = eax_54
                                                                                                
                                                                                                if (not(cond:30_1) && eax_54 == 0)
                                                                                                    result = 0x8007000e
                                                                                                else if (data_b9730c == 0)
                                                                                                    var_2c
                                                                                                    __builtin_memset(&var_2c, 0, 0x24)
                                                                                                    lptm:0x2c.d = arg1 + 0x7a
                                                                                                    GCP_RESULTSW* lpResults = &var_2c
                                                                                                    HDC hdc = *(arg1 + 0x10)
                                                                                                    lptm:0x14.d = 0x24
                                                                                                    lptm:0x30.d = 1
                                                                                                    
                                                                                                    if (data_b95af8 == 0)
                                                                                                        GetCharacterPlacementA(hdc, 
                                                                                                            arg1 + 0x60, 1, 0, lpResults, 0)
                                                                                                    else
                                                                                                        GetCharacterPlacementW(hdc, 
                                                                                                            arg1 + 0x60, 1, 0, lpResults, 0)
                                                                                                    
                                                                                                    lptm:0x2c.d = arg1 + 0x78
                                                                                                    GCP_RESULTSW* lpResults_1 = &var_2c
                                                                                                    HDC hdc_1 = *(arg1 + 0x10)
                                                                                                    lptm:0x14.d = 0x24
                                                                                                    lptm:0x30.d = 1
                                                                                                    
                                                                                                    if (data_b95af8 == 0)
                                                                                                        GetCharacterPlacementA(hdc_1, 
                                                                                                            arg1 + 0x62, 1, 0, lpResults_1, 0)
                                                                                                    else
                                                                                                        GetCharacterPlacementW(hdc_1, 
                                                                                                            arg1 + 0x62, 1, 0, lpResults_1, 0)
                                                                                                    
                                                                                                    result = 0
                                                                                                else
                                                                                                    *(arg1 + 0x74) = 0
                                                                                                    void* edi_13 = arg1 + 0x78
                                                                                                    *edi_13 = 0
                                                                                                    void* edi_14 = edi_13 + 4
                                                                                                    *edi_14 = 0
                                                                                                    *(edi_14 + 4) = 0
                                                                                                    int32_t var_bc_1 = *(arg1 + 0x10)
                                                                                                    *(arg1 + 0x74) = 0x10
                                                                                                    result = data_b97338(var_bc_1, 
                                                                                                        arg1 + 0x70, arg1 + 0x74)
                                                                                                    
                                                                                                    if (result s>= 0)
                                                                                                        result = 0
    else
        HMODULE hModule_2 = GetModuleHandleA("gdi32.dll")
        hModule = hModule_2
        HMODULE hModule_3
        
        if (hModule_2 == 0)
            hModule_3 = LoadLibraryA("gdi32.dll")
            hModule = hModule_3
        
        if (hModule_2 == 0 && hModule_3 == 0)
            goto label_45b394
        
        int32_t eax_1 = GetProcAddress(hModule, "GetCharABCWidthsI")
        data_b97300 = eax_1
        
        if (eax_1 == 0)
            result = 0x8007000e
        else
            int32_t eax_2 = GetProcAddress(hModule, "GetCharWidthI")
            data_b97304 = eax_2
            
            if (eax_2 == 0)
                result = 0x8007000e
            else
                int32_t eax_3 = GetProcAddress(hModule, "GetFontUnicodeRanges")
                data_b97308 = eax_3
                
                if (eax_3 != 0)
                    goto label_45b394
                
                result = 0x8007000e

sub_745f2b(__security_cookie_1)
return result
