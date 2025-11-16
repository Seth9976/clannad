// 函数: sub_57a390
// 地址: 0x57a390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4884
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_control::NT3::Cc_listview::VTable** result = arg1
struct NT3::C_control::NT3::Cc_listview::VTable** result_1 = result
sub_6bfab0(arg1)
result[0x23] = 7
result[0x22] = 0
result[0x1e].w = 0
result[0x17] = 7
int32_t var_8_1 = 0
*result = &NT3::Cc_listview::`vftable'{for `NT3::C_control'}
result[0x24] = 0
result[0x25] = 0
result[0x26] = 0
var_8_1.b = 1
sub_57a0f0(&result[0x27])
result[0x27] = &NT3::Cc_listview::Citem_edit::`vftable'{for `NT3::Cc_edit'}
var_8_1.b = 2
sub_57a1b0(&result[0x4d])
result[0x4d] = &NT3::Cc_listview::Citem_spin::`vftable'{for `NT3::Cc_spin'}
var_8_1.b = 3
sub_57a270(&result[0x73])
result[0x73] = &NT3::Cc_listview::Citem_combo::`vftable'{for `NT3::Cc_combobox'}
result[0xaa] = 7
result[0xa9] = 0
result[0xa5].w = 0
result[0xb0] = 7
result[0xaf] = 0
result[0xab].w = 0
result[0xbd] = 7
result[0xbc] = 0
result[0xb8].w = 0
result[0xc3] = 7
result[0xc2] = 0
result[0xbe].w = 0
var_8_1.b = 6
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 
    &NT3::Cc_listview::Citem_combo::`vftable'{for `NT3::Cc_combobox'}.__offset(0x8), 0xd)
var_8_1.b = 7

if (&result[0x1e] != &var_2c)
    sub_52e3c0(&result[0x1e], &var_2c, 0, 0xffffffff)

if (var_18 u>= 8)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
