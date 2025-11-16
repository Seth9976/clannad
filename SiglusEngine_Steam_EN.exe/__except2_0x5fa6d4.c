// 函数: __except2
// 地址: 0x5fa6d4
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t esi = arg4.w
double arg_c
double arg_1c

if (__handle_exc(arg1, &arg_1c, esi.b) == 0)
    int32_t var_50
    int32_t var_50_1 = (var_50 & 0xffffffe3) | 3
    double var_60 = fconvert.d(fconvert.t(arg3))
    void var_90
    sub_5faa5f(&var_90, &arg4, arg1.b, arg2, &arg_c, &arg_1c, 0)
    noreturn

void* eax_6 = __errcode(arg1.b)
long double result

if (data_63c8e4 != 0 || eax_6 == 0)
    __set_errno_from_matherr(eax_6)
    int16_t x87control
    sub_5fae98(x87control, esi, 0xffff)
    result = fconvert.t(arg_1c)
else
    int32_t var_ac
    var_ac.q = fconvert.d(fconvert.t(arg_1c))
    int32_t var_b4
    var_b4.q = fconvert.d(fconvert.t(arg3))
    int32_t var_bc
    var_bc.q = fconvert.d(fconvert.t(arg_c))
    int32_t var_b8
    int32_t var_b0
    result = __umatherr(eax_6, arg2, var_bc, var_b8, var_b4, var_b0, var_ac, esi)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
