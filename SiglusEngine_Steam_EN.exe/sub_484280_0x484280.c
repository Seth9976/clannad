// 函数: sub_484280
// 地址: 0x484280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_70379c == 0 || data_71929c == 0x13)
    data_1af17a4 = 4
    __builtin_memset(&data_1ff4ca0, 0, 0x14)
    return 

HWND eax = GetFocus()

if (eax != data_7027bc && (data_139270c == 0xffffffff || eax != data_1bfe270))
    data_1af17a4 = 4
    __builtin_memset(&data_1ff4ca0, 0, 0x14)
    return 

eax = data_1392710
void* edi_2 = eax - data_1af17a8

if (edi_2 u< 0x14)
    __builtin_memset(&data_1ff4ca0, 0, 0x14)
    return 

bool cond:1_1 = data_13701ec != 0
data_1af17a8 = eax

if (not(cond:1_1) && data_1370234 == 0 && data_1370210 == 0 && data_1370258 == 0)
    data_1af17a4 = 4
    __builtin_memset(&data_1ff4ca0, 0, 0x14)
    return 

int32_t esi_1 = data_1af17a4

if (data_187c600 != 0)
    esi_1 *= 2

POINT point
GetCursorPos(&point)
int32_t y = point.y

if (data_13701ec != 0)
    y -= esi_1
    point.y = y

if (data_1370234 != 0)
    y += esi_1
    point.y = y

int32_t x = point.x

if (data_1370210 != 0)
    x += esi_1
    point.x = x

if (data_1370258 != 0)
    x -= esi_1
    point.x = x

SetCursorPos(x, y)

if (edi_2 u< 0x1e)
    eax = nullptr
else
    eax = data_1ff4ca0 + 1

data_1ff4ca0 = eax
int32_t ecx_2

if (edi_2 u< 0x28)
    ecx_2 = 0
else
    ecx_2 = data_1ff4ca4 + 1

data_1ff4ca4 = ecx_2
int32_t esi_3

if (edi_2 u< 0x32)
    esi_3 = 0
else
    esi_3 = data_1ff4ca8 + 1

data_1ff4ca8 = esi_3
int32_t edx_2

if (edi_2 u< 0x3c)
    edx_2 = 0
else
    edx_2 = data_1ff4cac + 1

int32_t edi_3 = data_1ff4cb0
data_1ff4cac = edx_2

if (edi_3 s< 4 && edx_2 s>= 3)
    data_1ff4cb0 = 4
    data_1af17a4 = 0x10
    return 

if (edi_3 s< 3 && esi_3 s>= 3)
    data_1ff4cb0 = 3
    data_1af17a4 = 0xc
    return 

if (edi_3 s< 2 && ecx_2 s>= 3)
    data_1ff4cb0 = 2
    data_1af17a4 = 8
    return 

if (edi_3 s< 1 && eax s>= 3)
    data_1ff4cb0 = 1
    data_1af17a4 = 6
