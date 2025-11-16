// 函数: sub_40d1d1
// 地址: 0x40d1d1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg2
int32_t edi
int32_t var_c = edi
int32_t edi_1 = *(arg3 + 4)
int32_t esi = *(edi_1 + ((modu.dp.d(0:(arg2[1] + 2), 3) + ecx * 3) << 2))
int32_t ecx_1

if (esi != 0xffffffff)
    ecx_1 = sub_40d636(edi_1 + esi * 0xc, ecx)
else
    ecx_1 = ecx | esi

*arg1 = esi
arg1[1] = ecx_1
return arg1
