// 函数: sub_46a5a8
// 地址: 0x46a5a8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_4

if (arg4 == 0)
    eax_4 = arg3
else
    int32_t edi
    int32_t var_15c_1 = edi
    int32_t var_50[0x10]
    __builtin_memset(&var_50, 0, 0x40)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg1)
    int16_t x87control
    int16_t x87status_2
    x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xc00)
    float i = 0f
    void var_14c
    void* ecx_1 = &var_14c
    void* eax_3 = arg3 i+ 0xc
    void var_150
    void* ebx_1 = &var_150 i- arg3
    
    do
        long double x87_r7_1 = fconvert.t(var_50[i])
        *(ecx_1 - 4) = *(eax_3 - 0xc)
        long double x87_r7_2 = x87_r7_1 + fconvert.t(*eax_3)
        *ecx_1 = *(eax_3 - 8)
        int16_t var_8_1
        var_8_1.d = fconvert.s(x87_r7_2)
        *(ecx_1 + 4) = *(eax_3 - 4)
        long double x87_r7_5 = float.t(int.d(fconvert.t(fconvert.s(x87_r7_2 + fconvert.t(0.5f)))))
        arg3 = i & 3
        *(ebx_1 + eax_3) = fconvert.s(x87_r7_5)
        long double x87_r7_6 = fconvert.t(var_8_1.d) - x87_r7_5
        int32_t __saved_ebp
        
        if (arg3 != 3)
            (&__saved_ebp)[i - 0x12] =
                fconvert.s(fconvert.t(0.4375f) * x87_r7_6 + fconvert.t((&__saved_ebp)[i - 0x12]))
        
        if (i u< 0xc)
            if (arg3 != 0)
                (&__saved_ebp)[i - 0x10] = fconvert.s(fconvert.t(0.1875f) * x87_r7_6
                    + fconvert.t((&__saved_ebp)[i - 0x10]))
            
            (&__saved_ebp)[i - 0xf] =
                fconvert.s(fconvert.t(0.3125f) * x87_r7_6 + fconvert.t((&__saved_ebp)[i - 0xf]))
            
            if (arg3 != 3)
                (&__saved_ebp)[i - 0xe] =
                    fconvert.s(x87_r7_6 * fconvert.t(0.0625f) + fconvert.t((&__saved_ebp)[i - 0xe]))
        
        i += 1
        ecx_1 += 0x10
        eax_3 += 0x10
    while (i u< 0x10)
    
    int16_t x87status_3
    arg1, x87status_3 = __fldcw_memmem16(temp0_1)
    eax_4 = &var_150

return sub_469950(eax_4, arg1, arg2, 1.40129846e-45f, arg4)
