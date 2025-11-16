// 函数: sub_572570
// 地址: 0x572570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_4c
int32_t eax_1 = __security_cookie ^ &var_4c
int32_t var_44 = arg2
void* eax_2 = sub_570b30()

if (eax_2 != 0 || data_20f0238 != arg3 || data_20f023c != arg2)
    sub_5724c0()

if (data_20f0288 != 0)
    int32_t temp0_1 = divs.dp.d(sx.q(data_20f0290), data_20f0284)
    data_20f0284
    eax_2 = sub_571530(arg2)
    
    if (*(eax_2 + 4) != 0 && data_20f0284 s>= 8 && temp0_1 s> 0)
        WPARAM wParam_1 = data_20f0240
        WPARAM wParam
        
        if (arg11 == 0)
            wParam = arg4
        else if (temp0_1 s< 8 || wParam_1 == 0xfffe7961)
            wParam = arg4 - (temp0_1 s>> 1)
        else
            int32_t eax_6 = data_20f0244
            int32_t eax_7
            int32_t edx_2
            
            if (temp0_1 s< 0xa)
                edx_2 = wParam_1 + 4
                eax_7 = eax_6 - 4
            else if (temp0_1 s< 0xc)
                edx_2 = wParam_1 + 5
                eax_7 = eax_6 - 5
            else if (temp0_1 s< 0xe)
                edx_2 = wParam_1 + 6
                eax_7 = eax_6 - 6
            else if (temp0_1 s>= 0x10)
                edx_2 = wParam_1 + 8
                eax_7 = eax_6 - 8
            else
                edx_2 = wParam_1 + 7
                eax_7 = eax_6 - 7
            
            if (arg4 s>= edx_2)
                wParam = wParam_1
                
                if (arg4 s> eax_7)
                    wParam = wParam - eax_7 + arg4
            else
                wParam = wParam_1 - edx_2 + arg4
        
        HWND (__stdcall* const eax_13)(HWND hDlg, int32_t nIDDlgItem) = GetDlgItem
        
        if (data_20f023c != *(eax_2 + 0x18))
            HWND hWnd = GetDlgItem(data_1c054fc, 0x4fe4)
            int32_t edx_4 = temp0_1 s>> 1
            SendMessageA(hWnd, 0xe2, neg.d(edx_4), *(eax_2 + 0x10) - 1 + edx_4)
            int32_t lParam = 0x1c
            int32_t var_24_1 = 2
            int32_t var_18_1 = temp0_1
            SendMessageA(hWnd, 0xe9, 0, &lParam)
            SendMessageA(hWnd, 0xe0, wParam, 1)
            wParam_1 = data_20f0240
            eax_13 = GetDlgItem
        
        if (wParam_1 != wParam)
            eax_13 = SendMessageA(GetDlgItem(data_1c054fc, 0x4fe4), 0xe0, wParam, 1)
        
        if (arg11 != 0)
            *(eax_2 + 0x14) += 1
        
        sub_571b90(eax_13, eax_2, arg3, wParam, arg5, arg6, arg7, arg8, arg9, arg10, temp0_1)
        data_20f0238
        InvalidateRect(GetDlgItem(data_1c054fc, 0x4fe1), nullptr, 0)
        data_20f023c = *(eax_2 + 0x18)
        data_20f0244 = temp0_1 - 1 + wParam
        data_20f0248 = *(eax_2 + 0x10)
        data_20f0238 = arg3
        data_20f0240 = wParam
        data_20f0254 = arg11
        data_20f0258 = 0
        sub_5f02dd(eax_1 ^ &var_4c)
        return arg11
    
    sub_5724c0()
    
    if (data_20f0258 == 0)
        HBRUSH eax_21 = CreateSolidBrush(0x808080)
        RECT lprc
        lprc.right = data_20f028c
        lprc.left = 0
        lprc.top = 0
        lprc.bottom = data_20f0290
        FillRect(data_20f0288, &lprc, eax_21)
        DeleteObject(eax_21)
        eax_2 = InvalidateRect(GetDlgItem(data_1c054fc, 0x4fe1), nullptr, 0)
        data_20f0258 = 1

sub_5f02dd(eax_1 ^ &var_4c)
return eax_2
