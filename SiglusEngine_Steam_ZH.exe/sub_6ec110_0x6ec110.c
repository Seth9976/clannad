// 函数: sub_6ec110
// 地址: 0x6ec110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t result = 0
int32_t* var_10 = arg1
int32_t ebx = 0
int32_t var_18 = 0
int32_t var_c = 0

while (true)
    int32_t eax_2 = arg1[3]
    int32_t edx = arg1[2]
    int32_t var_14_1 = edx
    
    if (eax_2 s< 1)
        int32_t eax_1 = sub_6ec810(arg1, 1)
        arg1 = var_10
        edx = eax_1
        var_14_1 = eax_1
        eax_2 = arg1[3]
    
    int32_t edx_1 = edx * 2
    arg1[2] = edx_1
    int32_t var_8_1 = eax_2 - 1
    arg1[3] = eax_2 - 1
    
    if (sub_6ec8f0(arg1) s>= 0)
        if ((var_14_1 & 0x80000000) != 0)
            int32_t eax_7 = var_18 + 1
            var_18 = eax_7
            
            if (eax_7 s<= 0x20)
                if (var_8_1 s< 5)
                    int32_t eax_8 = sub_6ec810(arg1, 5)
                    arg1 = var_10
                    edx_1 = eax_8
                    var_8_1 = arg1[3]
                
                uint32_t edx_2 = edx_1 u>> 0x1b
                arg1[2] = edx_1 << 5
                arg1[3] = var_8_1 - 5
                char ecx = *(edx_2 + 0xadc3c0)
                int32_t i = 1 << ecx
                
                if (i s> 0)
                    uint32_t ecx_2 = zx.d(*(edx_2 + 0xadc3a0))
                    
                    do
                        *(arg2 + (result << 1)) = ecx_2.b
                        i -= 1
                        *(arg2 + (result << 1) + 1) = ecx + ebx.b
                        ecx_2 += 1
                        result += 1
                    while (i s> 0)
                    
                    ebx = var_c
                
                uint32_t eax_14 = 0x80000000 u>> (ebx.b - 1)
                
                if (ebx s<= 0)
                    break
                
                while ((esi & eax_14) != 0)
                    esi ^= eax_14
                    ebx -= 1
                    eax_14 *= 2
                    var_c = ebx
                    
                    if (ebx s<= 0)
                        return result
                
                arg1 = var_10
                esi |= eax_14
                continue
        else
            ebx += 1
            var_c = ebx
            
            if (ebx s<= 0x20)
                continue
    
    return 0xffffffec

return result
