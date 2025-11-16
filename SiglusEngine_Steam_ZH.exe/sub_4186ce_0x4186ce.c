// 函数: sub_4186ce
// 地址: 0x4186ce
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t i = 3
int32_t result

if (arg3 u> 3)
    int32_t edi
    int32_t var_230_1 = edi
    char* edi_1 = arg2
    void* const esi_1 = &data_ab6dc4
    bool cond:2_1 = false
    
    while (i != 0)
        char temp1_1 = *esi_1
        char temp2_1 = *edi_1
        cond:2_1 = temp1_1 != temp2_1
        esi_1 += 1
        edi_1 = &edi_1[1]
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    int32_t var_214_1
    
    if (cond:2_1)
        int32_t i_1 = 3
        char* edi_2 = arg2
        void* const esi_2 = &data_ab6dc0
        bool cond:4_1 = false
        
        while (i_1 != 0)
            char temp3_1 = *esi_2
            char temp4_1 = *edi_2
            cond:4_1 = temp3_1 != temp4_1
            esi_2 += 1
            edi_2 = &edi_2[1]
            i_1 -= 1
            
            if (temp3_1 != temp4_1)
                break
        
        if (not(cond:4_1))
            var_214_1 = 1
            goto label_418737
        
        result = 0x80004005
    else
        var_214_1 = 0
    label_418737:
        void* ecx = 0x100
        
        if (arg3 - 3 u<= 0x100)
            ecx = arg3 - 3
        
        char* eax_2 = sub_41658d(&arg2[3], ecx)
        
        if (eax_2 == 0)
            result = 0x80004005
        else
            void* var_234_2 = &arg2[3]
            void* var_238_2 = &eax_2[1]
            char var_108[0x100]
            sub_4186b1(&var_108)
            void var_208
            void* var_234_3 = &var_208
            int32_t var_21c
            int32_t* var_238_3 = &var_21c
            int32_t var_218
            int32_t* var_23c_2 = &var_218
            
            if (sub_7621fb(&var_108, "%u %u%s") != 2)
                result = 0x80004005
            else
                void* esi_5 = arg3 - 3 + 0xffffffff - eax_2
                
                if (arg3 - 3 == neg.d(0xffffffff - eax_2))
                    result = 0x80004005
                else
                    void* eax_7 = 0x100
                    
                    if (esi_5 u<= 0x100)
                        eax_7 = esi_5
                    
                    char* eax_8 = sub_41658d(&arg2[3] + eax_2 + 1, eax_7)
                    
                    if (eax_8 == 0)
                        result = 0x80004005
                    else
                        void* var_234_5 = &arg2[3] + eax_2 + 1
                        void* var_238_5 = &eax_8[1]
                        sub_4186b1(&var_108)
                        void* var_234_6 = &var_208
                        float var_224
                        int32_t* var_238_6 = &var_224
                        
                        if (sub_7621fb(&var_108, "%f%s") != 1)
                            result = 0x80004005
                        else
                            long double x87_r7_1 = fconvert.t(var_224)
                            long double temp6_1 = fconvert.t(0f)
                            x87_r7_1 - temp6_1
                            int32_t eax_10
                            eax_10.w = (x87_r7_1 < temp6_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe
                            bool p_1 = unimplemented  {test ah, 0x5}
                            int32_t var_20c_3
                            
                            var_20c_3 = p_1 ? 1 : 0
                            
                            int32_t ecx_2 = var_218
                            int32_t edx_1 = var_21c
                            int32_t eax_11
                            eax_11.b = var_214_1 == 0
                            
                            if (esi_5 - eax_8 - 1 u< ((eax_11 * 2 + 1) * ecx_2 * edx_1) << 2)
                                result = 0x80004005
                            else
                                arg1[0xd] = 0
                                int32_t eax_17 = ecx_2 << 4
                                arg1[0xc] = eax_17
                                arg1[3] = ecx_2
                                *arg1 = 0x74
                                arg1[4] = edx_1
                                arg1[5] = 1
                                arg1[0xe] = 1
                                int32_t eax_19 = sub_745f3f(eax_17 * edx_1)
                                arg1[1] = eax_19
                                
                                if (eax_19 != 0)
                                    void* edi_5 = eax_8 + &arg2[3] + eax_2 + 1 + 1
                                    int32_t eax_21 = var_21c
                                    int32_t var_210_2 = eax_21 - 1
                                    
                                    if (eax_21 - 1 s>= 0)
                                        int32_t temp8_1
                                        
                                        do
                                            int32_t eax_23 = var_218
                                            float* i_2 = ((var_210_2 * eax_23) << 4) + arg1[1]
                                            void* eax_25 = &i_2[eax_23 * 4]
                                            int32_t ecx_4 = 0
                                            
                                            if (var_214_1 == 0)
                                                if (var_20c_3 == 0)
                                                    for (; i_2 != eax_25; i_2 = &i_2[4])
                                                        *i_2 = *edi_5
                                                        i_2[1] = *(edi_5 + 4)
                                                        int32_t ecx_9 = *(edi_5 + 8)
                                                        i_2[3] = fconvert.s(float.t(1))
                                                        i_2[2] = ecx_9
                                                        edi_5 += 0xc
                                                else
                                                    while (i_2 != eax_25)
                                                        int32_t var_234_10 = ecx_4
                                                        int32_t ecx_5
                                                        long double st0_2
                                                        st0_2, ecx_5 = sub_4165ae(fconvert.s(
                                                            fconvert.t(*edi_5)))
                                                        *i_2 = fconvert.s(st0_2)
                                                        int32_t var_234_12 = ecx_5
                                                        int32_t ecx_6
                                                        long double st0_3
                                                        st0_3, ecx_6 = sub_4165ae(fconvert.s(
                                                            fconvert.t(*(edi_5 + 4))))
                                                        i_2[1] = fconvert.s(st0_3)
                                                        int32_t var_234_14 = ecx_6
                                                        long double st0_4
                                                        st0_4, ecx_4 = sub_4165ae(fconvert.s(
                                                            fconvert.t(*(edi_5 + 8))))
                                                        i_2[2] = fconvert.s(st0_4)
                                                        i_2 = &i_2[4]
                                                        edi_5 += 0xc
                                                        i_2[-1] = fconvert.s(float.t(1))
                                            else if (var_20c_3 == 0)
                                                while (i_2 != eax_25)
                                                    long double x87_r7_5 = fconvert.t(*edi_5)
                                                    edi_5 += 4
                                                    i_2[2] = fconvert.s(x87_r7_5)
                                                    i_2[1] = fconvert.s(x87_r7_5)
                                                    *i_2 = fconvert.s(x87_r7_5)
                                                    i_2 = &i_2[4]
                                                    i_2[-1] = fconvert.s(float.t(1))
                                            else
                                                while (i_2 != eax_25)
                                                    int32_t var_234_8 = ecx_4
                                                    long double st0_1
                                                    st0_1, ecx_4 =
                                                        sub_4165ae(fconvert.s(fconvert.t(*edi_5)))
                                                    i_2[2] = fconvert.s(st0_1)
                                                    edi_5 += 4
                                                    i_2[1] = fconvert.s(st0_1)
                                                    *i_2 = fconvert.s(st0_1)
                                                    i_2 = &i_2[4]
                                                    i_2[-1] = fconvert.s(float.t(1))
                                            
                                            temp8_1 = var_210_2
                                            var_210_2 -= 1
                                        while (temp8_1 - 1 s>= 0)
                                    
                                    result = 0
                                else
                                    result = 0x8007000e
else
    result = 0x80004005

sub_745f2b(__security_cookie_1)
return result
