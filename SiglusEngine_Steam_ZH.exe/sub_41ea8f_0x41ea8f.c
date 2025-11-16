// 函数: sub_41ea8f
// 地址: 0x41ea8f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
arg1 = fconvert.s(fconvert.t(arg1) * fconvert.t(arg1) * fconvert.t(254f))
int32_t var_8_1 = int.d(fconvert.t(arg1))
long double x87_r7_4 = fconvert.t(*((var_8_1 << 2) + &data_ab7210))
long double x87_r5 = float.t(var_8_1)

if (var_8_1 s< 0)
    x87_r5 = x87_r5 + fconvert.t(4.2949673e+09f)

return x87_r7_4
    + (fconvert.t(*((var_8_1 << 2) + &data_ab7214)) - x87_r7_4) * (fconvert.t(arg1) - x87_r5)
