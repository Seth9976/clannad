// 函数: sub_4dec50
// 地址: 0x4dec50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t Y = data_208c488
int32_t ebx = data_208c490
int32_t esi = data_208c48c
int32_t* hWnd = data_1cd450c
int32_t X = data_208046c

if (hWnd != 0)
    int32_t* hWnd_1
    hWnd = (*(*hWnd + 0x2c))(hWnd, &hWnd_1)
    
    if (hWnd s>= 0)
        hWnd = hWnd_1
        
        if (hWnd != 1 && hWnd != 0xa)
            hWnd = data_1cd4504
            
            if (hWnd != 0)
                hWnd = MoveWindow(hWnd, X, Y, esi - X + 1, ebx - Y + 1, 1)
                data_63ec80 = X
                data_63ec7c = ebx
                data_63ec78 = X
                data_63eaf4 = ebx

return hWnd
