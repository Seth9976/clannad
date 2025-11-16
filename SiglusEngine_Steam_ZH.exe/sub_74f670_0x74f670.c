// 函数: sub_74f670
// 地址: 0x74f670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0
void* var_220 = arg6
int32_t var_258 = 0
int16_t* esi = nullptr
int32_t var_21c = 0
int32_t var_244 = 0
char* i_1 = nullptr
int32_t var_238 = 0
int32_t var_254 = 0
int32_t var_24c = 0
int32_t var_248 = 0
void var_274
sub_7470a1(&var_274, arg5)
int32_t* eax_4 = __errno()
int32_t result

if (arg3 == 0)
label_7501b5:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    if ((arg3[3].b & 0x40) == 0)
        int32_t eax_6 = __fileno(arg3)
        void* edx_4
        
        if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
            edx_4 = &data_b4ce70
        else
            edx_4 = ((eax_6 & 0x1f) << 6) + (&data_b95720)[eax_6 s>> 5]
        
        if ((*(edx_4 + 0x24) & 0x7f) != 0)
            goto label_7501b5
        
        void* ecx_4
        
        if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
            ecx_4 = &data_b4ce70
        else
            ecx_4 = ((eax_6 & 0x1f) << 6) + (&data_b95720)[eax_6 s>> 5]
        
        if ((*(ecx_4 + 0x24) & 0x80) != 0 || arg4 == 0)
            goto label_7501b5
    else if (arg4 == 0)
        goto label_7501b5
    
    char* edx_5
    edx_5.b = *arg4
    void* var_22c = nullptr
    int32_t result_1 = 0
    int32_t result_2 = 0
    uint32_t var_23c_1 = 0
    int16_t* var_25c_1 = nullptr
    char var_215_1 = edx_5.b
    char var_250_1 = edx_5.b
    
    if (edx_5.b != 0)
        char* eax_10 = arg4
        
        while (true)
            void* var_214_1 = &eax_10[1]
            
            if (result_1 s>= 0)
                int32_t eax_15
                
                if (edx_5.b - 0x20 u> 0x58)
                    eax_15 = 0
                else
                    eax_15 = zx.d(*(sx.d(edx_5.b) + 0xaae408)) & 0xf
                
                uint32_t edi_2 = zx.d(*(eax_15 * 9 + var_23c_1 + 0xaae428))
                uint32_t var_23c_2 = edi_2
                int32_t* edi_3 = var_220
                uint32_t eax_18 = edi_2 u>> 4
                var_23c_1 = eax_18
                
                if (eax_18 == 8)
                    goto label_7501b5
                
                if (eax_18 u> 7)
                    eax_10 = var_214_1
                else
                    switch (eax_18)
                        case 0
                            goto label_74fa0f
                        case 1
                            i_1 = 0xffffffff
                            ebx = 0
                            var_254 = 0
                            var_24c = 0
                            var_244 = 0
                            var_238 = 0
                            var_21c = 0
                            int32_t var_248_1 = 0
                            eax_10 = var_214_1
                        case 2
                            int32_t eax_19 = sx.d(edx_5.b)
                            
                            if (eax_19 == 0x20)
                                ebx |= 2
                                var_21c = ebx
                                eax_10 = var_214_1
                            else if (eax_19 == 0x23)
                                ebx |= 0x80
                                var_21c = ebx
                                eax_10 = var_214_1
                            else if (eax_19 == 0x2b)
                                ebx |= 1
                                var_21c = ebx
                                eax_10 = var_214_1
                            else if (eax_19 == 0x2d)
                                ebx |= 4
                                var_21c = ebx
                                eax_10 = var_214_1
                            else
                                eax_10 = var_214_1
                                
                                if (eax_19 == 0x30)
                                    ebx |= 8
                                    var_21c = ebx
                        case 3
                            if (edx_5.b != 0x2a)
                                var_244 = sx.d(edx_5.b) + var_244 * 0xa - 0x30
                                result_1 = result_2
                                eax_10 = var_214_1
                            else
                                int32_t eax_25 = *edi_3
                                var_220 = &edi_3[1]
                                var_244 = eax_25
                                
                                if (eax_25 s< 0)
                                    ebx |= 4
                                    var_21c = ebx
                                    var_244 = neg.d(eax_25)
                                
                                eax_10 = var_214_1
                        case 4
                            i_1 = nullptr
                            eax_10 = var_214_1
                        case 5
                            if (edx_5.b != 0x2a)
                                i_1 = sx.d(edx_5.b) + i_1 * 0xa - 0x30
                                result_1 = result_2
                                eax_10 = var_214_1
                            else
                                char* i_2 = *edi_3
                                i_1 = i_2
                                eax_10 = var_214_1
                                var_220 = &edi_3[1]
                                
                                if (i_2 s< 0)
                                    i_1 = 0xffffffff
                        case 6
                            if (edx_5.b == 0x49)
                                void* eax_31
                                eax_31.b = *var_214_1
                                
                                if (eax_31.b == 0x36 && *(var_214_1 + 1) == 0x34)
                                    eax_10 = var_214_1 + 2
                                    ebx |= 0x8000
                                    var_21c = ebx
                                else if (eax_31.b == 0x33 && *(var_214_1 + 1) == 0x32)
                                    eax_10 = var_214_1 + 2
                                    ebx &= 0xffff7fff
                                    var_21c = ebx
                                else if (eax_31.b == 0x64 || eax_31.b == 0x69 || eax_31.b == 0x6f
                                        || eax_31.b == 0x75 || eax_31.b == 0x78
                                        || eax_31.b == 0x58)
                                    eax_10 = var_214_1
                                else
                                    var_23c_1 = 0
                                label_74fa0f:
                                    int32_t var_248_2 = 0
                                    
                                    if (sub_75a22c(edx_5.b, &var_274) != 0)
                                        sub_75020c(var_250_1, arg3, &result_2)
                                        char eax_36 = *var_214_1
                                        var_250_1 = eax_36
                                        var_214_1 += 1
                                        
                                        if (eax_36 == 0)
                                            goto label_7501b5
                                    
                                    sub_75020c(var_250_1, arg3, &result_2)
                                    result_1 = result_2
                                    eax_10 = var_214_1
                            else if (edx_5.b == 0x68)
                                ebx |= 0x20
                                var_21c = ebx
                                eax_10 = var_214_1
                            else
                                eax_10 = var_214_1
                                
                                if (edx_5.b == 0x6c)
                                    if (*eax_10 != 0x6c)
                                        ebx |= 0x10
                                    else
                                        eax_10 = &eax_10[1]
                                        ebx |= 0x1000
                                    
                                    var_21c = ebx
                                else if (edx_5.b == 0x77)
                                    ebx |= 0x800
                                    var_21c = ebx
                        case 7
                            int32_t eax_37 = sx.d(edx_5.b)
                            void* eax_47
                            
                            if (eax_37 s> 0x64)
                                int32_t var_294_11
                                
                                if (eax_37 s> 0x70)
                                    if (eax_37 != 0x73)
                                        if (eax_37 == 0x75)
                                            goto label_74fcef
                                        
                                        if (eax_37 != 0x78)
                                            goto label_74ffcd
                                        
                                        var_294_11 = 0x27
                                        goto label_74fe64
                                    
                                label_74fb36:
                                    char* i = 0x7fffffff
                                    
                                    if (i_1 != 0xffffffff)
                                        i = i_1
                                    
                                    esi = *edi_3
                                    var_220 = &edi_3[1]
                                    
                                    if ((ebx & 0x810) == 0)
                                        if (esi == 0)
                                            esi = data_b4cc08
                                        
                                        int16_t* eax_82 = esi
                                        
                                        while (i != 0)
                                            i -= 1
                                            
                                            if (*eax_82 == 0)
                                                break
                                            
                                            eax_82 += 1
                                        
                                        eax_47 = eax_82 - esi
                                    else
                                        if (esi == 0)
                                            esi = data_b4cc0c
                                        
                                        int32_t var_248_3 = 1
                                        int16_t* eax_45 = esi
                                        
                                        while (i != 0)
                                            i -= 1
                                            
                                            if (*eax_45 == 0)
                                                break
                                            
                                            eax_45 = &eax_45[1]
                                        
                                        eax_47 = (eax_45 - esi) s>> 1
                                    
                                    goto label_74ffc7
                                
                                if (eax_37 == 0x70)
                                    i_1 = 8
                                label_74fe44:
                                    var_294_11 = 7
                                label_74fe64:
                                    var_22c = 0x10
                                    var_258 = var_294_11
                                    
                                    if (ebx.b s< 0)
                                        int32_t eax_70
                                        eax_70.b = var_294_11.b + 0x51
                                        char var_230_1 = 0x30
                                        char var_22f_1 = eax_70.b
                                        var_238 = 2
                                    
                                    goto label_74fd07
                                
                                if (eax_37 s< 0x65)
                                    goto label_74ffcd
                                
                                if (eax_37 s<= 0x67)
                                    goto label_74fac8
                                
                                if (eax_37 == 0x69)
                                    goto label_74fce6
                                
                                if (eax_37 != 0x6e)
                                    if (eax_37 != 0x6f)
                                        goto label_74ffcd
                                    
                                    var_22c = 8
                                    
                                    if (ebx.b s< 0)
                                        ebx |= 0x200
                                        var_21c = ebx
                                    
                                    goto label_74fd07
                                
                                var_220 = &edi_3[1]
                                int16_t* edi_12 = *edi_3
                                
                                if (__get_printf_count_output() == 0)
                                    goto label_7501b5
                                
                                int32_t result_3 = result_2
                                
                                if ((ebx.b & 0x20) == 0)
                                    *edi_12 = result_3
                                else
                                    *edi_12 = result_3.w
                                
                                var_24c = 1
                            else
                                if (eax_37 == 0x64)
                                label_74fce6:
                                    ebx |= 0x40
                                    var_21c = ebx
                                label_74fcef:
                                    var_22c = 0xa
                                label_74fd07:
                                    int32_t ecx_13
                                    int32_t edi_14
                                    
                                    if ((ebx & 0x8000) != 0 || (ebx & 0x1000) != 0)
                                        ecx_13 = *edi_3
                                        var_220 = &edi_3[2]
                                        edi_14 = edi_3[1]
                                    else
                                        var_220 = &edi_3[1]
                                        int32_t eax_71
                                        
                                        if ((ebx.b & 0x20) != 0)
                                            if ((ebx.b & 0x40) == 0)
                                                eax_71 = zx.d(*edi_3)
                                            else
                                                eax_71 = sx.d(*edi_3)
                                            
                                            goto label_74fec4
                                        
                                        if ((ebx.b & 0x40) == 0)
                                            ecx_13 = *edi_3
                                            edi_14 = 0
                                        else
                                            eax_71 = *edi_3
                                        label_74fec4:
                                            int32_t eax_72
                                            int32_t edx_6
                                            edx_6:eax_72 = sx.q(eax_71)
                                            ecx_13 = eax_72
                                            edi_14 = edx_6
                                    
                                    if ((ebx.b & 0x40) != 0 && edi_14 s<= 0
                                            && (edi_14 s< 0 || ecx_13 u< 0))
                                        int32_t temp17_1 = ecx_13
                                        ecx_13 = neg.d(ecx_13)
                                        edi_14 = neg.d(adc.d(edi_14, 0, temp17_1 != 0))
                                        ebx |= 0x100
                                        var_21c = ebx
                                    
                                    if ((ebx & 0x9000) == 0)
                                        edi_14 = 0
                                    
                                    char* i_4 = i_1
                                    
                                    if (i_4 s>= 0)
                                        ebx &= 0xfffffff7
                                        var_21c = ebx
                                        
                                        if (i_4 s> 0x200)
                                            i_4 = 0x200
                                    else
                                        i_4 = 1
                                    
                                    if ((ecx_13 | edi_14) == 0)
                                        var_238 = 0
                                    
                                    void var_11
                                    void* esi_1 = &var_11
                                    
                                    while (true)
                                        i_1 = i_4 - 1
                                        
                                        if (i_4 s<= 0 && (ecx_13 | edi_14) == 0)
                                            break
                                        
                                        int32_t eax_79
                                        uint32_t edx_7
                                        edx_7:eax_79 = sx.q(var_22c)
                                        uint32_t eax_80
                                        int32_t ecx_17
                                        int32_t edx_8
                                        eax_80, ecx_17, edx_8 =
                                            __aulldvrm(ecx_13, edi_14, eax_79, edx_7)
                                        int32_t ecx_18 = ecx_17 + 0x30
                                        int32_t var_278_1 = ebx
                                        edi_14 = edx_8
                                        
                                        if (ecx_18 s> 0x39)
                                            ecx_18 += var_258
                                        
                                        i_4 = i_1
                                        *esi_1 = ecx_18.b
                                        esi_1 -= 1
                                        ecx_13 = eax_80
                                    
                                    ebx = var_21c
                                    void* eax_81 = &var_11 - esi_1
                                    esi = esi_1 + 1
                                    var_22c = eax_81
                                    
                                    if ((ebx & 0x200) != 0 && (eax_81 == 0 || *esi != 0x30))
                                        esi -= 1
                                        var_22c += 1
                                        *esi = 0x30
                                    
                                    goto label_74ffcd
                                
                                char var_210
                                int32_t entry_ebx
                                
                                if (eax_37 s<= 0x53)
                                    if (eax_37 == 0x53)
                                        if ((ebx & 0x830) == 0)
                                            ebx |= 0x800
                                            var_21c = ebx
                                        
                                        goto label_74fb36
                                    
                                    if (eax_37 != 0x41)
                                        if (eax_37 == 0x43)
                                            if ((ebx & 0x830) == 0)
                                                ebx |= 0x800
                                                var_21c = ebx
                                            
                                            goto label_74fbac
                                        
                                        if (eax_37 == 0x45 || eax_37 == 0x47)
                                            goto label_74fab5
                                        
                                        goto label_74ffcd
                                    
                                label_74fab5:
                                    edx_5.b += 0x20
                                    var_254 = 1
                                    var_215_1 = edx_5.b
                                label_74fac8:
                                    char* i_3 = i_1
                                    esi = &var_210
                                    ebx |= 0x40
                                    var_21c = ebx
                                    void* var_240_1 = 0x200
                                    
                                    if (i_3 s< 0)
                                        i_1 = 6
                                    else if (i_3 != 0)
                                        if (i_3 s> 0x200)
                                            i_3 = 0x200
                                            i_1 = 0x200
                                        
                                        if (i_3 s> 0xa3)
                                            int16_t* eax_59
                                            eax_59, edx_5 = sub_74cd17(&i_3[0x15d])
                                            edx_5.b = var_215_1
                                            var_25c_1 = eax_59
                                            
                                            if (eax_59 == 0)
                                                i_1 = 0xa3
                                            else
                                                esi = eax_59
                                                var_240_1 = &i_3[0x15d]
                                            
                                            edi_3 = var_220
                                    else if (edx_5.b == 0x67)
                                        i_1 = 1
                                    
                                    int32_t var_284 = *edi_3
                                    var_220 = &edi_3[2]
                                    int32_t eax_61 = edi_3[1]
                                    int32_t eax_63 = DecodePointer(data_b4cec8)
                                    eax_63(&var_284, esi, var_240_1, sx.d(edx_5.b), i_1, var_254, 
                                        &var_274, arg2, arg1, entry_ebx, var_284, eax_61)
                                    int32_t edi_18 = ebx & 0x80
                                    
                                    if (edi_18 != 0 && i_1 == 0)
                                        DecodePointer(data_b4ced4)(esi, &var_274)
                                    
                                    if (var_215_1 == 0x67 && edi_18 == 0)
                                        DecodePointer(data_b4ced0)(esi, &var_274)
                                    
                                    if (*esi == 0x2d)
                                        ebx |= 0x100
                                        esi += 1
                                        var_21c = ebx
                                    
                                    goto label_74fc51
                                
                                if (eax_37 == 0x58)
                                    goto label_74fe44
                                
                                if (eax_37 != 0x5a)
                                    if (eax_37 == 0x61)
                                        goto label_74fac8
                                    
                                    if (eax_37 != 0x63)
                                        goto label_74ffcd
                                    
                                label_74fbac:
                                    var_220 = &edi_3[1]
                                    
                                    if ((ebx & 0x810) == 0)
                                        int32_t eax_40
                                        eax_40.b = *edi_3
                                        var_210 = eax_40.b
                                        var_22c = 1
                                    else
                                        int32_t eax_54
                                        eax_54, edx_5 =
                                            _wctomb_s(&var_22c, &var_210, 0x200, zx.d(*edi_3))
                                        
                                        if (eax_54 != 0)
                                            var_24c = 1
                                    
                                    esi = &var_210
                                    goto label_74ffcd
                                
                                int16_t* eax_55 = *edi_3
                                var_220 = &edi_3[1]
                                
                                if (eax_55 != 0)
                                    esi = *(eax_55 + 4)
                                
                                if (eax_55 != 0 && esi != 0)
                                    eax_47 = sx.d(*eax_55)
                                    
                                    if ((ebx & 0x800) == 0)
                                        int32_t var_248_5 = 0
                                    else
                                        int32_t eax_56
                                        edx_5:eax_56 = sx.q(eax_47)
                                        int32_t var_248_4 = 1
                                        eax_47 = (eax_56 - edx_5) s>> 1
                                    
                                    goto label_74ffc7
                                
                                esi = data_b4cc08
                            label_74fc51:
                                eax_47, edx_5 = _strlen(esi)
                            label_74ffc7:
                                var_22c = eax_47
                            label_74ffcd:
                                
                                if (var_24c == 0)
                                    if ((ebx.b & 0x40) != 0)
                                        if ((ebx & 0x100) != 0)
                                            char var_230_2 = 0x2d
                                            var_238 = 1
                                        else if ((ebx.b & 1) != 0)
                                            char var_230_3 = 0x2b
                                            var_238 = 1
                                        else if ((ebx.b & 2) != 0)
                                            char var_230_4 = 0x20
                                            var_238 = 1
                                    
                                    int32_t* edi_23 = var_244 - var_22c - var_238
                                    
                                    if ((ebx.b & 0xc) != 0)
                                        int32_t var_2a0_4 = var_238
                                        return sub_75005f(ebp, esi, edi_23, arg3, &result_2, eax_4, 
                                            arg2, arg1, entry_ebx) __tailcall
                                    
                                    _write_multi_char(0x20, edi_23, arg3, &result_2)
                                    return sub_750042(ebp) __tailcall
                            result_1 = result_2
                            
                            if (var_25c_1 == 0)
                                eax_10 = var_214_1
                            else
                                _free(var_25c_1)
                                var_25c_1 = nullptr
                                result_1 = result_2
                                eax_10 = var_214_1
                
                edx_5.b = *eax_10
                var_215_1 = edx_5.b
                var_250_1 = edx_5.b
                
                if (edx_5.b != 0)
                    continue
            
            if (var_23c_1 == 0)
                break
            
            if (var_23c_1 == 7)
                break
            
            goto label_7501b5
    
    result = result_1

char var_268
void* var_26c

if (var_268 != 0)
    *(var_26c + 0x70) &= 0xfffffffd
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
