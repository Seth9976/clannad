// 函数: sub_7647ee
// 地址: 0x7647ee
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* edi = arg2
uint32_t ebx = 0
uint32_t var_1ec = arg4
void var_188
void* var_1b8 = &var_188
int32_t var_1dc = 0x15e
int32_t var_1d8 = 0
int32_t* var_1cc = nullptr
int32_t* i_2 = nullptr
int32_t var_1e8 = 0
uint32_t var_1a4 = 0
uint32_t var_1f0 = 0
int32_t result

if (edi == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff
else if ((arg1[3].b & 0x40) != 0)
label_7648f8:
    void* var_200
    sub_7470a1(&var_200, arg3)
    int32_t* i
    i.b = *edi
    int32_t* i_19 = nullptr
    char var_18b_1 = 0
    int32_t* i_6 = nullptr
    int32_t* i_5 = nullptr
    int32_t result_1 = 0
    
    if (i.b == 0)
        result = 0
    else
        while (true)
            if (_isspace(zx.d(i.b)) == 0)
                int32_t eax_10
                eax_10.b = *edi
                
                if (eax_10.b != 0x25)
                label_76584d:
                    i_19 += 1
                    i_6 = i_19
                    i_5 = i_19
                    ebx = __getc_nolock(arg1)
                    uint32_t eax_98 = zx.d(*edi)
                    edi = &edi[1]
                    var_1a4 = ebx
                    
                    if (eax_98 != ebx)
                    label_7658d6:
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        __ungetc_nolock(ebx, arg1)
                        break
                    
                    if (__ismbcl0(ebx.b) != 0)
                        i = __getc_nolock(arg1)
                        uint32_t ecx_70 = zx.d(*edi)
                        edi = &edi[1]
                        
                        if (ecx_70 != i)
                            if (i != 0xffffffff)
                                __ungetc_nolock(i, arg1)
                            
                            if (ebx == 0xffffffff)
                                break
                            
                            __ungetc_nolock(ebx, arg1)
                            break
                        
                        i_6 = i_19
                        i_5 = i_19
                else
                    if (edi[1] == 0x25)
                        if (eax_10.b == 0x25 && edi[1] == 0x25)
                            edi = &edi[1]
                        
                        goto label_76584d
                    
                    ebx:1.b = 1
                    int32_t* i_1 = nullptr
                    uint32_t i_10 = 0
                    char var_1b1_1 = 0
                    ebx.b = 0
                    int32_t var_1c0_1 = 0
                    uint32_t i_14 = 0
                    char var_1a9_1 = 0
                    char var_1aa_1 = 0
                    char var_18a_1 = 0
                    char var_19a_1 = 0
                    char var_189_1 = 0
                    int32_t var_1e0_1 = 0
                    uint32_t eax_16
                    uint32_t ecx_11
                    
                    do
                        edi = &edi[1]
                        uint32_t eax_13 = zx.d(*edi)
                        
                        if (_isdigit(zx.d(eax_13.b)) != 0)
                            i_14 += 1
                            i_10 = eax_13 - 0x30 + i_10 * 0xa
                            eax_16.b = var_18a_1
                            ecx_11.b = var_189_1
                        else if (eax_13 s> 0x4e)
                            if (eax_13 == 0x68)
                                ecx_11.b = var_189_1
                                ebx:1.b -= 1
                                ecx_11.b -= 1
                                var_189_1 = ecx_11.b
                                eax_16.b = var_18a_1
                            else if (eax_13 != 0x6c)
                                if (eax_13 == 0x77)
                                    goto label_764b26
                                
                            label_764b0e:
                                ebx.b += 1
                                eax_16.b = var_18a_1
                                ecx_11.b = var_189_1
                            else if (edi[1] != 0x6c)
                                ebx:1.b += 1
                            label_764b26:
                                ecx_11.b = var_189_1
                                ecx_11.b += 1
                                var_189_1 = ecx_11.b
                                eax_16.b = var_18a_1
                            else
                                edi = &edi[1]
                            label_764a9b:
                                var_1e0_1 += 1
                                var_1cc = nullptr
                                i_2 = nullptr
                                eax_16.b = var_18a_1
                                ecx_11.b = var_189_1
                        else if (eax_13 == 0x4e)
                            eax_16.b = var_18a_1
                            ecx_11.b = var_189_1
                        else if (eax_13 == 0x2a)
                            eax_16.b = var_18a_1
                            eax_16.b += 1
                            var_18a_1 = eax_16.b
                            ecx_11.b = var_189_1
                        else if (eax_13 == 0x46)
                            eax_16.b = var_18a_1
                            ecx_11.b = var_189_1
                        else if (eax_13 == 0x49)
                            eax_16.b = edi[1]
                            
                            if (eax_16.b == 0x36 && edi[2] == 0x34)
                                edi = &edi[2]
                                goto label_764a9b
                            
                            if (eax_16.b == 0x33 && edi[2] == 0x32)
                                edi = &edi[2]
                                eax_16.b = var_18a_1
                                ecx_11.b = var_189_1
                            else if (eax_16.b == 0x64)
                                eax_16.b = var_18a_1
                                ecx_11.b = var_189_1
                            else if (eax_16.b == 0x69)
                                ecx_11.b = var_189_1
                                eax_16.b = var_18a_1
                            else
                                if (eax_16.b != 0x6f && eax_16.b != 0x78 && eax_16.b != 0x58)
                                    goto label_764b0e
                                
                                eax_16.b = var_18a_1
                                ecx_11.b = var_189_1
                        else
                            if (eax_13 != 0x4c)
                                goto label_764b0e
                            
                            ebx:1.b += 1
                            eax_16.b = var_18a_1
                            ecx_11.b = var_189_1
                    while (ebx.b == 0)
                    
                    char var_199_1 = ebx:1.b
                    ebx = var_1a4
                    uint32_t i_3 = i_10
                    int32_t* i_4 = i_6
                    void* var_1bc_1 = edi
                    int32_t* var_1c8_2
                    
                    if (eax_16.b != 0)
                        var_1c8_2 = nullptr
                    else
                        var_1f0 = var_1ec
                        eax_16 = var_1ec + 4
                        var_1ec = eax_16
                        var_1c8_2 = *(eax_16 - 4)
                    
                    eax_16.b = 0
                    char var_18c_1 = 0
                    
                    if (ecx_11.b == 0)
                        eax_16.b = *edi
                        
                        if (eax_16.b != 0x53)
                            var_189_1 = 0xff
                        
                        if (eax_16.b == 0x53 || eax_16.b == 0x43)
                            var_189_1 = 1
                    
                    int32_t* ecx_13 = zx.d(*edi) | 0x20
                    int32_t* var_1a8_1 = ecx_13
                    
                    if (ecx_13 != 0x6e)
                        uint32_t eax_18
                        
                        if (ecx_13 == 0x63 || ecx_13 == 0x7b)
                            i_4 += 1
                            i_6 = i_4
                            i_5 = i_4
                            eax_18 = __getc_nolock(arg1)
                        else
                            eax_18 = __whiteout(&i_5, arg1)
                            i_4 = i_5
                            i_6 = i_4
                        
                        ebx = eax_18
                        var_1a4 = ebx
                        
                        if (ebx == 0xffffffff)
                            break
                        
                        ecx_13 = var_1a8_1
                    
                    uint32_t i_7 = i_14
                    
                    if (i_7 != 0 && i_3 == 0)
                        goto label_7658d6
                    
                    if (ecx_13 s> 0x6f)
                        if (ecx_13 != 0x70)
                            char var_28[0xb]
                            
                            if (ecx_13 == 0x73)
                            label_765040:
                                i_7.b = var_189_1
                                
                                if (i_7.b s> 0)
                                    var_19a_1 = 1
                                
                            label_765057:
                                int32_t* esi_5 = var_1c8_2
                                int32_t* i_18 = i_6 - 1
                                i_6 = i_18
                                i_5 = i_18
                                
                                if (ebx != 0xffffffff)
                                    __ungetc_nolock(ebx, arg1)
                                    i_18 = i_6
                                
                                while (true)
                                    if (i_14 != 0)
                                        uint32_t i_8 = i_3
                                        i_3 -= 1
                                        
                                        if (i_8 == 0)
                                            break
                                    
                                    i_6 = i_18 + 1
                                    i_5 = i_18 + 1
                                    ebx = __getc_nolock(arg1)
                                    var_1a4 = ebx
                                    
                                    if (ebx != 0xffffffff)
                                        if (var_1a8_1 == 0x63)
                                        label_765125:
                                            
                                            if (var_18a_1 != 0)
                                                esi_5 += 1
                                            else if (var_19a_1 == 0)
                                                *var_1c8_2 = ebx.b
                                                var_1c8_2 += 1
                                            else
                                                char var_1e4 = ebx.b
                                                
                                                if (__ismbcl0(ebx.b) != 0)
                                                    void* i_16 = i_6 + 1
                                                    i_6 = i_16
                                                    i_5 = i_16
                                                    char var_1e3_1 = __getc_nolock(arg1)
                                                
                                                var_1e8 = 0x3f
                                                sub_75c1e7(&var_1e8, &var_1e4, *(var_200 + 0x74), 
                                                    &var_200)
                                                *var_1c8_2 = var_1e8.w
                                                var_1c8_2 += 2
                                            
                                            i_18 = i_6
                                            continue
                                        else if (var_1a8_1 != 0x73)
                                        label_7650f0:
                                            
                                            if (var_1a8_1 == 0x7b && ((sx.d(var_28[ebx s>> 3])
                                                    ^ sx.d(var_1a9_1)) & 1 << (ebx.b & 7)) != 0)
                                                goto label_765125
                                        else if (ebx s< 9 || ebx s> 0xd)
                                            if (ebx != 0x20)
                                                goto label_765125
                                            
                                            goto label_7650f0
                                    
                                    void* i_17 = i_6 - 1
                                    i_6 = i_17
                                    i_5 = i_17
                                    
                                    if (ebx != 0xffffffff)
                                        __ungetc_nolock(ebx, arg1)
                                    
                                    break
                                
                                if (esi_5 == var_1c8_2)
                                    break
                                
                                if (var_18a_1 != 0)
                                label_76500b:
                                    edi = var_1bc_1
                                    goto label_765011
                                
                                result_1 += 1
                                
                                if (var_1a8_1 == 0x63)
                                    goto label_76500b
                                
                                edi = var_1bc_1
                                
                                if (var_19a_1 == 0)
                                    *var_1c8_2 = 0
                                else
                                    *var_1c8_2 = 0
                                
                                goto label_765011
                            
                            if (ecx_13 == 0x75)
                                goto label_7654d8
                            
                            if (ecx_13 == 0x78)
                                i_7 = i_14
                            label_765307:
                                int32_t* edi_6
                                
                                if (ebx != 0x2d)
                                    if (ebx == 0x2b)
                                        goto label_765317
                                    
                                    edi_6 = arg1
                                else
                                    var_1aa_1 = 1
                                label_765317:
                                    bool cond:5_1 = i_3 != 1
                                    i_3 -= 1
                                    
                                    if (cond:5_1 || i_7 == 0)
                                        edi_6 = arg1
                                        i_4 += 1
                                        i_6 = i_4
                                        i_5 = i_4
                                        ebx = __getc_nolock(edi_6)
                                        var_1a4 = ebx
                                    else
                                        i_7.b = 1
                                        var_18c_1 = 1
                                        edi_6 = arg1
                                
                                if (ebx != 0x30)
                                    goto label_765523
                                
                                i_4 += 1
                                i_6 = i_4
                                i_5 = i_4
                                ebx = __getc_nolock(edi_6)
                                var_1a4 = ebx
                                
                                if (ebx.b == 0x78 || ebx.b == 0x58)
                                    i_4 += 1
                                    i_6 = i_4
                                    i_5 = i_4
                                    ebx = __getc_nolock(edi_6)
                                    var_1a4 = ebx
                                    
                                    if (i_14 != 0)
                                        i_7 = i_3 - 2
                                        i_3 = i_7
                                        
                                        if (i_7 s< 1)
                                            var_18c_1 += 1
                                    
                                    ecx_13 = 0x78
                                    var_1a8_1 = ecx_13
                                else
                                    ecx_13 = var_1a8_1
                                    var_1c0_1 = 1
                                    
                                    if (ecx_13 == 0x78)
                                        i_4 -= 1
                                        i_6 = i_4
                                        i_5 = i_4
                                        
                                        if (ebx != 0xffffffff)
                                            __ungetc_nolock(ebx, edi_6)
                                            ecx_13 = var_1a8_1
                                        
                                        ebx = 0x30
                                        var_1a4 = 0x30
                                    else
                                        if (i_14 != 0)
                                            uint32_t i_13 = i_3
                                            i_3 -= 1
                                            
                                            if (i_13 == 1)
                                                var_18c_1 += 1
                                        
                                        ecx_13 = 0x6f
                                        var_1a8_1 = ecx_13
                                
                                goto label_765529
                            
                            if (ecx_13 != 0x7b)
                                goto label_7651ec
                            
                            if (var_189_1 s> 0)
                                var_19a_1 = 1
                            
                            void* edi_4 = &edi[1]
                            
                            if (*edi_4 == 0x5e)
                                edi_4 += 1
                                var_1a9_1 = 0xff
                            
                            int16_t eax_68
                            uint32_t edx_14
                            eax_68, edx_14 = _memset(&var_28, 0, 0x20)
                            
                            if (*edi_4 == 0x5d)
                                edx_14.b = 0x5d
                                char var_1d_1 = 0x20
                                edi_4 += 1
                                goto label_7652e1
                            
                            while (true)
                                edx_14.b = var_1b1_1
                            label_7652e1:
                                eax_68.b = *edi_4
                                
                                if (eax_68.b == 0x5d)
                                    break
                                
                                edi_4 += 1
                                
                                if (eax_68.b == 0x2d && edx_14.b != 0)
                                    char ecx_46 = *edi_4
                                    
                                    if (ecx_46 != 0x5d)
                                        edi_4 += 1
                                        
                                        if (edx_14.b u>= ecx_46)
                                            eax_68:1.b = edx_14.b
                                            edx_14.b = ecx_46
                                        else
                                            eax_68:1.b = ecx_46
                                        
                                        if (edx_14.b u< eax_68:1.b)
                                            eax_68.b = eax_68:1.b
                                            uint32_t esi_6 = zx.d(edx_14.b)
                                            eax_68.b -= edx_14.b
                                            uint32_t edi_5 = zx.d(eax_68.b)
                                        label_765293:
                                            uint32_t edx_16 = esi_6 u>> 3
                                            eax_68.b = 1
                                            eax_68.b = 1 << (esi_6.b & 7)
                                            var_28[edx_16] |= eax_68.b
                                            esi_6 += 1
                                            uint32_t temp13_1 = edi_5
                                            edi_5 -= 1
                                            
                                            if (temp13_1 != 1)
                                                goto label_765293
                                        
                                        uint32_t ecx_49 = zx.d(eax_68:1.b)
                                        eax_68.b = 1
                                        edx_14 = ecx_49 u>> 3
                                        eax_68.b = 1 << (ecx_49.b & 7)
                                        var_28[edx_14] |= eax_68.b
                                        edx_14.b = 0
                                        goto label_7652e1
                                
                                uint32_t ecx_50 = zx.d(eax_68.b)
                                var_1b1_1 = eax_68.b
                                edx_14 = ecx_50 u>> 3
                                eax_68.b = 1
                                eax_68.b = 1 << (ecx_50.b & 7)
                                var_28[edx_14] |= eax_68.b
                            
                            if (eax_68.b == 0)
                                break
                            
                            var_1bc_1 = edi_4
                            goto label_765057
                        
                        var_199_1 = 1
                    label_7654d8:
                        i_7 = i_14
                    else
                        if (ecx_13 == 0x6f)
                            goto label_7654de
                        
                        if (ecx_13 == 0x63)
                            if (i_7 == 0)
                                i_14 = 1
                                i_3 += 1
                            
                            goto label_765040
                        
                        if (ecx_13 != 0x64)
                            if (ecx_13 s> 0x64)
                                if (ecx_13 s<= 0x67)
                                    char* esi_4 = nullptr
                                    void* i_20
                                    
                                    if (ebx != 0x2d)
                                        if (ebx == 0x2b)
                                            goto label_764c82
                                        
                                        i_20 = i_6
                                    else
                                        esi_4 = 1
                                        *var_1b8 = ebx.b
                                    label_764c82:
                                        i_3 -= 1
                                        i_20 = i_6 + 1
                                        ebx = __getc_nolock(arg1)
                                        i_7 = i_14
                                        var_1a4 = ebx
                                    
                                    if (i_7 == 0)
                                        i_3 = 0xffffffff
                                    
                                    int32_t eax_22 = _isdigit(zx.d(ebx.b))
                                    
                                    while (true)
                                        uint32_t i_9 = i_3
                                        
                                        if (eax_22 != 0)
                                            uint32_t i_15 = i_9
                                            i_9 -= 1
                                            i_3 = i_9
                                            
                                            if (i_15 != 0)
                                                var_1c0_1 += 1
                                                *(esi_4 + var_1b8) = ebx.b
                                                esi_4 = &esi_4[1]
                                                
                                                if (sub_76474c(esi_4, &var_1dc, &var_1b8, &var_188, 
                                                        &var_1d8) == 0)
                                                    break
                                                
                                                i_20 += 1
                                                ebx = __getc_nolock(arg1)
                                                var_1a4 = ebx
                                                eax_22 = _isdigit(zx.d(ebx.b))
                                                continue
                                        
                                        i.b = ***(var_200 + 0x84)
                                        char var_1a9_2 = i.b
                                        
                                        if (i.b == ebx.b)
                                            i_3 = i_9 - 1
                                            
                                            if (i_9 != 0)
                                                i_20 += 1
                                                ebx = __getc_nolock(arg1)
                                                uint32_t eax_29
                                                eax_29.b = var_1a9_2
                                                var_1a4 = ebx
                                                *(esi_4 + var_1b8) = eax_29.b
                                                esi_4 = &esi_4[1]
                                                
                                                if (sub_76474c(esi_4, &var_1dc, &var_1b8, &var_188, 
                                                        &var_1d8) == 0)
                                                    goto label_7658e9
                                                
                                                for (i = _isdigit(zx.d(ebx.b)); i != 0; 
                                                        i = _isdigit(zx.d(ebx.b)))
                                                    i = i_3
                                                    i_3 -= 1
                                                    
                                                    if (i == 0)
                                                        break
                                                    
                                                    var_1c0_1 += 1
                                                    *(esi_4 + var_1b8) = ebx.b
                                                    esi_4 = &esi_4[1]
                                                    
                                                    if (sub_76474c(esi_4, &var_1dc, &var_1b8, 
                                                            &var_188, &var_1d8) == 0)
                                                        goto label_7658e9
                                                    
                                                    i_20 += 1
                                                    ebx = __getc_nolock(arg1)
                                                    var_1a4 = ebx
                                        
                                        if (var_1c0_1 != 0 && (ebx == 0x65 || ebx == 0x45))
                                            void* var_190_1 = i_3 - 1
                                            
                                            if (i_3 != 0)
                                                *(esi_4 + var_1b8) = 0x65
                                                esi_4 = &esi_4[1]
                                                
                                                if (sub_76474c(esi_4, &var_1dc, &var_1b8, &var_188, 
                                                        &var_1d8) != 0)
                                                    i_20 += 1
                                                    ebx = __getc_nolock(arg1)
                                                    var_1a4 = ebx
                                                    
                                                    if (ebx != 0x2d)
                                                        if (ebx == 0x2b)
                                                        label_764ef4:
                                                            void* eax_41 = var_190_1
                                                            var_190_1 -= 1
                                                            
                                                            if (eax_41 != 0)
                                                                i_20 += 1
                                                                ebx = __getc_nolock(arg1)
                                                                var_1a4 = ebx
                                                            else
                                                                var_190_1 &= eax_41
                                                            
                                                            goto label_764f22
                                                        
                                                    label_764f22:
                                                        i = _isdigit(zx.d(ebx.b))
                                                        
                                                        while (true)
                                                            if (i == 0)
                                                                goto label_764f9d
                                                            
                                                            int32_t* ecx_30 = var_190_1
                                                            var_190_1 = ecx_30 - 1
                                                            
                                                            if (ecx_30 == 0)
                                                                goto label_764f9d
                                                            
                                                            var_1c0_1 += 1
                                                            *(esi_4 + var_1b8) = ebx.b
                                                            esi_4 = &esi_4[1]
                                                            
                                                            if (sub_76474c(esi_4, &var_1dc, 
                                                                    &var_1b8, &var_188, &var_1d8) == 0)
                                                                break
                                                            
                                                            i_20 += 1
                                                            ebx = __getc_nolock(arg1)
                                                            var_1a4 = ebx
                                                            i = _isdigit(zx.d(ebx.b))
                                                    else
                                                        *(esi_4 + var_1b8) = ebx.b
                                                        esi_4 = &esi_4[1]
                                                        
                                                        if (sub_76474c(esi_4, &var_1dc, &var_1b8, 
                                                                &var_188, &var_1d8) != 0)
                                                            goto label_764ef4
                                                
                                                goto label_7658e9
                                        
                                    label_764f9d:
                                        i_6 = i_20 - 1
                                        i_5 = i_20 - 1
                                        
                                        if (ebx != 0xffffffff)
                                            __ungetc_nolock(ebx, arg1)
                                        
                                        if (var_1c0_1 == 0)
                                            goto label_7658e9
                                        
                                        if (var_18a_1 == 0)
                                            void* eax_48 = var_1b8
                                            result_1 += 1
                                            *(esi_4 + eax_48) = 0
                                            DecodePointer(data_b4cecc)(sx.d(var_199_1) - 1, 
                                                var_1c8_2, eax_48, &var_200)
                                        
                                        goto label_76500b
                                    
                                    break
                                    break
                                
                                if (ecx_13 == 0x69)
                                    var_1a8_1 = 0x64
                                    goto label_765307
                                
                                if (ecx_13 == 0x6e)
                                    i = i_4
                                    
                                    if (var_18a_1 == 0)
                                        goto label_7657f9
                                    
                                    goto label_765011
                            
                        label_7651ec:
                            
                            if (zx.d(*edi) != ebx)
                                goto label_7658d6
                            
                            i.b = var_18b_1
                            i.b -= 1
                            
                            if (var_18a_1 == 0)
                                var_1ec = var_1f0
                            
                            goto label_765017
                    
                label_7654de:
                    
                    if (ebx != 0x2d)
                        if (ebx != 0x2b)
                            goto label_765529
                        
                        goto label_7654f1
                    
                    var_1aa_1 = 1
                label_7654f1:
                    bool cond:3_1 = i_3 != 1
                    i_3 -= 1
                    
                    if (cond:3_1 || i_7 == 0)
                        i_4 += 1
                        i_6 = i_4
                        i_5 = i_4
                        ebx = __getc_nolock(arg1)
                        var_1a4 = ebx
                    label_765523:
                        ecx_13 = var_1a8_1
                    label_765529:
                        i_7.b = var_18c_1
                    else
                        i_7.b = 1
                    
                    int32_t* edi_7
                    
                    if (var_1e0_1 == 0)
                        if (i_7.b != 0)
                            edi_7 = var_1a8_1
                        label_7657b0:
                            i = i_1
                        else
                            while (true)
                                int32_t eax_91
                                
                                if (ecx_13 != 0x78 && ecx_13 != 0x70)
                                    edi_7 = var_1a8_1
                                    
                                    if (_isdigit(zx.d(ebx.b)) == 0)
                                        goto label_765789
                                    
                                    if (edi_7 != 0x6f)
                                        eax_91 = i_1 * 0xa
                                        goto label_765734
                                    
                                    if (ebx s>= 0x38)
                                        goto label_765789
                                    
                                    eax_91 = i_1 << 3
                                    goto label_765734
                                
                                if (_isxdigit(zx.d(ebx.b)) == 0)
                                    edi_7 = var_1a8_1
                                label_765789:
                                    i_6 = i_4 - 1
                                    i_5 = i_4 - 1
                                    
                                    if (ebx != 0xffffffff)
                                        __ungetc_nolock(ebx, arg1)
                                    
                                    goto label_7657b0
                                
                                int32_t var_1d0_1 = i_1 << 4
                                edi_7 = var_1a8_1
                                ebx = sub_7647ab(ebx.b)
                                eax_91 = var_1d0_1
                                var_1a4 = ebx
                            label_765734:
                                var_1c0_1 += 1
                                i = eax_91 - 0x30 + ebx
                                i_1 = i
                                
                                if (i_14 != 0)
                                    uint32_t i_11 = i_3
                                    i_3 -= 1
                                    
                                    if (i_11 == 1)
                                        break
                                
                                i_4 += 1
                                i_6 = i_4
                                i_5 = i_4
                                ecx_13 = var_1a8_1
                                ebx = __getc_nolock(arg1)
                                var_1a4 = ebx
                        
                        if (var_1aa_1 != 0)
                            i_1 = neg.d(i)
                    else
                        if (i_7.b != 0)
                            edi_7 = var_1a8_1
                        label_765687:
                            ecx_13 = var_1cc
                            i = i_2
                        else
                            while (true)
                                int32_t var_1b0
                                int32_t ecx_58
                                
                                if (ecx_13 != 0x78 && ecx_13 != 0x70)
                                    edi_7 = var_1a8_1
                                    
                                    if (_isdigit(zx.d(ebx.b)) == 0)
                                        goto label_765660
                                    
                                    if (edi_7 != 0x6f)
                                        int32_t eax_77
                                        int32_t edx_21
                                        eax_77, edx_21 = __allmul(var_1cc, i_2, 0xa, 0)
                                        ecx_58 = eax_77
                                        var_1b0 = edx_21
                                        goto label_7655fc
                                    
                                    if (ebx s>= 0x38)
                                        goto label_765660
                                    
                                    var_1b0 = i_2 << 3 | var_1cc u>> 0xffffffe3
                                    ecx_58 = var_1cc << 3
                                    goto label_7655fc
                                
                                if (_isxdigit(zx.d(ebx.b)) == 0)
                                    edi_7 = var_1a8_1
                                label_765660:
                                    i_6 = i_4 - 1
                                    i_5 = i_4 - 1
                                    
                                    if (ebx != 0xffffffff)
                                        __ungetc_nolock(ebx, arg1)
                                    
                                    goto label_765687
                                
                                var_1b0 = i_2 << 4 | var_1cc u>> 0xffffffe4
                                edi_7 = var_1a8_1
                                ebx = sub_7647ab(ebx.b)
                                ecx_58 = var_1cc << 4
                                var_1a4 = ebx
                            label_7655fc:
                                var_1c0_1 += 1
                                int32_t eax_84
                                int32_t edx_22
                                edx_22:eax_84 = sx.q(ebx - 0x30)
                                ecx_13 = ecx_58 + eax_84
                                var_1cc = ecx_13
                                i = adc.d(var_1b0, edx_22, ecx_58 + eax_84 u< ecx_58)
                                i_2 = i
                                
                                if (i_14 != 0)
                                    uint32_t i_12 = i_3
                                    i_3 -= 1
                                    
                                    if (i_12 == 1)
                                        break
                                
                                i_4 += 1
                                i_6 = i_4
                                i_5 = i_4
                                ecx_13 = var_1a8_1
                                ebx = __getc_nolock(arg1)
                                var_1a4 = ebx
                        
                        if (var_1aa_1 != 0)
                            var_1cc = neg.d(ecx_13)
                            i_2 = neg.d(adc.d(i, 0, ecx_13 != 0))
                    
                    int32_t edi_9 = neg.d(edi_7 - 0x46)
                    
                    if ((sbb.d(edi_9, edi_9, edi_7 != 0x46) & var_1c0_1) == 0)
                        break
                    
                    if (var_18a_1 != 0)
                        goto label_76500b
                    
                    result_1 += 1
                    edi = var_1bc_1
                    i = i_1
                label_7657f9:
                    
                    if (var_1e0_1 == 0)
                        ecx_13.b = var_199_1
                        
                        if (ecx_13.b == 0)
                            *var_1c8_2 = i.w
                        else
                            *var_1c8_2 = i
                        
                        goto label_765011
                    
                    *var_1c8_2 = var_1cc
                    var_1c8_2[1] = i_2
                label_765011:
                    i.b = var_18b_1
                label_765017:
                    i_19 = i_6
                    i.b += 1
                    var_18b_1 = i.b
                    edi = &edi[1]
                
                if (ebx == 0xffffffff)
                    if (*edi != 0x25)
                        break
                    
                    if (edi[1] != 0x6e)
                        break
            else
                i_5 = i_19 - 1
                uint32_t eax_11 = __whiteout(&i_5, arg1)
                
                if (eax_11 != 0xffffffff)
                    __ungetc_nolock(eax_11, arg1)
                
                do
                    edi = &edi[1]
                    i = _isspace(zx.d(*edi))
                while (i != 0)
                
                i_19 = i_5
                i_6 = i_19
            
            i.b = *edi
            
            if (i.b == 0)
                break
        
    label_7658e9:
        
        if (var_1d8 == 1)
            _free(var_1b8)
        
        result = 0xffffffff
        
        if (ebx != 0xffffffff || result_1 != 0 || var_18b_1 != result_1.b)
            result = result_1
    
    char var_1f4
    void* var_1f8
    
    if (var_1f4 != 0)
        *(var_1f8 + 0x70) &= 0xfffffffd
else
    int32_t eax_4 = __fileno(arg1)
    void* edx_4
    
    if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
        edx_4 = &data_b4ce70
    else
        edx_4 = ((eax_4 & 0x1f) << 6) + (&data_b95720)[eax_4 s>> 5]
    
    void* ecx_4
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0)
        if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
            ecx_4 = &data_b4ce70
        else
            ecx_4 = ((eax_4 & 0x1f) << 6) + (&data_b95720)[eax_4 s>> 5]
    
    if ((*(edx_4 + 0x24) & 0x7f) == 0 && (*(ecx_4 + 0x24) & 0x80) == 0)
        goto label_7648f8
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0xffffffff

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
