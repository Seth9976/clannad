// 函数: sub_6ba500
// 地址: 0x6ba500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x8c) != 0)
    int32_t eax
    eax.b = 0
    return eax

MSG msg
BOOL i

if (PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE) != 0)
    do
        if (GetMessageW(&msg, nullptr, 0, 0) == 0)
            *(arg1 + 0x8c) = 1
            void* eax_4
            eax_4.b = 0
            return eax_4
        
        int32_t* esi_1 = data_4ebe428
        
        if (esi_1 == data_4ebe42c)
        label_6ba587:
            TranslateMessage(&msg)
            DispatchMessageW(&msg)
        else
            while (GetWindowLongW(*esi_1, 0x4) == 0 || IsDialogMessageW(*esi_1, &msg) == 0)
                esi_1 = &esi_1[1]
                
                if (esi_1 == data_4ebe42c)
                    goto label_6ba587
        
        i = PeekMessageW(&msg, nullptr, 0, 0, PM_NOREMOVE)
    while (i != 0)

i.b = 1
return i
