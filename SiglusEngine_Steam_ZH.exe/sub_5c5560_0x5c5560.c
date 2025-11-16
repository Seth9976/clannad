// 函数: sub_5c5560
// 地址: 0x5c5560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    sub_5c4990(0x80004003)
    noreturn

if (arg2 == 0)
    sub_5c4990(0x80004003)
    noreturn

HDC eax_1 = GetDC(nullptr)
int32_t nDenominator = GetDeviceCaps(eax_1, 0x58)
int32_t nDenominator_1 = GetDeviceCaps(eax_1, 0x5a)
ReleaseDC(nullptr, eax_1)
*arg2 = MulDiv(0x9ec, *arg1, nDenominator)
int32_t result = MulDiv(0x9ec, arg1[1], nDenominator_1)
arg2[1] = result
return result
