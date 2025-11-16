// 函数: sub_7582c0
// 地址: 0x7582c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_24 = nullptr
int32_t var_20
__builtin_memset(&var_20, 0, 0x1c)

if (arg2 == 0 || arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

char* var_1c_1 = arg1
var_24 = arg1
var_20 = 0x7fffffff
int32_t var_18_1 = 0x42
int32_t result = sub_74eaf0(&var_24, arg2, arg3, arg4)
int32_t temp0_1 = var_20
var_20 -= 1

if (temp0_1 - 1 s< 0)
    char** var_2c_2 = &var_24
    sub_74ddff(nullptr)
else
    *var_24 = 0

return result
