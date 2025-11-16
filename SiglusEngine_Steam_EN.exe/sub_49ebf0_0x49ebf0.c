// 函数: sub_49ebf0
// 地址: 0x49ebf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t edi = arg4

if (edi s< 0)
    edi = 0
else if (edi s> 0xff)
    edi = 0xff

if (arg5 != 0)
    sub_4c3500(WaitForSingleObject(data_1bfffc4, 0xffffffff), 3, arg2, 0xffffffff, edi, arg5)
    ReleaseSemaphore(data_1bfffc4, 1, nullptr)
    WaitForSingleObject(data_1bfffc4, 0xffffffff)
    
    if (arg2 u<= 0x3f)
        int32_t esi_1
        
        if (edi s>= 0)
            esi_1 = edi
            
            if (edi s> 0xff)
                esi_1 = 0xff
        else
            esi_1 = 0
        
        int32_t ecx_8 = (&data_20af894)[arg2 * 0xf0]
        *(arg2 * 0x3c0 + 0x20af934) = data_1392ccc
        int32_t eax_4 = arg5
        *(arg2 * 0x3c0 + 0x20af928) = ecx_8
        *(arg2 * 0x3c0 + 0x20af91c) = esi_1
        *(arg2 * 0x3c0 + 0x20af920) = ecx_8
        *(arg2 * 0x3c0 + 0x20af940) = 2
        
        if (eax_4 s< 0)
            eax_4 = neg.d(eax_4)
        
        *(arg2 * 0x3c0 + 0x20af93c) = eax_4
        *(arg2 * 0x3c0 + 0x20af938) = 0
        *(arg2 * 0x3c0 + 0x20af92c) = esi_1
        *(arg2 * 0x3c0 + 0x20af930) = 0
        *(arg2 * 0x3c0 + 0x20af924) = 0
        *(arg2 * 0x3c0 + 0x20af878) = 1
    
    ReleaseSemaphore(data_1bfffc4, 1, nullptr)
else if (data_641b5c == 0)
label_49ec96:
    
    if (arg2 u<= 0x3f)
        WaitForSingleObject(data_702788, 0xffffffff)
        
        if (edi s>= 0)
            int32_t eax_1 = edi
            
            if (edi s> 0xff)
                eax_1 = 0xff
            
            (&data_20af894)[arg2 * 0xf0] = eax_1
        else
            (&data_20af894)[arg2 * 0xf0] = 0
        
        sub_4cbc80(arg2)
        ReleaseSemaphore(data_702788, 1, nullptr)
else if (arg2 s>= 0)
    if (arg2 s< 0x40)
        WaitForSingleObject(data_641b54, 0xffffffff)
        
        if (edi s>= 0)
            int32_t eax = edi
            
            if (edi s> 0xff)
                eax = 0xff
            
            (&data_208cda4)[arg2 * 0x60] = eax
        else
            (&data_208cda4)[arg2 * 0x60] = 0
        
        if ((&data_208cd58)[arg2 * 0x60] != 0 && (&data_208cd54)[arg2 * 0x60] != 0)
            sub_4c33a0(arg2)
        
        ReleaseSemaphore(data_641b54, 1, nullptr)
    
    goto label_49ec96

if (arg3 != 0)
    *(arg3 + 0x780) = edi

return arg3
