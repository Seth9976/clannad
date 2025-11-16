// 函数: sub_60d4a0
// 地址: 0x60d4a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x94
int32_t i

do
    if (eax != 0x94)
        eax[-6] = 0
        eax[1] = 7
        *eax = 0
        eax[-4].w = 0
        __builtin_memset(&eax[3], 0, 0x28)
    
    eax = &eax[0x32]
    i = arg2
    arg2 -= 1
while (i != 1)
