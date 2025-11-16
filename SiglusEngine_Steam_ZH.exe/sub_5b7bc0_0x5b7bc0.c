// 函数: sub_5b7bc0
// 地址: 0x5b7bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9baa52
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
sub_5b7d30(arg1 + 0xa0, arg2 + 0xa0)
*(arg1 + 0xa0) = &C_tnm_user_call_prop_list::`vftable'{for `C_elm_list<class C_elm_user_call_prop>'}
var_8_1.b = 1
sub_552a30(arg1 + 0x158, arg2 + 0x158)
*(arg1 + 0x158) = &C_elm_int_list::`vftable'{for `C_elm_list<int32_t>'}
var_8_1.b = 2
sub_5b7dc0(arg1 + 0x210, arg2 + 0x210)
*(arg1 + 0x210) = &C_elm_str_list::`vftable'{for `C_elm_list<class NT3::basic_string_ex<wchar_t> >'}
var_8_1.b = 3
*(arg1 + 0x2c8) = *(arg2 + 0x2c8)
*(arg1 + 0x2cc) = *(arg2 + 0x2cc)
*(arg1 + 0x2cd) = *(arg2 + 0x2cd)
*(arg1 + 0x2d0) = *(arg2 + 0x2d0)
*(arg1 + 0x2d4) = *(arg2 + 0x2d4)
*(arg1 + 0x2d8) = *(arg2 + 0x2d8)
*(arg1 + 0x2dc) = *(arg2 + 0x2dc)
*(arg1 + 0x2f4) = 7
*(arg1 + 0x2f0) = 0
*(arg1 + 0x2e0) = 0
sub_52e3c0(arg1 + 0x2e0, arg2 + 0x2e0, 0, 0xffffffff)
*(arg1 + 0x2f8) = *(arg2 + 0x2f8)
*(arg1 + 0x2fc) = *(arg2 + 0x2fc)
*(arg1 + 0x300) = *(arg2 + 0x300)
*(arg1 + 0x304) = *(arg2 + 0x304)
*(arg1 + 0x308) = *(arg2 + 0x308)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
