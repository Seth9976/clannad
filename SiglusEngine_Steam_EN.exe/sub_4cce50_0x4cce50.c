// 函数: sub_4cce50
// 地址: 0x4cce50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
BOOL ebx = arg2
BOOL var_c = ebx

if (*(arg3 + 0x2e) == 0x10)
    result s>>= 1

int32_t result_1 = result

if (*(arg3 + 4) == 0 && *(arg3 + 0x24) == 0xffffffff)
    void* var_24_1 = arg3
    result = sub_4c4d70(*(arg3 + 0x20))
    *(arg3 + 0x24) = result

int32_t result_4 = result_1

while (true)
    int32_t result_2 = *(arg3 + 0x388)
    
    if (*(arg3 + 0x3a4) s>= result_2)
        while (true)
            int32_t edx = *(arg3 + 0x3a0)
            
            if (edx != 0xffffffff && edx s<= 0)
                result = result_2
                *(arg3 + 0x3a4) = result
                
                if (result_1 s> 0)
                    if (*(arg3 + 0x2e) != 0x10)
                        if (result_1 s> 0)
                            result = 0
                            __builtin_memset(__builtin_memset(ebx, 0, result_1 u>> 2 << 2), 0, 
                                result_1 & 3)
                    else if (result_1 s> 0)
                        int32_t ecx_10
                        int32_t edi_2
                        edi_2, ecx_10 = __builtin_memset(ebx, 0, result_1 u>> 1 << 2)
                        __builtin_memset(edi_2, 0, adc.d(ecx_10, ecx_10, (result_1 & 1) != 0) << 1)
                        return 0
                
                break
            
            int32_t ecx_4 = *(arg3 + 0x3a4) - result_2 + *(arg3 + 0x384)
            *(arg3 + 0x3a4) = ecx_4
            
            if (edx s> 0)
                result = edx - 1
                *(arg3 + 0x3a0) = result
            
            if (ecx_4 s< result_2)
                result_4 = result_1
                goto label_4ccedb
        
        return result
    
label_4ccedb:
    
    if (result_4 == 0)
        return result
    
    uint32_t edx_1 = zx.d(*(arg3 + 0x2e))
    int32_t eax = *(arg3 + 0x3a4)
    int32_t var_10_1
    
    if (edx_1 != 0x10)
        var_10_1 = eax
    else
        var_10_1 = eax * 2
        result_4 = result_1
    
    int32_t result_3 = result_2 - eax
    
    if (result_3 s> result_4)
        result_3 = result_4
    
    result = result_3 * 2
    
    if (edx_1 != 0x10)
        result = result_3
    
    if (*(arg3 + 4) != 0)
        sub_4d1c30(result, *(arg3 + 0x10) + var_10_1, ebx, result)
        result_4 = result_1
    else
        bool cond:1_1 = *(arg3 + 0x24) == 0xffffffff
        int32_t var_14 = 0x270f
        
        if (not(cond:1_1))
            result = sub_4c4c20(&var_c, &var_14, *(arg3 + 0x24), &var_c, "DAMY", 
                *(arg3 + 0x28) + var_10_1, result)
            ebx = var_c
            result_4 = result_1
    
    result_4 -= result_3
    result_1 = result_4
    
    if (*(arg3 + 0x2e) != 0x10)
        ebx += result_3
        *(arg3 + 0x3a4) += result_3
        var_c = ebx
    else
        *(arg3 + 0x3a4) += result_3
        ebx += result_3 << 1
        var_c = ebx
