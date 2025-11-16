// 函数: sub_594a10
// 地址: 0x594a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND eax = sub_6c4c40(arg1 + 0xe0)
WPARAM eax_1 = sub_6c4be0(arg1 + 0xe0)
int32_t point = 0
int32_t var_14 = 0
GetCursorPos(&point)
POINT point_1
point_1.x = point
point_1.y = var_14
ScreenToClient(*(arg1 + 0xe4), &point_1)
WPARAM var_20
LRESULT result = sub_6c4ed0(arg1 + 0xe0, point_1.x, point_1.y, &var_20, &point)

if (eax == 1)
    WPARAM esi_1 = var_20
    
    if (eax_1 == esi_1)
        var_20 = 0
        result = sub_594ae0(arg1, &var_20)
        
        if (var_20 != 0)
            return sub_5873f0(result, esi_1, arg1 + 0xe0, point)

return result
