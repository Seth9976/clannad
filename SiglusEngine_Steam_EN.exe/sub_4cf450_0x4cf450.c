// 函数: sub_4cf450
// 地址: 0x4cf450
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result = sub_4d0f10(arg3, "PDT11")

if (result == 0)
    int32_t ebx_1 = *(arg3 + 0xc)
    uint32_t result_1 = *(arg3 + 0x10)
    result = (result_1 + 4) * ebx_1
    
    if (result != 0)
        char var_488[0x400]
        sub_4d1c30(result, &arg3[0x20], &var_488, 0x400)
        int32_t var_88[0x20]
        sub_4d1c30(result, &arg3[0x420], &var_88, 0x40)
        void* edi_1 = &arg3[0x460]
        char* ecx_3 = *arg2
        char* var_4a4_1 = ecx_3
        char* var_498
        char* var_490
        char* eax_8
        
        if (ecx_3 != 0)
            eax_8 = *arg4
        else
            var_498 = ecx_3
            var_490 = ecx_3
            sub_4d6960(result, &var_490, &var_498, result, "PDT_UNPACK11_MASK_DATA")
            var_4a4_1 = var_498
            eax_8 = var_490
        
        var_498 = eax_8
        int32_t var_4ac = 0
        int32_t eax_11 = result_1 * ebx_1
        var_490 = nullptr
        sub_4d6960(eax_11 + 0x20, &var_490, &var_4ac, eax_11 + 0x20, "PDT_UNPACK11_MASK_INDEX")
        char* esi_1 = var_498
        char* edx_4 = nullptr
        char* var_4a0_1 = nullptr
        uint32_t i
        i.b = 0
        
        if (eax_11 s> 0)
            do
                i.b u>>= 1
                char var_489_1 = i.b
                char var_491
                
                if (i.b == 0)
                    i.b = *edi_1
                    edi_1 += 1
                    var_491 = i.b
                    i.b = 0x80
                    var_489_1 = 0x80
                
                if ((var_491 & i.b) == 0)
                    uint32_t ecx_7 = zx.d(*edi_1)
                    edi_1 += 1
                    i = (ecx_7 u>> 4) + 2
                    void* ebx_2 = var_88[ecx_7 & 0xf]
                    
                    if (&edx_4[i] s>= eax_11)
                        i = eax_11 - edx_4
                        
                        if (eax_11 == edx_4)
                            break
                    
                    if (i s> 0)
                        char* edi_2 = var_490
                        void* edx_5 = edx_4 - ebx_2
                        var_4a0_1 = &var_4a0_1[i]
                        
                        do
                            i -= 1
                            uint32_t ecx_11
                            
                            if (edx_5 s< 0)
                                ecx_11 = 0
                            else
                                ecx_11 = zx.d(*(edx_5 + edi_2))
                            
                            *(ebx_2 + edi_2 + edx_5) = ecx_11.b
                            edx_5 += 1
                            ecx_11.b = var_488[ecx_11 << 2]
                            *esi_1 = ecx_11.b
                            esi_1 = &esi_1[1]
                        while (i s> 0)
                        
                        edx_4 = var_4a0_1
                else
                    i = zx.d(*edi_1)
                    edi_1 += 1
                    *(edx_4 + var_490) = i.b
                    i.b = var_488[i << 2]
                    *esi_1 = i.b
                    esi_1 = &esi_1[1]
                    edx_4 = &edx_4[1]
                    var_4a0_1 = edx_4
                
                i.b = var_489_1
            while (edx_4 s< eax_11)
        
        sub_4d6c40(&var_4ac, &var_490)
        *arg7 = 0
        
        if (*arg2 == 0)
            *arg2 = var_4a4_1
            *arg4 = var_498
        
        *arg5 = ebx_1
        result = result_1
        *arg6 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
