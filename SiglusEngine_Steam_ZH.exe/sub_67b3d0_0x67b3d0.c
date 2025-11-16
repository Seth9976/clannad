// 函数: sub_67b3d0
// 地址: 0x67b3d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x100)
    if (arg3 == 0x26 || arg3 == 0x28 || arg3 == 0x25 || arg3 == 0x27)
        *(arg1 + 0x94)
        sub_67b370(arg3)
        return 1
else if (arg2 == 0x101 && arg3 == 0x1b)
    void* eax_3 = *(arg1 + 0x94)
    
    if (*(eax_3 + 0x12) != 0)
        HWND hWnd = *(*(eax_3 + 4) + 4)
        
        if (hWnd != 0)
            SendMessageW(hWnd, 0x10, 0, 0)

return sub_6c0020(arg1, arg2, arg3, arg4)
