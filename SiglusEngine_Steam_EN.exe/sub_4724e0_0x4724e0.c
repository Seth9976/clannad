// 函数: sub_4724e0
// 地址: 0x4724e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
char* esi = arg1 + 0xb4
void* var_1c = edi

for (int32_t i = 0; i s< 4; )
    int32_t var_c
    char var_5
    int32_t eax
    
    if (*(esi + 4) u> 0 && i u<= 3)
        switch (i)
            case 0
                sub_472440(&var_5, &var_c, esi, &var_5)
                int32_t var_18_1
                int32_t var_14_1
                int32_t ecx_1
                int32_t edx_1
                
                if (esi[0x20] != 0)
                    if (var_5 != 0)
                        *(esi + 0x12) = (modu.dp.d(0:(sub_4d18c0(2)), 0x1ff)).w - 0xff
                        *(esi + 0x14) = (modu.dp.d(0:(sub_4d18c0(2)), 0x1ff)).w - 0xff
                        *(esi + 0x16) = (modu.dp.d(0:(sub_4d18c0(2)), 0x1ff)).w - 0xff
                    
                    edx_1 = sx.d(*(esi + 0x12))
                    var_18_1 = sx.d(*(esi + 0x14))
                    var_14_1 = sx.d(*(esi + 0x16))
                    
                    if (*(esi + 0xc) u<= *(esi + 8) || esi[0x20] != 2)
                        ecx_1 = var_c
                    else
                        ecx_1 = var_c
                        
                        if (ecx_1 == 0)
                            ecx_1 = 0xff
                        
                        var_c = ecx_1
                else
                    edx_1 = sx.d(*(esi + 0x12))
                    
                    if (edx_1 s< 0xffffff01)
                        edx_1 = 0xffffff01
                    else if (edx_1 s> 0xff)
                        edx_1 = 0xff
                    
                    int32_t eax_2 = sx.d(*(esi + 0x14))
                    
                    if (eax_2 s>= 0xffffff01)
                        if (eax_2 s> 0xff)
                            eax_2 = 0xff
                        
                        var_18_1 = eax_2
                    else
                        var_18_1 = 0xffffff01
                    
                    int32_t eax_3 = sx.d(*(esi + 0x16))
                    var_14_1 = eax_3
                    
                    if (eax_3 s< 0xffffff01)
                        var_14_1 = 0xffffff01
                    else if (eax_3 s> 0xff)
                        var_14_1 = 0xff
                    
                    ecx_1 = var_c
                
                *(edi + 0x38) += edx_1 * ecx_1 s/ 0xff
                *(edi + 0x3c) += var_18_1 * ecx_1 s/ 0xff
                *(edi + 0x40) += var_14_1 * ecx_1 s/ 0xff
            case 1
                sub_472440(&var_5, &var_c, esi, &var_5)
                int32_t var_18_3
                int32_t var_14_3
                int32_t var_10_2
                int32_t ecx_3
                int32_t edx_28
                
                if (esi[0x20] != 0)
                    if (var_5 != 0)
                        *(esi + 0x12) = zx.w(sub_4d18c0(2))
                        *(esi + 0x14) = zx.w(sub_4d18c0(2))
                        *(esi + 0x16) = zx.w(sub_4d18c0(2))
                    
                    ecx_3 = sx.d(*(esi + 0x12))
                    var_18_3 = sx.d(*(esi + 0x14))
                    var_14_3 = sx.d(*(esi + 0x16))
                    var_10_2 = ecx_3
                    
                    if (*(esi + 0xc) u<= *(esi + 8) || esi[0x20] != 2)
                        edx_28 = var_c
                    else
                        edx_28 = var_c
                        
                        if (edx_28 == 0)
                            edx_28 = 0xff
                        
                        var_c = edx_28
                else
                    ecx_3 = sx.d(*(esi + 0x12))
                    
                    if (ecx_3 s< 0)
                        ecx_3 = 0
                    else if (ecx_3 s> 0xff)
                        ecx_3 = 0xff
                    
                    int32_t edx_26 = sx.d(*(esi + 0x14))
                    var_10_2 = ecx_3
                    
                    if (edx_26 s>= 0)
                        if (edx_26 s> 0xff)
                            edx_26 = 0xff
                        
                        var_18_3 = edx_26
                    else
                        var_18_3 = 0
                    
                    int32_t edx_27 = sx.d(*(esi + 0x16))
                    var_14_3 = edx_27
                    
                    if (edx_27 s< 0)
                        var_14_3 = 0
                    else if (edx_27 s> 0xff)
                        var_14_3 = 0xff
                    
                    edx_28 = var_c
                
                int32_t eax_25
                eax_25.b = *(edi + 0x35)
                char var_6_1 = eax_25.b
                
                if (eax_25.b != 0)
                    *(edi + 0x32) += ((var_10_2 - zx.d(*(edi + 0x32))) * edx_28 s/ 0xff).b
                    *(edi + 0x33) += ((var_18_3 - zx.d(*(edi + 0x33))) * var_c s/ 0xff).b
                    *(edi + 0x34) += ((var_14_3 - zx.d(*(edi + 0x34))) * var_c s/ 0xff).b
                    eax.b = ((0xff - zx.d(var_6_1)) * var_c s/ 0xff).b + var_6_1
                    *(edi + 0x35) = eax.b
                else
                    *(edi + 0x33) = var_18_3.b
                    *(edi + 0x32) = ecx_3.b
                    *(edi + 0x34) = var_14_3.b
                    *(edi + 0x35) = edx_28.b
            case 2
                sub_472440(&var_5, &var_c, esi, &var_5)
                int32_t ecx_8 = var_c + zx.d(*(edi + 0x31))
                var_c = ecx_8
                
                if (ecx_8 s> 0xff)
                    eax.b = 0xfe
                    eax.b = 0xfe - ecx_8.b
                    *(edi + 0x31) = eax.b
                else
                    *(edi + 0x31) = ecx_8.b
            case 3
                sub_472440(&var_5, &var_c, esi, &var_5)
                int32_t eax_58 = sx.d(*(esi + 0x12))
                
                if (eax_58 s< 0)
                    eax_58 = 0
                else if (eax_58 s> 0xff)
                    eax_58 = 0xff
                
                int32_t ecx_11 = (0xff - eax_58) * var_c
                int32_t edi_2 = zx.d(*(edi + 0x48)) * (0xff - ecx_11 s/ 0xff)
                var_c = 0xff - ecx_11 s/ 0xff
                edi = var_1c
                *(edi + 0x48) = (edi_2 s/ 0xff).b
    i += 1
    esi = &esi[0x24]
