// 函数: sub_579980
// 地址: 0x579980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x2c50)

if (eax == 0 && *(arg1 + 0x2c54) == eax)
    data_20f20d4 = eax
    return eax

int32_t ebx = data_7030dc
int32_t esi = data_70300c
int32_t ecx = ebx << 2
int32_t eax_1 = esi << 2
int32_t edx_2 = (eax_1 - esi) s>> 1
int32_t edx_5 = (ecx - ebx) s>> 1
int32_t eax_2
int32_t edx_6
edx_6:eax_2 = sx.q(eax_1)
int32_t eax_4
int32_t edx_8
edx_8:eax_4 = sx.q(ecx)
int32_t edx_10 = *(arg1 + 0xc0)
int32_t ecx_5 = *(arg1 + 0xc4)
int32_t esi_3 = (esi s>> 1) - ((*(arg1 + 0xc8) - edx_10 + 1) s>> 1) - edx_10
int32_t edx_14 = (data_7030dc s>> 1) - ((*(arg1 + 0xcc) - ecx_5 + 1) s>> 1) - ecx_5
int32_t ecx_8 = neg.d(edx_2 + esi_3)
int32_t eax_11 = *(arg1 + 0x2c54) s>> 1
data_20f3378 = ecx_8
int32_t eax_12 = eax_11 * (((edx_8 & 0x7f) + eax_4) s>> 7)
data_20f337c = neg.d(edx_5 + edx_14)
int32_t esi_6 = data_7030dc
data_20f3380 = edx_2 + data_70300c - esi_3 - 1
int32_t edx_15 = data_20f337c
int32_t esi_8 = data_20f3380
data_20f3384 = edx_5 - 1 + esi_6 - edx_14
int32_t ecx_20 = (eax s>> 1) * (((edx_6 & 0x7f) + eax_2) s>> 7)
int32_t ebx_6 = ecx_8 - ecx_20
int32_t edx_16 = edx_15 - eax_12
data_20f3388 = ebx_6
data_20f338c = edx_16
int32_t edi_2 = ecx_20 + esi_8
int32_t ecx_21 = data_20f3384
int32_t eax_13 = eax_12 + ecx_21
data_20f3390 = edi_2
int32_t esi_9 = data_20f337c
data_20f3394 = eax_13

if (ecx_8 s> esi_8)
    data_20f3378 = data_20f3380
    data_20f3380 = ecx_8
    ecx_21 = data_20f3384

if (esi_9 s> ecx_21)
    data_20f337c = ecx_21
    data_20f3384 = esi_9

if (ebx_6 s> edi_2)
    data_20f3388 = edi_2
    data_20f3390 = ebx_6

if (edx_16 s> eax_13)
    data_20f338c = eax_13
    data_20f3394 = edx_16

data_20f20d4 = 1
return eax_13
