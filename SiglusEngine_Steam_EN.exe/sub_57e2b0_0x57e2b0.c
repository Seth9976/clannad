// 函数: sub_57e2b0
// 地址: 0x57e2b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 u> 0x3f)
    return 

void* eax = arg1 * 0x2d0
int32_t esi_1 = *(eax + &data_8fcd4c)

if (arg2 == esi_1)
    return 

void* ecx = &data_8fd01c
int32_t i_2 = 0x10

if (arg2 s>= esi_1)
    int32_t i
    
    do
        int32_t eax_9 = *(ecx - 0x2d0)
        
        if (eax_9 s> esi_1 && eax_9 s<= arg2)
            *(ecx - 0x2d0) = eax_9 - 1
        
        int32_t eax_11 = *ecx
        
        if (eax_11 s> esi_1 && eax_11 s<= arg2)
            *ecx = eax_11 - 1
        
        int32_t eax_13 = *(ecx + 0x2d0)
        
        if (eax_13 s> esi_1 && eax_13 s<= arg2)
            *(ecx + 0x2d0) = eax_13 - 1
        
        int32_t eax_15 = *(ecx + 0x5a0)
        
        if (eax_15 s> esi_1 && eax_15 s<= arg2)
            *(ecx + 0x5a0) = eax_15 - 1
        
        ecx += 0xb40
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    int32_t i_1
    
    do
        int32_t eax_1 = *(ecx - 0x2d0)
        
        if (eax_1 s< esi_1 && eax_1 s>= arg2)
            *(ecx - 0x2d0) = eax_1 + 1
        
        int32_t eax_3 = *ecx
        
        if (eax_3 s< esi_1 && eax_3 s>= arg2)
            *ecx = eax_3 + 1
        
        int32_t eax_5 = *(ecx + 0x2d0)
        
        if (eax_5 s< esi_1 && eax_5 s>= arg2)
            *(ecx + 0x2d0) = eax_5 + 1
        
        int32_t eax_7 = *(ecx + 0x5a0)
        
        if (eax_7 s< esi_1 && eax_7 s>= arg2)
            *(ecx + 0x5a0) = eax_7 + 1
        
        ecx += 0xb40
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*(eax + &data_8fcd4c) = arg2
*(arg1 * 0x3920 + &data_f89bcc) += 1
