// 函数: sub_458b77
// 地址: 0x458b77
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg2
int32_t edi
int32_t var_20 = edi
void* ebx = arg1

do
    arg1.b = *eax
    eax = &eax[1]
while (arg1.b != 0)

void* eax_1 = eax - &eax[1]

if (*(ebx + 0x10) + 4 u> *(ebx + 0x14) - eax_1 - 1)
    void* esi_1 = *(ebx + 8)
    long double x87_r7_1 = float.t(*(ebx + 8))
    
    if (esi_1 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    int16_t x87control
    void* eax_5 = __ftol(x87control, x87_r7_1 * fconvert.t(1.20000005f))
    void* ecx_2 = esi_1 + eax_1
    void* var_8_1 = ecx_2
    
    if (ecx_2 u<= eax_5)
        var_8_1 = eax_5
    
    void** eax_9 = sub_745f3f((var_8_1 + 3) u>> 2 << 2)
    
    if (eax_9 == 0)
        return 0x8007000e
    
    int32_t esi_2 = *(ebx + 0x14)
    int32_t ecx_6 = *(ebx + 0xc) - esi_2 + *(ebx + 8)
    void* edx_3 = eax_9 - ecx_6 + var_8_1
    int32_t esi_3
    int32_t edi_4
    edi_4, esi_3 = __builtin_memcpy(edx_3, esi_2, ecx_6 u>> 2 << 2)
    __builtin_memcpy(edi_4, esi_3, ecx_6 & 3)
    void** esi_4 = eax_9
    void** i = *(ebx + 0xc)
    void* edx_4 = edx_3 - *(ebx + 0x14)
    
    for (; i u< *(ebx + 0x10); i = &i[1])
        *esi_4 = *i + edx_4
        esi_4 = &esi_4[1]
    
    j__free(*(ebx + 0xc))
    *(ebx + 0xc) = eax_9
    *(ebx + 8) = var_8_1
    *(ebx + 0x10) = esi_4
    *(ebx + 0x14) = edx_3

char* ecx_13 = arg2
*(ebx + 0x14) += 0xffffffff - eax_1
char* edx_5 = *(ebx + 0x14)
char* eax_16

do
    eax_16.b = *ecx_13
    ecx_13 = &ecx_13[1]
    *edx_5 = eax_16.b
    edx_5 = &edx_5[1]
while (eax_16.b != 0)
**(ebx + 0x10) = *(ebx + 0x14)
*(ebx + 0x10) += 4
return 0
