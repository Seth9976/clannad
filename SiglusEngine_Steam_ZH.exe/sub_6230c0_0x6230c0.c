// 函数: sub_6230c0
// 地址: 0x6230c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *(arg1 + 0x4b030)
uint32_t eax = timeGetTime()
*(arg1 + 0x4a685) = 0
*(arg1 + 0x4b030) = eax
int32_t edi_1 = eax - esi
void* esi_1 = data_bac484
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(edi_1)
int32_t temp0 = *(arg1 + 0x4b038)
*(arg1 + 0x4b038) += eax_2
void* eax_3 = data_bac4a0
*(arg1 + 0x4b03c) = adc.d(*(arg1 + 0x4b03c), edx, temp0 + eax_2 u< temp0)
*(arg1 + 0x4b034) = edi_1
int32_t edi_2 = edi_1 << 4
*(arg1 + 0x4b044) = edi_2
*(arg1 + 0x4b050) = edi_2
*(arg1 + 0x4b05c) = edi_2
edx.b = *(eax_3 + 0xcc)
int32_t edi_3 = data_bac498
bool ecx

if (edx.b != 0)
    ecx = false
else if (*(esi_1 + 0x138) == 0)
    ecx = *(edi_3 + 2) == 0
else
    ecx = false

void* eax_4 = data_bac4c8

if (*(eax_4 + 0x600) != 1)
label_6231a4:
    void* eax_6 = data_bac4a0
    
    if (*(eax_6 + 0xcc) != 0)
        ecx = false
    else if (*(esi_1 + 0x138) == 0)
        ecx = *(edi_3 + 2) == 0
    else
        ecx = false
    
    if (sub_635790(eax_6, 0x11, ecx, 0, 0) != 0 && *(arg1 + 0x4a682) == 0)
        *(arg1 + 0x4a685) = 1
else
    if (ecx != 0)
        eax_4 = data_bac458
    
    if (ecx != 0 && *(eax_4 + 0x39e) != 0)
        goto label_6231a4
    
    if (edx.b != 0)
        ecx = false
    else if (*(esi_1 + 0x138) == 0)
        ecx = *(edi_3 + 2) == 0
    else
        ecx = false
    
    if (sub_635790(eax_4, 0x11, ecx, 0, 0) == 0 || *(arg1 + 0x4a682) != 0)
        goto label_6231a4
    
    *(arg1 + 0x4a686) = 1

if (*(arg1 + 0x4a687) != 0 && *(data_bac458 + 0x351) == 0)
    *(arg1 + 0x4a687) = 0
    *(arg1 + 0x4b050) = 0
    *(arg1 + 0x4b05c) = 0

if (*(arg1 + 0x4a79c) == 0)
    *(arg1 + 0x4b044) = 0
    *(arg1 + 0x4b050) = 0

if (sub_620a70() != 0)
    *(arg1 + 0x4b050) <<= 5
    *(arg1 + 0x4b05c) <<= 5
