// 函数: sub_43a5fd
// 地址: 0x43a5fd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *arg1
int32_t edx = 0

if (ecx == 0)
    int32_t ecx_18 = *arg2
    
    if (ecx_18 == 0 || ecx_18 == 1 || ecx_18 == 2)
        int32_t ecx_23
        ecx_23.b = *(arg2 + 8) != 0
        arg1[2] = ecx_23
    else
        if (ecx_18 != 3)
            return 0x80004005
        
        long double x87_r7_5 = fconvert.t(*(arg2 + 8))
        long double x87_r6_1 = fconvert.t(0.0)
        x87_r6_1 - x87_r7_5
        int32_t eax_9
        eax_9.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            edx = 1
        
        arg1[2] = edx
else if (ecx == 1 || ecx == 2)
    int32_t eax_4 = *arg2
    
    if (eax_4 == 0)
        int32_t eax_2
        eax_2.b = *(arg2 + 8) != 0
        arg1[2] = eax_2
    else if (eax_4 == 1 || eax_4 == 2)
        arg1[2] = *(arg2 + 8)
    else
        if (eax_4 != 3)
            return 0x80004005
        
        long double x87_r7_3 = fconvert.t(*(arg2 + 8))
        long double temp17_1 = fconvert.t(0.0)
        x87_r7_3 - temp17_1
        long double x87_r7_4 = fconvert.t(*(arg2 + 8))
        long double x87_r7_2
        
        if ((((x87_r7_3 < temp17_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, temp17_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp17_1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
            x87_r7_2 = x87_r7_4 - fconvert.t(9.9999999999999995e-07)
        else
            x87_r7_2 = x87_r7_4 + fconvert.t(9.9999999999999995e-07)
        
        int16_t x87control
        arg1[2] = __ftol(x87control, x87_r7_2)
else if (ecx == 3)
    int32_t ecx_11 = *arg2
    
    if (ecx_11 == 0)
        int32_t ecx_16
        ecx_16.b = *(arg2 + 8) != 0
        *(arg1 + 8) = fconvert.d(float.t(ecx_16))
    else if (ecx_11 == 1)
        *(arg1 + 8) = fconvert.d(float.t(*(arg2 + 8)))
    else if (ecx_11 == 2)
        int32_t eax_3 = *(arg2 + 8)
        long double x87_r7_1 = float.t(eax_3)
        
        if (eax_3 s< 0)
            x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)
        
        *(arg1 + 8) = fconvert.d(x87_r7_1)
    else
        if (ecx_11 != 3)
            return 0x80004005
        
        *(arg1 + 8) = fconvert.d(fconvert.t(*(arg2 + 8)))
else
    if (ecx != 4)
        if (ecx == 5)
            goto label_43a638
        
        return 0x80004005
    
    if (*arg2 == 4)
        arg1[2] = *(arg2 + 8)
    else
    label_43a638:
        int32_t ecx_7 = *arg2
        
        if (ecx_7 == 4)
            *arg1 = 4
            arg1[2] = *(arg2 + 8)
        else
            if (ecx_7 != 5)
                return 0x80004005
            
            arg1[2] = *(arg2 + 8)
            arg1[3] = *(arg2 + 0xc)

return 0
