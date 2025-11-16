// 函数: sub_4da490
// 地址: 0x4da490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    sub_4d9320(0x80004003)
    noreturn

if (arg2 == 0)
    sub_4d9320(0x80004003)
    noreturn

HDC eax_1 = GetDC(nullptr)
int32_t nNumber = GetDeviceCaps(eax_1, 0x58)
int32_t nNumber_1 = GetDeviceCaps(eax_1, 0x5a)
ReleaseDC(nullptr, eax_1)
*arg2 = MulDiv(nNumber, *arg1, 0x9ec)
int32_t result = MulDiv(nNumber_1, arg1[1], 0x9ec)
arg2[1] = result
return result
