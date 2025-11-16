// 函数: sub_54a590
// 地址: 0x54a590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

EnableWindow(data_7027bc, 0)
HWND hWndParent = data_7027bc
data_20c2014 = 0xffffffff
HINSTANCE hInstance = data_134cebc
data_20c2008 = arg1
data_20c200c = 0xffffffff
HWND eax = CreateDialogParamA(hInstance, 0x153, hWndParent, sub_54a320, 0)
data_20c17c4 = eax

if (eax != 0)
    MSG msg
    
    do
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE) != 0)
            if (GetMessageA(&msg, nullptr, 0, 0) == 0)
                break
            
            if (IsDialogMessageA(data_20c17c4, &msg) == 0)
                TranslateMessage(&msg)
                DispatchMessageA(&msg)
        else if (data_20c2014 != 0xffffffff)
            WaitMessage()
        else
            bool cond:0_1 = (0x8000 & GetAsyncKeyState(0xd)) == 0
            int32_t eax_5 = data_20c2014
            
            if (cond:0_1)
                eax_5 = 0
            
            data_20c2014 = eax_5
            Sleep(0xa)
    while (data_20c17c4 != 0)

EnableWindow(data_7027bc, 1)
return data_20c200c
