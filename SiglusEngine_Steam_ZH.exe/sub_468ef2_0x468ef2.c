// 函数: sub_468ef2
// 地址: 0x468ef2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0x10
int32_t i

do
    fconvert.t(0f) - fconvert.t(arg1[3])
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        long double x87_r7_5 = float.t(1)
        long double temp0_1 = fconvert.t(arg1[3])
        x87_r7_5 - temp0_1
        
        if ((((x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            long double x87_r7_7 = float.t(1) / fconvert.t(arg1[3])
            fconvert.t(*arg1) - fconvert.t(arg1[3])
            bool p_2 = unimplemented  {test ah, 0x5}
            long double x87_r6_4
            
            if (p_2)
                x87_r6_4 = float.t(1)
            else
                x87_r6_4 = x87_r7_7 * fconvert.t(*arg1)
            
            *arg1 = fconvert.s(x87_r6_4)
            fconvert.t(arg1[1]) - fconvert.t(arg1[3])
            bool p_3 = unimplemented  {test ah, 0x5}
            long double x87_r6_7
            
            if (p_3)
                x87_r6_7 = float.t(1)
            else
                x87_r6_7 = x87_r7_7 * fconvert.t(arg1[1])
            
            arg1[1] = fconvert.s(x87_r6_7)
            fconvert.t(arg1[2]) - fconvert.t(arg1[3])
            bool p_4 = unimplemented  {test ah, 0x5}
            long double x87_r7_4
            
            if (p_4)
                x87_r7_4 = float.t(1)
            else
                x87_r7_4 = x87_r7_7 * fconvert.t(arg1[2])
            
            arg1[2] = fconvert.s(x87_r7_4)
    else
        *arg1 = fconvert.s(float.t(0))
        arg1[1] = fconvert.s(float.t(0))
        arg1[2] = fconvert.s(float.t(0))
    
    arg1 = &arg1[4]
    i = i_1
    i_1 -= 1
while (i != 1)
