// 函数: sub_4551d0
// 地址: 0x4551d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_702fc0 != 0)
    while (data_1af09ec != 0)
        MSG msg
        
        if (PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE) != 0)
            if (msg.hwnd == data_7027bc && msg.message == 2)
                sub_573330()
                return 0
            
            if (GetMessageA(&msg, nullptr, 0, 0) == 0)
                return msg.wParam
            
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
        else if (data_187a5c4 != 0)
            sub_4e5970()
        
        if (data_702fc0 == 0)
            break

return 0
