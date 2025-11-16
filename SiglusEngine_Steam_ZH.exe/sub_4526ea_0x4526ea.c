// 函数: sub_4526ea
// 地址: 0x4526ea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t edi
int32_t var_24 = edi
int32_t* esi_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int32_t* eax
eax.w = esi_2[6].w

if (eax.w == 0xffff)
    goto label_452776

eax = zx.d(eax.w) * 0x64 + esi_2[1]

if (*eax == 0 || eax[0x16] != 0xa000000)
    goto label_452776

int32_t eax_4 = neg.d(arg3)
sub_442a01(arg1, arg2, sbb.d(eax_4, eax_4, arg3 != 0), 0xffffffff)
result = 0
int32_t result_1 = sub_44ea67(arg1, arg2)
result = result_1

if (result_1 s>= 0)
    int32_t eax_6
    eax_6.b = arg3 != 0
    sub_442a01(arg1, arg2, eax_6, 1)
    result = 0
label_452776:
    eax.w = *(esi_2 + 0x1a)
    
    if (eax.w == 0xffff)
        goto label_4527e8
    
    int32_t* eax_9 = zx.d(eax.w) * 0x64 + esi_2[1]
    
    if (*eax_9 == 0 || eax_9[0x16] != 0xb000000)
        goto label_4527e8
    
    int32_t eax_11 = neg.d(arg3)
    sub_442a01(arg1, arg2, sbb.d(eax_11, eax_11, arg3 != 0), 0xffffffff)
    result = 0
    int32_t result_2 = sub_44f9da(arg1, arg2)
    result = result_2
    
    if (result_2 s>= 0)
        int32_t eax_13
        eax_13.b = arg3 != 0
        sub_442a01(arg1, arg2, eax_13, 1)
        result = 0
    label_4527e8:
        int32_t eax_15 = esi_2[5] + *esi_2
        int32_t var_10_1 = 0
        int32_t var_18_1 = eax_15
        
        if (esi_2[0xd].w u> 0)
            while (true)
                int16_t* eax_16 = eax_15 + (zx.d(var_10_1.w) << 1)
                int32_t* edi_4 = zx.d(*eax_16) * 0x64 + esi_2[1]
                int16_t* ebx_2 = edi_4[0x12] + *esi_2
                
                if (*ebx_2 != 0)
                    int32_t ecx_7 = *(edi_4[3] + 0x10)
                    int32_t var_c_1 = ecx_7
                    
                    if (ecx_7 == 0)
                        var_c_1 = 1
                    
                    if (*edi_4 != 0)
                        *edi_4 = edi_4[1]
                        int16_t x87control_1 = sub_44b676(arg1, arg2, zx.d(*eax_16))
                        result = 0
                        int32_t* edi_5 = edi_4[0xe]
                        int16_t eax_21 = __ftol(x87control_1, 
                            fconvert.t(*(*((*(*edi_5 + 0xc))(edi_5) + 0xc) + *esi_2))
                                + fconvert.t(0.001))
                        
                        if (ebx_2[1] != eax_21)
                            if (var_c_1 u<= zx.d(eax_21))
                                return 0x80004005
                            
                            ebx_2[1] = eax_21
                    
                    eax_16 = nullptr
                    int32_t edi_6 = 0
                    
                    if (var_c_1 u> 0)
                        do
                            int32_t result_3 = sub_4526ea(zx.d(*ebx_2) + eax_16 - 1, arg3)
                            result = result_3
                            
                            if (result_3 s< 0)
                                return result
                            
                            edi_6 += 1
                            eax_16 = zx.d(edi_6.w)
                        while (eax_16 u< var_c_1)
                
                var_10_1 += 1
                eax_16.w = var_10_1.w
                
                if (eax_16.w u>= esi_2[0xd].w)
                    break
                
                eax_15 = var_18_1

return result
