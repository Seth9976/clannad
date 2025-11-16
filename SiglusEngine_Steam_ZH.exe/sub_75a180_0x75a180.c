// 函数: sub_75a180
// 地址: 0x75a180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_24 = nullptr
int32_t var_20
__builtin_memset(&var_20, 0, 0x1c)

if (arg3 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if (arg2 != 0 && arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

var_20 = 0x7fffffff

if (arg2 u<= 0x7fffffff)
    var_20 = arg2

int32_t var_18_1 = 0x42
char* var_1c_1 = arg1
var_24 = arg1
int32_t result = sub_74eaf0(&var_24, arg3, arg4, arg5)

if (arg1 == 0)
    return result

int32_t temp0_1 = var_20
var_20 -= 1

if (temp0_1 - 1 s< 0)
    char** var_30_2 = &var_24
    sub_74ddff(nullptr)
else
    *var_24 = 0

return result
