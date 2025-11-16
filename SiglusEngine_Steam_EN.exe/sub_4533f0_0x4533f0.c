// 函数: sub_4533f0
// 地址: 0x4533f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND eax = GetFocus()

if (eax != data_7027bc && (data_139270c == 0xffffffff || eax != data_1bfe270))
    HWND i = GetFocus()
    void* ecx_1 = &data_925270
    int32_t* edx_1 = &data_f899ac
    int32_t esi_1 = 0
    
    while (*ecx_1 == 0 || i != *edx_1)
        esi_1 += 1
        ecx_1 += 0x134
        edx_1 = &edx_1[5]
        
        if (esi_1 s>= 0x10)
            goto label_453446

POINT point
GetCursorPos(&point)
ScreenToClient(data_7027bc, &point)
int32_t x = point.x

if (x s>= 0 && x s< data_1332b5c)
    int32_t y = point.y
    
    if (y s>= 0 && y s< data_1332b58)
        data_1321ec4 = 0
        return y

label_453446:
int32_t eax_1
eax_1.b = data_1321ec4 != 0
data_1321ec4 = eax_1 + 1
return eax_1 + 1
