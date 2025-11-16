// 函数: sub_4c25d0
// 地址: 0x4c25d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* result = data_1af4258

if (arg1 != 0)
    result = arg1

bool cond:0 = data_641b5c == 0
data_1af4258 = result

if (not(cond:0))
    int32_t var_28
    int32_t* var_30_1 = &var_28
    int16_t var_24
    int16_t var_20
    sub_4c1ac0(&var_20, &var_24, arg1, &var_20)
    int16_t eax_3 = var_24
    int16_t ecx = var_20
    int32_t esi_1 = var_28
    int16_t var_1a_1 = eax_3
    int16_t var_e_1 = ecx
    int16_t var_1c = 1
    int32_t var_18_1 = esi_1
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(zx.d(eax_3) * zx.d(ecx))
    int16_t eax_8 = ((eax_6 + (edx_2 & 7)) s>> 3).w
    int16_t var_10_1 = eax_8
    int32_t var_14_1 = zx.d(eax_8) * esi_1
    int16_t var_c_1 = 0
    int32_t* eax_11 = data_641b58
    result = (*(*eax_11 + 0x38))(eax_11, &var_1c)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
