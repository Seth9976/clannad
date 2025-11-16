// 函数: sub_612f40
// 地址: 0x612f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9beee1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_178 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_148
sub_6efae0(&var_148)
int128_t var_28 = zx.o(0)
int32_t var_8_1 = 0
int32_t var_160 = 0
int32_t var_15c = 0
int32_t var_158 = 0
var_8_1.b = 1
void* var_164 = &var_148
int32_t esi_1 = arg2 * 0x8ec
sub_6094f0(*(data_bac408 + 0xa4) + esi_1, &var_164, arg3, arg4, arg5, arg6)

if (*(data_bac458 + 0x381) == 0)
    sub_5d07d0(&var_164)

void* ecx_3 = data_bac41c
void* eax_4
eax_4.b = *(ecx_3 + 0x864)

if (eax_4.b != 0)
    sub_6094f0(*(ecx_3 + 0x6b8) + esi_1, &var_164, arg3, arg4, arg5, arg6)

int32_t var_154 = 0
int32_t var_150 = 0
int32_t var_14c = 0
var_8_1.b = 2
sub_613140(&var_164, &var_154)
bool cond:0 = sub_613290(arg1, &var_154) != 0
int32_t eax_6 = var_154
int32_t ebx
ebx.b = cond:0

if (eax_6 != 0)
    j__free(eax_6)
    var_154 = 0
    int32_t var_150_1 = 0
    int32_t var_14c_1 = 0

sub_5b4e70(&var_160)
int32_t var_8_2 = 0xffffffff
sub_6efc80(&var_148)
int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