else if (*(arg1 + 0x4a5b8) != 0)
    void* eax_14 = data_bac4a0
    bool ecx_1
    
    if (*(eax_14 + 0xcc) != 0)
        ecx_1 = false
    else if (*(esi_1 + 0x138) == 0)
        ecx_1 = *(edi_3 + 2) == 0
    else
        ecx_1 = false
    
    char eax_15 = sub_635790(eax_14, 0x24, ecx_1, 0, 0)
    char eax_17
    bool ecx_2
    
    if (eax_15 != 0)
        void* eax_16 = data_bac4a0
        
        if (*(eax_16 + 0xcc) != 0)
            ecx_2 = false
        else if (*(esi_1 + 0x138) == 0)
            ecx_2 = *(edi_3 + 2) == 0
        else
            ecx_2 = false
        
        eax_17 = sub_635790(eax_16, 0x23, ecx_2, 0, 0)
    
    if (eax_15 == 0 || eax_17 == 0)
        void* eax_18 = data_bac4a0
        
        if (*(eax_18 + 0xcc) != 0)
            ecx_2 = false
        else if (*(esi_1 + 0x138) == 0)
            ecx_2 = *(edi_3 + 2) == 0
        else
            ecx_2 = false
        
        if (sub_635790(eax_18, 0x2d, ecx_2, 0, 0) != 0)
            *(arg1 + 0x4b044) <<= 2
            *(arg1 + 0x4b050) <<= 2
            *(arg1 + 0x4b05c) <<= 2
        
        void* eax_26 = sub_634fb0()
        
        if (sub_635790(eax_26, 0x2e, eax_26.b, 0, 0) != 0)
            *(arg1 + 0x4b044) *= 2
            *(arg1 + 0x4b050) *= 2
            *(arg1 + 0x4b05c) *= 2
        
        void* eax_34 = sub_634fb0()
        
        if (sub_635790(eax_34, 0x24, eax_34.b, 0, 0) != 0)
            int32_t eax_37
            int32_t edx_1
            edx_1:eax_37 = sx.q(*(arg1 + 0x4b044))
            *(arg1 + 0x4b044) = (eax_37 + (edx_1 & 3)) s>> 2
            int32_t eax_41
            int32_t edx_3
            edx_3:eax_41 = sx.q(*(arg1 + 0x4b050))
            *(arg1 + 0x4b050) = (eax_41 + (edx_3 & 3)) s>> 2
            int32_t eax_45
            int32_t edx_5
            edx_5:eax_45 = sx.q(*(arg1 + 0x4b05c))
            *(arg1 + 0x4b05c) = (eax_45 + (edx_5 & 3)) s>> 2
        
        void* eax_48 = sub_634fb0()
        
        if (sub_635790(eax_48, 0x23, eax_48.b, 0, 0) != 0)
            int32_t eax_51
            int32_t edx_7
            edx_7:eax_51 = sx.q(*(arg1 + 0x4b044))
            *(arg1 + 0x4b044) = (eax_51 + (edx_7 & 7)) s>> 3
            int32_t eax_55
            int32_t edx_9
            edx_9:eax_55 = sx.q(*(arg1 + 0x4b050))
            *(arg1 + 0x4b050) = (eax_55 + (edx_9 & 7)) s>> 3
            int32_t eax_59
            int32_t edx_11
            edx_11:eax_59 = sx.q(*(arg1 + 0x4b05c))
            *(arg1 + 0x4b05c) = (eax_59 + (edx_11 & 7)) s>> 3
    else
        *(arg1 + 0x4b044) = 0
        *(arg1 + 0x4b050) = 0
        *(arg1 + 0x4b05c) = 0

int32_t eax_61 = *(arg1 + 0x4b044)
int32_t ecx_7 = eax_61 & 0x8000000f

if (ecx_7 s< 0)
    ecx_7 = ((ecx_7 - 1) | 0xfffffff0) + 1

*(arg1 + 0x4b048) += ecx_7
int32_t ecx_10 = *(arg1 + 0x4b048)
int32_t eax_62
int32_t edx_13
edx_13:eax_62 = sx.q(eax_61)
int32_t eax_64 = (eax_62 + (edx_13 & 0xf)) s>> 4
*(arg1 + 0x4b044) = eax_64

if (ecx_10 s>= 0x10)
    *(arg1 + 0x4b048) = ecx_10 - 0x10
    *(arg1 + 0x4b044) = eax_64 + 1

int32_t eax_66 = *(arg1 + 0x4b050)
int32_t ecx_13 = eax_66 & 0x8000000f

if (ecx_13 s< 0)
    ecx_13 = ((ecx_13 - 1) | 0xfffffff0) + 1

*(arg1 + 0x4b054) += ecx_13
int32_t ecx_16 = *(arg1 + 0x4b054)
int32_t eax_67
int32_t edx_15
edx_15:eax_67 = sx.q(eax_66)
int32_t eax_69 = (eax_67 + (edx_15 & 0xf)) s>> 4
*(arg1 + 0x4b050) = eax_69

if (ecx_16 s>= 0x10)
    *(arg1 + 0x4b054) = ecx_16 - 0x10
    *(arg1 + 0x4b050) = eax_69 + 1

int32_t eax_71 = *(arg1 + 0x4b05c)
int32_t ecx_19 = eax_71 & 0x8000000f

if (ecx_19 s< 0)
    ecx_19 = ((ecx_19 - 1) | 0xfffffff0) + 1

*(arg1 + 0x4b060) += ecx_19
int32_t ecx_22 = *(arg1 + 0x4b060)
int32_t eax_72
int32_t edx_17
edx_17:eax_72 = sx.q(eax_71)
int32_t eax_74 = (eax_72 + (edx_17 & 0xf)) s>> 4
*(arg1 + 0x4b05c) = eax_74

if (ecx_22 s>= 0x10)
    *(arg1 + 0x4b060) = ecx_22 - 0x10
    *(arg1 + 0x4b05c) = eax_74 + 1

*(arg1 + 0x4b040) += *(arg1 + 0x4b044)
*(arg1 + 0x4b04c) += *(arg1 + 0x4b050)
*(arg1 + 0x4b058) += *(arg1 + 0x4b05c)
int32_t result
result.b = 1
return result
