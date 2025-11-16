// 函数: sub_40b580
// 地址: 0x40b580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t eax
int32_t edx
int32_t* result = sub_5f1ac0(eax, edx, ecx, 1, 0xc88)
int32_t* esi = arg2
void* ebp = *(arg1 + 0x1c)
__builtin_memset(result, 0, 0xc88)
void* var_4 = ebp

if (sub_410bd0(esi, 1) == 0)
    *result = 1
else
    *result = sub_410bd0(esi, 4) + 1

if (sub_410bd0(esi, 1) != 0)
    int32_t eax_7 = sub_410bd0(esi, 8) + 1
    result[0x121] = eax_7
    arg2 = nullptr
    
    if (eax_7 s> 0)
        void* ebp_1 = &result[0x222]
        bool cond:2_1
        
        do
            int32_t eax_9 = sub_410bd0(esi, sub_40b560(*(arg1 + 4)))
            *(ebp_1 - 0x400) = eax_9
            int32_t eax_12 = sub_410bd0(esi, sub_40b560(*(arg1 + 4)))
            *ebp_1 = eax_12
            
            if (eax_9 s< 0)
                goto label_40b738
            
            if (eax_12 s< 0)
                goto label_40b738
            
            if (eax_9 == eax_12)
                goto label_40b738
            
            int32_t ecx_3 = *(arg1 + 4)
            
            if (eax_9 s>= ecx_3)
                goto label_40b738
            
            if (eax_12 s>= ecx_3)
                goto label_40b738
            
            ebp_1 += 4
            cond:2_1 = arg2 + 1 s< result[0x121]
            arg2 += 1
        while (cond:2_1)
        ebp = var_4

if (sub_410bd0(esi, 2) s<= 0)
    if (*result s> 1)
        int32_t i = 0
        
        if (*(arg1 + 4) s> 0)
            void* edi_2 = &result[1]
            
            do
                int32_t eax_17 = sub_410bd0(esi, 4)
                *edi_2 = eax_17
                
                if (eax_17 s>= *result)
                    goto label_40b738
                
                i += 1
                edi_2 += 4
            while (i s< *(arg1 + 4))
        
        ebp = var_4
    
    arg2 = nullptr
    
    if (*result s<= 0)
        return result
    
    void* edi_3 = &result[0x111]
    
    while (true)
        sub_410bd0(esi, 8)
        int32_t eax_19 = sub_410bd0(esi, 8)
        *(edi_3 - 0x40) = eax_19
        
        if (eax_19 s>= *(ebp + 0x10))
            break
        
        int32_t eax_20 = sub_410bd0(esi, 8)
        *edi_3 = eax_20
        
        if (eax_20 s>= *(ebp + 0x14))
            break
        
        edi_3 += 4
        bool cond:1_1 = arg2 + 1 s< *result
        arg2 += 1
        
        if (not(cond:1_1))
            return result

label_40b738:
sub_40b3f0(result)
return 0
