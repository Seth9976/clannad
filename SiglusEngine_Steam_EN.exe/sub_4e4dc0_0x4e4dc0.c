// 函数: sub_4e4dc0
// 地址: 0x4e4dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_187c520

if (eax_2 != 0xffffffff)
    if (eax_2 s<= 0xffffffff || eax_2 s>= 8)
        data_187c520 = 1
    else if (eax_2 == 5 || eax_2 == 4)
        if (eax_2 - 1 u> 4)
            data_187c520 = 1
        else
            data_187c520 = sub_4d4ec0(eax_2 - 1)
    
    sub_4e4940()
    sub_4e4ba0()
    sub_4e4d50()
    int32_t eax_4 = data_187c520
    data_1b8a71c = 1
    data_1321ec8 = 1
    data_1b8ae5c = eax_4
    data_187c520 = 0xffffffff
    data_1af17cb = 0

data_1c0518e = 0
RECT rect_1
GetWindowRect(data_7027bc, &rect_1)
int32_t bottom

if (data_1c051dc == rect_1.right - rect_1.left)
    bottom = rect_1.bottom - rect_1.top

if (data_1c051dc != rect_1.right - rect_1.left || data_1c051d8 != bottom)
    data_187c520 = data_1b8ae5c
    int32_t var_30
    int32_t var_2c
    sub_4e4c60(&var_2c, &var_30)
    uint32_t var_38_1 = zx.d(data_1af17cb)
    sub_4d4c00(var_2c, var_30, &var_2c)
    RECT rect
    bottom = GetClientRect(data_7027bc, &rect)
    int32_t right = rect.right
    
    if (right s> 0)
        bottom = rect.bottom
        
        if (bottom s> 0)
            data_1332b5c = right
            data_1332b58 = bottom
    
    data_1b8a71c = 1
    data_1321ec8 = 1
    data_187c520 = 0xffffffff

sub_5f02dd(eax_1 ^ &__saved_ebp)
return bottom
