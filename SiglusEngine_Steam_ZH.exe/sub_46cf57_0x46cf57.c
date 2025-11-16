// 函数: sub_46cf57
// 地址: 0x46cf57
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double var_24 = fconvert.d(fconvert.t(*arg4) * fconvert.t(*arg5))
int32_t i = 0
double var_1c = fconvert.d(fconvert.t(*arg4) * fconvert.t(arg5[1]))
double var_14 = fconvert.d(fconvert.t(*arg5) * fconvert.t(arg4[1]))
double var_c = fconvert.d(fconvert.t(arg4[1]) * fconvert.t(arg5[1]))
*arg3 = fconvert.d(fconvert.t(*(arg1 + 0xa0)))
arg3[1] = fconvert.d(fconvert.t(*(arg1 + 0xa8)))
double* result

do
    void* var_38_1 = arg1
    int32_t __saved_ebp
    var_38_1.q = fconvert.d(fconvert.t(*(&__saved_ebp + (i << 3) - 0x20)))
    
    if (sub_75edc6(var_38_1, arg1, arg2.w) != 0)
        if ((arg6 & 0x40) != 0)
            result = &(&__saved_ebp)[i * 2 - 8]
            *arg3 = fconvert.d(fconvert.t(*result))
            arg3[1] = fconvert.d(fconvert.t(*result))
            break
        
        *(&__saved_ebp + (i << 3) - 0x20) = fconvert.d(float.t(0))
    
    long double x87_r7_12 = fconvert.t(*arg3)
    long double temp1_1 = fconvert.t(*(&__saved_ebp + (i << 3) - 0x20))
    x87_r7_12 - temp1_1
    result.w = (x87_r7_12 < temp1_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_12, temp1_1) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp1_1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) == 0)
        *arg3 = fconvert.d(fconvert.t(*(&__saved_ebp + (i << 3) - 0x20)))
    
    long double x87_r7_14 = fconvert.t(arg3[1])
    long double temp2_1 = fconvert.t(*(&__saved_ebp + (i << 3) - 0x20))
    x87_r7_14 - temp2_1
    result.w = (x87_r7_14 < temp2_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_14, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp2_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        arg3[1] = fconvert.d(fconvert.t(*(&__saved_ebp + (i << 3) - 0x20)))
    
    i += 1
while (i u< 4)

return result
