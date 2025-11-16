// 函数: sub_4a69fb
// 地址: 0x4a69fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x14)
int32_t* i = *(*(eax + (arg4 << 2)) + 0x30)
int32_t* ebx = *(eax + (arg3 << 2))
int32_t edi
int32_t var_34 = edi
int32_t* edi_1 = *(eax + (i << 2))
int16_t eax_3 = (*(*(*(arg1 + 0x10) + (ebx[1] << 2)) + 4)).w

if ((eax_3.b & 1) != 0 && (eax_3:1.b & 0x10) == 0)
    int32_t eax_4 = *edi_1
    void* ecx_4 = eax_4 & 0x1f
    int32_t ecx_5 = *ebx
    int32_t edx_2 = ecx_5 & 0x40
    int32_t edx_5 = *arg2 & 0xfff00000
    
    if (edx_5 != 0x10000000)
        int32_t eax_7 = (eax_4 & 0x40) | ecx_5
        *ebx = eax_7
        
        if ((eax_7 & 0xe000000) == 0 && (edx_5 == 0x10100000 || edx_5 == 0x10300000
                || edx_5 == 0x10400000 || edx_5 == 0x10d00000 || edx_5 == 0x10e00000))
            *ebx = (*edi_1 & 0xe000000) | eax_7
        
        void* eax_8 = 4
        
        if (edx_5 == 0x10100000)
            *ebx |= (ecx_4 u>> 1 & 4) | (ecx_4 & 4) << 1 | (ecx_4 & 0xfffffff3)
        else if (edx_5 == 0x10300000)
            if ((ecx_4.b & 4) == 0 || (ecx_4.b & 8) == 0)
                eax_8 = ecx_4 & 0xc
            
            *ebx |= eax_8
        else if (edx_5 == 0x10400000 || edx_5 == 0x10500000 || edx_5 == 0x10700000)
            *ebx |= eax_8
        
        int32_t* ecx_16 = *(*(*(arg1 + 0x10) + (edi_1[1] << 2)) + 4)
        int32_t* var_3c_2
        
        if ((ecx_16:1.b & 1) == 0 || edi_1[2] != 0xffffffff)
            void* eax_16
            eax_16.b = ecx_4.b
            
            if (((eax_16.b & 1) != 0 && edx_5 == 0x10400000)
                || ((eax_16.b & 2) != 0 && edx_5 == 0x10400000))
            label_4a710b:
                int32_t* var_38_3 = ecx_16
                var_3c_2 = ecx_16
                var_3c_2.q = fconvert.d(float.t(0))
            label_4a7112:
                int32_t var_40_5 = 0
                int32_t var_44_5 = 0
                ebx[0xc] = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_3c_2)
            else if ((eax_16.b & 8) == 0)
            label_4a6e0a:
                
                if ((ecx_16:1.b & 2) != 0 && (edx_5 == 0x10d00000 || edx_5 == 0x10e00000))
                    goto label_4a710b
                
                if (edx_2 == 0 && (ecx_16.b & 2) != 0)
                    int32_t* eax_23
                    
                    if (edx_5 == 0x10100000)
                        eax_23 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                    
                    if (edx_5 != 0x10100000 || (*eax_23 & 0xfff00000) != 0x10100000)
                        if (edx_5 == 0x10300000)
                            eax_23 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                        
                        if (edx_5 == 0x10300000 && (*eax_23 & 0xfff00000) == 0x10300000)
                            goto label_4a6eb6
                        
                        if (edx_5 == 0x10500000)
                            eax_23 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                        
                        if (edx_5 == 0x10500000 && (*eax_23 & 0xfff00000) == 0x10600000)
                            goto label_4a6eb6
                        
                        if (edx_5 != 0x10600000)
                            goto label_4a6f08
                        
                        eax_23 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                        
                        if ((*eax_23 & 0xfff00000) != 0x10500000)
                            goto label_4a6f08
                        
                        goto label_4a6eb6
                    
                label_4a6eb6:
                    arg2 = nullptr
                    
                    if (eax_23[3] u> 0)
                        int32_t* ecx_30 = eax_23[4]
                        
                        while (*ecx_30 != i)
                            arg2 += 1
                            
                            if (arg2 u>= eax_23[3])
                                break
                            
                            ecx_30 = &ecx_30[1]
                    
                    if (arg2 u>= eax_23[3])
                    label_4a6f08:
                        
                        if (edx_5 == 0x10300000)
                            int32_t* ecx_36 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                            
                            if ((*ecx_36 & 0xfff00000) == 0x20500000)
                                int32_t edi_2 = ecx_36[3]
                                int32_t edx_7 = 0
                                
                                if (edi_2 u> 0)
                                    int32_t* eax_33 = ecx_36[4]
                                    
                                    while (*eax_33 != i)
                                        edx_7 += 1
                                        eax_33 = &eax_33[1]
                                        
                                        if (edx_7 u>= edi_2)
                                            break
                                
                                int32_t eax_34 = ecx_36[3]
                                int32_t edi_3 = *(arg1 + 0x14)
                                int32_t ecx_37 = ecx_36[2]
                                arg3 = nullptr
                                int32_t* ebx_2 = ecx_37 + (edx_7 << 2)
                                int32_t* ecx_38 = ecx_37 + ((eax_34 + edx_7) << 2)
                                int32_t* var_8_2 = ebx_2
                                int32_t* var_10_1 = ecx_38
                                
                                do
                                    int32_t j = *ebx_2
                                    int32_t* eax_36 = *(edi_3 + (j << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (eax_36[1] << 2)) + 4) & 2) != 0)
                                        int32_t* eax_41 = *(*(arg1 + 0x18) + (eax_36[0x12] << 2))
                                        
                                        if ((*eax_41 & 0xfff00000) == 0x10700000)
                                            arg2 = nullptr
                                            
                                            if (eax_41[3] u> 0)
                                                int32_t* ecx_45 = eax_41[4]
                                                
                                                while (*ecx_45 != j)
                                                    arg2 += 1
                                                    ecx_45 = &ecx_45[1]
                                                    
                                                    if (arg2 u>= eax_41[3])
                                                        break
                                            
                                            if (*(eax_41[2] + (arg2 << 2)) == *ecx_38)
                                                ebx[0xc] = *(*(edi_3 + (j << 2)) + 0x30)
                                                goto label_4a7129
                                            
                                            ebx_2 = var_8_2
                                    
                                    ebx_2 = &ebx_2[eax_34]
                                    arg3 += 1
                                    ecx_38 = &var_10_1[neg.d(eax_34)]
                                    var_8_2 = ebx_2
                                    var_10_1 = ecx_38
                                while (arg3 u< 2)
                        
                        if (edx_5 == 0x10500000)
                            int32_t* eax_44 = *(*(arg1 + 0x18) + (edi_1[0x12] << 2))
                            
                            if ((*eax_44 & 0xfff00000) == 0x20500000)
                                int32_t ecx_51 = eax_44[3]
                                arg2 = nullptr
                                
                                if (ecx_51 u> 0)
                                    arg3 = eax_44[4]
                                    
                                    while (*arg3 != i)
                                        arg2 += 1
                                        arg3 += 4
                                        
                                        if (arg2 u>= ecx_51)
                                            break
                                
                                arg3 = nullptr
                                int32_t edi_12 = *(arg1 + 0x14)
                                int32_t* eax_46 = eax_44[2] + (arg2 << 2)
                                arg4 = eax_46
                                
                                while (true)
                                    int32_t* eax_48 = *(edi_12 + (*eax_46 << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (eax_48[1] << 2)) + 4) & 2) != 0)
                                        int32_t* eax_53 = *(*(arg1 + 0x18) + (eax_48[0x12] << 2))
                                        
                                        if ((*eax_53 & 0xfff00000) == 0x10600000)
                                            arg2 = nullptr
                                            
                                            if (eax_53[3] u> 0)
                                                int32_t* ecx_58 = eax_53[4]
                                                
                                                while (*ecx_58 != *arg4)
                                                    arg2 += 1
                                                    
                                                    if (arg2 u>= eax_53[3])
                                                        break
                                                    
                                                    ecx_58 = &ecx_58[1]
                                            
                                            ecx_16 = arg2
                                            edi_12 = *(arg1 + 0x14)
                                            char eax_60 =
                                                (**(edi_12 + (*(eax_53[2] + (ecx_16 << 2)) << 2))).b
                                            
                                            if ((eax_60 & 4) != 0 && (eax_60 & 8) != 0)
                                                break
                                    
                                    eax_46 = &arg4[ecx_51]
                                    arg3 += 1
                                    arg4 = eax_46
                                    
                                    if (arg3 u>= 2)
                                        return 0
                                
                                goto label_4a710b
                    else
                        ebx[0xc] = *(*(*(arg1 + 0x14) + (*(eax_23[2] + (arg2 << 2)) << 2)) + 0x30)
            else if (edx_5 != 0x10600000)
                if (edx_5 != 0x10700000)
                    goto label_4a6e0a
                
                if (edx_2 == 0)
                    var_3c_2 = 0xfa3
                    sub_4a4100(arg1, arg2[0xf], 0xfa3, "imaginary square root")
                    var_3c_2.q = fconvert.d(float.t(0))
                    int32_t var_40_3 = 0
                    int32_t var_44_3 = 0
                    ebx[0xc] = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_3c_2)
            else if (edx_2 == 0 && (eax_16.b & 4) == 0)
                sub_4a4100(arg1, arg2[0xf], 0xfa2, "indefinite logarithm")
        else
            int32_t* ecx_17 = nullptr
            int32_t mxcsr
            int16_t x87control
            
            switch (edx_5)
                case 0x10100000
                    *(edi_1 + 0x20)
                    goto label_4a6d69
                case 0x10300000
                    bool p_2
                    
                    if (edx_2 == 0)
                        fconvert.t(0.0) - fconvert.t(*(edi_1 + 0x20))
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (edx_2 != 0 || p_2)
                        *(edi_1 + 0x20)
                    
                    goto label_4a6d69
                case 0x10400000
                    ecx_17 = nullptr
                    
                    if (sub_75ed12(0) != 0)
                        sub_74c3d0(mxcsr, x87control, 0f)
                        *(edi_1 + 0x20)
                        ecx_17 = nullptr
                    
                    goto label_4a6d69
                case 0x10500000
                    ecx_17 =
                        sub_761640(mxcsr, x87control, fconvert.t(*(edi_1 + 0x20)), fconvert.t(2.0))
                    goto label_4a6d69
                case 0x10800000
                    long double st0_2
                    bool c2_5
                    st0_2, c2_5 = __fsin(fconvert.t(*(edi_1 + 0x20)))
                    goto label_4a6d69
                case 0x10900000
                    long double st0_5
                    bool c2_10
                    st0_5, c2_10 = __fcos(fconvert.t(*(edi_1 + 0x20)))
                label_4a6d69:
                    int32_t* var_38_2 = ecx_17
                    var_3c_2 = ecx_17
                    var_3c_2.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                    unimplemented  {fstp qword [esp], st0}
                    goto label_4a7112
                case 0x10a00000
                    long double x87_r7_28
                    long double temp2_1
                    bool p_4
                    
                    if (edx_2 == 0)
                        fconvert.t(*(edi_1 + 0x20)) - fconvert.t(-1.0)
                        p_4 = unimplemented  {test ah, 0x5}
                        
                        if (p_4)
                            x87_r7_28 = fconvert.t(*(edi_1 + 0x20))
                            temp2_1 = fconvert.t(1.0)
                            x87_r7_28 - temp2_1
                    
                    if (edx_2 != 0 || (p_4 && (((x87_r7_28 < temp2_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_28, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_28 == temp2_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0))
                        int80_t st0_4
                        st0_4, ecx_17 = sub_7622d0(mxcsr, x87control, fconvert.t(*(edi_1 + 0x20)))
                        goto label_4a6d69
                    
                    ecx_17 = sub_4a4100(arg1, arg2[0xf], 0xfa5, "indefinite arcsine")
                    goto label_4a6d69
                case 0x10b00000
                    long double x87_r7_24
                    long double temp4_1
                    bool p_3
                    
                    if (edx_2 == 0)
                        fconvert.t(*(edi_1 + 0x20)) - fconvert.t(-1.0)
                        p_3 = unimplemented  {test ah, 0x5}
                        
                        if (p_3)
                            x87_r7_24 = fconvert.t(*(edi_1 + 0x20))
                            temp4_1 = fconvert.t(1.0)
                            x87_r7_24 - temp4_1
                    
                    if (edx_2 != 0 || (p_3 && (((x87_r7_24 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_24, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_24 == temp4_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0))
                        int80_t st0_3
                        st0_3, ecx_17 = sub_7614c0(mxcsr, x87control, fconvert.t(*(edi_1 + 0x20)))
                        goto label_4a6d69
                    
                    ecx_17 = sub_4a4100(arg1, arg2[0xf], 0xfa6, "indefinite arccosine")
                    goto label_4a6d69
                case 0x10c00000
                    __fpatan(float.t(1), fconvert.t(*(edi_1 + 0x20)))
                    goto label_4a6d69
                case 0x10d00000, 0x10e00000
                    goto label_4a6d69
            
            if (edx_5 == 0x10600000)
                bool p_1
                
                if (edx_2 == 0)
                    fconvert.t(*(edi_1 + 0x20)) - fconvert.t(0.0)
                    p_1 = unimplemented  {test ah, 0x44}
                
                if (edx_2 != 0 || p_1)
                    long double x87_r7_6 = float.t(0)
                    long double temp5_1 = fconvert.t(*(edi_1 + 0x20))
                    x87_r7_6 - temp5_1
                    
                    if ((((x87_r7_6 < temp5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_6, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                        __fyl2x(fconvert.t(*(edi_1 + 0x20)), 
                            fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
                        __fyl2x(fconvert.t(2.0), 
                            fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
                        goto label_4a6d69
                    
                    ecx_17 = sub_4a4100(arg1, arg2[0xf], 0xfa2, "indefinite logarithm")
                    goto label_4a6d69
            else if (edx_5 == 0x10700000)
                long double x87_r7_1
                long double temp6_1
                
                if (edx_2 == 0)
                    x87_r7_1 = float.t(0)
                    temp6_1 = fconvert.t(*(edi_1 + 0x20))
                    x87_r7_1 - temp6_1
                
                if (edx_2 != 0 || (((x87_r7_1 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                    *(edi_1 + 0x20)
                    goto label_4a6d69
                
                ecx_17 = sub_4a4100(arg1, arg2[0xf], 0xfa3, "imaginary square root")
                goto label_4a6d69
    else
        *ebx = ecx_5 | ecx_4
        ebx[0xc] = i

label_4a7129:
return 0
