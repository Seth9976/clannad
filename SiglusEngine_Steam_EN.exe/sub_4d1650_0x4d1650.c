// 函数: sub_4d1650
// 地址: 0x4d1650
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1

if (edi s> 0x168)
    edi += 0xfffffe98 - (edi - 0x169) u/ 0x168 * 0x168

if (edi s< 0xfffffe98)
    edi = edi + 0x168 + (0xfffffe97 - edi) u/ 0x168 * 0x168

if (edi s< 0)
    edi += 0x168

void* ecx_6 = edi

if (edi s> 0xb4)
    ecx_6 = edi - 0xb4

if (ecx_6 s> 0x5a)
    ecx_6 = 0xb4 - ecx_6

uint32_t result = zx.d(*(ecx_6 + 0x610f18)) << 7

if (edi s<= 0xb4)
    return result

return neg.d(result)
