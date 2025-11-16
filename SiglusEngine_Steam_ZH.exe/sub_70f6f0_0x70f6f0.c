// 函数: sub_70f6f0
// 地址: 0x70f6f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0e8e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x71] += 1
arg2[0x19] = arg1[0x71]
int32_t var_30
void** eax_5 = (*(*arg2 + 4))(&var_30)
int32_t var_8_1 = 0
int32_t var_9c = 0xf
int32_t var_a0 = 0
char var_b0 = 0
sub_541b40(&var_b0, eax_5, 0, 0xffffffff)
var_8_1.b = 1
struct NT3::C_d3d_effect_global_val::VTable* var_98
sub_703520(&var_98, arg2)
var_8_1.b = 2
int32_t* eax_6
void* ecx_4
eax_6, ecx_4 = sub_711500(&var_b0)
int32_t* var_cc_3 = eax_6
void* var_d0 = &eax_6[4]
void** var_b8
sub_7115b0(arg1, &var_b8, ecx_4)
int32_t result = sub_702710(&var_98)

if (var_9c u>= 0x10)
    result = j__free(var_b0.d)

int32_t var_9c_1 = 0xf
int32_t var_a0_1 = 0
var_b0 = 0
int32_t var_1c

if (var_1c u>= 0x10)
    result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
