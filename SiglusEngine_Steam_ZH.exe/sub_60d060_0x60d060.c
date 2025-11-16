// 函数: sub_60d060
// 地址: 0x60d060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be798
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_c8 = 8
int32_t var_18 = 7
int32_t (* const* const var_cc)() = &C_info_dialog::`vftable'{for `NT3::C_modal_dialog'}.vFunc_2
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_cc, var_c8)
int32_t var_8_1 = 0
int32_t* ebx = data_bac478
void* eax_3 = data_bac510
void* edx = &ebx[1]
int32_t var_38 = 1
int32_t var_b4 = 0x69
int32_t eax_4 = *(eax_3 + 0x123f4)
__builtin_memcpy(edx, &var_b4, 0x80)
int32_t var_30 = eax_4
*(edx + 0x80) = 0x46b

if (edx + 0x84 != &var_2c)
    sub_52e3c0(edx + 0x84, &var_2c, 0, 0xffffffff)
    eax_4 = var_30
    edx = &ebx[1]

*(edx + 0x9c) = 0
ebx[0x2c] = eax_4
ebx[0x2d].b = 0
sub_60d180(&ebx[0x29], eax_4)
int32_t result = (**ebx)(0, var_30)

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
