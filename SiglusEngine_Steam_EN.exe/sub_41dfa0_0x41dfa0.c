// 函数: sub_41dfa0
// 地址: 0x41dfa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd_1 = arg3
HWND hWnd_2 = hWnd_1
data_f89aec = 0xffffffff
data_f89af0 = 0xffffffff
data_f89af4 = 0xffffffff
data_f89af8 = 0xffffffff

if (hWnd_1 u<= 0xf)
    void* esi_1 = hWnd_1 * 5
    void* edi_2 = hWnd_1 * 0x134 + &data_925270
    
    if (*edi_2 != 0)
        hWnd_1 = sub_41e520(arg3, 1)
    
    if (arg5 s>= 0 && arg6 s>= 0)
        int32_t eax = arg8
        
        if (eax s>= 0)
            if (eax s> 0xff)
                eax = 0xff
            
            arg8 = eax
        else
            arg8 = 0
        
        int32_t eax_1 = arg9
        
        if (eax_1 s>= 0)
            if (eax_1 s> 0xff)
                eax_1 = 0xff
            
            arg9 = eax_1
        else
            arg9 = 0
        
        int32_t ecx_1 = arg10
        
        if (ecx_1 s>= 0)
            if (ecx_1 s> 0xff)
                ecx_1 = 0xff
            
            arg10 = ecx_1
        else
            arg10 = 0
        
        int32_t eax_2 = arg11
        
        if (eax_2 s< 0)
            eax_2 = 0
        else if (eax_2 s> 0xff)
            eax_2 = 0xff
        
        int32_t ebx_1 = arg12
        
        if (ebx_1 s>= 0)
            if (ebx_1 s> 0xff)
                ebx_1 = 0xff
            
            arg12 = ebx_1
        else
            arg12 = 0
        
        int32_t ecx_2 = arg13
        
        if (ecx_2 s< 0)
            ecx_2 = 0
        else if (ecx_2 s> 0xff)
            ecx_2 = 0xff
        
        int32_t ebx_2 = arg4
        *(edi_2 + 0xc) = arg5
        *(edi_2 + 0x10) = arg6
        *(edi_2 + 0x2c) = arg7
        *(edi_2 + 0x14) = arg8
        *(edi_2 + 0x18) = arg9
        *(edi_2 + 0x1c) = arg10
        *(edi_2 + 0x20) = eax_2
        *(edi_2 + 0x24) = arg12
        *(edi_2 + 4) = arg2
        
        if (arg2 s< 0)
            arg2 = 0
        
        *(edi_2 + 8) = ebx_2
        *(edi_2 + 0x28) = ecx_2
        
        if (ebx_2 s< 0)
            ebx_2 = 0
        
        int32_t eax_13 = arg5 - 1 + arg2
        int32_t ecx_5 = arg6 - 1 + ebx_2
        int32_t var_8_1 = eax_13
        
        if (eax_13 s>= data_70300c)
            int32_t eax_15 = eax_13 - data_70300c + 1
            arg2 -= eax_15
            var_8_1 -= eax_15
        
        if (ecx_5 s>= data_7030dc)
            int32_t eax_18 = ecx_5 - data_7030dc + 1
            ebx_2 -= eax_18
            ecx_5 -= eax_18
        
        if (arg2 s< 0)
            arg2 = 0
        
        if (ebx_2 s< 0)
            ebx_2 = 0
        
        if (arg7 s<= ecx_5 - ebx_2 - 1)
            *((esi_1 << 2) + &data_f899bc) = arg7
        else
            *((esi_1 << 2) + &data_f899bc) = ecx_5 - ebx_2 - 1
        
        int32_t esi_2 = data_1356ed4
        int32_t ecx_9 = data_1356ec0
        int32_t X = divs.dp.d(sx.q(esi_2 * arg2), data_70300c) + data_1356ec4
        int32_t Y = divs.dp.d(sx.q(ecx_9 * ebx_2), data_7030dc) + data_1356ec8
        int32_t nHeight_1 = divs.dp.d(sx.q(ecx_9 * (ecx_5 - ebx_2 + 1)), data_7030dc)
        void* ebx_3 = hWnd_2 * 5
        int32_t temp0_4 = divs.dp.d(sx.q(*((ebx_3 << 2) + &data_f899bc) * esi_2), data_70300c)
        int32_t nWidth = divs.dp.d(sx.q(esi_2 * (var_8_1 - arg2 + 1)), data_70300c)
        *((ebx_3 << 2) + &data_f899bc) = temp0_4
        
        if (nWidth s< 6)
            nWidth = 6
        
        int32_t nHeight = nHeight_1
        
        if (nHeight s< 6)
            nHeight = 6
        
        if (temp0_4 s< 4)
            *((ebx_3 << 2) + &data_f899bc) = 4
        
        hWnd_1 = CreateWindowExA(WS_EX_LEFT, "EDIT", nullptr, 0x50010080, X, Y, nWidth, nHeight, 
            data_7027bc, *((hWnd_2 << 2) + &data_6105f0), data_134cebc, nullptr)
        *((ebx_3 << 2) + &data_f899ac) = hWnd_1
        
        if (hWnd_1 != 0)
            int32_t eax_42 = GetWindowLongA(hWnd_1, 0xfffffffc)
            HWND hWnd = *((ebx_3 << 2) + &data_f899ac)
            *((ebx_3 << 2) + &data_f899b0) = eax_42
            SetWindowLongA(hWnd, 0xfffffffc, sub_41dad0)
            *((ebx_3 << 2) + &data_f899b4) =
                CreateSolidBrush((zx.d(ecx_2.b) << 8 | zx.d(arg12.b)) << 8 | zx.d(eax_2.b))
            WINNLSEnableIME(nullptr, 1)
            hWnd_1 = sub_4d7410()
            *edi_2 = 1

return hWnd_1
