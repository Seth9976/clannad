// 函数: sub_6bf7a0
// 地址: 0x6bf7a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i = 0
void* edx = arg1 + 0x21
int32_t var_148[0x2]

do
    uint32_t ecx = zx.d(*(edx - 1))
    edx += 4
    var_148[i] = ((ecx << 8 | zx.d(*(edx - 4))) << 8 | zx.d(*(edx - 3))) << 8 | zx.d(*(edx - 2))
    i += 1
while (i s< 0x10)

void var_140
void* eax_5 = &var_140
int32_t i_10 = 0x40
int32_t i_1

do
    int32_t ecx_8 = *(eax_5 + 0x2c)
    eax_5 += 4
    *(eax_5 + 0x34) = rol.d(ecx_8 ^ *(eax_5 + 0x14) ^ *(eax_5 - 0xc) ^ *(eax_5 - 4), 1)
    i_1 = i_10
    i_10 -= 1
while (i_1 != 1)
int32_t eax_6 = *arg1
int32_t ecx_13 = eax_6
int32_t edi = arg1[1]
int32_t result_2 = arg1[2]
int32_t result_1 = arg1[3]
int32_t var_154 = ecx_13
int32_t i_6 = i_10
int32_t result = arg1[4]
int32_t edx_5
int32_t i_2

do
    int32_t eax_13 = result + 0x5a827999
    result = result_1
    edx_5 = rol.d(ecx_13, 5) + ((not.d(edi) & result_1) | (result_2 & edi)) + var_148[i_6] + eax_13
    result_1 = result_2
    int32_t esi = edi
    edi = var_154
    i_2 = i_6 + 1
    result_2 = ror.d(esi, 2)
    ecx_13 = edx_5
    var_154 = edx_5
    i_6 = i_2
while (i_2 s< 0x14)
int32_t i_7 = 0x14
int32_t i_3

do
    int32_t eax_20 = result + 0x6ed9eba1
    result = result_1
    edx_5 = rol.d(edx_5, 5) + (result_1 ^ result_2 ^ edi) + var_148[i_7] + eax_20
    result_1 = result_2
    i_3 = i_7 + 1
    result_2 = ror.d(edi, 2)
    i_7 = i_3
    edi = ecx_13
    ecx_13 = edx_5
while (i_3 s< 0x28)
int32_t var_154_1 = ecx_13
int32_t i_8 = 0x28
int32_t i_4

do
    int32_t ecx_21 = ((result_2 | edi) & result_1) | (result_2 & edi)
    int32_t edx_11 = rol.d(edx_5, 5) - 0x70e44324 + result
    result = result_1
    result_1 = result_2
    int32_t esi_2 = edi
    edi = var_154_1
    i_4 = i_8 + 1
    edx_5 = edx_11 + ecx_21 + var_148[i_8]
    result_2 = ror.d(esi_2, 2)
    var_154_1 = edx_5
    i_8 = i_4
while (i_4 s< 0x3c)
int32_t i_9 = 0x3c
int32_t i_5

do
    int32_t edx_13 = rol.d(edx_5, 5) + result
    result = result_1
    int32_t eax_29 = (result_1 ^ result_2 ^ edi) - 0x359d3e2a + var_148[i_9]
    result_1 = result_2
    edx_5 = edx_13 + eax_29
    int32_t esi_3 = edi
    edi = var_154_1
    i_5 = i_9 + 1
    result_2 = ror.d(esi_3, 2)
    var_154_1 = edx_5
    i_9 = i_5
while (i_5 s< 0x50)
arg1[1] += edi
arg1[2] += result_2
arg1[3] += result_1
*arg1 = eax_6 + edx_5
arg1[4] += result
arg1[7] = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
