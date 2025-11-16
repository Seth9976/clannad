// 函数: sub_4035a0
// 地址: 0x4035a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1 + 0x1c)

if (ebx == 0)
    return 0xffffff7f

int32_t eax_1
int32_t ecx
int32_t edx
eax_1, ecx, edx = sub_410bd0(arg2, 8)
int32_t eax_2 = eax_1 + 1
int32_t ebp = 0
*(ebx + 0x18) = eax_2

if (eax_2 s> 0)
    void* edi_1 = ebx + 0x720
    
    do
        int32_t* eax_3 = sub_5f1ac0(eax_2, edx, ecx, 1, 0x34)
        *edi_1 = eax_3
        int32_t eax_4
        eax_4, ecx, edx = sub_407d50(arg2, eax_3)
        
        if (eax_4 != 0)
            goto label_4037fe
        
        eax_2 = *(ebx + 0x18)
        ebp += 1
        edi_1 += 4
    while (ebp s< eax_2)

int32_t edi_3 = sub_410bd0(arg2, 6) + 1
int32_t ebp_1 = 0

if (edi_3 s> 0)
    do
        int32_t eax_6 = sub_410bd0(arg2, 0x10)
        
        if (eax_6 s< 0)
            goto label_4037fe
        
        if (eax_6 s>= 1)
            goto label_4037fe
        
        ebp_1 += 1
    while (ebp_1 s< edi_3)

int32_t eax_8 = sub_410bd0(arg2, 6) + 1
int32_t i = 0
*(ebx + 0x10) = eax_8

if (eax_8 s> 0)
    void* edi_4 = ebx + 0x420
    
    do
        int32_t eax_9 = sub_410bd0(arg2, 0x10)
        *(edi_4 - 0x100) = eax_9
        
        if (eax_9 s< 0)
            goto label_4037fe
        
        if (eax_9 s>= 2)
            goto label_4037fe
        
        int32_t eax_10 = (*((&data_632fc0)[eax_9] + 4))(arg1, arg2)
        *edi_4 = eax_10
        
        if (eax_10 == 0)
            goto label_4037fe
        
        i += 1
        edi_4 += 4
    while (i s< *(ebx + 0x10))

int32_t eax_13 = sub_410bd0(arg2, 6) + 1
int32_t i_1 = 0
*(ebx + 0x14) = eax_13

if (eax_13 s> 0)
    void* edi_5 = ebx + 0x620
    
    do
        int32_t eax_14 = sub_410bd0(arg2, 0x10)
        *(edi_5 - 0x100) = eax_14
        
        if (eax_14 s< 0)
            goto label_4037fe
        
        if (eax_14 s>= 3)
            goto label_4037fe
        
        int32_t eax_16 = (*((&data_632fc8)[eax_14] + 4))(arg1, arg2)
        *edi_5 = eax_16
        
        if (eax_16 == 0)
            goto label_4037fe
        
        i_1 += 1
        edi_5 += 4
    while (i_1 s< *(ebx + 0x14))

int32_t eax_19 = sub_410bd0(arg2, 6) + 1
int32_t i_2 = 0
*(ebx + 0xc) = eax_19

if (eax_19 s> 0)
    void* edi_6 = ebx + 0x220
    
    do
        int32_t eax_20 = sub_410bd0(arg2, 0x10)
        *(edi_6 - 0x100) = eax_20
        
        if (eax_20 s< 0)
            goto label_4037fe
        
        if (eax_20 s>= 1)
            goto label_4037fe
        
        int32_t eax_22 = (*((&data_632fd4)[eax_20] + 4))(arg1, arg2)
        *edi_6 = eax_22
        
        if (eax_22 == 0)
            goto label_4037fe
        
        i_2 += 1
        edi_6 += 4
    while (i_2 s< *(ebx + 0xc))

int32_t eax_24
int32_t ecx_3
int32_t edx_3
eax_24, ecx_3, edx_3 = sub_410bd0(arg2, 6)
int32_t eax_25 = eax_24 + 1
int32_t ebp_2 = 0
*(ebx + 8) = eax_25

if (eax_25 s> 0)
    void* edi_7 = ebx + 0x20
    
    do
        *edi_7 = sub_5f1ac0(eax_25, edx_3, ecx_3, 1, 0x10)
        **edi_7 = sub_410bd0(arg2, 1)
        *(*edi_7 + 4) = sub_410bd0(arg2, 0x10)
        *(*edi_7 + 8) = sub_410bd0(arg2, 0x10)
        ecx_3 = 1
        *(*edi_7 + 0xc) = sub_410bd0(arg2, 8)
        void* eax_31 = *edi_7
        
        if (*(eax_31 + 4) s>= 1)
            goto label_4037fe
        
        if (*(eax_31 + 8) s>= 1)
            goto label_4037fe
        
        edx_3 = *(ebx + 0xc)
        
        if (*(eax_31 + 0xc) s>= edx_3)
            goto label_4037fe
        
        eax_25 = *(ebx + 8)
        ebp_2 += 1
        edi_7 += 4
    while (ebp_2 s< eax_25)

if (sub_410bd0(arg2, 1) == 1)
    return 0

label_4037fe:
sub_403140(arg1)
return 0xffffff7b
