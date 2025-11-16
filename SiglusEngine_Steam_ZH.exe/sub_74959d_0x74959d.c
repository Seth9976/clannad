// 函数: sub_74959d
// 地址: 0x74959d
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

int32_t var_18_1 = 0x42
char* var_1c_1 = arg2
var_24 = arg2

if (arg3 u<= 0x3fffffff)
    var_20 = arg3 * 2
else
    var_20 = 0x7fffffff

int32_t result = arg1(&var_24, arg4, arg5, arg6)

if (arg2 == 0)
    return result

if (result s>= 0)
    int32_t temp0_1 = var_20
    var_20 -= 1
    char* eax_6
    
    if (temp0_1 - 1 s< 0)
        char** var_34_2 = &var_24
        
        if (sub_74ddff(nullptr) != 0xffffffff)
            eax_6 = var_24
            goto label_749661
    else
        *var_24 = 0
        eax_6 = &var_24[1]
        var_24 = eax_6
    label_749661:
        int32_t temp1_1 = var_20
        var_20 -= 1
        
        if (temp1_1 - 1 s>= 0)
            *eax_6 = 0
            return result
        
        char** var_34_3 = &var_24
        
        if (sub_74ddff(nullptr) != 0xffffffff)
            return result

bool cond:0_1 = var_20 s>= 0
*(arg2 + (arg3 << 1) - 2) = 0
int32_t eax_9
eax_9.b = cond:0_1
return eax_9 - 2
