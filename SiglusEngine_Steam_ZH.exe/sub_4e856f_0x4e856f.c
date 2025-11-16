// 函数: sub_4e856f
// 地址: 0x4e856f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* ebx = arg1
void* edx = *(ebx + 0x30)
void* eax = *(arg2 + 0xc)
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = *(ebx + 0x34)
arg1 = edx

if (edx u> edi_1)
    edi_1 = *(ebx + 0x2c)

void* eax_1 = *(arg2 + 0x10)
void* edi_2 = edi_1 - edx
void* var_8_1 = edi_2

if (edi_2 u> eax_1)
    var_8_1 = eax_1
    edi_2 = eax_1

if (edi_2 != 0 && arg3 == 0xfffffffb)
    arg3 = 0

*(arg2 + 0x14) += edi_2
*(arg2 + 0x10) = eax_1 - edi_2
int32_t eax_3 = *(ebx + 0x38)

if (eax_3 != 0)
    int32_t eax_4 = eax_3(*(ebx + 0x3c), edx, edi_2)
    edx = arg1
    *(ebx + 0x3c) = eax_4
    *(arg2 + 0x30) = eax_4

int32_t esi_2
int32_t edi_4
edi_4, esi_2 = __builtin_memcpy(eax, edx, edi_2 u>> 2 << 2)
void* var_c_2 = eax + var_8_1
arg1 += var_8_1
__builtin_memcpy(edi_4, esi_2, edi_2 & 3)
int32_t eax_7 = *(ebx + 0x2c)

if (arg1 == eax_7)
    void* edx_1 = *(ebx + 0x28)
    arg1 = edx_1
    
    if (*(ebx + 0x34) == eax_7)
        *(ebx + 0x34) = edx_1
    
    void* eax_8 = *(arg2 + 0x10)
    void* edi_6 = *(ebx + 0x34) - edx_1
    void* var_8_2 = edi_6
    
    if (edi_6 u> eax_8)
        var_8_2 = eax_8
        edi_6 = eax_8
    
    if (edi_6 != 0 && arg3 == 0xfffffffb)
        arg3 = 0
    
    *(arg2 + 0x14) += edi_6
    *(arg2 + 0x10) = eax_8 - edi_6
    int32_t eax_10 = *(ebx + 0x38)
    
    if (eax_10 != 0)
        int32_t eax_11 = eax_10(*(ebx + 0x3c), edx_1, edi_6)
        edx_1 = arg1
        *(ebx + 0x3c) = eax_11
        *(arg2 + 0x30) = eax_11
    
    int32_t esi_5
    int32_t edi_8
    edi_8, esi_5 = __builtin_memcpy(var_c_2, edx_1, edi_6 u>> 2 << 2)
    var_c_2 += var_8_2
    arg1 += var_8_2
    __builtin_memcpy(edi_8, esi_5, edi_6 & 3)

*(arg2 + 0xc) = var_c_2
*(ebx + 0x30) = arg1
return arg3
