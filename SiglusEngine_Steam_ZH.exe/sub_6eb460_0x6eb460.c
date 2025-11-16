// 函数: sub_6eb460
// 地址: 0x6eb460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t ebx = *(arg3 + (arg4 << 2) + 0x264)
int32_t edi

if (arg4 == 0 || (*(arg3 + 0x30) & 2) != 0)
    edi = 0
else
    edi = 1

int32_t eax_1 = sx.d(arg5) s>> 8
int32_t edi_1 = edi << 6
arg5.d = sx.d(arg5.b)
int32_t eax_2 = sx.d(*(edi_1 + eax_1 + 0xadc27f))
int32_t ecx

if (arg4 == 0 || (*(arg3 + 0x30) & 1) != 0)
    ecx = 0
else
    ecx = 1

int32_t edi_2 = arg5.d
int32_t ecx_1 = ecx << 6
int32_t esi_4 = sx.d(*(ecx_1 + edi_2 + 0xadc27f))
int32_t ecx_3 = sx.d(*(ecx_1 + edi_2 + 0xadc16f)) + sx.d(*(edi_1 + eax_1 + 0xadc16f)) * ebx

if (esi_4 == 0 && eax_2 == 0)
    *arg2 = ecx_3
    return esi_4 + 1

*arg2 = ecx_3
arg2[1] = eax_2 * ebx + ecx_3 + esi_4
return 2
