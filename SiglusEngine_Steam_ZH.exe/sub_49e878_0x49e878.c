// 函数: sub_49e878
// 地址: 0x49e878
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000

if (eax != 0x20000000 && eax != 0x20100000 && eax != 0x20400000 && eax != 0x20500000
        && eax != 0x50000000)
    return 0

return 1
