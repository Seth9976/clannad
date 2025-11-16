// 函数: sub_5a8690
// 地址: 0x5a8690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ ho = arg1[7]

if (ho != 0)
    DeleteObject(ho)

bool cond:0 = arg1[5] u< 8
arg1[4] = 0
int16_t* eax

if (cond:0)
    eax = arg1
else
    eax = *arg1

*eax = 0
arg1[6] = 0
arg1[7] = 0

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
return 0
