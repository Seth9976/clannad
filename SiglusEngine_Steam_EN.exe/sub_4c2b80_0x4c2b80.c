// 函数: sub_4c2b80
// 地址: 0x4c2b80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 != 0)
    void* eax_1 = *(arg1 + 4)
    int32_t esi_1 = *(eax_1 + 0x30)
    uint32_t edx = zx.d(*(eax_1 + 0x2e))
    eax_1.w = *(eax_1 + 0x2c)
    int16_t var_1a_1 = eax_1.w
    int16_t var_e_1 = edx.w
    int16_t var_1c = 1
    int32_t var_18_1 = esi_1
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(zx.d(eax_1.w) * edx)
    int16_t eax_6 = ((eax_4 + (edx_1 & 7)) s>> 3).w
    int16_t var_10_1 = eax_6
    int32_t var_14_1 = zx.d(eax_6) * esi_1
    int16_t var_c_1 = 0
    int32_t var_30
    sub_4d1ba0(0, 0x14, &var_30, 0)
    int32_t* ecx_1 = data_641b5c
    int16_t* var_20_1 = &var_1c
    var_30 = 0x14
    int32_t var_2c_1 = 0x180e0
    int32_t var_28_1 = arg2
    result = (*(*ecx_1 + 0xc))(ecx_1, &var_30, arg1 + 8, 0)
    *(arg1 + 0xc) = arg2
    *(arg1 + 0x10) = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
