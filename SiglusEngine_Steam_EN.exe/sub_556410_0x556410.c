// 函数: sub_556410
// 地址: 0x556410
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg5 * 9
int32_t ecx = *((ebx << 2) + &data_1b8c8b0)
int32_t var_41c = arg5
char const* const var_420

if (*((ebx << 2) + &data_1b8c8a8) == ecx)
    var_420 = "%04d "
else if (ecx != 0)
    var_420 = "%04d "
else
    var_420 = "%04d"

void var_408
sub_4c84d0(&var_408, var_420)
int32_t esi = data_1333e3c

if (esi != 0)
    esi(0, &var_408, arg4, arg4, arg3, 0x4f32)
    esi = data_1333e3c

int32_t var_41c_1 = *((ebx << 2) + &data_1b8c8a8)
int32_t var_420_2 = *((ebx << 2) + &data_1b8c8b0)
sub_4c84d0(&var_408, "%d / %d")

if (esi != 0)
    esi(1, &var_408, arg4, arg4, arg3, 0x4f32)
    esi = data_1333e3c

int32_t var_41c_2 = *((ebx << 2) + &data_1b8c8a8) - *((ebx << 2) + &data_1b8c8b0)
char* result = sub_4c84d0(&var_408, "%d")

if (esi != 0)
    result = esi(2, &var_408, arg4, arg4, arg3, 0x4f32)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
