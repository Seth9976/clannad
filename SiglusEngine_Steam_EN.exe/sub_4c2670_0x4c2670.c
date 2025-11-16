// 函数: sub_4c2670
// 地址: 0x4c2670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_1
eax_1.w = arg3
int16_t var_e = eax_1.w
uint32_t edi = zx.d(eax_1.w)
int16_t var_1c = 1
uint32_t ecx = zx.d(arg2)
int16_t var_1a = arg2
int32_t var_18 = arg4
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(ecx * edi)
int16_t eax_6 = ((eax_4 + (edx & 7)) s>> 3).w
int16_t var_10 = eax_6
uint32_t edi_4 = ((edi u>> 3) * ecx * arg4) u>> 2
int32_t var_14 = zx.d(eax_6) * arg4
int32_t eax_9 = 0
int16_t var_c = 0
int32_t ecx_2 = edi_4 & 3

if (ecx_2 != 0)
    eax_9 = 4 - ecx_2
    edi_4 += eax_9

int32_t var_40
sub_4d1ba0(eax_9, 0x14, &var_40, 0)
var_40 = 0x14
int32_t var_3c = 0x180e0
int16_t* var_30 = &var_1c
int32_t* eax_10 = data_641b5c
uint32_t var_38 = edi_4
(*(*eax_10 + 0xc))(eax_10, &var_40, &data_641b40, 0)
int32_t* eax_11 = data_641b40
int32_t var_2c
int32_t var_28
int32_t var_24
int32_t var_20
sub_4d1ba0((*(*eax_11 + 0x2c))(eax_11, 0, edi_4, &var_20, &var_2c, &var_24, &var_28, 0), edi_4, 
    var_20, 0)
int32_t* eax_13 = data_641b40
(*(*eax_13 + 0x4c))(eax_13, var_20, var_2c, var_24, var_28)
int32_t* eax_14 = data_641b40
int32_t result = (*(*eax_14 + 0x30))(eax_14, 0, 0, 1)
sub_5f02dd(var_8 ^ &__saved_ebp)
return result
