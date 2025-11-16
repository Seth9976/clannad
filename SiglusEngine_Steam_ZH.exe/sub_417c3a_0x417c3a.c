// 函数: sub_417c3a
// 地址: 0x417c3a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t* var_10c = nullptr
int32_t* var_110 = nullptr
char** var_11c = nullptr
int32_t result

if (sub_4669bd(arg4, nullptr, arg5) != 0)
    result = 0x80004005
else
    int32_t* eax_1 = sub_466c9b(arg3, "1.0.5", 0, sub_417c2a, sub_52e4f0)
    var_10c = eax_1
    int32_t result_1
    
    if (eax_1 == 0)
    label_41816a:
        result_1 = 0x8007000e
    label_418297:
        
        if (var_10c != 0)
            sub_46740d(&var_10c, &var_110, nullptr)
        
        if (var_11c != 0)
            j__free(var_11c)
        
        result = result_1
    else
        int32_t* eax_2 = sub_466adf(eax_1)
        var_110 = eax_2
        
        if (eax_2 == 0)
            goto label_41816a
        
        int32_t __saved_ebp
        __setjmp3(&__saved_ebp, 0, arg3, var_10c, 0, arg3, arg2)
        void* var_14c = arg4
        void* var_148_1 = arg5
        sub_468e63(var_10c, &var_14c, sub_417be7)
        sub_466d91(var_10c, var_110)
        int32_t var_138
        uint32_t var_134
        uint32_t var_12c
        int32_t var_124
        sub_467546(var_10c, var_110, &var_138, &var_124, &var_12c, &var_134, nullptr, nullptr, 
            nullptr)
        uint32_t eax_5 = var_134
        
        if (eax_5 == 0)
            *arg1 = 0x32
        else if (eax_5 == 2)
            *arg1 = 0x14
        else if (eax_5 == 3)
            *arg1 = 0x29
        else if (eax_5 == 4)
            *arg1 = 0x33
        else if (eax_5 == 6)
            *arg1 = 0x15
        
        if (var_12c != 0x10)
            goto label_417dce
        
        sub_4676cc(var_10c)
        int32_t eax_13 = *arg1
        
        if (eax_13 == 0x14)
            __builtin_strncpy(arg1, " R16", 4)
        label_417dce:
            
            if (var_12c s< 8)
                sub_4676e5(var_10c)
            
            if (var_134 == 0 && var_12c s< 8)
                sub_4678a9(var_10c)
            
            uint32_t var_140
            double var_15c
            
            if (sub_467515(var_10c, var_110, &var_140) == 0)
                if (sub_4674e6(var_10c, var_110, &var_15c) != 0)
                    int32_t* var_170_6
                    var_170_6.q = fconvert.d(fconvert.t(var_15c))
                    uint32_t* var_178_1
                    var_178_1.q = fconvert.d(fconvert.t(2.2000000000000002))
                    sub_46786e(var_10c, var_178_1, var_170_6)
            else
                sub_466bf7(var_10c, var_110, var_140.b)
            
            if (*arg1 != 0x29 && sub_46748c(var_10c, var_110, 0x10) != 0)
                sub_4678a9(var_10c)
                int32_t eax_21 = *arg1
                
                if (eax_21 == 0x14)
                    *arg1 = 0x15
                else if (eax_21 == 0x32)
                    *arg1 = 0x33
                else if (eax_21 == 0x51)
                    __builtin_strncpy(arg1, "AL16", 4)
                else if (eax_21 == 0x36315220)
                    *arg1 = 0x24
            
            int32_t eax_22 = *arg1
            
            if (eax_22 == 0x14 || eax_22 == 0x36315220 || eax_22 == 0x15)
                sub_4676bc(var_10c)
            
            if (*arg1 == 0x14)
                sub_467726(var_10c, 0xff, 1)
                *arg1 = 0x16
            
            sub_466f01(var_10c, var_110)
            int32_t eax_23 = *arg1
            int32_t var_114
            
            if (eax_23 == 0x33)
                var_114 = 2
            else if (eax_23 == 0x51)
                var_114 = 1
            else if (eax_23 == 0x36314c41)
                var_114 = 2
            else if (eax_23 == 0x36315220)
                var_114 = 3
            
            if (eax_23 == 0x32)
                var_114 = 1
            else if (eax_23 == 0x14)
                var_114 = 3
            else if (eax_23 == 0x15 || eax_23 == 0x16 || eax_23 == 0x24)
                var_114 = 4
            else if (eax_23 == 0x29)
                var_114 = 1
            
            if (var_114 != zx.d(sub_4674c9(var_10c, var_110)))
                result_1 = 0x80004005
                goto label_418297
            
            int32_t* var_16c_13 = var_110
            arg1[3] = var_138
            int32_t* var_170_10 = var_10c
            arg1[4] = var_124
            arg1[5] = 1
            int32_t eax_33 = sub_4674ac(var_170_10, var_16c_13)
            bool cond:7_1 = arg1[0x10] == 0
            arg1[0xc] = eax_33
            arg1[0xd] = 0
            
            if (not(cond:7_1))
                int32_t eax_35 = sub_745f3f(eax_33 * var_124)
                arg1[1] = eax_35
                
                if (eax_35 == 0)
                    goto label_41816a
                
                int32_t eax_37 = var_124 << 2
                arg1[0xe] = 1
                char** eax_38 = sub_745f3f(eax_37)
                var_11c = eax_38
                
                if (eax_38 == 0)
                    goto label_41816a
                
                int32_t eax_39 = 0
                
                if (var_124 u> 0)
                    do
                        var_11c[eax_39] = arg1[0xc] * eax_39 + arg1[1]
                        eax_39 += 1
                    while (eax_39 u< var_124)
                
                int16_t x87control_1 = sub_4672a9(var_10c, var_11c)
                
                if (*arg1 == 0x29)
                    int32_t* var_170_12 = var_110
                    uint32_t var_130 = 0
                    int32_t* var_174_7 = var_10c
                    uint32_t var_128 = 0
                    int32_t var_118
                    
                    if (sub_46748c(var_174_7, var_170_12, 8) != 0)
                        sub_467619(var_10c, var_110, &var_118, &var_128)
                    
                    int32_t var_13c
                    
                    if (sub_46748c(var_10c, var_110, 0x10) != 0)
                        sub_467651(var_10c, var_110, &var_13c, &var_130, nullptr)
                    
                    int32_t* edx_2 = var_10c
                    long double x87_r7_3 = fconvert.t(edx_2[0x4c])
                    long double temp15_1 = fconvert.t(9.9999999999999995e-07)
                    x87_r7_3 - temp15_1
                    int32_t eax_41
                    eax_41.w = (x87_r7_3 < temp15_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_3, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r7_3 == temp15_1 ? 1 : 0) << 0xe
                    char var_108[0x100]
                    
                    if ((eax_41:1.b & 0x41) != 0)
                    label_418147:
                        
                        for (int32_t i = 0; i s< 0x100; i += 1)
                            var_108[i] = i.b
                    else
                        long double x87_r7_4 = fconvert.t(edx_2[0x4d])
                        long double temp16_1 = fconvert.t(9.9999999999999995e-07)
                        x87_r7_4 - temp16_1
                        eax_41.w = (x87_r7_4 < temp16_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_4, temp16_1) ? 1 : 0) << 0xa
                            | (x87_r7_4 == temp16_1 ? 1 : 0) << 0xe
                        
                        if ((eax_41:1.b & 0x41) != 0)
                            goto label_418147
                        
                        int32_t i_1 = 0
                        double var_154_1 = fconvert.d(fconvert.t(1.0)
                            / (fconvert.t(edx_2[0x4d]) * fconvert.t(edx_2[0x4c])))
                        int16_t top_1 = 0
                        
                        do
                            unimplemented  {fild st0, dword [ebp-0x11c]}
                            unimplemented  {fmul st0, qword [0xab6da0]}
                            unimplemented  {fld st0, qword [ebp-0x150]}
                            int32_t mxcsr
                            int16_t x87control_2 = sub_761640(mxcsr, x87control_1)
                            unimplemented  {fmul st0, qword [0xb0d930]}
                            unimplemented  {fadd qword [0xb0d810]}
                            char eax_42
                            eax_42, x87control_1 = __ftol(x87control_2)
                            top_1 += 1
                            int32_t i_3 = i_1
                            i_1 += 1
                            var_108[i_3] = eax_42
                        while (i_1 s< 0x100)
                    
                    int32_t eax_43 = sub_745f3f(0x400)
                    arg1[2] = eax_43
                    
                    if (eax_43 == 0)
                        goto label_41816a
                    
                    char* eax_44 = nullptr
                    bool cond:11_1 = var_130 s<= 0
                    arg1[0xf] = 1
                    
                    if (not(cond:11_1))
                        void* edi = nullptr
                        
                        do
                            uint32_t edx_4
                            edx_4.b = var_108[zx.d(*(edi + var_118))]
                            int32_t ecx_9 = eax_44 << 2
                            *(ecx_9 + arg1[2]) = edx_4.b
                            uint32_t edx_6
                            edx_6.b = var_108[zx.d(*(edi + var_118 + 1))]
                            *(ecx_9 + arg1[2] + 1) = edx_6.b
                            uint32_t edx_8
                            edx_8.b = var_108[zx.d(*(edi + var_118 + 2))]
                            *(ecx_9 + arg1[2] + 2) = edx_8.b
                            int32_t ebx_4
                            ebx_4.b = eax_44[var_13c]
                            eax_44 = &eax_44[1]
                            *(ecx_9 + arg1[2] + 3) = ebx_4.b
                            edi += 3
                        while (eax_44 s< var_130)
                    
                    if (eax_44 s< var_128)
                        void* edi_1 = eax_44 * 3
                        
                        do
                            uint32_t edx_11
                            edx_11.b = var_108[zx.d(*(edi_1 + var_118))]
                            int32_t ecx_11 = eax_44 << 2
                            *(ecx_11 + arg1[2]) = edx_11.b
                            uint32_t edx_13
                            edx_13.b = var_108[zx.d(*(edi_1 + var_118 + 1))]
                            *(ecx_11 + arg1[2] + 1) = edx_13.b
                            uint32_t edx_15
                            edx_15.b = var_108[zx.d(*(edi_1 + var_118 + 2))]
                            *(ecx_11 + arg1[2] + 2) = edx_15.b
                            eax_44 = &eax_44[1]
                            *(ecx_11 + arg1[2] + 3) = 0xff
                            edi_1 += 3
                        while (eax_44 s< var_128)
                    
                    if (eax_44 s< 0x100)
                        int32_t i_2 = eax_44 << 2
                        
                        do
                            *(i_2 + arg1[2]) = 0xff
                            *(i_2 + arg1[2] + 1) = 0xff
                            *(i_2 + arg1[2] + 2) = 0xff
                            *(i_2 + arg1[2] + 3) = 0xff
                            i_2 += 4
                        while (i_2 s< 0x400)
            
            result_1 = 0
            goto label_418297
        
        if (eax_13 == 0x15)
            *arg1 = 0x24
            goto label_417dce
        
        if (eax_13 == 0x32)
            *arg1 = 0x51
            goto label_417dce
        
        if (eax_13 == 0x33)
            __builtin_strncpy(arg1, "AL16", 4)
            goto label_417dce
        
        result = 0x80004005

sub_745f2b(__security_cookie_1)
return result
