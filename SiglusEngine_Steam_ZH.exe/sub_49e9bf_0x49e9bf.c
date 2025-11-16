// 函数: sub_49e9bf
// 地址: 0x49e9bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1 & 0xfff00000

if (eax != 0x73100000 && eax != 0x73300000 && eax != 0x73d00000 && eax != 0x73e00000
        && eax != 0x73f00000 && eax != 0x74000000)
    return 0

return 1
