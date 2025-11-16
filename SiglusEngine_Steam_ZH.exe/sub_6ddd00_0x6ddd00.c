// 函数: sub_6ddd00
// 地址: 0x6ddd00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0 && arg1[1] != 0)
    void* eax = *(arg1 + 0x14)
    
    if (eax != 0)
        (*(eax + 0x28))(&arg1[0x10])
    
    *(arg1 + 0x14) = 0
    *(arg1 + 0x24) = 0

*arg1 = 0
arg1[2] = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[0x2a4], 0, 0x14)
