// 函数: sub_5cc5a0
// 地址: 0x5cc5a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    int32_t* ecx_1 = arg2
    
    if (ecx_1 != 0)
        if (arg1->__offset(0x40).w != 0)
            goto label_5cc70b
        
        EnterCriticalSection(&data_4ecd184)
        
        if (arg1->__offset(0x40).w != 0)
        label_5cc6fe:
            LeaveCriticalSection(&data_4ecd184)
            ecx_1 = arg2
        label_5cc70b:
            
            if (arg1->__offset(0x30).d != 0)
                *ecx_1 = arg1->__offset(0x34).d
            
            int32_t result
            result.w = arg1->__offset(0x40).w
            return result
        
        PWSTR lpszClass = arg1->__offset(0x30).d
        
        if (lpszClass == 0)
            HINSTANCE hInstance = data_b95ac0
            
            if (arg1->__offset(0x3c).d != 0)
                hInstance = nullptr
            
            arg1->hCursor = LoadCursorW(hInstance, arg1->__offset(0x38).d)
            goto label_5cc686
        
        WCHAR* lpszClassName = arg1->lpszClassName
        LRESULT (* lpfnWndProc)(HWND, UINT, WPARAM, LPARAM) = arg1->lpfnWndProc
        WNDCLASSEXW lpwcx
        lpwcx.cbSize = 0x30
        BOOL eax = GetClassInfoExW(nullptr, lpszClass, &lpwcx)
        BOOL eax_1
        
        if (eax == 0)
            eax_1 = GetClassInfoExW(data_b95abc, arg1->__offset(0x30).d, &lpwcx)
        
        if (eax != 0 || eax_1 != 0)
            int128_t xmm0
            xmm0.d = lpwcx.cbSize
            xmm0:4.d = lpwcx.style
            xmm0:8.d = lpwcx.lpfnWndProc
            xmm0:0xc.d = lpwcx.cbClsExtra
            arg1->cbSize = xmm0.d
            arg1->style = xmm0:4.d
            arg1->lpfnWndProc = xmm0:8.d
            arg1->cbClsExtra = xmm0:0xc.d
            int128_t xmm0_1
            xmm0_1.d = lpwcx.cbWndExtra
            xmm0_1:4.d = lpwcx.hInstance
            xmm0_1:8.d = lpwcx.hIcon
            xmm0_1:0xc.d = lpwcx.hCursor
            arg1->cbWndExtra = xmm0_1.d
            arg1->hInstance = xmm0_1:4.d
            arg1->hIcon = xmm0_1:8.d
            arg1->hCursor = xmm0_1:0xc.d
            int128_t xmm0_2
            xmm0_2.d = lpwcx.hbrBackground
            xmm0_2:4.d = lpwcx.lpszMenuName
            xmm0_2:8.d = lpwcx.lpszClassName
            xmm0_2:0xc.d = lpwcx.hIconSm
            arg1->hbrBackground = xmm0_2.d
            arg1->lpszMenuName = xmm0_2:4.d
            arg1->lpszClassName = xmm0_2:8.d
            arg1->hIconSm = xmm0_2:0xc.d
            arg1->__offset(0x34).d = arg1->lpfnWndProc
            arg1->lpszClassName = lpszClassName
            arg1->lpfnWndProc = lpfnWndProc
        label_5cc686:
            struct HINSTANCE__* eax_7 = data_b95abc
            arg1->style &= 0xffffbfff
            bool cond:1_1 = arg1->lpszClassName != 0
            arg1->hInstance = eax_7
            
            if (not(cond:1_1))
                WNDCLASSEXW* var_84_4 = arg1
                __swprintf_c(arg1 + 0x42, 0x25, u"ATL:%p")
                arg1->lpszClassName = arg1 + 0x42
            
            int128_t xmm0_3
            xmm0_3.d = arg1->cbSize
            xmm0_3:4.d = arg1->style
            xmm0_3:8.d = arg1->lpfnWndProc
            xmm0_3:0xc.d = arg1->cbClsExtra
            WNDCLASSEXW lpwcx_1
            lpwcx_1.cbSize = xmm0_3.d
            lpwcx_1.style = xmm0_3:4.d
            lpwcx_1.lpfnWndProc = xmm0_3:8.d
            lpwcx_1.cbClsExtra = xmm0_3:0xc.d
            int128_t xmm0_4
            xmm0_4.d = arg1->cbWndExtra
            xmm0_4:4.d = arg1->hInstance
            xmm0_4:8.d = arg1->hIcon
            xmm0_4:0xc.d = arg1->hCursor
            lpwcx_1.cbWndExtra = xmm0_4.d
            lpwcx_1.hInstance = xmm0_4:4.d
            lpwcx_1.hIcon = xmm0_4:8.d
            lpwcx_1.hCursor = xmm0_4:0xc.d
            int128_t xmm0_5
            xmm0_5.d = arg1->hbrBackground
            xmm0_5:4.d = arg1->lpszMenuName
            xmm0_5:8.d = arg1->lpszClassName
            xmm0_5:0xc.d = arg1->hIconSm
            lpwcx_1.hbrBackground = xmm0_5.d
            lpwcx_1.lpszMenuName = xmm0_5:4.d
            lpwcx_1.lpszClassName = xmm0_5:8.d
            lpwcx_1.hIconSm = xmm0_5:0xc.d
            int16_t eax_8
            uint32_t ecx_2
            eax_8, ecx_2 = GetClassInfoExW(arg1->hInstance, arg1->lpszClassName, &lpwcx_1)
            arg1->__offset(0x40).w = eax_8
            
            if (eax_8 == 0)
                arg1->__offset(0x40).w = sub_5c5490(ecx_2, arg1)
            
            goto label_5cc6fe
        
        LeaveCriticalSection(&data_4ecd184)

return 0
