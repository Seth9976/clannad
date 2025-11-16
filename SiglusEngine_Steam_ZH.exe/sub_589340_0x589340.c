// 函数: sub_589340
// 地址: 0x589340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1

if (arg2 == 0x10)
    if (sub_5898e0(arg1) == 0)
        return 0
else if (arg2 == 0x110)
    if (sub_5893e0(arg1) == 0)
        return 0
else if (arg2 == 0x111)
    if (arg3.w == 0x4dd)
        HWND hWnd = *(arg1 + 0xbc)
        
        if (hWnd != 0)
            SendMessageW(hWnd, 0x1009, 0, 0)
        
        *(arg1 + 0x47c) = 0
else if (arg2 == 6 && arg3.w == 0)
    sub_681b70(arg1)

return sub_6c4530(arg1, arg2, arg3, arg4)
