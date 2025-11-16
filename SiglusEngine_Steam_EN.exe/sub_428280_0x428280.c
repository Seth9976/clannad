// 函数: sub_428280
// 地址: 0x428280
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* eax = *(arg1 + 8)

if (*(arg1 + 0xc) s> 0)
    do
        *(eax + 0x10) = 0xffffffff
        eax += 0x28
        *(eax - 0x14) = 0
        i += 1
        *(eax - 0x10) = 0
        *(eax - 0xc) = 0x50
        *(eax - 8) = 0xff
        *(eax - 4) = 0
        *(eax - 0x28) = 0
        *(eax - 0x24) = 0
    while (i s< *(arg1 + 0xc))

int32_t result = sub_4d6c40(&arg1[4], &arg1[8])
*arg1 = 0
arg1[2] = 0
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
return result
