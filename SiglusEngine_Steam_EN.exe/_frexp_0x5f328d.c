// 函数: _frexp
// 地址: 0x5f328d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return float.t(0)

int32_t eax_1
int16_t x87control
int16_t x87control_1
eax_1, x87control_1 = sub_5fae98(x87control, 0x133f, 0xffff)
long double x87_r7_1 = fconvert.t(arg1)
int32_t ecx_3 = zx.d(arg1:6.w) & 0x7ff0

if (ecx_3.w != 0x7ff0)
    int32_t var_20_3 = ecx_3
    int32_t var_24_2 = ecx_3
    var_24_2.q = fconvert.d(x87_r7_1)
    var_c.q = fconvert.d(sub_5fa47e(arg2, var_24_2, arg2))
    sub_5fae98(x87control_1, eax_1.w, 0xffff)
    return fconvert.t(var_c.q)

*arg2 = 0xffffffff
int32_t var_20_1 = ecx_3
var_20_1.q = fconvert.d(x87_r7_1)
int32_t eax_2 = __sptype(var_20_1, ecx_3)
long double x87_r7_4
int32_t var_24

if (eax_2 s<= 0)
label_5f3321:
    x87_r7_4 = fconvert.t(arg1)
    int32_t var_1c_4 = eax_1
    var_24.q = fconvert.d(fconvert.t(1.0) + x87_r7_4)
else
    if (eax_2 s> 2)
        if (eax_2 != 3)
            goto label_5f3321
        
        int32_t var_20_2 = ecx_3
        int32_t var_24_1 = ecx_3
        var_24_1.q = fconvert.d(fconvert.t(arg1))
        return sub_5fa98e(0x17, var_24_1, eax_1)
    
    int32_t var_1c_3 = eax_1
    var_24.q = fconvert.d(fconvert.t(data_63c610))
    x87_r7_4 = fconvert.t(arg1)
int32_t var_2c
var_2c.q = fconvert.d(x87_r7_4)
return __except1(8, 0x17, var_2c)
