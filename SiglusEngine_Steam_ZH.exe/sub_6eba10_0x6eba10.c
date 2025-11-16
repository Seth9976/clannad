// 函数: sub_6eba10
// 地址: 0x6eba10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
void* eax = edi * 2
char* ecx = arg3 - eax
arg2.b = *(ecx + edi)
void* eax_1 = eax + ecx
void* eax_2 = ecx + edi
void* ebx_1 = edi * 3 + ecx
uint32_t esi = zx.d(arg2.b)
int32_t ebx_2 = sx.d(*(((zx.d(*ecx) + 4 + (zx.d(*eax_1) - esi) * 3 - zx.d(*ebx_1)) s>> 3) + arg4))
int32_t eax_12 = esi + ebx_2
int32_t ecx_3
ecx_3.b = eax_12 s> 0xff
arg2.b += ebx_2.b
ecx_3.b = neg.b(ecx_3.b)
ecx_3.b |= arg2.b
eax_12.b = eax_12 s< 0
eax_12.b -= 1
ecx_3.b &= eax_12.b
*eax_2 = ecx_3.b
arg2.b = *eax_1
int32_t eax_15 = zx.d(arg2.b) - ebx_2
ecx_3.b = eax_15 s> 0xff
arg2.b -= ebx_2.b
ecx_3.b = neg.b(ecx_3.b)
ecx_3.b |= arg2.b
eax_15.b = eax_15 s< 0
eax_15.b -= 1
ecx_3.b &= eax_15.b
*eax_1 = ecx_3.b
ebx_2.b = *(eax_2 + 1)
uint32_t edx = zx.d(ebx_2.b)
int32_t eax_26 =
    sx.d(*(((zx.d(ecx[1]) + 4 + (zx.d(*(eax_1 + 1)) - edx) * 3 - zx.d(*(ebx_1 + 1))) s>> 3) + arg4))
int32_t eax_27 = eax_26 + edx
uint32_t ecx_5
ecx_5.b = eax_27 s> 0xff
ebx_2.b += eax_26.b
ecx_5.b = neg.b(ecx_5.b)
ecx_5.b |= ebx_2.b
eax_27.b = eax_27 s< 0
eax_27.b -= 1
ecx_5.b &= eax_27.b
*(eax_2 + 1) = ecx_5.b
edx.b = *(eax_1 + 1)
int32_t eax_31 = zx.d(edx.b) - eax_26
ecx_5.b = eax_31 s> 0xff
edx.b -= eax_26.b
ecx_5.b = neg.b(ecx_5.b)
ecx_5.b |= edx.b
eax_31.b = eax_31 s< 0
eax_31.b -= 1
ecx_5.b &= eax_31.b
*(eax_1 + 1) = ecx_5.b
int32_t ebx_3
ebx_3.b = *(eax_2 + 2)
uint32_t edx_1 = zx.d(ebx_3.b)
int32_t eax_44 = sx.d(
    *(((zx.d(ecx[2]) + 4 + (zx.d(*(eax_1 + 2)) - edx_1) * 3 - zx.d(*(ebx_1 + 2))) s>> 3) + arg4))
int32_t eax_45 = eax_44 + edx_1
uint32_t ecx_7
ecx_7.b = eax_45 s> 0xff
ebx_3.b += eax_44.b
ecx_7.b = neg.b(ecx_7.b)
ecx_7.b |= ebx_3.b
eax_45.b = eax_45 s< 0
eax_45.b -= 1
ecx_7.b &= eax_45.b
*(eax_2 + 2) = ecx_7.b
edx_1.b = *(eax_1 + 2)
int32_t eax_49 = zx.d(edx_1.b) - eax_44
ecx_7.b = eax_49 s> 0xff
edx_1.b -= eax_44.b
ecx_7.b = neg.b(ecx_7.b)
ecx_7.b |= edx_1.b
eax_49.b = eax_49 s< 0
eax_49.b -= 1
ecx_7.b &= eax_49.b
*(eax_1 + 2) = ecx_7.b
int32_t ebx_4
ebx_4.b = *(eax_2 + 3)
uint32_t edx_2 = zx.d(ebx_4.b)
int32_t eax_62 = sx.d(
    *(((zx.d(ecx[3]) + 4 + (zx.d(*(eax_1 + 3)) - edx_2) * 3 - zx.d(*(ebx_1 + 3))) s>> 3) + arg4))
int32_t eax_63 = eax_62 + edx_2
uint32_t ecx_9
ecx_9.b = eax_63 s> 0xff
ebx_4.b += eax_62.b
ecx_9.b = neg.b(ecx_9.b)
ecx_9.b |= ebx_4.b
eax_63.b = eax_63 s< 0
eax_63.b -= 1
ecx_9.b &= eax_63.b
*(eax_2 + 3) = ecx_9.b
edx_2.b = *(eax_1 + 3)
int32_t eax_67 = zx.d(edx_2.b) - eax_62
ecx_9.b = eax_67 s> 0xff
edx_2.b -= eax_62.b
ecx_9.b = neg.b(ecx_9.b)
ecx_9.b |= edx_2.b
eax_67.b = eax_67 s< 0
eax_67.b -= 1
ecx_9.b &= eax_67.b
*(eax_1 + 3) = ecx_9.b
int32_t ebx_5
ebx_5.b = *(eax_2 + 4)
uint32_t edx_3 = zx.d(ebx_5.b)
int32_t eax_80 = sx.d(*(((zx.d(ecx[4]) + 4 + (zx.d(ecx[(edi << 1) + 4]) - edx_3) * 3
    - zx.d(*(ebx_1 + 4))) s>> 3) + arg4))
