// 函数: sub_4cecd0
// 地址: 0x4cecd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = sub_4d0f10(arg3, "PDT11")

if (result == 0)
    int32_t ebx_1 = *(arg3 + 0xc)
    int32_t result_1 = *(arg3 + 0x10)
    result = ((result_1 + 1) * ebx_1) << 2
    
    if (result != 0)
        char var_488[0x400]
        sub_4d1c30(result, &arg3[0x20], &var_488, 0x400)
        int32_t var_88[0x20]
        sub_4d1c30(result, &arg3[0x420], &var_88, 0x40)
        void* edi_1 = &arg3[0x460]
        BOOL ecx_3 = *arg2
        BOOL var_4ac_1 = ecx_3
        BOOL var_498
        BOOL var_490
        BOOL eax_9
        
        if (ecx_3 != 0)
            eax_9 = *arg4
        else
            var_498 = ecx_3
            var_490 = ecx_3
            sub_4d6960(result, &var_490, &var_498, result, "PDT_UNPACK11_DATA")
            var_4ac_1 = var_498
            eax_9 = var_490
        
        var_498 = eax_9
        int32_t var_4a4 = 0
        BOOL eax_12 = result_1 * ebx_1
        int32_t var_49c = 0
        var_490 = eax_12
        sub_4d6960(eax_12 + 0x20, &var_49c, &var_4a4, eax_12 + 0x20, "PDT_UNPACK11_INDEX")
        BOOL esi_1 = var_498
        char* ebx_2 = nullptr
        uint32_t i
        i.b = 0
        
        if (var_490 s> 0)
            int32_t edx_4 = var_49c
            
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
                
                var_487
                var_486
                
                if ((var_491 & i.b) == 0)
                    uint32_t ecx_7 = zx.d(*edi_1)
                    edi_1 += 1
                    i = (ecx_7 u>> 4) + 2
                    void* ecx_9 = var_88[ecx_7 & 0xf]
                    
                    if (&ebx_2[i] s>= var_490)
                        BOOL eax_19 = var_490
                        i = eax_19 - ebx_2
                        
                        if (eax_19 == ebx_2)
                            break
                    
                    if (i s> 0)
                        int32_t edi_2 = var_49c
                        void* edx_6 = ebx_2 - ecx_9
                        char* ecx_12 = ecx_9 + edi_2
                        void* ebx_3 = &ebx_2[i]
                        char* ecx_13 = ecx_12
                        
                        do
                            i -= 1
                            uint32_t ebx_4
                            
                            if (edx_6 s< 0)
                                ebx_4 = 0
                            else
                                ebx_4 = zx.d(*(edx_6 + edi_2))
                            
                            *(ecx_13 + edx_6) = ebx_4.b
                            edx_6 += 1
                            *esi_1 = var_488[ebx_4 << 2]
                            *(esi_1 + 1) = *(&var_487 + (ebx_4 << 2))
                            *(esi_1 + 2) = *(&var_486 + (ebx_4 << 2))
                            ecx_13 = ecx_12
                            *(esi_1 + 3) = 0xff
                            esi_1 += 4
                        while (i s> 0)
                        
                        ebx_2 = ebx_3
                        edx_4 = var_49c
                else
                    uint32_t eax_14 = zx.d(*edi_1)
                    edi_1 += 1
                    ebx_2[edx_4] = eax_14.b
                    uint32_t ecx_6 = eax_14 << 2
                    *esi_1 = var_488[ecx_6]
                    *(esi_1 + 1) = *(&var_487 + ecx_6)
                    *(esi_1 + 2) = *(&var_486 + ecx_6)
                    *(esi_1 + 3) = 0xff
                    esi_1 += 4
                    ebx_2 = &ebx_2[1]
                i.b = var_489_1
            while (ebx_2 s< var_490)
        
        sub_4d6c40(&var_4a4, &var_49c)
        *arg7 = 0
        
        if (*arg2 == 0)
            *arg2 = var_4ac_1
            *arg4 = var_498
        
        *arg5 = ebx_1
        result = result_1
        *arg6 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
