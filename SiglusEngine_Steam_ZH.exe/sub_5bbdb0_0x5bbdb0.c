// 函数: sub_5bbdb0
// 地址: 0x5bbdb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bae0c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
sub_551a90(arg1 + 0xa0, arg2 + 0xa0)
var_8_1.b = 1
sub_5bc0c0(arg1 + 0x25c, arg2 + 0x25c)
*(arg1 + 0x25c) = &C_elm_group_list::`vftable'{for `C_elm_list<class C_elm_group>'}
__builtin_memcpy(arg1 + 0x314, arg2 + 0x314, 0x80)
var_8_1.b = 2
sub_5bc150(arg1 + 0x394, arg2 + 0x394)
*(arg1 + 0x394) = &C_elm_mwnd_list::`vftable'{for `C_elm_list_ex<class C_elm_mwnd>'}
__builtin_memcpy(arg1 + 0x44c, arg2 + 0x44c, 0x80)
var_8_1.b = 3
sub_5bbf00(arg1 + 0x4cc, arg2 + 0x4cc)
var_8_1.b = 4
sub_5bc1e0(arg1 + 0x6c4, arg2 + 0x6c4)
*(arg1 + 0x6c4) = &C_elm_world_list::`vftable'{for `C_elm_list<class C_elm_world>'}
var_8_1.b = 5
sub_5bc270(arg1 + 0x77c, arg2 + 0x77c)
*(arg1 + 0x77c) = &C_elm_effect_list::`vftable'{for `C_elm_list<class C_elm_effect>'}
var_8_1.b = 6
sub_5bc300(arg1 + 0x834, arg2 + 0x834)
*(arg1 + 0x834) = &C_elm_quake_list::`vftable'{for `C_elm_list<class C_elm_quake>'}
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
