// 函数: sub_41eede
// 地址: 0x41eede
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = (*(arg1 + 0x68) << 4) + arg2

if (arg2 u< result)
    float* edx_1 = arg2 + 8
    void* i_1 = ((result - arg2 - 1) u>> 4) + 1
    void* i
    
    do
        long double x87_r7_1 = fconvert.t(*(arg1 + 0x24))
        long double x87_r6_1 = fconvert.t(edx_1[-2])
        x87_r6_1 - x87_r7_1
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r7_2 = fconvert.t(*(arg1 + 0x28))
            long double x87_r6_2 = fconvert.t(edx_1[-1])
            x87_r6_2 - x87_r7_2
            result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                long double x87_r7_3 = fconvert.t(*(arg1 + 0x2c))
                long double x87_r6_3 = fconvert.t(*edx_1)
                x87_r6_3 - x87_r7_3
                result.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    long double x87_r7_4 = fconvert.t(*(arg1 + 0x30))
                    long double x87_r6_4 = fconvert.t(edx_1[1])
                    x87_r6_4 - x87_r7_4
                    result.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4))
                        edx_1[1] = fconvert.s(float.t(0))
                        *edx_1 = fconvert.s(float.t(0))
                        edx_1[-1] = fconvert.s(float.t(0))
                        edx_1[-2] = fconvert.s(float.t(0))
        
        edx_1 = &edx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
