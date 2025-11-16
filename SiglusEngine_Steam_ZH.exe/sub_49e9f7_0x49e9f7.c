// 函数: sub_49e9f7
// 地址: 0x49e9f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000

if (eax != 0x20700000 && eax != 0x73400000)
    return 0

return 1
