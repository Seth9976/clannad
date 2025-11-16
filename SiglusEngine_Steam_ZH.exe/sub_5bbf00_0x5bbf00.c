// 函数: sub_5bbf00
// 地址: 0x5bbf00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bae38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_elm_list_ex<class C_elm_btn_select_item>::C_elm_btn_select_item_list::VTable** result =
    arg1
sub_5bc390(arg1, arg2)
*result = &C_elm_btn_select_item_list::`vftable'{for `C_elm_list_ex<class C_elm_btn_select_item>'}
int32_t var_8_1 = 0
result[0x2e] = *(arg2 + 0xb8)
__builtin_memcpy(&result[0x2f], arg2 + 0xbc, 0x70)
__builtin_memcpy(&result[0x4b], arg2 + 0x12c, 0x70)
result[0x67] = *(arg2 + 0x19c)
result[0x68] = *(arg2 + 0x1a0)
result[0x69] = *(arg2 + 0x1a4)
result[0x6a] = *(arg2 + 0x1a8)
result[0x6b] = *(arg2 + 0x1ac)
result[0x6c] = *(arg2 + 0x1b0)
result[0x6d] = *(arg2 + 0x1b4)
result[0x6e] = *(arg2 + 0x1b8)
result[0x6f] = *(arg2 + 0x1bc)
result[0x70] = *(arg2 + 0x1c0)
result[0x71] = *(arg2 + 0x1c4)
result[0x72].b = *(arg2 + 0x1c8)
*(result + 0x1c9) = *(arg2 + 0x1c9)
*(result + 0x1ca) = *(arg2 + 0x1ca)
*(result + 0x1cb) = *(arg2 + 0x1cb)
result[0x73].b = *(arg2 + 0x1cc)
*(result + 0x1cd) = *(arg2 + 0x1cd)
result[0x79] = 7
result[0x78] = 0
result[0x74].w = 0
sub_52e3c0(&result[0x74], arg2 + 0x1d0, 0, 0xffffffff)
result[0x7a] = *(arg2 + 0x1e8)
result[0x7b] = *(arg2 + 0x1ec)
result[0x7c] = *(arg2 + 0x1f0)
result[0x7d].b = *(arg2 + 0x1f4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
