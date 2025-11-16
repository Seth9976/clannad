// 函数: sub_54d860
// 地址: 0x54d860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1419
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[8] = 7
arg1[7] = 0
arg1[3].w = 0
sub_52e3c0(&arg1[3], &arg2[3], 0, 0xffffffff)
int32_t var_8_1 = 0
__builtin_memcpy(&arg1[9], &arg2[9], 0x80)
void* eax_8

if (arg2 == 0xffffff5c)
    eax_8 = nullptr
else
    eax_8 = &arg2[0x2a]

sub_54d110(&arg1[0x2a], eax_8)
arg1[0x29] = &C_tnm_prop_list::`vftable'{for `C_elm_list<class C_tnm_prop>'}
var_8_1.b = 1
arg1[0x57] = arg2[0x57]
int32_t* ecx_2 = arg2[0x58]

if (ecx_2 == 0)
    arg1[0x58] = 0
else
    arg1[0x58] = (*(*ecx_2 + 8))(eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
