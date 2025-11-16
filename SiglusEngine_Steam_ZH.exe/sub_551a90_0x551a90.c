// 函数: sub_551a90
// 地址: 0x551a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct C_elm_list_ex<class C_elm_object>::VTable** var_c = arg1
struct C_elm_list_ex<class C_elm_object>::C_elm_object_list::VTable** result = arg1
sub_551ba0(arg1, arg2)
*result = &C_elm_object_list::`vftable'{for `C_elm_list_ex<class C_elm_object>'}
result[0x2e].b = *(arg2 + 0xb8)
*(result + 0xb9) = *(arg2 + 0xb9)
*(result + 0xba) = *(arg2 + 0xba)
__builtin_memcpy(&result[0x2f], arg2 + 0xbc, 0x80)
__builtin_memcpy(&result[0x4f], arg2 + 0x13c, 0x80)
return result
