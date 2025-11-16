// 函数: ___copy_locale_name
// 地址: 0x7475af
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

int32_t eax_1 = _wcsnlen(arg1, 0x55)

if (eax_1 u>= 0x55)
    return nullptr

int16_t* result = sub_74cd17((eax_1 << 1) + 2)

if (result == 0)
    return result

if (_wcsncpy_s(result, eax_1 + 1, arg1, eax_1 + 1) == 0)
    return result

int32_t var_20
__builtin_memset(&var_20, 0, 0x14)
__invoke_watson()
noreturn
