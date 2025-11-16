// 函数: sub_459276
// 地址: 0x459276
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0xbc)
long double x87_r7 = fconvert.t(*(eax + (arg1 << 2)))
long double temp1 = fconvert.t(*(eax + (arg2 << 2)))
x87_r7 - temp1
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe

if ((eax:1.b & 0x41) != 0)
    int32_t eax_1 = *(arg3 + 0xbc)
    long double x87_r7_1 = fconvert.t(*(eax_1 + (arg1 << 2)))
    long double temp2_1 = fconvert.t(*(eax_1 + (arg2 << 2)))
    x87_r7_1 - temp2_1
    eax_1.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        return 1
    
    bool c_1 = arg2 u< arg1
    
    if (arg2 == arg1 || c_1)
        return neg.d(sbb.d(eax_1, eax_1, c_1))

return 0xffffffff
