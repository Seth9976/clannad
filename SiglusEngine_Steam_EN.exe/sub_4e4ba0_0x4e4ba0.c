// 函数: sub_4e4ba0
// 地址: 0x4e4ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = data_187c520

if (eax_2 != 0 && eax_2 != 6)
    sub_4e4aa0(0)
    HMENU eax = sub_4d57b0()
    data_1311175 = 0
    return eax

enum SHOW_WINDOW_CMD nCmdShow = SW_SHOW
BOOL eax_1 = 4

if (data_1af17cb == 0)
    nCmdShow = SW_SHOWNOACTIVATE

if (data_1c051e8 == 0)
    SetWindowLongA(data_7027bc, 0xfffffff0, 0x82000000)
    ShowWindow(data_7027bc, nCmdShow)
    eax_1 = UpdateWindow(data_7027bc)
    data_1c051e8 = 1

if (data_1c051e0 != 0)
    HMENU hMenu = GetMenu(data_7027bc)
    
    if (hMenu != 0)
        DestroyMenu(hMenu)
    
    eax_1 = SetMenu(data_7027bc, nullptr)
    data_1c051e0 = 0

data_1311175 = 1
return eax_1
