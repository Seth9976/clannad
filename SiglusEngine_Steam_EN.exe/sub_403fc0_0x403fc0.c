// 函数: sub_403fc0
// 地址: 0x403fc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x68)
void* ecx = *(arg1 + 4)

if (edi == 0)
    return 0xffffffff

if (ecx == 0)
    return 0xffffffff

void* edx = *(ecx + 0x1c)

if (edx == 0)
    return 0xffffffff

char esi = (*(edx + 0xe48)).b
int32_t edx_1 = *(edx + 4)
*(arg1 + 0x20) = 0
int32_t edx_2 = edx_1 s>> (esi + 1)
*(arg1 + 0x30) = edx_2
*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x18) = 0xffffffff
*(arg1 + 0x3c) = 0xffffffff
*(arg1 + 0x14) = edx_2 s>> esi
*(arg1 + 0x44) = 0xffffffff
*(edi + 0x80) = 0xffffffff
*(edi + 0x84) = 0xffffffff
return 0
