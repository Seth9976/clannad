// 函数: sub_59fe60
// 地址: 0x59fe60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 

int32_t* eax = arg1 + 0x18
int32_t i

do
    if (eax != 0x18)
        eax[1] = 7
        *eax = 0
        eax[-4].w = 0
    
    eax = &eax[0xe]
    i = arg2
    arg2 -= 1
while (i != 1)
