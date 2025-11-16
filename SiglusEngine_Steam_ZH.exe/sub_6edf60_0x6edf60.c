// 函数: sub_6edf60
// 地址: 0x6edf60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = arg2 + 4
void var_94
void* var_c = &var_94
int16_t* var_20 = esi
int32_t i_3 = 8
int32_t i

do
    int16_t edx = esi[2]
    int16_t ecx = esi[-2]
    int32_t edi_1 = sx.d(esi[5])
    int32_t edx_1 = sx.d(*esi)
    int16_t eax_4 = ((sx.d(ecx + edx) * 0xb505) s>> 0x10).w
    int32_t ecx_2 = sx.d(esi[4])
    int16_t eax_7 = ((sx.d(ecx - edx) * 0xb505) s>> 0x10).w
    int16_t ebx_3 = ((edx_1 * 0x61f8) s>> 0x10).w - ((ecx_2 * 0xec83) s>> 0x10).w
    int32_t edx_2 = sx.d(esi[3])
    int32_t ebx_4 = sx.d(esi[-1])
    int16_t ecx_5 = ((ecx_2 * 0x61f8) s>> 0x10).w + ((edx_1 * 0xec83) s>> 0x10).w
    int16_t ecx_8 = ((ebx_4 * 0x31f1) s>> 0x10).w - ((edi_1 * 0xfb15) s>> 0x10).w
    int32_t ecx_9 = sx.d(esi[1])
    int16_t esi_3 = ((edx_2 * 0xd4db) s>> 0x10).w - ((ecx_9 * 0x8e3a) s>> 0x10).w
    int16_t ecx_12 = ((ecx_9 * 0xd4db) s>> 0x10).w + ((edx_2 * 0x8e3a) s>> 0x10).w
    int16_t ecx_15 = ((edi_1 * 0x31f1) s>> 0x10).w + ((ebx_4 * 0xfb15) s>> 0x10).w
    int16_t edx_3 = esi_3 + ecx_8
    int16_t edx_4 = ecx_15 + ecx_12
    int16_t esi_5 = ((sx.d(ecx_8 - esi_3) * 0xb505) s>> 0x10).w
    int16_t ebx_5 = ecx_5 + eax_4
    int16_t edi_3 = ((sx.d(ecx_15 - ecx_12) * 0xb505) s>> 0x10).w
    int16_t ecx_18 = eax_4 - ecx_5
    int16_t edx_5 = ebx_3 + eax_7
    int16_t ecx_20 = eax_7 - ebx_3
    int16_t ecx_21 = edi_3 + esi_5
    int16_t edi_4 = edi_3 - esi_5
    *(var_c - 0x20) = edx_4 + ebx_5
    *(var_c - 0x10) = ecx_21 + edx_5
    *(var_c + 0x40) = edx_5 - ecx_21
    *var_c = ecx_20 + edi_4
    *(var_c + 0x10) = ecx_18 + edx_3
    *(var_c + 0x20) = ecx_18 - edx_3
    *(var_c + 0x50) = ebx_5 - edx_4
    *(var_c + 0x30) = ecx_20 - edi_4
    var_c += 2
    esi = &var_20[8]
    i = i_3
    i_3 -= 1
    var_20 = esi
while (i != 1)
int16_t* esi_9 = arg1
void var_b4
void* edi_5 = &var_b4
int32_t i_4 = 8
int32_t i_1

do
    sub_6ed650(esi_9, edi_5)
    edi_5 += 0x10
    esi_9 = &esi_9[1]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)

for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 1)
    arg1[i_2] = ((sx.d(arg1[i_2]) + 8) s>> 4).w

if (arg2 != arg1)
    __builtin_memset(arg2, 0, 0x80)

return arg2
