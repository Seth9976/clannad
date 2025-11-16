// 函数: sub_49e8a9
// 地址: 0x49e8a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000

if (eax != 0x10000000 && eax != 0x10100000 && eax != 0x11200000 && eax != 0x20700000
        && eax != 0x20800000 && eax != 0x20900000)
    return 0

return 1
