// 函数: sub_9a6f90
// 地址: 0x9a6f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0
int32_t* esi = arg2
int32_t eax
int32_t ecx
int32_t edx
int32_t* result = sub_74c590(eax, edx, ecx, 1, 0xb18)
int32_t* result_1 = result
void* eax_2 = *(arg1 + 0x1c)
*result = sub_742fa0(esi, 0x18)
result[1] = sub_742fa0(esi, 0x18)
result[2] = sub_742fa0(esi, 0x18) + 1
result[3] = sub_742fa0(esi, 6) + 1
int32_t eax_9
int32_t ecx_7
eax_9, ecx_7 = sub_742fa0(esi, 8)
result[5] = eax_9

if (eax_9 s>= 0)
    int32_t var_c_1 = 0
    
    if (result[3] s> 0)
        void* var_10_1 = &result[6]
        
        while (true)
            uint32_t i = sub_742fa0(esi, 3)
            int32_t eax_12 = sub_742fa0(arg2, 1)
            
            if (eax_12 s< 0)
                goto label_9a7129
            
            if (eax_12 != 0)
                int32_t eax_13 = sub_742fa0(arg2, 5)
                
                if (eax_13 s< 0)
                    goto label_9a7129
                
                i |= eax_13 << 3
            
            ecx_7 = 0
            *var_10_1 = i
            
            for (; i != 0; i u>>= 1)
                ecx_7 += i & 1
            
            int32_t eax_18 = var_c_1 + 1
            var_10_1 += 4
            edi += ecx_7
            var_c_1 = eax_18
            
            if (eax_18 s>= result[3])
                break
            
            esi = arg2
    
    int32_t esi_1 = 0
    
    if (edi s> 0)
        void* ebx = &result[0x46]
        
        do
            int32_t eax_19 = sub_742fa0(arg2, 8)
            
            if (eax_19 s< 0)
                result = result_1
                goto label_9a7129
            
            *ebx = eax_19
            esi_1 += 1
            ebx += 4
        while (esi_1 s< edi)
        
        result = result_1
    
    int32_t eax_20 = result[5]
    int32_t esi_2 = *(eax_2 + 0x18)
    
    if (eax_20 s< esi_2)
        int32_t ecx_14 = 0
        
        if (edi s> 0)
            void* edx_3 = &result[0x46]
            
            do
                int32_t eax_21 = *edx_3
                
                if (eax_21 s>= esi_2)
                    goto label_9a7129
                
                result = result_1
                
                if (*(*(eax_2 + (eax_21 << 2) + 0x720) + 0xc) == 0)
                    goto label_9a7129
                
                ecx_14 += 1
                edx_3 += 4
            while (ecx_14 s< edi)
            
            eax_20 = result[5]
        
        int32_t edx_4 = 1
        int32_t* eax_23 = *(eax_2 + (eax_20 << 2) + 0x720)
        int32_t ecx_16 = *eax_23
        
        if (ecx_16 s>= 1)
            while (true)
                edx_4 *= result[3]
                
                if (edx_4 s> eax_23[1])
                    break
                
                ecx_16 -= 1
                
                if (ecx_16 s<= 0)
                    result[4] = edx_4
                    return result

label_9a7129:
_memset(result, 0, 0xb18)
_free(result)
return 0
