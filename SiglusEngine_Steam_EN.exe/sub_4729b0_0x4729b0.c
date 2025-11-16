// 函数: sub_4729b0
// 地址: 0x4729b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg2
int32_t* esi = arg1 + 0x144
void* var_14 = edi

for (int32_t i = 0; i s< 4; )
    int32_t var_c
    int32_t eax
    
    if (esi[1] u> 0 && i u<= 3)
        switch (i)
            case 0
                sub_472920(esi, &var_c)
                int32_t edx_1 = sx.d(*(esi + 0x12))
                
                if (edx_1 s< 0xffffff01)
                    edx_1 = 0xffffff01
                else if (edx_1 s> 0xff)
                    edx_1 = 0xff
                
                int32_t eax_1 = sx.d(esi[5].w)
                int32_t var_10_1
                
                if (eax_1 s>= 0xffffff01)
                    if (eax_1 s> 0xff)
                        eax_1 = 0xff
                    
                    var_10_1 = eax_1
                else
                    var_10_1 = 0xffffff01
                
                int32_t eax_2 = sx.d(*(esi + 0x16))
                int32_t var_18_1
                
                if (eax_2 s>= 0xffffff01)
                    if (eax_2 s> 0xff)
                        eax_2 = 0xff
                    
                    var_18_1 = eax_2
                else
                    var_18_1 = 0xffffff01
                
                int32_t ecx_1 = var_c
                *(edi + 0x38) += edx_1 * ecx_1 s/ 0xff
                *(edi + 0x3c) += var_10_1 * ecx_1 s/ 0xff
                *(edi + 0x40) += var_18_1 * ecx_1 s/ 0xff
            case 1
                sub_472920(esi, &var_c)
                int32_t edx_17 = sx.d(*(esi + 0x12))
                
                if (edx_17 s< 0)
                    edx_17 = 0
                else if (edx_17 s> 0xff)
                    edx_17 = 0xff
                
                int32_t eax_14 = sx.d(esi[5].w)
                
                if (eax_14 s< 0)
                    eax_14 = 0
                else if (eax_14 s> 0xff)
                    eax_14 = 0xff
                
                int32_t ecx_3 = sx.d(*(esi + 0x16))
                int32_t var_10_3 = eax_14
                
                if (ecx_3 s< 0)
                    ecx_3 = 0
                else if (ecx_3 s> 0xff)
                    ecx_3 = 0xff
                
                eax_14.b = *(edi + 0x35)
                char var_5_1 = eax_14.b
                int32_t var_18_3 = ecx_3
                
                if (eax_14.b != 0)
                    ecx_3.b = *(edi + 0x32)
                    int32_t edi_1 = var_c
                    *(var_14 + 0x32) = ((edx_17 - zx.d(ecx_3.b)) * edi_1 s/ 0xff).b + ecx_3.b
                    void* ecx_4
                    ecx_4.b = *(var_14 + 0x33)
                    *(var_14 + 0x33) = ((var_10_3 - zx.d(ecx_4.b)) * edi_1 s/ 0xff).b + ecx_4.b
                    void* ecx_5
                    ecx_5.b = *(var_14 + 0x34)
                    *(var_14 + 0x34) = ((var_18_3 - zx.d(ecx_5.b)) * edi_1 s/ 0xff).b + ecx_5.b
                    edi = var_14
                    eax.b = ((0xff - zx.d(var_5_1)) * edi_1 s/ 0xff).b + var_5_1
                    *(edi + 0x35) = eax.b
                else
                    *(edi + 0x33) = var_10_3.b
                    eax.b = var_c.b
                    *(edi + 0x32) = edx_17.b
                    *(edi + 0x34) = ecx_3.b
                    *(edi + 0x35) = eax.b
            case 2
                sub_472920(esi, &var_c)
                int32_t ecx_11 = var_c + zx.d(*(edi + 0x31))
                var_c = ecx_11
                
                if (ecx_11 s> 0xff)
                    eax.b = 0xfe
                    eax.b = 0xfe - ecx_11.b
                    *(edi + 0x31) = eax.b
                else
                    *(edi + 0x31) = ecx_11.b
            case 3
                sub_472920(esi, &var_c)
                int32_t eax_34 = sx.d(*(esi + 0x12))
                
                if (eax_34 s< 0)
                    eax_34 = 0
                else if (eax_34 s> 0xff)
                    eax_34 = 0xff
                
                int32_t ecx_14 = (0xff - eax_34) * var_c
                int32_t edi_3 = zx.d(*(edi + 0x48)) * (0xff - ecx_14 s/ 0xff)
                var_c = 0xff - ecx_14 s/ 0xff
                edi = var_14
                *(edi + 0x48) = (edi_3 s/ 0xff).b
    i += 1
    esi = &esi[7]
