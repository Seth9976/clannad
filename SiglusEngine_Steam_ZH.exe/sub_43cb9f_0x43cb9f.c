// 函数: sub_43cb9f
// 地址: 0x43cb9f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t edi_1 = arg2

if (edi_1 != 0 && *(edi_1 + 4) == 0xd)
    int32_t esi_2 = *(edi_1 + 0x18) * *(edi_1 + 0x14)
    int32_t eax_1
    int32_t ecx
    eax_1, ecx = sub_437e9f(*(edi_1 + 0x10), arg3)
    
    if (esi_2 == eax_1)
        int32_t eax_2 = *(edi_1 + 0x1c)
        
        if (eax_2 s< 2)
        label_43cc18:
            void* eax_3 = *(edi_1 + 0x20)
            void* esi_3 = nullptr
            void* ebx_1 = nullptr
            void* var_2c = nullptr
            void* var_1c_1 = nullptr
            int32_t* var_c_1 = nullptr
            int32_t var_10_1 = 0
            int32_t var_14_1 = 0
            int32_t var_24_1 = 0
            int32_t* eax_7
            
            if (eax_3 != 0 && *(eax_3 + 4) == 0xd)
                ebx_1 = eax_3
                int32_t eax_5 = *(ebx_1 + 0x18) * *(ebx_1 + 0x14)
                var_14_1 = eax_5
                int32_t eax_6 = eax_5 << 4
                var_2c = ebx_1
                eax_7 = sub_745f3f(eax_6)
                ecx = eax_6
                var_c_1 = eax_7
            
            void* eax_8
            int32_t eax_12
            
            if (eax_3 == 0 || *(eax_3 + 4) != 0xd || eax_7 != 0)
                eax_8 = *(edi_1 + 0x24)
                
                if (eax_8 != 0 && *(eax_8 + 4) == 0xd)
                    esi_3 = eax_8
                    int32_t eax_10 = *(esi_3 + 0x18) * *(esi_3 + 0x14)
                    var_24_1 = eax_10
                    int32_t eax_11 = eax_10 << 4
                    var_1c_1 = esi_3
                    eax_12 = sub_745f3f(eax_11)
                    ecx = eax_11
                    var_10_1 = eax_12
            
            int32_t result
            
            if ((eax_3 != 0 && *(eax_3 + 4) == 0xd && eax_7 == 0)
                    || (eax_8 != 0 && *(eax_8 + 4) == 0xd && eax_12 == 0))
                result = 0x8007000e
            else
                void* var_40_2
                int32_t var_3c_6
                
                if (*(edi_1 + 0x28) == 0)
                    if (esi_3 != 0)
                        int32_t result_2
                        result_2, ecx = sub_43cb9f(var_1c_1, var_10_1)
                        result = result_2
                    
                    if (esi_3 == 0 || result s>= 0)
                        if (ebx_1 == 0)
                        label_43cd09:
                            int32_t eax_14 = *(edi_1 + 0x1c)
                            double var_20
                            
                            if (eax_14 s< 0)
                            label_43d114:
                                int32_t var_28_2 = 0
                                
                                if (var_14_1 u> 0)
                                    int32_t* edx_1 = var_c_1
                                    
                                    do
                                        void* var_3c_22 = edi_1 + 0x30
                                        int32_t result_5
                                        int80_t st0_2
                                        st0_2, result_5, ecx = sub_437fe4(&edx_1[2], edx_1)
                                        result = result_5
                                        
                                        if (result s< 0)
                                            goto label_43d394
                                        
                                        var_28_2 += 1
                                        *edx_1 = 3
                                        edx_1 = &edx_1[4]
                                    while (var_28_2 u< var_14_1)
                                
                                int32_t var_28_3 = 0
                                
                                if (var_24_1 u> 0)
                                    int32_t edx_2 = var_10_1
                                    
                                    do
                                        void* var_3c_23 = edi_1 + 0x30
                                        int32_t result_6
                                        int80_t st0_3
                                        st0_3, result_6, ecx = sub_437fe4(edx_2 + 8, edx_2)
                                        result = result_6
                                        
                                        if (result s< 0)
                                            goto label_43d394
                                        
                                        var_28_3 += 1
                                        *edx_2 = 3
                                        edx_2 += 0x10
                                    while (var_28_3 u< var_24_1)
                                    
                                    ebx_1 = var_2c
                                
                                if ((ebx_1 == 0 || var_14_1 == esi_2)
                                        && (var_1c_1 == 0 || var_24_1 == esi_2))
                                    int32_t var_24_8 = 0
                                    
                                    if (esi_2 u<= 0)
                                    label_43d359:
                                        var_2c = nullptr
                                        
                                        if (esi_2 u> 0)
                                            int32_t* edi_13 = arg3
                                            
                                            do
                                                unimplemented  {fld st0, qword [edi+0x8]}
                                                void* var_3c_24 = edi_1 + 0x30
                                                int32_t var_40_20 = ecx
                                                int32_t var_44_19 = ecx
                                                ecx = arg1
                                                var_44_19.q = fconvert.d(unimplemented  {fstp 
                                                    qword [esp], st0})
                                                unimplemented  {fstp qword [esp], st0}
                                                result = sub_43a798(edi_13, var_44_19)
                                                
                                                if (result s< 0)
                                                    goto label_43d394
                                                
                                                var_2c += 1
                                                edi_13 = &edi_13[4]
                                            while (var_2c u< esi_2)
                                        
                                        result = 0
                                    else
                                        ecx = var_10_1
                                        var_2c = var_c_1 - ecx
                                        void* eax_77 = arg3 - ecx
                                        double* esi_4 = ecx + 8
                                        
                                        while (true)
                                            int16_t top
                                            int16_t top_1
                                            
                                            if (var_c_1 == 0)
                                                top_1 = top - 1
                                                unimplemented  {fldz }
                                            else
                                                top_1 = top - 1
                                                unimplemented  {fld st0, qword [esi+eax]}
                                            
                                            double var_18_1 = fconvert.d(unimplemented  {fst qword [
                                                ebp-0x14], st0})
                                            int16_t top_2
                                            
                                            if (var_10_1 == 0)
                                                top_2 = top_1 - 1
                                                unimplemented  {fldz }
                                            else
                                                top_2 = top_1 - 1
                                                unimplemented  {fld st0, qword [esi]}
                                            
                                            int32_t eax_78 = *(edi_1 + 0x1c)
                                            var_20 = fconvert.d(unimplemented  {fstp qword [ebp
                                                -0x1c], st0})
                                            unimplemented  {fstp qword [ebp-0x1c], st0}
                                            int16_t top_3 = top_2 + 1
                                            
                                            if (eax_78 - 4 u> 0xf)
                                                unimplemented  {fstp st0, st0}
                                                unimplemented  {fstp st0, st0}
                                                break
                                            
                                            int32_t eax_79
                                            int16_t top_4
                                            int16_t top_7
                                            bool p_2
                                            bool c0_8
                                            bool c1
                                            bool c2_8
                                            bool c3_8
                                            bool cond:12_1
                                            
                                            switch (eax_78)
                                                case 4
                                                    top_4 = top_3 - 1
                                                    unimplemented  {fld st0, qword [0xb0d6b8]}
                                                label_43d213:
                                                    unimplemented  {fld st0, st1}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    bool c0_1 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c1 = false
                                                    bool c2_1 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    bool c3_1 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    eax_79.w = (c0_1 ? 1 : 0) << 8
                                                        | (c2_1 ? 1 : 0) << 0xa
                                                        | (c3_1 ? 1 : 0) << 0xe
                                                        | ((top_4 + 1) & 7) << 0xb
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                    top_7 = top_4 + 2
                                                    p_2 = unimplemented  {test ah, 0x44}
                                                    goto label_43d21e
                                                case 5
                                                    unimplemented  {fchs }
                                                case 7
                                                    unimplemented  {fmul st0, qword [ebp-0x1c]}
                                                case 8
                                                    unimplemented  {fld st0, qword [ebp-0x1c]}
                                                    unimplemented  {fld st0, qword [0xb0d6b8]}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    bool c0_2 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c1 = false
                                                    bool c2_2 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    bool c3_2 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    eax_79.w = (c0_2 ? 1 : 0) << 8
                                                        | (c2_2 ? 1 : 0) << 0xa
                                                        | (c3_2 ? 1 : 0) << 0xe
                                                        | (top_3 & 7) << 0xb
                                                    bool p_3 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_3))
                                                        unimplemented  {fstp st0, st0}
                                                        unimplemented  {fstp st0, st0}
                                                        ecx = sub_43713d(arg1, edi_1 + 0x30, 0xbd9, 
                                                            "division by zero")
                                                        unimplemented  {fld st0, qword [ebp-0x14]}
                                                    
                                                    unimplemented  {fdiv st0, qword [ebp-0x1c]}
                                                case 9
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fld st0, qword [ebp-0x1c]}
                                                    unimplemented  {fld st0, qword [0xb0d6b8]}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    bool c0_3 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c1 = false
                                                    bool c2_3 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    bool c3_3 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    eax_79.w = (c0_3 ? 1 : 0) << 8
                                                        | (c2_3 ? 1 : 0) << 0xa
                                                        | (c3_3 ? 1 : 0) << 0xe
                                                        | ((top_3 + 1) & 7) << 0xb
                                                    bool p_4 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_4))
                                                        sub_43713d(arg1, edi_1 + 0x30, 0xbd9, 
                                                            "division by zero")
                                                    
                                                    unimplemented  {fld st0, qword [ebp-0x14]}
                                                    top_3 -= 1
                                                    unimplemented  {fld st0, qword [ebp-0x1c]}
                                                    ecx = sub_76252a()
                                                case 0xa
                                                    unimplemented  {fadd qword [ebp-0x1c]}
                                                case 0xb
                                                    unimplemented  {fsub st0, qword [ebp-0x1c]}
                                                case 0xc
                                                    long double temp1_1 = fconvert.t(var_20)
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f- temp1_1
                                                    bool c0_4 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f< temp1_1
                                                    c1 = false
                                                    bool c2_4 = is_unordered.t(
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]
                                                            }, 
                                                        temp1_1)
                                                    bool c3_4 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f== temp1_1
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                    top_7 = top_3 + 1
                                                    eax_79.w = (c0_4 ? 1 : 0) << 8
                                                        | (c2_4 ? 1 : 0) << 0xa
                                                        | (c3_4 ? 1 : 0) << 0xe
                                                        | (top_7 & 7) << 0xb
                                                    p_2 = unimplemented  {test ah, 0x5}
                                                label_43d21e:
                                                    
                                                    if (not(p_2))
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fld1 }
                                                    else
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fldz }
                                                case 0xd
                                                    long double temp2_1 = fconvert.t(var_20)
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f- temp2_1
                                                    bool c0_5 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f< temp2_1
                                                    c1 = false
                                                    bool c2_5 = is_unordered.t(
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]
                                                            }, 
                                                        temp2_1)
                                                    bool c3_5 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f== temp2_1
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                    top_7 = top_3 + 1
                                                    eax_79.w = (c0_5 ? 1 : 0) << 8
                                                        | (c2_5 ? 1 : 0) << 0xa
                                                        | (c3_5 ? 1 : 0) << 0xe
                                                        | (top_7 & 7) << 0xb
                                                    cond:12_1 = (eax_79:1.b & 0x41) == 0
                                                label_43d2e3:
                                                    
                                                    if (cond:12_1)
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fld1 }
                                                    else
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fldz }
                                                case 0xe
                                                    long double temp3_1 = fconvert.t(var_20)
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f- temp3_1
                                                    bool c0_6 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f< temp3_1
                                                    c1 = false
                                                    bool c2_6 = is_unordered.t(
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]
                                                            }, 
                                                        temp3_1)
                                                    bool c3_6 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f== temp3_1
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                    top_7 = top_3 + 1
                                                    eax_79.w = (c0_6 ? 1 : 0) << 8
                                                        | (c2_6 ? 1 : 0) << 0xa
                                                        | (c3_6 ? 1 : 0) << 0xe
                                                        | (top_7 & 7) << 0xb
                                                    p_2 = unimplemented  {test ah, 0x41}
                                                    goto label_43d21e
                                                case 0xf
                                                    long double temp4_1 = fconvert.t(var_20)
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f- temp4_1
                                                    bool c0_7 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f< temp4_1
                                                    c1 = false
                                                    bool c2_7 = is_unordered.t(
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]
                                                            }, 
                                                        temp4_1)
                                                    bool c3_7 =
                                                        unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                        f== temp4_1
                                                    unimplemented  {fcomp st0, qword [ebp-0x1c]}
                                                    top_7 = top_3 + 1
                                                    eax_79.w = (c0_7 ? 1 : 0) << 8
                                                        | (c2_7 ? 1 : 0) << 0xa
                                                        | (c3_7 ? 1 : 0) << 0xe
                                                        | (top_7 & 7) << 0xb
                                                    cond:12_1 = (eax_79:1.b & 1) == 0
                                                    goto label_43d2e3
                                                case 0x10
                                                    top_4 = top_3 - 1
                                                    unimplemented  {fld st0, qword [ebp-0x1c]}
                                                    goto label_43d213
                                                case 0x11
                                                    unimplemented  {fld st0, qword [ebp-0x1c]}
                                                    unimplemented  {fld st0, st1}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    c0_8 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c2_8 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    c3_8 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                    top_7 = top_3 + 1
                                                label_43d334:
                                                    eax_79.w = (c0_8 ? 1 : 0) << 8
                                                        | (c1 ? 1 : 0) << 9 | (c2_8 ? 1 : 0) << 0xa
                                                        | (c3_8 ? 1 : 0) << 0xe
                                                        | (top_7 & 7) << 0xb
                                                    bool p_7 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_7))
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fldz }
                                                    else
                                                        top_3 = top_7 - 1
                                                        unimplemented  {fld1 }
                                                case 0x12
                                                    unimplemented  {fld st0, qword [0xb0d6b8]}
                                                    unimplemented  {fld st0, st1}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    bool c0_9 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c1 = false
                                                    bool c2_9 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    bool c3_9 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    eax_79.w = (c0_9 ? 1 : 0) << 8
                                                        | (c2_9 ? 1 : 0) << 0xa
                                                        | (c3_9 ? 1 : 0) << 0xe
                                                        | (top_3 & 7) << 0xb
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                    top_7 = top_3 + 1
                                                    bool p_5 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_5)
                                                    label_43d329:
                                                        unimplemented  {fld st0, qword [0xb0d6b8]}
                                                        unimplemented  {fld st0, qword [ebp-0x1c]}
                                                        unimplemented  {fucompp }
                                                            f- unimplemented  {fucompp }
                                                        c0_8 = unimplemented  {fucompp }
                                                            f< unimplemented  {fucompp }
                                                        c1 = false
                                                        c2_8 = is_unordered.t(
                                                            unimplemented  {fucompp }, 
                                                            unimplemented  {fucompp })
                                                        c3_8 = unimplemented  {fucompp }
                                                            f== unimplemented  {fucompp }
                                                        unimplemented  {fucompp }
                                                        unimplemented  {fucompp }
                                                        goto label_43d334
                                                    
                                                    top_3 = top_7 - 1
                                                    unimplemented  {fldz }
                                                case 0x13
                                                    unimplemented  {fld st0, qword [0xb0d6b8]}
                                                    unimplemented  {fld st0, st1}
                                                    unimplemented  {fucompp }
                                                        f- unimplemented  {fucompp }
                                                    bool c0_10 = unimplemented  {fucompp }
                                                        f< unimplemented  {fucompp }
                                                    c1 = false
                                                    bool c2_10 = is_unordered.t(
                                                        unimplemented  {fucompp }, 
                                                        unimplemented  {fucompp })
                                                    bool c3_10 = unimplemented  {fucompp }
                                                        f== unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    unimplemented  {fucompp }
                                                    eax_79.w = (c0_10 ? 1 : 0) << 8
                                                        | (c2_10 ? 1 : 0) << 0xa
                                                        | (c3_10 ? 1 : 0) << 0xe
                                                        | (top_3 & 7) << 0xb
                                                    unimplemented  {fstp st0, st0}
                                                    unimplemented  {fstp st0, st0}
                                                    top_7 = top_3 + 1
                                                    bool p_6 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (not(p_6))
                                                        goto label_43d329
                                                    
                                                    top_3 = top_7 - 1
                                                    unimplemented  {fld1 }
                                            
                                            var_24_8 += 1
                                            *(esi_4 + eax_77) = fconvert.d(unimplemented  {fstp 
                                                qword [esi+eax], st0})
                                            unimplemented  {fstp qword [esi+eax], st0}
                                            top = top_3 + 1
                                            esi_4 = &esi_4[2]
                                            
                                            if (var_24_8 u>= esi_2)
                                                goto label_43d359
                                        
                                    labelid_44:
                                        result = 0x80004005
                                else
                                labelid_44:
                                    result = 0x80004005
                            else if (eax_14 s<= 1)
                                if (ebx_1 == 0)
                                    void* i_1 = *(edi_1 + 0x20)
                                    
                                    if (i_1 == 0)
                                    labelid_44:
                                        result = 0x80004005
                                    else if (*(i_1 + 4) != 0xe)
                                        if (i_1 == 0 || *(i_1 + 4) != 1)
                                        labelid_44:
                                            result = 0x80004005
                                        else
                                            void* i = i_1
                                            
                                            do
                                                void* eax_62 = *(i + 8)
                                                
                                                if (eax_62 != 0)
                                                    if (*(eax_62 + 4) == 0xe)
                                                        if (*(eax_62 + 0x10) == 6)
                                                            goto label_43d3aa_2
                                                        
                                                        int32_t var_3c_20 = edi_1 + 0x30
                                                        result = sub_43a5fd(arg3, eax_62 + 0x10)
                                                        
                                                        if (result s< 0)
                                                            goto label_43d394
                                                        
                                                        arg3 = &arg3[4]
                                                    else if (eax_62 != 0 && *(eax_62 + 4) == 0xd)
                                                        result = sub_43cb9f(eax_62, arg3)
                                                        
                                                        if (result s< 0)
                                                            goto label_43d394
                                                        
                                                        void* eax_66 = *(i + 8)
                                                        arg3 = &arg3[*(eax_66 + 0x18) *
                                                            *(eax_66 + 0x14) * 4]
                                                
                                                i = *(i + 0xc)
                                            while (i != 0)
                                            
                                            result = 0
                                    else if (*(i_1 + 0x10) == 6)
                                    label_43d3aa:
                                        result = 0x80004005
                                    else
                                        int32_t var_3c_19 = edi_1 + 0x30
                                        result = sub_43a5fd(arg3, i_1 + 0x10)
                                        
                                        if (result s>= 0)
                                            result = 0
                                else
                                    if (var_14_1 == 1)
                                        int32_t var_24_6 = 0
                                        
                                        if (esi_2 u> 0)
                                            int32_t* edi_9 = arg3
                                            
                                            do
                                                int32_t var_3c_16 = edi_1 + 0x30
                                                result = sub_43a5fd(edi_9, var_c_1)
                                                
                                                if (result s< 0)
                                                    goto label_43d394
                                                
                                                var_24_6 += 1
                                                edi_9 = &edi_9[4]
                                            while (var_24_6 u< esi_2)
                                    else if (esi_2 == var_14_1)
                                    label_43d009:
                                        int32_t var_24_7 = 0
                                        
                                        if (esi_2 u> 0)
                                            int32_t* edi_11 = arg3
                                            void* ebx_9 = var_c_1 - edi_11
                                            
                                            do
                                                int32_t var_3c_18 = edi_1 + 0x30
                                                result = sub_43a5fd(edi_11, ebx_9 + edi_11)
                                                
                                                if (result s< 0)
                                                    goto label_43d394
                                                
                                                var_24_7 += 1
                                                edi_11 = &edi_11[4]
                                            while (var_24_7 u< esi_2)
                                    else
                                        int32_t ecx_17 = *(edi_1 + 0x14)
                                        
                                        if (ecx_17 u> *(ebx_1 + 0x14))
                                            goto label_43d009
                                        
                                        int32_t eax_51 = *(edi_1 + 0x18)
                                        
                                        if (eax_51 u> *(ebx_1 + 0x18))
                                            goto label_43d009
                                        
                                        arg2 = 0
                                        
                                        if (ecx_17 u> 0)
                                            do
                                                int32_t ebx_7 = 0
                                                
                                                if (eax_51 u> 0)
                                                    do
                                                        int32_t var_3c_17 = edi_1 + 0x30
                                                        result = sub_43a5fd(
                                                            &arg3[(eax_51 * arg2 + ebx_7) * 4], 
                                                            &var_c_1[(*(var_2c + 0x18) * arg2
                                                                + ebx_7) * 4])
                                                        
                                                        if (result s< 0)
                                                            goto label_43d394
                                                        
                                                        eax_51 = *(edi_1 + 0x18)
                                                        ebx_7 += 1
                                                    while (ebx_7 u< eax_51)
                                                
                                                arg2 += 1
                                            while (arg2 u< *(edi_1 + 0x14))
                                    
                                    result = 0
                            else if (eax_14 == 0x16)
                                void* var_3c_14 = edi_1 + 0x30
                                result = sub_43a739(&var_2c, var_10_1)
                                
                                if (result s>= 0)
                                    int32_t eax_43 = var_2c * esi_2
                                    
                                    if (eax_43 u< var_14_1)
                                        int32_t var_24_5 = 0
                                        
                                        if (esi_2 u> 0)
                                            int32_t* ebx_5 = arg3
                                            void* edi_8 = &var_c_1[eax_43 * 4]
                                            
                                            do
                                                void* var_3c_15 = edi_1 + 0x30
                                                result = sub_43a5fd(ebx_5, edi_8)
                                                
                                                if (result s< 0)
                                                    goto label_43d394
                                                
                                                var_24_5 += 1
                                                edi_8 += 0x10
                                                ebx_5 = &ebx_5[4]
                                            while (var_24_5 u< esi_2)
                                        
                                        result = 0
                                    else
                                        sub_43713d(arg1, edi_1 + 0x30, 0xbd6, 
                                            "array index out of bounds")
                                    label_43d3aa_1:
                                        result = 0x80004005
                            else if (eax_14 == 0x17)
                                void* eax_26 = *(edi_1 + 0x24)
                                int32_t ecx_9 = *(eax_26 + 4)
                                
                                if (ecx_9 == 0xe)
                                    void* var_3c_10 = edi_1 + 0x30
                                    result = sub_43a739(&var_2c, eax_26 + 0x10)
                                    
                                    if (result s>= 0)
                                        int32_t var_24_3 = 0
                                        
                                        if (esi_2 u> 0)
                                            void* edi_5 = &var_c_1[var_2c * 4]
                                            
                                            do
                                                void* var_3c_11 = edi_1 + 0x30
                                                result = sub_43a5fd(arg3, edi_5)
                                                
                                                if (result s< 0)
                                                    goto label_43d394
                                                
                                                var_24_3 += 1
                                                arg3 = &arg3[4]
                                                edi_5 += 0x10
                                            while (var_24_3 u< esi_2)
                                        
                                        result = 0
                                else if (ecx_9 != 1)
                                label_43d3aa_2:
                                    result = 0x80004005
                                else
                                    int32_t var_24_4 = 0
                                    void* ebx_4 = eax_26
                                    
                                    if (esi_2 u> 0)
                                        do
                                            void* var_3c_12 = edi_1 + 0x30
                                            result = sub_43a739(&var_2c, *(ebx_4 + 8) + 0x10)
                                            
                                            if (result s< 0)
                                                goto label_43d394
                                            
                                            void* var_3c_13 = edi_1 + 0x30
                                            result = sub_43a5fd(arg3, &var_c_1[var_2c * 4])
                                            
                                            if (result s< 0)
                                                goto label_43d394
                                            
                                            var_24_4 += 1
                                            arg3 = &arg3[4]
                                            ebx_4 = *(ebx_4 + 0xc)
                                        while (var_24_4 u< esi_2)
                                    
                                    result = 0
                            else
                                if (eax_14 != 0x18)
                                    goto label_43d114
                                
                                int32_t var_24_2 = 0
                                
                                if (var_14_1 u> 0)
                                    int32_t edi_2 = var_10_1
                                    arg2 = (esi_2 << 4) + edi_2
                                    void* eax_19 = var_c_1 - edi_2
                                    void* ecx_6 = arg3 - edi_2
                                    var_2c = eax_19
                                    
                                    while (true)
                                        void* var_3c_8 = edi_1 + 0x30
                                        int32_t result_4
                                        int80_t st0_1
                                        st0_1, result_4 = sub_437fe4(&var_20, eax_19 + edi_2)
                                        result = result_4
                                        
                                        if (result s< 0)
                                            goto label_43d394
                                        
                                        fconvert.t(var_20) - fconvert.t(0.0)
                                        bool p_1 = unimplemented  {test ah, 0x44}
                                        int32_t eax_21 = edi_2
                                        
                                        if (not(p_1))
                                            eax_21 = arg2
                                        
                                        void* var_3c_9 = edi_1 + 0x30
                                        result = sub_43a5fd(ecx_6 + edi_2, eax_21)
                                        
                                        if (result s< 0)
                                            goto label_43d394
                                        
                                        var_24_2 += 1
                                        arg2 += 0x10
                                        edi_2 += 0x10
                                        
                                        if (var_24_2 u>= var_14_1)
                                            break
                                        
                                        eax_19 = var_2c
                                
                                result = 0
                        else
                            var_3c_6 = var_c_1
                            var_40_2 = ebx_1
                        label_43ccfa:
                            int32_t result_3
                            result_3, ecx = sub_43cb9f(var_40_2, var_3c_6)
                            result = result_3
                            
                            if (result s>= 0)
                                goto label_43cd09
                else
                    if (ebx_1 == 0)
                        goto label_43ccc7
                    
                    int32_t result_1
                    result_1, ecx = sub_43cb9f(ebx_1, var_c_1)
                    result = result_1
                    
                    if (result s>= 0)
                        esi_3 = var_1c_1
                    label_43ccc7:
                        
                        if (esi_3 == 0)
                            goto label_43cd09
                        
                        var_3c_6 = var_10_1
                        var_40_2 = var_1c_1
                        goto label_43ccfa
            
        label_43d394:
            j__free(var_10_1)
            j__free(var_c_1)
            return result
        
        if (eax_2 s> 3)
            if (eax_2 s<= 0x13)
                goto label_43cc18
            
            if (eax_2 s> 0x15 && eax_2 != 0x19)
                long double x87_r0
                
                if (eax_2 == 0x1a)
                    return sub_43aa52(arg1, edi_1, x87_r0, edi_1, arg3)
                
                if (eax_2 != 0x1b)
                    goto label_43cc18

return 0x80004005
