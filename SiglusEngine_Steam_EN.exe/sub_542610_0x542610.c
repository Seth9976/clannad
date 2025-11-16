// 函数: sub_542610
// 地址: 0x542610
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1
int32_t ecx = 0
int32_t edx = 0xffffffff
int32_t var_8 = 0
int32_t var_c = 0xffffffff
uint32_t eax
eax.b = *esi

if (eax.b == 0)
    *arg2 = 0xffffffff
    return eax

do
    if (eax.b u< 0x80)
    label_54264a:
        
        if (eax.b u>= 0x30 && eax.b u<= 0x39)
            int32_t ecx_1 = 0
            int32_t edi_1 = 0
            int32_t ebx_1 = 0
            char* edx_1 = esi
            
            while (true)
                eax.b = *edx_1
                
                if (eax.b == 0)
                    break
                
                if (eax.b != 0x20 && eax.b != 0x2c && eax.b u> 0x1f)
                    break
                
                edx_1 = &edx_1[1]
            
            while (true)
                eax.b = *edx_1
                
                if (eax.b u< 0x80)
                    if (eax.b == 0)
                    label_5426fa:
                        
                        if (ebx_1 == 0)
                            edx = var_c
                            break
                            break
                        
                    label_542700:
                        
                        if (edi_1 != 0)
                            ecx_1 = neg.d(ecx_1)
                        
                        esi = edx_1
                        edx = ecx_1
                        var_c = edx
                        break
                        break
                else if (eax.b u< 0xa0)
                    if (eax.b u< 0xfe || eax.b == 0)
                        goto label_5426fa
                else if ((eax.b u> 0xdf && eax.b u< 0xfe) || eax.b == 0)
                    goto label_5426fa
                
                if (eax.b u< 0x30 || eax.b u> 0x39)
                    if (ebx_1 != 0)
                        goto label_542700
                    
                    if (eax.b != 0x2d)
                        if (eax.b != 0x2b)
                            edx = var_c
                            break
                        
                        edx_1 = &edx_1[1]
                    else
                        edi_1 ^= 1
                        edx_1 = &edx_1[1]
                else
                    ebx_1 = 1
                    ecx_1 = zx.d(eax.b) + ((ecx_1 * 5 - 0x18) << 1)
                    edx_1 = &edx_1[1]
            
            ecx = var_8
        else if (eax.b == 0x4d || eax.b == 0x6d)
            esi = &esi[1]
            ecx |= 1
            var_8 = ecx
        else if (eax.b == 0x52 || eax.b == 0x72)
            esi = &esi[1]
            ecx |= 2
            var_8 = ecx
        else
            esi = &esi[1]
    else if (eax.b u< 0xa0)
        if (eax.b u>= 0xfe)
            goto label_54264a
        
        esi = &esi[2]
    else
        if (eax.b u<= 0xdf || eax.b u>= 0xfe)
            goto label_54264a
        
        esi = &esi[2]
    
    eax.b = *esi
while (eax.b != 0)

if (edx s< 0xffffffff || edx s>= 0x3e8)
    edx = 0xffffffff

if (ecx != 0)
    if (edx == 0xffffffff)
        edx = 0x3e8
    
    edx |= ecx << 0x10

*arg2 = edx
return arg2
