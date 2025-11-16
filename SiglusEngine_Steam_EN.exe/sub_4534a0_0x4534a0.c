// 函数: sub_4534a0
// 地址: 0x4534a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

POINT point
GetCursorPos(&point)
ScreenToClient(data_7027bc, &point)
int32_t x = point.x

if (x s>= data_1356ec4 && x s<= data_1356ecc)
    int32_t y = point.y
    
    if (y s>= data_1356ec8 && y s<= data_1356ed0)
        return 0

return 1
