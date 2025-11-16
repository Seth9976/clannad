// 函数: sub_403c35
// 地址: 0x403c35
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float var_18
j_sub_4014e9(&var_18, arg2)
float* result = arg1
int32_t* var_c = &arg2
long double st0
long double st1
bool c2
st1, st0, c2 = __fsincos(fconvert.t(fconvert.s(fconvert.t(arg3) * fconvert.t(0.5f))))
result[3] = fconvert.s(st0)
*var_c = fconvert.s(st1)
*result = fconvert.s(fconvert.t(var_18) * fconvert.t(arg2))
float var_14
result[1] = fconvert.s(fconvert.t(var_14) * fconvert.t(arg2))
float var_10
result[2] = fconvert.s(fconvert.t(var_10) * fconvert.t(arg2))
return result
