// 函数: sub_6eb640
// 地址: 0x6eb640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx:1.b = *arg3
ebx.b = arg3[0xffffffff]
uint32_t esi = zx.d(ebx.b)
uint32_t edi = zx.d(ebx:1.b)
int32_t edx_1 =
    sx.d(*(((zx.d(arg3[0xfffffffe]) + 4 + (edi - esi) * 3 - zx.d(arg3[1])) s>> 3) + arg4))
int32_t eax_7 = esi + edx_1
int32_t ecx_2
ecx_2.b = eax_7 s> 0xff
ebx.b += edx_1.b
ecx_2.b = neg.b(ecx_2.b)
ecx_2.b |= ebx.b
eax_7.b = eax_7 s< 0
int32_t edi_1 = edi - edx_1
eax_7.b -= 1
ecx_2.b &= eax_7.b
arg3[0xffffffff] = ecx_2.b
ecx_2.b = edi_1 s> 0xff
ebx:1.b -= edx_1.b
ecx_2.b = neg.b(ecx_2.b)
ecx_2.b |= ebx:1.b
eax_7.b = edi_1 s< 0
eax_7.b -= 1
ecx_2.b &= eax_7.b
*arg3 = ecx_2.b
void* esi_2 = &arg3[0xfffffffe + arg2]
ebx.b = *(esi_2 + 1)
uint32_t edx_2 = zx.d(ebx.b)
int32_t eax_15 = sx.d(
    *(((zx.d(*esi_2) + 4 + (zx.d(*(esi_2 + 2)) - edx_2) * 3 - zx.d(*(esi_2 + 3))) s>> 3) + arg4))
int32_t eax_16 = eax_15 + edx_2
uint32_t ecx_4
ecx_4.b = eax_16 s> 0xff
ebx.b += eax_15.b
ecx_4.b = neg.b(ecx_4.b)
ecx_4.b |= ebx.b
eax_16.b = eax_16 s< 0
eax_16.b -= 1
ecx_4.b &= eax_16.b
*(esi_2 + 1) = ecx_4.b
edx_2.b = *(esi_2 + 2)
int32_t eax_19 = zx.d(edx_2.b) - eax_15
ecx_4.b = eax_19 s> 0xff
ecx_4.b = neg.b(ecx_4.b)
edx_2.b -= eax_15.b
ecx_4.b |= edx_2.b
eax_19.b = eax_19 s< 0
eax_19.b -= 1
ecx_4.b &= eax_19.b
*(esi_2 + 2) = ecx_4.b
void* eax_21 = esi_2 + arg2
int32_t ebx_1
ebx_1.b = *(eax_21 + 1)
uint32_t edx_3 = zx.d(ebx_1.b)
int32_t eax_31 = sx.d(
    *(((zx.d(*eax_21) + 4 + (zx.d(*(eax_21 + 2)) - edx_3) * 3 - zx.d(*(eax_21 + 3))) s>> 3) + arg4))
int32_t eax_32 = eax_31 + edx_3
uint32_t ecx_6
ecx_6.b = eax_32 s> 0xff
ebx_1.b += eax_31.b
ecx_6.b = neg.b(ecx_6.b)
ecx_6.b |= ebx_1.b
eax_32.b = eax_32 s< 0
eax_32.b -= 1
ecx_6.b &= eax_32.b
*(eax_21 + 1) = ecx_6.b
edx_3.b = *(eax_21 + 2)
int32_t eax_35 = zx.d(edx_3.b) - eax_31
ecx_6.b = eax_35 s> 0xff
edx_3.b -= eax_31.b
ecx_6.b = neg.b(ecx_6.b)
ecx_6.b |= edx_3.b
eax_35.b = eax_35 s< 0
eax_35.b -= 1
ecx_6.b &= eax_35.b
*(eax_21 + 2) = ecx_6.b
void* eax_37 = eax_21 + arg2
int32_t ebx_2
ebx_2.b = *(eax_37 + 1)
uint32_t edx_4 = zx.d(ebx_2.b)
int32_t eax_47 = sx.d(
    *(((zx.d(*eax_37) + 4 + (zx.d(*(eax_37 + 2)) - edx_4) * 3 - zx.d(*(eax_37 + 3))) s>> 3) + arg4))
int32_t eax_48 = eax_47 + edx_4
uint32_t ecx_8
ecx_8.b = eax_48 s> 0xff
ebx_2.b += eax_47.b
ecx_8.b = neg.b(ecx_8.b)
ecx_8.b |= ebx_2.b
eax_48.b = eax_48 s< 0
eax_48.b -= 1
ecx_8.b &= eax_48.b
*(eax_37 + 1) = ecx_8.b
edx_4.b = *(eax_37 + 2)
int32_t eax_51 = zx.d(edx_4.b) - eax_47
ecx_8.b = eax_51 s> 0xff
edx_4.b -= eax_47.b
ecx_8.b = neg.b(ecx_8.b)
ecx_8.b |= edx_4.b
eax_51.b = eax_51 s< 0
eax_51.b -= 1
ecx_8.b &= eax_51.b
*(eax_37 + 2) = ecx_8.b
void* eax_53 = eax_37 + arg2
int32_t ebx_3
ebx_3.b = *(eax_53 + 1)
uint32_t edx_5 = zx.d(ebx_3.b)
int32_t eax_63 = sx.d(
    *(((zx.d(*eax_53) + 4 + (zx.d(*(eax_53 + 2)) - edx_5) * 3 - zx.d(*(eax_53 + 3))) s>> 3) + arg4))
