// 函数: sub_403a8b
// 地址: 0x403a8b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1

if (arg2 != 0)
    *arg2 = *result
    arg2[1] = result[1]
    arg2[2] = result[2]

if (arg3 != 0)
    int32_t mxcsr
    int16_t x87control
    long double st0_1
    st0_1, result = sub_7614c0(mxcsr, x87control, fconvert.t(result[3]))
    *arg3 = fconvert.s(st0_1 + st0_1)

return result
