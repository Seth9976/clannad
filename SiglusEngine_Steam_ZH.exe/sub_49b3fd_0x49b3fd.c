// 函数: sub_49b3fd
// 地址: 0x49b3fd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 u> 0)
    int32_t* ecx_1 = arg4
    int32_t i_1 = arg5
    float* edx_2 = arg3 - ecx_1
    int32_t i
    
    do
        long double x87_r7_1 = fconvert.t(0f)
        long double x87_r6_1 = fconvert.t(*(edx_2 + ecx_1))
        x87_r6_1 - x87_r7_1
        int32_t eax
        eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        eax = not(p_1) ? 0 : 1
        
        *ecx_1 = eax
        ecx_1 = &ecx_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return (*(*arg1 + 0x1c4))(arg1, arg2, arg3, arg5)
