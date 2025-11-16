// 函数: sub_49e84e
// 地址: 0x49e84e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000

if (eax != 0x10300000 && eax != 0x10500000 && eax != 0x10600000 && eax != 0x10700000)
    return 0

return 1
