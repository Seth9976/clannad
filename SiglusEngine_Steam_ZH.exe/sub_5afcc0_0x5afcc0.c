// 函数: sub_5afcc0
// 地址: 0x5afcc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i = 0
*(arg1 + 0x19c) = *(arg1 + 0x180)
*(arg1 + 0x1a0) = *(arg1 + 0x184)
*(arg1 + 0x198) = arg2
*(arg1 + 0x1a4) = 0
*(arg1 + 0x1c8) = 0x1010101
*(arg1 + 0x1c4) = arg2
int32_t eax_4
int32_t edx
edx:eax_4 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_1 = edx s>> 8

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edi_1 = 0
    int32_t edx_3
    
    do
        int32_t ecx_3 = *(arg1 + 0xa4)
        
        for (void* j = *(ecx_3 + edi_1 + 0x304); j != *(ecx_3 + edi_1 + 0x308); j += 0x3b4)
            *(j + 0x20) = 1
        
        i += 1
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
        edi_1 += 0x580
        edx_3 = edx_2 s>> 8
    while (i s< (edx_3 u>> 0x1f) + edx_3)

int32_t* edi_2 = data_bac4dc
int32_t var_18 = 0
int32_t var_14 = 0
edi_2[1] = *edi_2
edi_2[4] = edi_2[3]
__builtin_memset(&edi_2[6], 0, 0x30)
int32_t eax_14
int32_t edx_4
edx_4:eax_14 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_5 = edx_4 s>> 8

if (edx_5 u>> 0x1f != neg.d(edx_5))
    void* ecx_8 = *(arg1 + 0xa4)
    int32_t var_24_1 = *(ecx_8 + 0x2b8)
    int32_t eax_20
    int32_t edx_6
    edx_6:eax_20 = sx.q(*(ecx_8 + 0x2bc))
    int32_t eax_22 = (eax_20 - edx_6) s>> 1
    var_14 = eax_22
    var_18 = eax_22

int32_t i_1 = 0
int32_t eax_23
int32_t edx_7
edx_7:eax_23 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t i_2 = 0
int32_t edx_8 = edx_7 s>> 8

if ((edx_8 u>> 0x1f) + edx_8 s<= 0)
    void* eax_38 = data_bac4a0
    edi_2[0xc] = 0xffffffff
    *(eax_38 + 0x10c) = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_38

int32_t ecx_11 = 0
int32_t var_c = 0
int32_t edx_14

do
    void* edx_10 = *(arg1 + 0xa4) + ecx_11
    
    if (*(edx_10 + 0x2a8) == 1)
        int32_t edi_4 = *(arg1 + 0x12c) + *(edx_10 + 0x2b0)
        int32_t edx_12 = *(arg1 + 0x130) + *(edx_10 + 0x2b4)
        int32_t var_2c_1 = *(edx_10 + 0x2b8) + edi_4
        int32_t var_30_1 = edx_12
        int32_t var_28_1 = edx_12 + *(edx_10 + 0x2bc)
        int32_t var_54_1 = var_14 + *(arg1 + 0x130) + *(edx_10 + 0x2b4)
        int32_t var_58_1 = *(arg1 + 0x12c) + *(edx_10 + 0x2b0) + var_18
        int128_t var_50_1 = edi_4.o
        sub_621190()
        ecx_11 = var_c
        i_1 = i_2
    
    var_c = ecx_11 + 0x580
    i_1 += 1
    int32_t eax_32
    int32_t edx_13
    edx_13:eax_32 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
    ecx_11 = var_c
    edx_14 = edx_13 s>> 8
    i_2 = i_1
while (i_1 s< (edx_14 u>> 0x1f) + edx_14)
*(data_bac4dc + 0x30) = 0xffffffff
void* eax_37 = data_bac4a0
*(eax_37 + 0x10c) = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_37
