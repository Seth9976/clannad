// 函数: sub_45e2d0
// 地址: 0x45e2d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg1 + 0x10)

if (ecx s<= 0)
    return 

void* eax = *(arg1 + 0xc)

if (eax == 0)
    return 

int32_t i = 0

if (ecx s<= 0)
    return 

do
    sub_4d1c30(eax, eax + 0x24, eax + 0x44, 0x20)
    *(eax + 0x34) = 0xffffffff
    i += 1
    *(eax + 0x38) = 0xffffffff
    *(eax + 0x3c) = 0xffffffff
    *(eax + 0x40) = 0xffffffff
    eax += *eax
while (i s< *(arg1 + 0x10))
