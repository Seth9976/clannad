// 函数: sub_4d49c0
// 地址: 0x4d49c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = GetWindowLongA(arg1, 0xfffffffa)

if (data_20c04ec == eax && (GetWindowLongA(arg1, 0xffffffeb) & 1) != 0)
    data_20c04f4 = arg1
    data_20c04f0 = 1
    return 0

return 1