int32_t eax_64 = eax_63 + edx_5
uint32_t ecx_10
ecx_10.b = eax_64 s> 0xff
ebx_3.b += eax_63.b
ecx_10.b = neg.b(ecx_10.b)
ecx_10.b |= ebx_3.b
eax_64.b = eax_64 s< 0
eax_64.b -= 1
ecx_10.b &= eax_64.b
*(eax_53 + 1) = ecx_10.b
edx_5.b = *(eax_53 + 2)
int32_t eax_67 = zx.d(edx_5.b) - eax_63
ecx_10.b = eax_67 s> 0xff
edx_5.b -= eax_63.b
ecx_10.b = neg.b(ecx_10.b)
ecx_10.b |= edx_5.b
eax_67.b = eax_67 s< 0
eax_67.b -= 1
ecx_10.b &= eax_67.b
*(eax_53 + 2) = ecx_10.b
void* eax_69 = eax_53 + arg2
int32_t ebx_4
ebx_4.b = *(eax_69 + 1)
uint32_t edx_6 = zx.d(ebx_4.b)
int32_t eax_79 = sx.d(
    *(((zx.d(*eax_69) + 4 + (zx.d(*(eax_69 + 2)) - edx_6) * 3 - zx.d(*(eax_69 + 3))) s>> 3) + arg4))
int32_t eax_80 = eax_79 + edx_6
uint32_t ecx_12
ecx_12.b = eax_80 s> 0xff
ebx_4.b += eax_79.b
ecx_12.b = neg.b(ecx_12.b)
ecx_12.b |= ebx_4.b
eax_80.b = eax_80 s< 0
eax_80.b -= 1
ecx_12.b &= eax_80.b
*(eax_69 + 1) = ecx_12.b
edx_6.b = *(eax_69 + 2)
int32_t eax_83 = zx.d(edx_6.b) - eax_79
ecx_12.b = eax_83 s> 0xff
edx_6.b -= eax_79.b
ecx_12.b = neg.b(ecx_12.b)
ecx_12.b |= edx_6.b
eax_83.b = eax_83 s< 0
eax_83.b -= 1
ecx_12.b &= eax_83.b
*(eax_69 + 2) = ecx_12.b
void* eax_85 = eax_69 + arg2
int32_t ebx_5
ebx_5.b = *(eax_85 + 1)
uint32_t edx_7 = zx.d(ebx_5.b)
int32_t eax_95 = sx.d(
    *(((zx.d(*eax_85) + 4 + (zx.d(*(eax_85 + 2)) - edx_7) * 3 - zx.d(*(eax_85 + 3))) s>> 3) + arg4))
int32_t eax_96 = eax_95 + edx_7
uint32_t ecx_14
ecx_14.b = eax_96 s> 0xff
ebx_5.b += eax_95.b
ecx_14.b = neg.b(ecx_14.b)
ecx_14.b |= ebx_5.b
eax_96.b = eax_96 s< 0
eax_96.b -= 1
ecx_14.b &= eax_96.b
*(eax_85 + 1) = ecx_14.b
edx_7.b = *(eax_85 + 2)
int32_t eax_99 = zx.d(edx_7.b) - eax_95
ecx_14.b = eax_99 s> 0xff
edx_7.b -= eax_95.b
ecx_14.b = neg.b(ecx_14.b)
ecx_14.b |= edx_7.b
eax_99.b = eax_99 s< 0
eax_99.b -= 1
ecx_14.b &= eax_99.b
*(eax_85 + 2) = ecx_14.b
void* eax_101 = eax_85 + arg2
int32_t ebx_6
ebx_6.b = *(eax_101 + 1)
uint32_t edx_8 = zx.d(ebx_6.b)
int32_t eax_109 = sx.d(*(((zx.d(*eax_101) + 4 + (zx.d(*(eax_101 + 2)) - edx_8) * 3
    - zx.d(*(eax_101 + 3))) s>> 3) + arg4))
int32_t eax_110 = eax_109 + edx_8
uint32_t ecx_16
ecx_16.b = eax_110 s> 0xff
ebx_6.b += eax_109.b
ecx_16.b = neg.b(ecx_16.b)
ecx_16.b |= ebx_6.b
eax_110.b = eax_110 s< 0
eax_110.b -= 1
ecx_16.b &= eax_110.b
*(eax_101 + 1) = ecx_16.b
edx_8.b = *(eax_101 + 2)
int32_t result = zx.d(edx_8.b) - eax_109
ecx_16.b = result s> 0xff
edx_8.b -= eax_109.b
ecx_16.b = neg.b(ecx_16.b)
ecx_16.b |= edx_8.b
result.b = result s< 0
result.b -= 1
ecx_16.b &= result.b
*(eax_101 + 2) = ecx_16.b
return result
