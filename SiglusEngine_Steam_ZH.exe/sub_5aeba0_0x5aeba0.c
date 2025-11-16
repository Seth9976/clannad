// 函数: sub_5aeba0
// 地址: 0x5aeba0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = 0
*(arg1 + 0x1a4) += arg2
*(arg1 + 0x1b0) += arg2
*(arg1 + 0x1bc) += arg2
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_1 = edx s>> 8
int32_t result = (edx_1 u>> 0x1f) + edx_1
int32_t arg_8

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        sub_5b3190(*(arg1 + 0xa4) + edi_1, arg2, arg_8)
        ebx += 1
        int32_t eax_4
        int32_t edx_2
        edx_2:eax_4 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
        edi_1 += 0x580
        int32_t edx_3 = edx_2 s>> 8
        result = (edx_3 u>> 0x1f) + edx_3
    while (ebx s< result)

if (*(arg1 + 0x1c8) != 0 || *(arg1 + 0x1a8) s> 0)
    int32_t eax_7 = *(arg1 + 0x1ac)
    int32_t edi_2 = *(arg1 + 0x1a0)
    int32_t eax_8 = *(arg1 + 0x1b8)
    int32_t eax_9
    int32_t edx_4
    edx_4:eax_9 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
    int32_t edx_5 = edx_4 s>> 8
    int32_t ecx_10 = (edx_5 u>> 0x1f) + edx_5
    
    if (*(arg1 + 0x144) s> 0)
        bool cond:0_1 = ecx_10 s>= *(arg1 + 0x144)
        int32_t* eax_10 = &arg_8
        arg_8 = ecx_10
        
        if (cond:0_1)
            eax_10 = arg1 + 0x144
        
        ecx_10 = *eax_10
    
    int32_t eax_11 = *(arg1 + 0x19c)
    
    if (eax_11 == 2 || eax_11 == 3 || eax_11 == 4 || eax_11 == 5 || eax_11 == 6)
        edi_2 += ecx_10 * 0x32
    
    result = *(arg1 + 0x1a8)
    int32_t ebx_3
    
    if (result == 2 || result == 3 || result == 4 || result == 5 || result == 6)
        result = ecx_10 * 0x32
        ebx_3 = eax_7 + result
    else
        ebx_3 = eax_7
    
    void* ecx_11 = data_bac4a0
    
    if (*(arg1 + 0x1f4) != 0)
        bool cond:2_1 = *(arg1 + 0x1e0) == 0
        *(arg1 + 0x1f4) = 0
        
        if (not(cond:2_1) && *(arg1 + 0x1e8) s>= 0)
            *(ecx_11 + 0x1e7) = 1
    
    if (*(arg1 + 0x19c) s> 0)
        int32_t eax_13 = *(arg1 + 0x1a4)
        result = eax_13 - edi_2
        
        if (eax_13 - edi_2 s>= 0)
            result = sub_5b0120(arg1)
            ecx_11 = data_bac4a0
    
    if (*(arg1 + 0x1a8) s> 0)
        int32_t eax_14 = *(arg1 + 0x1b0)
        result = eax_14 - ebx_3
        
        if (eax_14 - ebx_3 s>= 0)
            bool cond:3_1 = *(arg1 + 0x1cd) == 0
            *(arg1 + 0x1a8) = 0
            
            if (not(cond:3_1) && *(ecx_11 + 0x1b4) s<= 1)
                sub_661420()
            
            result = sub_550bd0(arg1)
            *(arg1 + 0x1c9) = 0
            *(arg1 + 0x1cb) = 0
    
    if (*(arg1 + 0x1b4) s> 0)
        int32_t eax_15 = *(arg1 + 0x1bc)
        result = eax_15 - eax_8
        
        if (eax_15 - eax_8 s>= 0)
            result = sub_5affa0(arg1)
            *(arg1 + 0x1b4) = 0

return result
