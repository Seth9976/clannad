// 函数: sub_41dad0
// 地址: 0x41dad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t Msg = arg2
WPARAM wParam = arg3
int32_t esi = GetDlgCtrlID(arg1) - 0xc351
LPARAM lParam
HWND hWnd

if (Msg u> 0x102)
    if (Msg == 0x200)
        SendMessageA(data_7027bc, 0x200, 0, 
            zx.d((arg4 u>> 0x10).w + *(esi * 0x134 + 0x925278)) << 0x10
                | zx.d(*(esi * 0x134 + 0x925274) + arg4.w))
        lParam = arg4
        hWnd = arg1
    else if (Msg != 0x204)
        lParam = arg4
        hWnd = arg1
    else
        hWnd = arg1
        
        if (GetFocus() != hWnd)
            SetFocus(hWnd)
        
        lParam = arg4
else if (Msg == 0x102)
    if (wParam.b == 9 || wParam.b == 0xd || wParam.b == 0x1b)
        return 1
    
    lParam = arg4
    hWnd = arg1
else if (Msg == 7)
    data_f89af4 = esi
    *(esi * 0x14 + &data_f899b8) = 1
    int32_t i
    
    for (i = 1; i s< 0x10; i += 5)
        int32_t edx_28 = (i + esi) & 0x8000000f
        
        if (edx_28 s< 0)
            edx_28 = ((edx_28 - 1) | 0xfffffff0) + 1
        
        if (*(edx_28 * 0x134 + &data_925270) != 0 && *(edx_28 * 0x14 + &data_f899ac) == wParam)
            break
        
        int32_t edx_33 = (esi + 1 + i) & 0x8000000f
        
        if (edx_33 s< 0)
            edx_33 = ((edx_33 - 1) | 0xfffffff0) + 1
        
        if (*(edx_33 * 0x134 + &data_925270) != 0 && *(edx_33 * 0x14 + &data_f899ac) == wParam)
            i += 1
            break
        
        int32_t edx_38 = (esi + 2 + i) & 0x8000000f
        
        if (edx_38 s< 0)
            edx_38 = ((edx_38 - 1) | 0xfffffff0) + 1
        
        if (*(edx_38 * 0x134 + &data_925270) != 0 && *(edx_38 * 0x14 + &data_f899ac) == wParam)
            i += 2
            break
        
        int32_t edx_43 = (esi + 3 + i) & 0x8000000f
        
        if (edx_43 s< 0)
            edx_43 = ((edx_43 - 1) | 0xfffffff0) + 1
        
        if (*(edx_43 * 0x134 + &data_925270) != 0 && *(edx_43 * 0x14 + &data_f899ac) == wParam)
            i += 3
            break
        
        int32_t edx_48 = (esi + 4 + i) & 0x8000000f
        
        if (edx_48 s< 0)
            edx_48 = ((edx_48 - 1) | 0xfffffff0) + 1
        
        if (*(edx_48 * 0x134 + &data_925270) != 0 && *(edx_48 * 0x14 + &data_f899ac) == wParam)
            i += 4
            break
    
    if (i == 0x10)
        WINNLSEnableIME(nullptr, 1)
    
    lParam = arg4
    hWnd = arg1
else if (Msg == 8)
    data_f89af8 = esi
    *(esi * 0x14 + &data_f899b8) = 0
    int32_t i_1
    
    for (i_1 = 1; i_1 s< 0x10; i_1 += 5)
        int32_t edx_4 = (i_1 + esi) & 0x8000000f
        
        if (edx_4 s< 0)
            edx_4 = ((edx_4 - 1) | 0xfffffff0) + 1
        
        if (*(edx_4 * 0x134 + &data_925270) != 0 && *(edx_4 * 0x14 + &data_f899ac) == wParam)
            break
        
        int32_t edx_9 = (esi + 1 + i_1) & 0x8000000f
        
        if (edx_9 s< 0)
            edx_9 = ((edx_9 - 1) | 0xfffffff0) + 1
        
        if (*(edx_9 * 0x134 + &data_925270) != 0 && *(edx_9 * 0x14 + &data_f899ac) == wParam)
            i_1 += 1
            break
        
        int32_t edx_14 = (esi + 2 + i_1) & 0x8000000f
        
        if (edx_14 s< 0)
            edx_14 = ((edx_14 - 1) | 0xfffffff0) + 1
        
        if (*(edx_14 * 0x134 + &data_925270) != 0 && *(edx_14 * 0x14 + &data_f899ac) == wParam)
            i_1 += 2
            break
        
        int32_t edx_19 = (esi + 3 + i_1) & 0x8000000f
        
        if (edx_19 s< 0)
            edx_19 = ((edx_19 - 1) | 0xfffffff0) + 1
        
        if (*(edx_19 * 0x134 + &data_925270) != 0 && *(edx_19 * 0x14 + &data_f899ac) == wParam)
            i_1 += 3
            break
        
        int32_t edx_24 = (esi + 4 + i_1) & 0x8000000f
        
        if (edx_24 s< 0)
            edx_24 = ((edx_24 - 1) | 0xfffffff0) + 1
        
        if (*(edx_24 * 0x134 + &data_925270) != 0 && *(edx_24 * 0x14 + &data_f899ac) == wParam)
            i_1 += 4
            break
    
    if (i_1 == 0x10)
        WINNLSEnableIME(nullptr, 0)
    
    lParam = arg4
    hWnd = arg1
else if (Msg != 0x100)
    lParam = arg4
    hWnd = arg1
else if (wParam != 9)
    lParam = arg4
    
    if (wParam != 0xd)
        if (wParam == 0x1b && (lParam & 0x40000000) == 0)
            data_f89af0 = esi
    else if ((lParam & 0x40000000) == 0)
        data_f89aec = esi
    
    hWnd = arg1
else
    WPARAM eax_7 = GetAsyncKeyState(0x10) & 0x8000
    int32_t edi = wParam - 8
    arg3 = eax_7
    int32_t edx_2 = esi - 1
    
    while (true)
        int32_t ecx_2
        
        if (eax_7 != 0)
            ecx_2 = edx_2
            
            if (edx_2 s< 0)
                ecx_2 = edx_2 + 0x10
        else
            ecx_2 = (edi + esi) & 0x8000000f
            
            if (ecx_2 s< 0)
                ecx_2 = ((ecx_2 - 1) | 0xfffffff0) + 1
        
        if (*(ecx_2 * 0x134 + &data_925270) != 0 && *(ecx_2 * 0x14 + &data_f899ac) != 0)
            SetFocus(*(ecx_2 * 0x14 + &data_f899ac))
            break
        
        edi += 1
        edx_2 -= 1
        
        if (edi s>= 0x10)
            break
        
        eax_7 = arg3
    
    Msg = arg2
    lParam = arg4
    hWnd = arg1

return CallWindowProcA(*(esi * 0x14 + &data_f899b0), hWnd, Msg, wParam, lParam)
