// 函数: sub_40fef0
// 地址: 0x40fef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = *arg1
int32_t eax
eax.b = *(esi + 0xd)
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
int32_t eax_2
int32_t edx_1
eax_2, edx_1 = __allshl(eax_1, edx, 8)
int32_t eax_3
eax_3.b = *(esi + 0xc)
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = sx.q(eax_3)
int32_t eax_6
int32_t edx_4
eax_6, edx_4 = __allshl(eax_2 | eax_4, edx_1 | edx_2, 8)
int32_t eax_7
eax_7.b = *(esi + 0xb)
int32_t eax_8
int32_t edx_5
edx_5:eax_8 = sx.q(eax_7)
int32_t eax_10
int32_t edx_7
eax_10, edx_7 = __allshl(eax_6 | eax_8, edx_4 | edx_5, 8)
int32_t eax_11
eax_11.b = *(esi + 0xa)
int32_t eax_12
int32_t edx_8
edx_8:eax_12 = sx.q(eax_11)
int32_t eax_14
int32_t edx_10
eax_14, edx_10 = __allshl(eax_10 | eax_12, edx_7 | edx_8, 8)
int32_t eax_15
eax_15.b = *(esi + 9)
int32_t eax_16
int32_t edx_11
edx_11:eax_16 = sx.q(eax_15)
int32_t eax_18
int32_t edx_13
eax_18, edx_13 = __allshl(eax_14 | eax_16, edx_10 | edx_11, 8)
int32_t eax_19
eax_19.b = *(esi + 8)
int32_t eax_20
int32_t edx_14
edx_14:eax_20 = sx.q(eax_19)
int32_t eax_22
int32_t edx_16
eax_22, edx_16 = __allshl(eax_18 | eax_20, edx_13 | edx_14, 8)
int32_t eax_23
eax_23.b = *(esi + 7)
int32_t eax_24
int32_t edx_17
edx_17:eax_24 = sx.q(eax_23)
int32_t eax_26
int32_t edx_19
eax_26, edx_19 = __allshl(eax_22 | eax_24, edx_16 | edx_17, 8)
int32_t eax_27
eax_27.b = *(esi + 6)
int32_t eax_28
int32_t edx_20
edx_20:eax_28 = sx.q(eax_27)
return eax_26 | eax_28
