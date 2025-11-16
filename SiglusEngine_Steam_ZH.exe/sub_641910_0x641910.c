// 函数: sub_641910
// 地址: 0x641910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

MSG msg
BOOL i

if (PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE) != 0)
    do
        if (GetMessageW(&msg, nullptr, 0, 0) == 0)
            BOOL eax
            eax.b = 0
            return eax
        
        int32_t* esi_1 = data_4ebe428
        
        if (esi_1 == data_4ebe42c)
        label_641987:
            TranslateMessage(&msg)
            DispatchMessageW(&msg)
        else
            while (GetWindowLongW(*esi_1, 0x4) == 0 || IsDialogMessageW(*esi_1, &msg) == 0)
                esi_1 = &esi_1[1]
                
                if (esi_1 == data_4ebe42c)
                    goto label_641987
        
        i = PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    while (i != 0)

i.b = 1
return i
