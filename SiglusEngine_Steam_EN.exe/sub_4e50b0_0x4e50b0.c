// 函数: sub_4e50b0
// 地址: 0x4e50b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND eax = GetFocus()
int16_t eax_1

if (eax == data_7027bc || (data_139270c != 0xffffffff && eax == data_1bfe270))
    eax_1 = GetAsyncKeyState(0x11)

if ((eax != data_7027bc && (data_139270c == 0xffffffff || eax != data_1bfe270))
        || (0x8000 & eax_1) == 0)
    data_187c600 = 0
else
    int32_t eax_2 = data_187c600
    
    if (eax_2 == 0)
        data_187c600 = 1
    else if (eax_2 == 1)
        data_187c600 = 2

HWND result = GetFocus()

if (result == data_7027bc || (data_139270c != 0xffffffff && result == data_1bfe270))
    result = GetAsyncKeyState(0x10)
    data_1b8a6dc = 1
    
    if ((0x8000 & result.w) == 0)
        data_1b8a6dc = 0
else
    data_1b8a6dc = 0

return result
