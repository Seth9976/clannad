// 函数: sub_49acc4
// 地址: 0x49acc4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
*arg2 = 0
void* edi_2 = &arg2[1]
*edi_2 = 0
*(edi_2 + 4) = 0
int32_t esi = arg1[1]
int32_t eax_2

if (esi == 0)
    eax_2 = 0
else
    eax_2 = *(*arg1 + 8) + esi

*arg2 = eax_2
arg2[1] = zx.d(arg1[2].w)
arg2[2] = zx.d(*(arg1 + 0xa))
arg2[3] = zx.d(arg1[3].w)
arg2[4] = zx.d(*arg1[6])
arg2[5] = zx.d(*(arg1[6] + 2))
arg2[6] = zx.d(*(arg1[6] + 4))
arg2[7] = zx.d(*(arg1[6] + 6))
arg2[8] = zx.d(*(arg1[6] + 8))
arg2[9] = zx.d(*(arg1[6] + 0xa))
arg2[0xa] = (arg2[8] * arg2[6] * arg2[7]) << 2
int32_t esi_1 = arg1[5]
int32_t eax_24

if (esi_1 == 0)
    eax_24 = 0
else
    eax_24 = *(*arg1 + 8) + esi_1

arg2[0xb] = eax_24
return 0
