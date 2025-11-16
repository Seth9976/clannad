// 函数: sub_4043b0
// 地址: 0x4043b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* ecx = arg2
long double x87_r7_1 = fconvert.t(*ecx) * fconvert.t(*arg3)
int32_t edi
int32_t var_c = edi
long double x87_r6_4 = fconvert.t(ecx[1]) * fconvert.t(arg3[1])
    + fconvert.t(arg3[2]) * fconvert.t(ecx[2]) + x87_r7_1 - (fconvert.t(*ecx) * fconvert.t(*arg4)
    + fconvert.t(arg4[2]) * fconvert.t(ecx[2]) + fconvert.t(ecx[1]) * fconvert.t(arg4[1]))
long double x87_r5_6 = fconvert.t(0f)
x87_r6_4 - x87_r5_6
int32_t eax
eax.w = (x87_r6_4 < x87_r5_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r5_6) ? 1 : 0) << 0xa
    | (x87_r6_4 == x87_r5_6 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (p)
    float* var_10_1 = ecx
    int16_t var_14_1 = ecx.w
    arg2 = fconvert.s((fconvert.t(ecx[1]) * fconvert.t(arg3[1])
        + fconvert.t(arg3[2]) * fconvert.t(ecx[2]) + fconvert.t(ecx[3]) + x87_r7_1) / x87_r6_4)
    
    if (sub_75ed12((fconvert.d(fconvert.t(arg2))).w) != 0)
        *arg1 = fconvert.s((fconvert.t(*arg4) - fconvert.t(*arg3)) * fconvert.t(arg2)
            + fconvert.t(*arg3))
        arg1[1] = fconvert.s((fconvert.t(arg4[1]) - fconvert.t(arg3[1])) * fconvert.t(arg2)
            + fconvert.t(arg3[1]))
        arg1[2] = fconvert.s((fconvert.t(arg4[2]) - fconvert.t(arg3[2])) * fconvert.t(arg2)
            + fconvert.t(arg3[2]))
        return arg1

return nullptr
