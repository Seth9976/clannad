// 函数: sub_455280
// 地址: 0x455280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

while (data_702fc0 != 0)
    MSG msg
    
    if (PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE) == 0)
        break
    
    if (msg.hwnd == data_7027bc && msg.message == 2)
        sub_573330()
        return 0
    
    if (GetMessageA(&msg, nullptr, 0, 0) == 0)
        return msg.wParam
    
    TranslateMessage(&msg)
    DispatchMessageA(&msg)

return 0
