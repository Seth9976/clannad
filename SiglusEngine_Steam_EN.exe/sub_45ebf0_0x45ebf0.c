// 函数: sub_45ebf0
// 地址: 0x45ebf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HCURSOR result = data_1321ec4

if (result != 3)
    int32_t eax
    
    if (result == 0)
        eax = data_108f314
    
    HCURSOR hCursor
    
    if (result != 0 || eax == 0xffffffff)
        result = LoadCursorA(nullptr, 0x7f00)
        hCursor = result
    else
        result = data_13132c4 + ((data_1cd5314 + eax * 0x22) << 1)
        hCursor = (&data_1321ee0)[result]
    
    if (hCursor != 0)
        result = GetCursor()
        
        if (result != hCursor)
            return SetCursor(hCursor)

return result
