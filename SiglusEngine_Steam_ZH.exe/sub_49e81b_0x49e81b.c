// 函数: sub_49e81b
// 地址: 0x49e81b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_3 = *arg1

if ((eax_3 & 0xf0000000) != 0x60000000)
    int32_t eax = eax_3 & 0xfff00000
    
    if (eax != 0x50100000 && eax != 0x50200000 && eax != 0x50300000)
        return 0

return 1
