// 函数: sub_7472e5
// 地址: 0x7472e5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* var_24 = nullptr
int32_t var_20
__builtin_memset(&var_20, 0, 0x1c)

if (arg4 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

if (arg3 != 0 && arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

var_20 = 0x7fffffff

if (arg3 u<= 0x7fffffff)
    var_20 = arg3

int32_t var_18_1 = 0x42
char* var_1c_1 = arg2
var_24 = arg2
int32_t result = arg1(&var_24, arg4, arg5, arg6)

if (arg2 == 0)
    return result

if (result s>= 0)
    int32_t temp0_1 = var_20
    var_20 -= 1
    
    if (temp0_1 - 1 s>= 0)
        *var_24 = 0
        return result
    
    char** var_34_2 = &var_24
    
    if (sub_74ddff(nullptr) != 0xffffffff)
        return result

arg2[arg3 - 1] = 0
int32_t eax_4
eax_4.b = var_20 s>= 0
return eax_4 - 2
