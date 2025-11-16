// 函数: sub_4e10d0
// 地址: 0x4e10d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* ecx_1 = arg3 + 1 + *arg1

if (ecx_1 s> *arg1 && ecx_1 s> arg3)
    if (ecx_1 s< arg1[1])
        goto label_4e111f
    
    uint32_t cb
    
    do
        int32_t eax_1 = arg1[1]
        
        if (eax_1 s> 0x3fffffff)
            return 0
        
        cb = eax_1 * 2
        arg1[1] = cb
    while (ecx_1 s>= cb)
    
    if (cb u<= 0xffffffff)
        int32_t eax_2 = CoTaskMemRealloc(arg1[2], cb)
        
        if (eax_2 != 0)
            arg1[2] = eax_2
        label_4e111f:
            int32_t ecx_2 = *arg1
            
            if (ecx_2 s>= 0)
                int32_t eax_3 = arg1[1]
                
                if (ecx_2 s< eax_3)
                    int32_t edx_2 = eax_3 - ecx_2
                    
                    if (edx_2 s<= eax_3)
                        sub_4d9360(_memcpy_s(arg1[2] + ecx_2, edx_2, arg2, arg3))
                        int32_t eax_7 = arg1[2]
                        *arg1 += arg3
                        *(*arg1 + eax_7) = 0
                        return 1

return 0
