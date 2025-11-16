// 函数: sub_6e0a60
// 地址: 0x6e0a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMMIO hmmio = *(arg1 + 0x14)

if (hmmio == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_1 = *(arg1 + 0x10)
int32_t esi = arg2

if (esi s< 0)
    esi = 0
else if (esi s> eax_1)
    esi = eax_1

int32_t eax_4

if (mmioSeek(hmmio, *(arg1 + 0x88) + esi, 0) == 0xffffffff)
    eax_4.b = 0
    return eax_4

*(arg1 + 0xa8) = esi
eax_4.b = 1
return eax_4
