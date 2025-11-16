// 函数: sub_6ec390
// 地址: 0x6ec390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
char var_50 = 0
int32_t i = 0
char var_74[0x24]
var_74[0] = arg4.b - 1
int32_t result = 0
int32_t i_1 = 0

do
    uint32_t ecx_1 =
        sub_6ec280(arg2, zx.d(var_74[i]) - ebx + 1, arg2 + (ebx << 1), zx.d((&var_50)[i]))
    int16_t var_b8[0x22]
    void* edx_3 = &var_b8[i]
    *edx_3 = result.w
    uint32_t var_8_1 = ecx_1
    void* var_14_1 = edx_3
    result = result + 1 + (1 << ecx_1.b)
    int32_t i_2 = i_1
    
    if (arg3 != 0)
        int16_t ecx_2 = *edx_3
        *(arg3 + (sx.d(ecx_2) << 1)) = var_8_1.w
        i_2 = i_1
        ecx_1 = var_8_1
        *edx_3 = ecx_2 + 1
    
    char var_4f[0x23]
    uint32_t eax_8
    
    while (true)
        eax_8 = zx.d(var_74[i_2])
        uint32_t var_24_1 = eax_8
        
        if (ebx s<= eax_8)
            eax_8:1.b = (&var_50)[i_2]
            uint32_t edx_4 = zx.d(eax_8:1.b)
            char var_2c_1 = edx_4.b
            arg4:3.b = eax_8:1.b
            uint32_t esi_4 = edx_4 + ecx_1
            uint32_t var_20_1 = esi_4
            char* edx_7 = arg2 + 1 + (ebx << 1)
            char* var_18_1 = edx_7
            
            while (true)
                eax_8.b = *edx_7
                uint32_t ecx_3 = zx.d(eax_8.b)
                
                if (ecx_3 s> esi_4)
                    eax_8 = var_24_1
                    break
                
                if (arg3 != 0)
                    uint16_t ecx_4 =
                        neg.w(((zx.w(eax_8.b) - zx.w(eax_8:1.b)) * 0x100) | zx.w(edx_7[0xffffffff]))
                    int32_t j = 1 << (var_2c_1 - ecx_3.b + var_8_1.b)
                    
                    if (j s> 0)
                        uint32_t eax_12 = zx.d(*var_14_1)
                        
                        do
                            int32_t ecx_8 = sx.d(eax_12.w)
                            j -= 1
                            eax_12 += 1
                            *(arg3 + (ecx_8 << 1)) = ecx_4
                        while (j s> 0)
                        
                        *var_14_1 = eax_12.w
                    
                    esi_4 = var_20_1
                    edx_7 = var_18_1
                
                eax_8 = var_24_1
                ebx += 1
                edx_7 = &edx_7[2]
                var_18_1 = edx_7
                
                if (ebx s> eax_8)
                    break
                
                eax_8:1.b = arg4:3.b
            
            i_2 = i_1
            edx_3 = var_14_1
            
            if (ebx s<= eax_8)
                break
        
        int32_t i_3 = i_2
        edx_3 -= 2
        i_2 -= 1
        var_14_1 = edx_3
        i_1 = i_2
        
        if (i_3 s<= 0)
            ecx_1 = var_8_1
        else
            ecx_1 = zx.d(var_4f[i_2]) - zx.d((&var_50)[i_2])
            var_8_1 = ecx_1
        
        if (i_2 s< 0)
            return result
    
    eax_8.b = (&var_50)[i_2]
    eax_8.b += var_8_1.b
    var_4f[i_2] = eax_8.b
    
    if (arg3 != 0)
        int16_t ecx_11 = var_b8[i_2]
        *(arg3 + (sx.d(ecx_11) << 1)) = result.w
        var_b8[i_2] = ecx_11 + 1
    
    i = i_2 + 1
    i_1 = i
    var_74[i] = sub_6ec230(arg2 + (ebx << 1), zx.d((&var_50)[i])) + ebx.b - 1
while (i s>= 0)

return result
