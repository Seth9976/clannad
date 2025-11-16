// 函数: sub_681ae0
// 地址: 0x681ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2 - 1

if (arg2 == 1)
    return sub_6bffa0(arg1)

if (arg2 == 0x110)
    result = sub_6c44c0(arg1)
    HWND hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        result = SetClassLongW(hWnd, 0xfffffff2, *data_bac4b4)
    
    HWND hWnd_1 = *(arg1 + 4)
    
    if (hWnd_1 != 0)
        return SetClassLongW(hWnd_1, 0xffffffde, *(data_bac4b4 + 4))

return result
