// 函数: sub_40d17d
// 地址: 0x40d17d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t edi_1
edi_1.w = *arg2
int32_t ecx_1 = *(arg3 + 4)
uint32_t esi = zx.d(*(ecx_1 + ((modu.dp.d(0:(*(arg2 + 4) + 2), 3) + zx.d(edi_1.w) * 3) << 1)))
int32_t eax_6 = 0xffff

if (esi != 0xffff)
    eax_6 = sub_40c163(ecx_1 + zx.d(esi.w) * 6, edi_1.w)

*arg1 = esi
arg1[1] = eax_6
return arg1
