// 函数: sub_4c2659
// 地址: 0x4c2659
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0x14)
*arg2
void* edx = esi[*arg2]
int32_t edi
int32_t var_34 = edi
void* ecx = nullptr

if ((*(*(*(arg1 + 0x10) + (*(edx + 4) << 2)) + 4) & 0x80) == 0)
    int32_t var_18[0x4]
    
    if ((arg4 & 0x10000) != 0)
        var_18[0] = 0
        ecx = 1
    
    if ((arg4 & 0x20000) != 0)
        var_18[ecx] = 1
        ecx += 1
    
    if ((arg4 & 0x40000) != 0)
        var_18[ecx] = 2
        ecx += 1
    
    if ((arg4 & 0x80000) != 0)
        var_18[ecx] = 3
        ecx += 1
    
    if (arg3 u> ecx)
        arg3 = ecx
    
    int32_t ecx_3 = *(arg1 + 0x6c) << 0x1e s>> 0x1f
    int32_t var_28
    int32_t eax_4
    
    if (ecx_3 == 0)
        int32_t edx_3 = 0
        
        if (arg3 u> 0)
            int32_t* ecx_4 = *(arg1 + 0x14)
            
            while (*(ecx_4[*arg2] + 0x10) == *(ecx_4[arg2[edx_3]] + 0x10))
                edx_3 += 1
                
                if (edx_3 u>= arg3)
                    break
        
        if (arg3 u<= 0 || edx_3 u>= arg3)
            eax_4 = *(edx + 0x10)
            goto label_4c2734
        
        for (int32_t i = 0; i u< 4; i += 1)
            (&var_28)[i] = i
    else
        eax_4 = 0xffffffff
    label_4c2734:
        var_28 = eax_4
        void var_24
        void* edi_6 = &var_24
        *edi_6 = eax_4
        void* edi_7 = edi_6 + 4
        *edi_7 = eax_4
        *(edi_7 + 4) = eax_4
    int32_t eax_8 = 0
    
    if (arg3 u> 0)
        do
            int32_t edi_10 = var_18[eax_8]
            int32_t edx_7 = *(esi[*(&var_18 + arg2 - &var_18 + (eax_8 << 2))] + 0x10)
            eax_8 += 1
            (&var_28)[edi_10] = edx_7
        while (eax_8 u< arg3)
    
    int32_t esi_1 = 0
    void* eax_10
    
    if (ecx_3 == 0)
        eax_10 = &var_28
    else
        arg3 = &data_b598e0
        
        while (true)
            if (sub_4c16e2(&var_28, arg3) != 0)
                int32_t esi_2 = esi_1 << 4
                eax_10 = esi_2 + &data_b598e0
                
                if (esi_2 != 0xff4a6720)
                    break
            else
                arg3 += 0x10
                esi_1 += 1
                
                if (esi_1 u< 8)
                    continue
            
            sub_4a4100(arg1, *(*(arg1 + 0x100) + 0x3c), 0x12d2, 
                "internal error: invalid swizzle found")
            return 0x80004005
    
    int32_t edx_8 = 0
    
    for (int32_t i_1 = 0x10; i_1 u< 0x18; i_1 += 2)
        int32_t esi_5 = *eax_10 << i_1.b
        eax_10 += 4
        edx_8 |= esi_5
    
    *arg5 = edx_8
else
    *arg5 = 0xe40000

return 0
