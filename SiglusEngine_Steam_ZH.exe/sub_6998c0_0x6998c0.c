// 函数: sub_6998c0
// 地址: 0x6998c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx_1 = arg3 + 1 + *arg1

if (edx_1 s> *arg1 && edx_1 s> arg3)
    if (edx_1 s< arg1[1])
        goto label_69991c
    
    int32_t ecx_1
    
    do
        int32_t ecx = arg1[1]
        
        if (ecx s> 0x3fffffff)
            return 0
        
        ecx_1 = ecx * 2
        arg1[1] = ecx_1
    while (edx_1 s>= ecx_1)
    
    int32_t eax_1 = ecx_1 u>> 0xffffffe1
    uint32_t cb = ecx_1 * 2
    
    if (eax_1 u<= 0 && (eax_1 u< 0 || cb u<= 0xffffffff))
        int32_t eax_2 = CoTaskMemRealloc(arg1[2], cb)
        
        if (eax_2 != 0)
            arg1[2] = eax_2
        label_69991c:
            int32_t ecx_2 = *arg1
            
            if (ecx_2 s>= 0)
                int32_t eax_3 = arg1[1]
                
                if (ecx_2 s< eax_3)
                    int32_t edx_3 = eax_3 - ecx_2
                    
                    if (edx_3 s<= eax_3)
                        sub_5c49b0(_memcpy_s(arg1[2] + (ecx_2 << 1), edx_3 * 2, arg2, arg3 * 2))
                        *arg1 += arg3
                        *(arg1[2] + (*arg1 << 1)) = 0
                        return 1

return 0
