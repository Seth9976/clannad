// 函数: sub_664120
// 地址: 0x664120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx
edx.b = *(arg1 + 2) == 0xffff
int16_t* eax
char ebx

if (edx == 0)
    ebx = (*arg1).b
    eax = arg1 + 0x12
else
    ebx = (arg1[3]).b
    eax = arg1 + 0x1a

if (*eax != 0xffff)
    do
        arg1.w = *eax
        eax = &eax[1]
    while (arg1.w != 0)
else
    eax = &eax[2]

if (*eax != 0xffff)
    do
        arg1.w = *eax
        eax = &eax[1]
    while (arg1.w != 0)
else
    eax = &eax[2]

do
    arg1.w = *eax
    eax = &eax[1]
while (arg1.w != 0)

if ((ebx & 0x40) != 0)
    if (edx == 0)
        eax = &eax[1]
    else
        eax = &eax[3]
    
    do
        arg1.w = *eax
        eax = &eax[1]
    while (arg1.w != 0)

return (eax + 3) & 0xfffffffc
