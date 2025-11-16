// 函数: sub_4e4aa0
// 地址: 0x4e4aa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL eax = 4
enum SHOW_WINDOW_CMD nCmdShow = SW_SHOW

if (data_1af17cb == 0)
    nCmdShow = SW_SHOWNOACTIVATE

if (arg1 == 0)
    if (data_1c051e8 != 0)
        SetWindowLongA(data_7027bc, 0xfffffff0, data_1c051e4)
        ShowWindow(data_7027bc, nCmdShow)
        eax = UpdateWindow(data_7027bc)
        bool cond:1_1 = data_1af4768 == 0
        data_1c051e8 = 0
        
        if (not(cond:1_1))
            SetClassLongA(data_7027bc, 0xfffffff2, 0)
            SetClassLongA(data_7027bc, 0xffffffde, 0)
            SetClassLongA(data_7027bc, 0xfffffff2, data_1af4768)
            SetClassLongA(data_7027bc, 0xffffffde, data_1af4768)
            return UpdateWindow(data_7027bc)
else if (data_1c051e8 == 0)
    SetWindowLongA(data_7027bc, 0xfffffff0, 0x82000000)
    ShowWindow(data_7027bc, nCmdShow)
    BOOL eax_1 = UpdateWindow(data_7027bc)
    data_1c051e8 = 1
    return eax_1

return eax
