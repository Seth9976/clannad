// 函数: sub_76453f
// 地址: 0x76453f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fabs(fconvert.t(arg1))
long double x87_r6_1

if (arg3 == 0x7ff00000)
    if (arg2 != 0)
        goto label_7645dc
    
    x87_r6_1 = float.t(1)
    x87_r6_1 - x87_r7_1
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
            x87_r7_1 = float.t(0)
        
        *arg4 = fconvert.d(x87_r7_1)
    else
    label_76456d:
        *arg4 = fconvert.d(fconvert.t(data_b4cc18))
else if (arg3 != 0xfff00000 || arg2 != 0)
label_7645dc:
    
    if (arg1:4.d != 0x7ff00000)
        if (arg1:4.d == 0xfff00000 && arg1.d == 0)
            int32_t var_c_1 = 0x7ff00000
            int32_t eax_3
            int32_t edx
            long double st0_1
            st0_1, eax_3 = __d_inttype(0xfff00000, edx, 0x7ff00000, nanf)
            x87_r7_1 = float.t(0)
            long double x87_r6_3 = fconvert.t(arg2.q)
            x87_r6_3 - x87_r7_1
            int32_t ecx_1 = eax_3
            eax_3.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_3:1.b & 0x41) != 0)
                x87_r6_3 - x87_r7_1
                eax_3.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
                bool p_4 = unimplemented  {test ah, 0x5}
                
                if (p_4)
                    *arg4 = fconvert.d(float.t(1))
                else
                    if (ecx_1 == 1)
                        x87_r7_1 = fconvert.t(data_b4cc38)
                    
                    *arg4 = fconvert.d(x87_r7_1)
            else
                x87_r7_1 = fconvert.t(data_b4cc18)
                
                if (ecx_1 == 1)
                    x87_r7_1 = fneg(x87_r7_1)
                
                *arg4 = fconvert.d(x87_r7_1)
    else if (arg1.d == 0)
        x87_r7_1 = float.t(0)
        x87_r6_1 = fconvert.t(arg2.q)
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
            goto label_76456d
        
        x87_r6_1 - x87_r7_1
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (p_3)
            x87_r7_1 = float.t(1)
        
        *arg4 = fconvert.d(x87_r7_1)
else
    long double x87_r6_2 = float.t(1)
    x87_r6_2 - x87_r7_1
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        x87_r6_2 - x87_r7_1
        
        if ((((x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
            *arg4 = fconvert.d(fconvert.t(data_b4cc20))
        else
            *arg4 = fconvert.d(fconvert.t(data_b4cc18))
    else
        *arg4 = fconvert.d(float.t(0))
