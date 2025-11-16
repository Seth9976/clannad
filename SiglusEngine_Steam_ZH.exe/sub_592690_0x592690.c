// 函数: sub_592690
// 地址: 0x592690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x20
int32_t i

do
    if (eax != 0x20)
        eax[1] = 7
        *eax = 0
        eax[-4].w = 0
    
    eax = &eax[0xa]
    i = arg2
    arg2 -= 1
while (i != 1)
