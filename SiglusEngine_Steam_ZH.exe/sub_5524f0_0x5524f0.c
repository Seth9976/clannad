// 函数: sub_5524f0
// 地址: 0x5524f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1f6a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
*(arg1 + 0x10) = *(arg2 + 0x10)
arg1[8] = arg2[8]
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0x17] = arg2[0x17]
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
arg1[0x2e] = arg2[0x2e]
arg1[0x2f] = arg2[0x2f]
*(arg1 + 0xc0) = *(arg2 + 0xc0)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
__builtin_memcpy(&arg1[0x3e], &arg2[0x3e], 0xb8)
__builtin_memcpy(&arg1[0x6c], &arg2[0x6c], 0x670)
sub_5529a0(&arg1[0x208], &arg2[0x208])
arg1[0x208] = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
arg1[0x236] = arg2[0x236]
int32_t var_8_1 = 0
sub_5529a0(&arg1[0x237], &arg2[0x237])
arg1[0x237] = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
arg1[0x265] = arg2[0x265]
var_8_1.b = 1
sub_5529a0(&arg1[0x266], &arg2[0x266])
arg1[0x266] = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
arg1[0x294] = arg2[0x294]
var_8_1.b = 2
sub_5529a0(&arg1[0x295], &arg2[0x295])
arg1[0x295] = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
arg1[0x2c3] = arg2[0x2c3]
var_8_1.b = 3
sub_552a30(&arg1[0x2c4], &arg2[0x2c4])
arg1[0x2c4] = &C_elm_int_list::`vftable'{for `C_elm_list<int32_t>'}
var_8_1.b = 4
arg1[0x2f7] = 7
arg1[0x2f6] = 0
arg1[0x2f2].w = 0
sub_52e3c0(&arg1[0x2f2], &arg2[0x2f2], 0, 0xffffffff)
var_8_1.b = 5
arg1[0x2fd] = 7
arg1[0x2fc] = 0
arg1[0x2f8].w = 0
sub_52e3c0(&arg1[0x2f8], &arg2[0x2f8], 0, 0xffffffff)
int32_t (__fastcall* var_28_5)(int32_t* arg1) = sub_52e8a0
var_8_1.b = 6
sub_746ac4(&arg1[0x2fe], &arg2[0x2fe], 0x18, 8, sub_536170)
arg1[0x333] = 7
arg1[0x332] = 0
arg1[0x32e].w = 0
sub_52e3c0(&arg1[0x32e], &arg2[0x32e], 0, 0xffffffff)
var_8_1.b = 7
arg1[0x339] = 7
arg1[0x338] = 0
arg1[0x334].w = 0
sub_52e3c0(&arg1[0x334], &arg2[0x334], 0, 0xffffffff)
var_8_1.b = 8
sub_552860(&arg1[0x33a], &arg2[0x33a])
var_8_1.b = 9
sub_552ac0(&arg1[0x3ed], &arg2[0x3ed])
arg1[0x3ed] = &C_elm_frame_action_list::`vftable'{for `C_elm_list_ex<class C_elm_frame_action>'}
__builtin_memcpy(&arg1[0x41b], &arg2[0x41b], 0x80)
var_8_1.b = 0xa
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&arg1[0x43b], &arg2[0x43b])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
