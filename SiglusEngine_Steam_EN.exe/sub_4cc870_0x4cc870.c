// 函数: sub_4cc870
// 地址: 0x4cc870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_20 = ebx
int32_t var_18 = arg2

if (*(arg3 + 0x60) == 0)
    return 

WaitForSingleObject(data_1c04208, 0xffffffff)
int32_t eax = arg4

if (*(arg3 + 0x2e) == 0x10)
    eax s>>= 1

int32_t var_14_1 = eax

while (true)
    int32_t edi_1 = *(arg3 + 0x388)
    
    if (*(arg3 + 0x3a4) s>= edi_1)
        int32_t ecx_2
        
        do
            int32_t edx = *(arg3 + 0x3a0)
            *(arg3 + 0x338) = 1
            
            if (edx != 0xffffffff && edx s<= 0)
                *(arg3 + 0x3a4) = edi_1
                
                if (var_14_1 s> 0)
                    if (*(arg3 + 0x2e) != 0x10)
                        if (var_14_1 s> 0)
                            __builtin_memset(__builtin_memset(var_18, 0, var_14_1 u>> 2 << 2), 0, 
                                var_14_1 & 3)
                    else if (var_14_1 s> 0)
                        int32_t ecx_9
                        int32_t edi_6
                        edi_6, ecx_9 = __builtin_memset(var_18, 0, var_14_1 u>> 1 << 2)
                        __builtin_memset(edi_6, 0, adc.d(ecx_9, ecx_9, (var_14_1 & 1) != 0) << 1)
                
                goto label_4cca53
            
            ecx_2 = *(arg3 + 0x3a4) - edi_1 + *(arg3 + 0x384)
            *(arg3 + 0x3a4) = ecx_2
            
            if (edx s> 0)
                *(arg3 + 0x3a0) = edx - 1
        while (ecx_2 s>= edi_1)
    
    if (var_14_1 == 0)
        break
    
    if (*(arg3 + 0x338) != 0)
        int32_t eax_2 = *(arg3 + 0x3a4)
        
        if (*(arg3 + 0x2c) == 2)
            eax_2 s>>= 1
        
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(eax_2)
        sub_402660(arg3 + 0x68, eax_3, edx_1)
        *(arg3 + 0x338) = 0
    
    int32_t ebx_3 = *(arg3 + 0x388) - *(arg3 + 0x3a4)
    
    if (ebx_3 s> var_14_1)
        ebx_3 = var_14_1
    
    int32_t edi_4 = ebx_3 * 2
    
    if (*(arg3 + 0x2e) != 0x10)
        edi_4 = ebx_3
    
    int32_t var_10_1 = var_18
    void var_c
    int32_t i = sub_402cf0(arg3 + 0x68, var_18, edi_4, 0, 2, 1, &var_c)
    bool cond:3_1 = i s<= 0
    
    while (i != 0)
        int32_t ecx_4
        
        if (cond:3_1)
            int32_t eax_6 = sub_4cc1f0(i)
            
            if (eax_6 != 0)
                if (edi_4 s> 0)
                    sub_4d1ba0(eax_6, edi_4, var_10_1, 0)
                
                break
            
            ecx_4 = var_10_1
        else
            ecx_4 = var_10_1 + i
            var_10_1 = ecx_4
            int32_t temp1_1 = edi_4
            edi_4 -= i
            
            if (temp1_1 == i)
                break
        
        i = sub_402cf0(arg3 + 0x68, ecx_4, edi_4, 0, 2, 1, &var_c)
        cond:3_1 = i s<= 0
    
    var_14_1 -= ebx_3
    
    if (*(arg3 + 0x2e) != 0x10)
        var_18 += ebx_3
        *(arg3 + 0x3a4) += ebx_3
    else
        *(arg3 + 0x3a4) += ebx_3
        var_18 += ebx_3 << 1

label_4cca53:
ReleaseSemaphore(data_1c04208, 1, nullptr)
