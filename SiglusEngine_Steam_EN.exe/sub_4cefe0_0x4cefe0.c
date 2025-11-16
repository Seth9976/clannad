// 函数: sub_4cefe0
// 地址: 0x4cefe0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = sub_4d0f10(arg3, "PDT11")

if (result == 0)
    int32_t ebx_1 = *(arg3 + 0xc)
    uint32_t result_1 = *(arg3 + 0x10)
    int32_t eax_7 = (result_1 + 1) * ebx_1
    result = eax_7 + 0x402
    
    if (eax_7 != 0xfffffbfe)
        int32_t var_94 = 0
        BOOL var_90 = 0
        sub_4d6960(result, &var_90, &var_94, result, "PDT_UNPACK11_DATA")
        BOOL eax_8 = var_90
        *eax_8 = 0x100
        sub_4d1c30(eax_8, &arg3[0x20], eax_8 + 2, 0x400)
        int32_t var_88[0x20]
        sub_4d1c30(eax_8, &arg3[0x420], &var_88, 0x40)
        int32_t esi_1 = result_1 * ebx_1
        void* edi_1 = &arg3[0x460]
        int32_t ecx_3
        ecx_3.b = 0
        int32_t eax_9 = 0
        int32_t var_b8_1 = esi_1
        
        if (esi_1 s> 0)
            do
                ecx_3.b u>>= 1
                char var_89_1 = ecx_3.b
                char var_8a
                
                if (ecx_3.b == 0)
                    ecx_3.b = *edi_1
                    edi_1 += 1
                    var_8a = ecx_3.b
                    ecx_3.b = 0x80
                    var_89_1 = 0x80
                
                if ((var_8a & ecx_3.b) == 0)
                    uint32_t ecx_4 = zx.d(*edi_1)
                    edi_1 += 1
                    int32_t i = (ecx_4 u>> 4) + 2
                    
                    if (i + eax_9 s>= esi_1)
                        i = esi_1 - eax_9
                        
                        if (esi_1 == eax_9)
                            break
                    
                    if (i s> 0)
                        BOOL edi_2 = var_90
                        int32_t esi_3 = eax_9 - var_88[ecx_4 & 0xf]
                        
                        do
                            i -= 1
                            
                            if (esi_3 s< 0)
                                *(eax_9 + edi_2 + 0x402) = 0
                            else
                                ecx_3.b = *(esi_3 + edi_2 + 0x402)
                                *(eax_9 + edi_2 + 0x402) = ecx_3.b
                            
                            eax_9 += 1
                            esi_3 += 1
                        while (i s> 0)
                        
                        esi_1 = var_b8_1
                else
                    ecx_3.b = *edi_1
                    edi_1 += 1
                    *(eax_9 + var_90 + 0x402) = ecx_3.b
                    eax_9 += 1
                
                ecx_3.b = var_89_1
            while (eax_9 s< esi_1)
        
        *arg7 = 3
        
        if (*arg2 == 0)
            *arg2 = var_94
            *arg4 = var_90
        
        *arg5 = ebx_1
        result = result_1
        *arg6 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
