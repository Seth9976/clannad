// 函数: sub_46e8bc
// 地址: 0x46e8bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = *(*(arg1[1].d i+ 0x14) + (arg2 << 2))

if ((*esi & 0x80) == 0)
    double var_14
    int32_t result
    int32_t ecx_1
    result, ecx_1 = sub_46cffa(arg1, arg2, &var_14)
    
    if (result s< 0)
        return result
    
    double var_c
    long double x87_r7_3 = fconvert.t(var_c)
    long double x87_r6_1 = fconvert.t(var_14)
    x87_r6_1 - x87_r7_3
    result.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t var_1c_2 = ecx_1
        int16_t var_20_2 = ecx_1.w
        
        if (sub_75ed12((fconvert.d(fconvert.t(var_14))).w) != 0)
            if (arg3 == 0)
                return 0
            
            *arg3 = fconvert.d(fconvert.t(var_14))
            return 0
else
    double* var_1c = arg1
    int16_t var_20 = arg1.w
    
    if (sub_75ed12((fconvert.d(fconvert.t(*(esi + 0x20)))).w) != 0)
        if (arg3 == 0)
            return 0
        
        *arg3 = fconvert.d(fconvert.t(*(esi + 0x20)))
        return 0

return 0x80004005
