// 函数: sub_577be0
// 地址: 0x577be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HWND eax = sub_6c4c40(arg2)
int32_t* result_1 = sub_6c4be0(arg2)
POINT point_1
__builtin_memset(&point_1, 0, 8)
GetCursorPos(&point_1)
POINT point
point.x = point_1.x
point.y = point_1.y
ScreenToClient(*(arg2 + 4), &point)
var_10
int32_t var_8
LRESULT result = sub_6c4ed0(arg2, point.x, point.y, &var_8, &var_10)

if (eax == 1 && result_1 == var_8)
    sub_578410(arg1 + 0x3680, &result_1, arg1 + 0x36a0)
    result = result_1
    
    if (result != *(arg1 + 0x3680))
        return sub_586c90(point_1.y, *(result + 0x94), *(result + 0x98), arg3)

return result
