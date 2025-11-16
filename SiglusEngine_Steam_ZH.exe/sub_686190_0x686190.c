// 函数: sub_686190
// 地址: 0x686190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x20
int32_t i

do
    if (eax != 0x20)
        eax[-3] = 7
        eax[-4] = 0
        eax[-8].w = 0
        eax[-2] = 0
        eax[-1] = 0
        *eax = 0
    
    eax = &eax[9]
    i = arg2
    arg2 -= 1
while (i != 1)
