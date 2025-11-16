// 函数: sub_6eaa50
// 地址: 0x6eaa50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x30)
int32_t ecx_2 = not.d(eax) & 1
uint32_t edx_1 = *(arg1 + 4) u>> 3
int32_t eax_3 = not.d(eax u>> 1) & 1
uint32_t esi_1 = *(arg1 + 8) u>> 3
int32_t edi_1 = (ecx_2 + edx_1) s>> ecx_2.b
int32_t edi_3 = (eax_3 + esi_1) s>> eax_3.b
int32_t eax_5 = edi_3 * edi_1
int32_t edi_5 = esi_1 * edx_1
int32_t ecx_5 = (esi_1 + 3) s>> 2
int32_t eax_6 = eax_5 * 2
int32_t eax_7 = eax_6 + edi_5
int32_t eax_9 = (edx_1 + 3) s>> 2
int32_t edx_4 = (edi_1 + 3) s>> 2
int32_t ecx_6 = ecx_5 * eax_9
int32_t edx_7 = (edi_3 + 3) s>> 2
int32_t esi_3 = edx_7 * edx_4
int32_t eax_11 = esi_3 * 2 + ecx_6
int32_t eax_12 = ecx_6 << 2

if (divs.dp.d(sx.q(edi_5), edx_1) != esi_1 || eax_6 s< eax_5 || eax_7 s< edi_5
        || divu.dp.d(0:ecx_6, eax_9) != ecx_5 || esi_3 * 2 u< esi_3 || eax_11 u< ecx_6
        || ecx_6 << 2 u>> 2 != ecx_6)
    return 0xffffffe9

*(arg1 + 0x74) = esi_1
*(arg1 + 0x80) = eax_9
*(arg1 + 0xb0) = edi_1
*(arg1 + 0x90) = edi_1
*(arg1 + 0x84) = ecx_5
*(arg1 + 0xb4) = edi_3
*(arg1 + 0x94) = edi_3
*(arg1 + 0xbc) = eax_5
*(arg1 + 0x9c) = eax_5
*(arg1 + 0xb8) = eax_5 + edi_5
*(arg1 + 0xc0) = edx_4
*(arg1 + 0xa0) = edx_4
*(arg1 + 0xc4) = edx_7
*(arg1 + 0xa4) = edx_7
*(arg1 + 0x70) = edx_1
void* esi_5 = arg1 + 0x88
*(arg1 + 0xc8) = esi_3 + ecx_6
*(arg1 + 0x8c) = ecx_6
*(arg1 + 0xa8) = ecx_6
*(arg1 + 0xcc) = esi_3
*(arg1 + 0xac) = esi_3
*(arg1 + 0x78) = 0
*(arg1 + 0x7c) = edi_5
*esi_5 = 0
*(arg1 + 0x98) = edi_5
*(arg1 + 0xdc) = eax_7
int32_t eax_31 = sub_74c590(eax_7, esi_3, ecx_6, eax_7, 4)
*(arg1 + 0xd0) = eax_31
int32_t eax_33 = _malloc(eax_7 * 2)
*(arg1 + 0xd8) = eax_33
*(arg1 + 0xe8) = eax_11
int32_t eax_35
int32_t ecx_10
int32_t edx_14
eax_35, ecx_10, edx_14 = _malloc(eax_11 << 6)
*(arg1 + 0xe0) = eax_35
int32_t eax_36
int32_t edx_15
eax_36, edx_15 = sub_74c590(eax_35, edx_14, ecx_10, eax_11, 1)
*(arg1 + 0xe4) = eax_36
*(arg1 + 0xf4) = eax_9 * 2
int32_t ecx_13 = ecx_5 * 2
*(arg1 + 0xfc) = eax_12
*(arg1 + 0xf8) = ecx_13
int32_t eax_39
int32_t ecx_14
int32_t edx_16
eax_39, ecx_14, edx_16 = sub_74c590(eax_12, edx_15, ecx_13, eax_12, 0x30)
*(arg1 + 0xec) = eax_39
int32_t eax_41 = sub_74c590(eax_12, edx_16, ecx_14, eax_12, 1)
*(arg1 + 0xf0) = eax_41
int32_t eax_43
int32_t ecx_16
eax_43, ecx_16 = _malloc(eax_7 << 2)
*(arg1 + 0x100) = eax_43

if (eax_31 == 0 || eax_33 == 0 || eax_35 == 0 || eax_36 == 0 || eax_39 == 0 || eax_41 == 0
        || eax_43 == 0)
    return 0xffffffff

int32_t i_1 = 3
int32_t i

do
    int32_t ecx_18 = *esi_5
    eax_43 = sub_6ea220(eax_43, *(arg1 + 0xe4) + ecx_18, (ecx_18 << 6) + *(arg1 + 0xe0), 
        *(esi_5 - 0x10), *(esi_5 - 0x18), *(esi_5 - 0x14))
    esi_5 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
sub_6ea4b0(arg1 + 0x70, *(arg1 + 0xf0), *(arg1 + 0xec), arg1 + 0x70, *(arg1 + 0x30))
sub_6ea620(arg1)
return 0
