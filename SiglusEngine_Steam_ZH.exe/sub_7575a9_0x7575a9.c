// 函数: sub_7575a9
// 地址: 0x7575a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* var_40c = arg2
int32_t ebx = 0
void* var_414 = arg4
int32_t var_458 = 0
char* esi = nullptr
int32_t var_418 = 0
int32_t var_434 = 0
int32_t i_1 = 0
int32_t* var_428 = nullptr
int32_t var_45c = 0
int32_t var_454 = 0
int32_t var_430 = 0
void* var_450
sub_7470a1(&var_450, arg3)
void* eax_4 = __errno()
int32_t result
void* var_448
char var_444
bool cond:0_1

if (arg1 != 0 && var_40c != 0)
    uint32_t edx_2 = zx.d(*var_40c)
    void* ecx_1 = nullptr
    void* var_410_1 = nullptr
    result = 0
    int32_t result_1 = 0
    uint32_t var_438_1 = 0
    char* var_460_1 = nullptr
    uint32_t var_420_1 = edx_2
    
    if (edx_2.w != 0)
        int16_t var_474_1 = 0x58
        int16_t var_478_1 = 0x64
        int16_t var_47c_1 = 0x69
        int16_t var_46c_1 = 0x6f
        
        while (true)
            var_40c = &var_40c[1]
            
            if (result s>= 0)
                int32_t eax_10
                
                if (edx_2.w - 0x20 u> 0x58)
                    eax_10 = 0
                else
                    eax_10 = zx.d(*(zx.d(edx_2.w) + 0xaae408)) & 0xf
                
                uint32_t edi_2 = zx.d(*(eax_10 * 9 + var_438_1 + 0xaae428))
                uint32_t var_438_2 = edi_2
                int32_t* edi_3 = var_414
                uint32_t eax_13 = edi_2 u>> 4
                var_438_1 = eax_13
                
                if (eax_13 == 8)
                    goto label_7581ad
                
                int16_t* eax_20
                
                if (eax_13 u> 7)
                    eax_20 = var_40c
                else
                    switch (eax_13)
                        case 0
                            goto label_757967
                        case 1
                            i_1 = 0xffffffff
                            ebx = 0
                            var_45c = 0
                            var_454 = 0
                            var_434 = 0
                            var_428 = nullptr
                            var_418 = 0
                            var_430 = 0
                            eax_20 = var_40c
                        case 2
                            uint32_t eax_14 = zx.d(edx_2.w)
                            
                            if (eax_14 == 0x20)
                                ebx |= 2
                                var_418 = ebx
                                eax_20 = var_40c
                            else if (eax_14 == 0x23)
                                ebx |= 0x80
                                var_418 = ebx
                                eax_20 = var_40c
                            else if (eax_14 == 0x2b)
                                ebx |= 1
                                var_418 = ebx
                                eax_20 = var_40c
                            else if (eax_14 == 0x2d)
                                ebx |= 4
                                var_418 = ebx
                                eax_20 = var_40c
                            else
                                eax_20 = var_40c
                                
                                if (eax_14 == 0x30)
                                    ebx |= 8
                                    var_418 = ebx
                        case 3
                            if (edx_2.w != 0x2a)
                                var_434 = zx.d(edx_2.w) + var_434 * 0xa - 0x30
                                ecx_1 = var_410_1
                                eax_20 = var_40c
                            else
                                int32_t eax_21 = *edi_3
                                var_414 = &edi_3[1]
                                var_434 = eax_21
                                
                                if (eax_21 s< 0)
                                    ebx |= 4
                                    var_418 = ebx
                                    var_434 = neg.d(eax_21)
                                
                                eax_20 = var_40c
                        case 4
                            i_1 = 0
                            eax_20 = var_40c
                        case 5
                            if (edx_2.w != 0x2a)
                                i_1 = zx.d(edx_2.w) + i_1 * 0xa - 0x30
                                ecx_1 = var_410_1
                                eax_20 = var_40c
                            else
                                int32_t i_2 = *edi_3
                                i_1 = i_2
                                eax_20 = var_40c
                                var_414 = &edi_3[1]
                                
                                if (i_2 s< 0)
                                    i_1 = 0xffffffff
                        case 6
                            uint32_t eax_27 = zx.d(edx_2.w)
                            
                            if (eax_27 == 0x49)
                                uint32_t eax_29 = zx.d(*var_40c)
                                
                                if (eax_29 == 0x36 && var_40c[1] == 0x34)
                                    eax_20 = &var_40c[2]
                                    ebx |= 0x8000
                                    var_40c = eax_20
                                    var_418 = ebx
                                else if (eax_29 == 0x33 && var_40c[1] == 0x32)
                                    eax_20 = &var_40c[2]
                                    ebx &= 0xffff7fff
                                    var_40c = eax_20
                                    var_418 = ebx
                                else if (eax_29.w == var_478_1 || eax_29.w == var_47c_1
                                        || eax_29.w == var_46c_1 || eax_29 == 0x75
                                        || eax_29 == 0x78 || eax_29.w == var_474_1)
                                    eax_20 = var_40c
                                else
                                    var_438_1 = 0
                                label_757967:
                                    var_430 = 1
                                    _write_char(edx_2, arg1, &result_1)
                                    ecx_1 = var_410_1
                                    eax_20 = var_40c
                            else if (eax_27 == 0x68)
                                ebx |= 0x20
                                var_418 = ebx
                                eax_20 = var_40c
                            else if (eax_27 == 0x6c)
                                eax_20 = var_40c
                                
                                if (*eax_20 != 0x6c)
                                    ebx |= 0x10
                                else
                                    eax_20 = &eax_20[1]
                                    ebx |= 0x1000
                                    var_40c = eax_20
                                
                                var_418 = ebx
                            else
                                eax_20 = var_40c
                                
                                if (eax_27 == 0x77)
                                    ebx |= 0x800
                                    var_418 = ebx
                        case 7
                            uint32_t eax_32 = zx.d(edx_2.w)
                            int16_t var_43c
                            int32_t var_420_3
                            
                            if (eax_32 s> 0x64)
                                int32_t var_49c_9
                                
                                if (eax_32 s> 0x70)
                                    if (eax_32 != 0x73)
                                        if (eax_32 == 0x75)
                                            goto label_757c52
                                        
                                        if (eax_32 != 0x78)
                                            goto label_757f52
                                        
                                        var_49c_9 = 0x27
                                        goto label_757dcb
                                    
                                label_757a39:
                                    int32_t i = 0x7fffffff
                                    
                                    if (i_1 != 0xffffffff)
                                        i = i_1
                                    
                                    void* esi_2 = var_414 + 4
                                    var_414 = esi_2
                                    esi = *(esi_2 - 4)
                                    
                                    if ((ebx.b & 0x20) == 0)
                                        if (esi == 0)
                                            esi = data_b4cc0c
                                        
                                        var_430 = 1
                                        char* ecx_15 = esi
                                        
                                        while (i != 0)
                                            i -= 1
                                            
                                            if (*ecx_15 == 0)
                                                break
                                            
                                            ecx_15 = &ecx_15[2]
                                        
                                        ecx_1 = (ecx_15 - esi) s>> 1
                                        goto label_757f4c
                                    
                                    if (esi == 0)
                                        esi = data_b4cc08
                                    
                                    ecx_1 = nullptr
                                    char* eax_40 = esi
                                    char* var_420_2 = eax_40
                                    var_410_1 = nullptr
                                    
                                    if (i s> 0)
                                        do
                                            eax_40.b = *eax_40
                                            
                                            if (eax_40.b == 0)
                                                break
                                            
                                            char* eax_43 = var_420_2
                                            
                                            if (sub_75a22c(eax_40.b, &var_450) != 0)
                                                eax_43 = &eax_43[1]
                                            
                                            eax_40 = &eax_43[1]
                                            ecx_1 = var_410_1 + 1
                                            var_420_2 = eax_40
                                            var_410_1 = ecx_1
                                        while (ecx_1 s< i)
                                    
                                    goto label_757f52
                                
                                if (eax_32 == 0x70)
                                    i_1 = 8
                                label_757dab:
                                    var_49c_9 = 7
                                label_757dcb:
                                    var_420_3 = 0x10
                                    var_458 = var_49c_9
                                    
                                    if (ebx.b s< 0)
                                        var_43c = 0x30
                                        int16_t var_43a_1 = var_49c_9.w + 0x51
                                        var_428 = 2
                                    
                                    goto label_757c6a
                                
                                if (eax_32 s< 0x65)
                                    goto label_757f52
                                
                                if (eax_32 s<= 0x67)
                                    goto label_7579cd
                                
                                if (eax_32 == 0x69)
                                    goto label_757c49
                                
                                if (eax_32 != 0x6e)
                                    if (eax_32 != 0x6f)
                                        goto label_757f52
                                    
                                    var_420_3 = 8
                                    
                                    if (ebx.b s< 0)
                                        ebx |= 0x200
                                        var_418 = ebx
                                    
                                    goto label_757c6a
                                
                                var_414 = &edi_3[1]
                                int16_t* edi_11 = *edi_3
                                
                                if (__get_printf_count_output() == 0)
                                    *__errno() = 0x16
                                    __invalid_parameter_noinfo()
                                    
                                    if (var_444 != 0)
                                        *(var_448 + 0x70) &= 0xfffffffd
                                    
                                    goto label_757653
                                
                                int32_t result_2 = result_1
                                
                                if ((ebx.b & 0x20) == 0)
                                    *edi_11 = result_2
                                else
                                    *edi_11 = result_2.w
                                
                                var_454 = 1
                            else
                                if (eax_32 == 0x64)
                                label_757c49:
                                    ebx |= 0x40
                                    var_418 = ebx
                                label_757c52:
                                    var_420_3 = 0xa
                                label_757c6a:
                                    int32_t ecx_9
                                    int32_t edi_13
                                    
                                    if ((ebx & 0x8000) != 0 || (ebx & 0x1000) != 0)
                                        ecx_9 = *edi_3
                                        var_414 = &edi_3[2]
                                        edi_13 = edi_3[1]
                                    else
                                        var_414 = &edi_3[1]
                                        int32_t eax_72
                                        
                                        if ((ebx.b & 0x20) != 0)
                                            if ((ebx.b & 0x40) == 0)
                                                eax_72 = zx.d(*edi_3)
                                            else
                                                eax_72 = sx.d(*edi_3)
                                            
                                            goto label_757e2e
                                        
                                        if ((ebx.b & 0x40) == 0)
                                            ecx_9 = *edi_3
                                            edi_13 = 0
                                        else
                                            eax_72 = *edi_3
                                        label_757e2e:
                                            int32_t eax_73
                                            int32_t edx_5
                                            edx_5:eax_73 = sx.q(eax_72)
                                            ecx_9 = eax_73
                                            edi_13 = edx_5
                                    
                                    if ((ebx.b & 0x40) != 0 && edi_13 s<= 0
                                            && (edi_13 s< 0 || ecx_9 u< 0))
                                        int32_t temp17_1 = ecx_9
                                        ecx_9 = neg.d(ecx_9)
                                        edi_13 = neg.d(adc.d(edi_13, 0, temp17_1 != 0))
                                        ebx |= 0x100
                                        var_418 = ebx
                                    
                                    if ((ebx & 0x9000) == 0)
                                        edi_13 = 0
                                    
                                    int32_t i_4 = i_1
                                    
                                    if (i_4 s>= 0)
                                        ebx &= 0xfffffff7
                                        var_418 = ebx
                                        
                                        if (i_4 s> 0x200)
                                            i_4 = 0x200
                                    else
                                        i_4 = 1
                                    
                                    int32_t* eax_75 = ecx_9 | edi_13
                                    
                                    if (eax_75 == 0)
                                        var_428 = eax_75
                                    
                                    void var_209
                                    void* esi_3 = &var_209
                                    
                                    while (true)
                                        i_1 = i_4 - 1
                                        
                                        if (i_4 s<= 0 && (ecx_9 | edi_13) == 0)
                                            break
                                        
                                        int32_t eax_80
                                        uint32_t edx_7
                                        edx_7:eax_80 = sx.q(var_420_3)
                                        uint32_t eax_81
                                        int32_t ecx_13
                                        int32_t edx_8
                                        eax_81, ecx_13, edx_8 =
                                            __aulldvrm(ecx_9, edi_13, eax_80, edx_7)
                                        int32_t ecx_14 = ecx_13 + 0x30
                                        int32_t var_480_1 = ebx
                                        edi_13 = edx_8
                                        
                                        if (ecx_14 s> 0x39)
                                            ecx_14 += var_458
                                        
                                        i_4 = i_1
                                        *esi_3 = ecx_14.b
                                        esi_3 -= 1
                                        ecx_9 = eax_81
                                    
                                    ebx = var_418
                                    ecx_1 = &var_209 - esi_3
                                    esi = esi_3 + 1
                                    var_410_1 = ecx_1
                                    
                                    if ((ebx & 0x200) == 0 || (ecx_1 != 0 && *esi == 0x30))
                                        goto label_757f52
                                    
                                    esi -= 1
                                    ecx_1 += 1
                                    *esi = 0x30
                                    goto label_757f4c
                                
                                int16_t var_408
                                
                                if (eax_32 s<= 0x53)
                                    if (eax_32 == 0x53)
                                        if ((ebx & 0x830) == 0)
                                            ebx |= 0x20
                                            var_418 = ebx
                                        
                                        goto label_757a39
                                    
                                    if (eax_32 != 0x41)
                                        if (eax_32 == 0x43)
                                            if ((ebx & 0x830) == 0)
                                                ebx |= 0x20
                                                var_418 = ebx
                                            
                                            goto label_757ae8
                                        
                                        if (eax_32 == 0x45 || eax_32 == 0x47)
                                            goto label_7579bb
                                        
                                        goto label_757f52
                                    
                                label_7579bb:
                                    edx_2 += 0x20
                                    var_45c = 1
                                    var_420_1 = edx_2
                                label_7579cd:
                                    int32_t i_3 = i_1
                                    esi = &var_408
                                    ebx |= 0x40
                                    var_418 = ebx
                                    uint32_t var_410_2 = 0x200
                                    
                                    if (i_3 s< 0)
                                        i_1 = 6
                                    else if (i_3 != 0)
                                        if (i_3 s> 0x200)
                                            i_3 = 0x200
                                            i_1 = 0x200
                                        
                                        if (i_3 s> 0xa3)
                                            char* eax_59 = sub_74cd17(i_3 + 0x15d)
                                            edx_2 = var_420_1
                                            var_460_1 = eax_59
                                            
                                            if (eax_59 == 0)
                                                i_1 = 0xa3
                                            else
                                                esi = eax_59
                                                var_410_2 = i_3 + 0x15d
                                            
                                            edi_3 = var_414
                                    else if (edx_2.w == 0x67)
                                        i_1 = 1
                                    
                                    int32_t var_48c = *edi_3
                                    var_414 = &edi_3[2]
                                    int32_t var_488_1 = edi_3[1]
                                    DecodePointer(data_b4cec8)(&var_48c, esi, var_410_2, 
                                        sx.d(edx_2.b), i_1, var_45c, &var_450)
                                    int32_t edi_17 = ebx & 0x80
                                    
                                    if (edi_17 != 0 && i_1 == 0)
                                        DecodePointer(data_b4ced4)(esi, &var_450)
                                    
                                    if (var_420_1.w == 0x67 && edi_17 == 0)
                                        DecodePointer(data_b4ced0)(esi, &var_450)
                                    
                                    if (*esi == 0x2d)
                                        ebx |= 0x100
                                        esi = &esi[1]
                                        var_418 = ebx
                                    
                                    goto label_757bb4
                                
                                if (eax_32 == 0x58)
                                    goto label_757dab
                                
                                int32_t* var_468
                                
                                if (eax_32 != 0x5a)
                                    if (eax_32 == 0x61)
                                        goto label_7579cd
                                    
                                    if (eax_32 != 0x63)
                                        goto label_757f52
                                    
                                label_757ae8:
                                    uint32_t eax_50 = zx.d(*edi_3)
                                    var_430 = 1
                                    var_414 = &edi_3[1]
                                    var_468 = eax_50
                                    
                                    if ((ebx.b & 0x20) == 0)
                                        var_408 = eax_50.w
                                    else
                                        char var_440 = eax_50.b
                                        char var_43f_1 = 0
                                        
                                        if (sub_75c1e7(&var_408, &var_440, *(var_450 + 0x74), 
                                                &var_450) s< 0)
                                            var_454 = 1
                                    
                                    esi = &var_408
                                    ecx_1 = 1
                                    goto label_757f4c
                                
                                int16_t* eax_53 = *edi_3
                                var_414 = &edi_3[1]
                                
                                if (eax_53 != 0)
                                    esi = *(eax_53 + 4)
                                
                                if (eax_53 != 0 && esi != 0)
                                    if ((ebx & 0x800) == 0)
                                        var_430 = 0
                                        ecx_1 = sx.d(*eax_53)
                                        goto label_757f4c
                                    
                                    int32_t eax_55
                                    int32_t edx_4
                                    edx_4:eax_55 = sx.q(*eax_53)
                                    var_430 = 1
                                    ecx_1 = (eax_55 - edx_4) s>> 1
                                    goto label_757f4c
                                
                                esi = data_b4cc08
                            label_757bb4:
                                ecx_1 = _strlen(esi)
                            label_757f4c:
                                var_410_1 = ecx_1
                            label_757f52:
                                
                                if (var_454 == 0)
                                    if ((ebx.b & 0x40) != 0)
                                        if ((ebx & 0x100) != 0)
                                            var_43c = 0x2d
                                            var_428 = 1
                                        else if ((ebx.b & 1) != 0)
                                            var_43c = 0x2b
                                            var_428 = 1
                                        else if ((ebx.b & 2) != 0)
                                            var_43c = 0x20
                                            var_428 = 1
                                    
                                    int32_t* eax_83 = var_428
                                    void* edi_22 = var_434 - ecx_1 - eax_83
                                    
                                    if ((ebx.b & 0xc) == 0)
                                        _write_multi_char(0x20, edi_22, arg1, &result_1)
                                        eax_83 = var_428
                                    
                                    sub_758247(&var_43c, eax_83, arg1, &result_1, eax_4)
                                    
                                    if ((ebx.b & 8) != 0 && (ebx.b & 4) == 0)
                                        _write_multi_char(0x30, edi_22, arg1, &result_1)
                                    
                                    void* eax_84 = var_410_1
                                    int32_t result_3
                                    
                                    if (var_430 != 0 || eax_84 s<= 0)
                                        sub_758247(esi, eax_84, arg1, &result_1, eax_4)
                                    label_7580e3:
                                        result_3 = result_1
                                    else
                                        char* ecx_16 = esi
                                        char* var_420_4 = esi
                                        
                                        while (true)
                                            int32_t eax_87 = sub_75c1e7(&var_468, ecx_16, 
                                                *(var_450 + 0x74), &var_450)
                                            
                                            if (eax_87 s<= 0)
                                                result_3 = 0xffffffff
                                                result_1 = 0xffffffff
                                                break
                                            
                                            _write_char(var_468, arg1, &result_1)
                                            ecx_16 = &var_420_4[eax_87]
                                            eax_84 -= 1
                                            var_420_4 = ecx_16
                                            
                                            if (eax_84 s<= 0)
                                                goto label_7580e3
                                    
                                    if (result_3 s>= 0 && (ebx.b & 4) != 0)
                                        _write_multi_char(0x20, edi_22, arg1, &result_1)
                            
                            if (var_460_1 != 0)
                                _free(var_460_1)
                                var_460_1 = nullptr
                            
                            ecx_1 = var_410_1
                            eax_20 = var_40c
                
                edx_2 = zx.d(*eax_20)
                result = result_1
                var_420_1 = edx_2
                
                if (edx_2.w != 0)
                    continue
            
            if (var_438_1 == 0)
                break
            
            if (var_438_1 == 7)
                break
            
        label_7581ad:
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            cond:0_1 = var_444 == 0
            goto label_757647
    
    if (var_444 != 0)
        *(var_448 + 0x70) &= 0xfffffffd
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    cond:0_1 = var_444 == 0
label_757647:
    
    if (not(cond:0_1))
        *(var_448 + 0x70) &= 0xfffffffd
    
label_757653:
    result = 0xffffffff
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
