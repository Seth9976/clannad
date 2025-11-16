// 函数: sub_4c1769
// 地址: 0x4c1769
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 0
bool cond:1 = 0 == arg4
int32_t edi
int32_t var_3c = edi

if (0 u< arg4)
    void* eax_1 = arg1[0x40]
    int32_t edx_2 = arg1[5]
    int32_t* var_8_1 = nullptr
    
    do
        if (*(*(edx_2 + (**(eax_1 + 0x10) << 2)) + 4)
                == *(*(edx_2 + (*(var_8_1 + *(eax_1 + 8)) << 2)) + 4))
            void* eax_9 = arg1[0x40]
            int32_t edi_4 = arg1[5]
            
            if (*(*(edi_4 + (**(eax_9 + 0x10) << 2)) + 0xc)
                    == *(*(edi_4 + (*(var_8_1 + *(eax_9 + 8)) << 2)) + 0xc))
                break
        
        var_8_1 = &var_8_1[arg3]
        ecx += 1
    while (ecx u< arg4)
    
    cond:1 = ecx == arg4

if (not(cond:1))
    int32_t edx_3 = *(arg1[0x40] + 8) + ((ecx * arg3) << 2)
    int32_t var_20 = 0xffffffff
    void var_1c
    void* edi_5 = &var_1c
    *edi_5 = 0xffffffff
    void* edi_6 = edi_5 + 4
    *edi_6 = 0xffffffff
    int32_t ecx_2 = 0
    int32_t ebx_4 = 0
    *(edi_6 + 4) = 0xffffffff
    
    if (arg3 u> 0)
        do
            int32_t eax_18 = *(edx_3 + (ecx_2 << 2))
            ecx_2 += 1
            (&var_20)[*(*(arg1[5] + (eax_18 << 2)) + 0x10)] = eax_18
        while (ecx_2 u< arg3)
    
    for (int32_t i = 0; i u< 4; i += 1)
        int32_t ecx_3
        ecx_3.b = (&var_20)[i] != 0xffffffff
        ebx_4 += ecx_3
    
    int32_t var_30[0x3]
    int32_t result = (*(*arg1 + 0x80))(arg1[0x3f], &var_30, 4, 0, 0)
    
    if (result s< 0)
        return result
    
    void* eax_20 = sub_49ec23(0x74)
    int32_t* eax_21
    
    if (eax_20 == 0)
        eax_21 = nullptr
    else
        eax_21 = sub_49e789(eax_20)
    
    *arg2 = eax_21
    
    if (eax_21 == 0)
        return 0x8007000e
    
    result = sub_49ec6e(eax_21, (ebx_4 & 0xfffff) | 0x10000000, ebx_4, ebx_4, 0)
    
    if (result s< 0)
        return result
    
    result = sub_49e7bf(*arg2, arg1[0x40])
    
    if (result s< 0)
        return result
    
    int32_t* eax_22 = nullptr
    
    for (int32_t i_1 = 0; i_1 u< 0x10; i_1 += 4)
        if (*(&var_20 + i_1) != 0xffffffff)
            *(eax_22 + *(*arg2 + 0x10)) = *(&var_30 + i_1)
            *(eax_22 + *(*arg2 + 8)) = *(&var_20 + i_1)
            eax_22 = &eax_22[1]
    
    int32_t eax_23 = 0
    
    if (arg3 u> 0)
        do
            int32_t* ecx_9 = edx_3 + (eax_23 << 2)
            eax_23 += 1
            *ecx_9 = var_30[*(*(arg1[5] + (*ecx_9 << 2)) + 0x10)]
        while (eax_23 u< arg3)

return 0
