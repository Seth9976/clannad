// 函数: sub_41e95b
// 地址: 0x41e95b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax = *(arg1 + 4)
long double x87_r7

if (eax == 0x32545844 || eax == 0x33545844)
    x87_r7 = fconvert.t(15f)
else
    x87_r7 = fconvert.t(255f)

*(arg1 + 0x80) = fconvert.s(x87_r7)
*(arg1 + 0x84) = fconvert.s(float.t(1) / x87_r7)
*(arg1 + 0x24) = fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
    fconvert.t(*(arg1 + 0x24)) * fconvert.t(31f) + fconvert.t(0.5f))))) * fconvert.t(0.0322580636f))
*(arg1 + 0x28) = fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
    fconvert.t(*(arg1 + 0x28)) * fconvert.t(63f) + fconvert.t(0.5f))))) * fconvert.t(0.0158730168f))
*(arg1 + 0x2c) = fconvert.s(float.t(int.d(fconvert.t(fconvert.s(
    fconvert.t(*(arg1 + 0x2c)) * fconvert.t(31f) + fconvert.t(0.5f))))) * fconvert.t(0.0322580636f))
int32_t result = int.d(fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x80)) * fconvert.t(*(arg1 + 0x30))
    + fconvert.t(0.5f))))
*(arg1 + 0x30) = fconvert.s(float.t(result) * fconvert.t(*(arg1 + 0x84)))
return result
