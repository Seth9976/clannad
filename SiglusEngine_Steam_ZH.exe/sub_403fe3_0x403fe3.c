// 函数: sub_403fe3
// 地址: 0x403fe3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t* ecx_1 = arg2
ecx_1[2]
ecx_1[1]
float var_8_1 = fconvert.s(fconvert.t(*ecx_1))
long double st0
long double st1
bool c2
st1, st0, c2 = __fsincos(fconvert.t(var_8_1))
arg1[3] = fconvert.s(st0)
arg2 = fconvert.s(st1)
int32_t* var_14 = ecx_1
int32_t* var_18 = ecx_1
int32_t eax_2
int80_t st0_1
st0_1, eax_2 = sub_401000(fconvert.s(fconvert.t(arg2)), fconvert.s(float.t(0)))

if (eax_2 == 0)
    long double x87_r7_7 = fconvert.t(arg2) / fconvert.t(var_8_1)
    *arg1 = fconvert.s(x87_r7_7 * fconvert.t(*ecx_1))
    arg1[1] = fconvert.s(x87_r7_7 * fconvert.t(ecx_1[1]))
    arg1[2] = fconvert.s(x87_r7_7 * fconvert.t(ecx_1[2]))
else if (arg1 != ecx_1)
    *arg1 = *ecx_1
    arg1[1] = ecx_1[1]
    arg1[2] = ecx_1[2]

return arg1
