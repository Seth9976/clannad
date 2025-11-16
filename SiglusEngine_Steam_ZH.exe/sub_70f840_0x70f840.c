// 函数: sub_70f840
// 地址: 0x70f840
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0ede
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_208 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30
void** eax_4 = (*(*arg2 + 4))(&var_30)
int32_t var_8_1 = 0
int32_t var_1dc = 0xf
int32_t var_1e0 = 0
char var_1f0 = 0
sub_541b40(&var_1f0, eax_4, 0, 0xffffffff)
var_8_1.b = 1
struct NT3::C_d3d_effect_global_val::VTable* var_1d8
sub_7112d0(&var_1d8, arg2)
var_8_1.b = 2
int32_t* eax_5
void* ecx_4
eax_5, ecx_4 = sub_711770(&var_1f0)
int32_t* var_20c_3 = eax_5
void* var_210 = &eax_5[4]
void** var_1f8
sub_711820(arg1 + 8, &var_1f8, ecx_4)
int32_t result = sub_70ac20(&var_1d8)

if (var_1dc u>= 0x10)
    result = j__free(var_1f0.d)

int32_t var_1dc_1 = 0xf
int32_t var_1e0_1 = 0
var_1f0 = 0
int32_t var_1c

if (var_1c u>= 0x10)
    result = j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