int32_t eax_81 = eax_80 + edx_3
uint32_t ecx_11
ecx_11.b = eax_81 s> 0xff
ebx_5.b += eax_80.b
ecx_11.b = neg.b(ecx_11.b)
ecx_11.b |= ebx_5.b
eax_81.b = eax_81 s< 0
eax_81.b -= 1
ecx_11.b &= eax_81.b
*(eax_2 + 4) = ecx_11.b
edx_3.b = ecx[(edi << 1) + 4]
int32_t eax_85 = zx.d(edx_3.b) - eax_80
ecx_11.b = eax_85 s> 0xff
edx_3.b -= eax_80.b
ecx_11.b = neg.b(ecx_11.b)
ecx_11.b |= edx_3.b
eax_85.b = eax_85 s< 0
eax_85.b -= 1
ecx_11.b &= eax_85.b
ecx[(edi << 1) + 4] = ecx_11.b
int32_t ebx_6
ebx_6.b = *(eax_2 + 5)
uint32_t edx_4 = zx.d(ebx_6.b)
int32_t eax_98 = sx.d(
    *(((zx.d(ecx[5]) + 4 + (zx.d(*(eax_1 + 5)) - edx_4) * 3 - zx.d(*(ebx_1 + 5))) s>> 3) + arg4))
int32_t eax_99 = eax_98 + edx_4
uint32_t ecx_13
ecx_13.b = eax_99 s> 0xff
ebx_6.b += eax_98.b
ecx_13.b = neg.b(ecx_13.b)
ecx_13.b |= ebx_6.b
eax_99.b = eax_99 s< 0
eax_99.b -= 1
ecx_13.b &= eax_99.b
*(eax_2 + 5) = ecx_13.b
edx_4.b = *(eax_1 + 5)
int32_t eax_103 = zx.d(edx_4.b) - eax_98
ecx_13.b = eax_103 s> 0xff
edx_4.b -= eax_98.b
ecx_13.b = neg.b(ecx_13.b)
ecx_13.b |= edx_4.b
eax_103.b = eax_103 s< 0
eax_103.b -= 1
ecx_13.b &= eax_103.b
*(eax_1 + 5) = ecx_13.b
int32_t ebx_7
ebx_7.b = *(eax_2 + 6)
uint32_t edx_5 = zx.d(ebx_7.b)
int32_t eax_117 = sx.d(*(((zx.d(ecx[6]) + 4 + (zx.d(ecx[(edi << 1) + 6]) - edx_5) * 3
    - zx.d(*(edi * 3 + ecx + 6))) s>> 3) + arg4))
int32_t eax_118 = eax_117 + edx_5
uint32_t ecx_15
ecx_15.b = eax_118 s> 0xff
ebx_7.b += eax_117.b
ecx_15.b = neg.b(ecx_15.b)
ecx_15.b |= ebx_7.b
eax_118.b = eax_118 s< 0
eax_118.b -= 1
ecx_15.b &= eax_118.b
*(eax_2 + 6) = ecx_15.b
edx_5.b = ecx[(edi << 1) + 6]
int32_t eax_122 = zx.d(edx_5.b) - eax_117
ecx_15.b = eax_122 s> 0xff
edx_5.b -= eax_117.b
ecx_15.b = neg.b(ecx_15.b)
ecx_15.b |= edx_5.b
eax_122.b = eax_122 s< 0
eax_122.b -= 1
ecx_15.b &= eax_122.b
ecx[(edi << 1) + 6] = ecx_15.b
int32_t ebx_8
ebx_8.b = *(eax_2 + 7)
uint32_t edx_6 = zx.d(ebx_8.b)
int32_t eax_134 = sx.d(
    *(((zx.d(ecx[7]) + 4 + (zx.d(*(eax_1 + 7)) - edx_6) * 3 - zx.d(*(ebx_1 + 7))) s>> 3) + arg4))
int32_t eax_135 = eax_134 + edx_6
uint32_t ecx_17
ecx_17.b = eax_135 s> 0xff
ebx_8.b += eax_134.b
ecx_17.b = neg.b(ecx_17.b)
ecx_17.b |= ebx_8.b
eax_135.b = eax_135 s< 0
eax_135.b -= 1
ecx_17.b &= eax_135.b
*(eax_2 + 7) = ecx_17.b
edx_6.b = *(eax_1 + 7)
int32_t result = zx.d(edx_6.b) - eax_134
ecx_17.b = result s> 0xff
edx_6.b -= eax_134.b
ecx_17.b = neg.b(ecx_17.b)
ecx_17.b |= edx_6.b
result.b = result s< 0
result.b -= 1
ecx_17.b &= result.b
*(eax_1 + 7) = ecx_17.b
return result
