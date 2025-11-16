// 函数: sub_412bc2
// 地址: 0x412bc2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* var_8 = arg1
float* var_c = arg1
int32_t edi
int32_t var_14 = edi
var_8 = nullptr
var_c = nullptr

if (arg10 == 0 || (arg4 & 4) != 0)
    return 0x8876086c

int32_t result = (*(*arg3 + 0x2c))(arg3, 0, 0, &var_8, 0x10)

if (result s>= 0)
    result = (*(*arg2 + 0x2c))(arg2, 0, 0, &var_c, 0x10)
    
    if (result s>= 0)
        result = sub_40fb63(var_8, var_c, arg5, arg6, arg7, arg8, arg9, arg10, 0xffff, arg11)

if (var_8 != 0)
    (*(*arg3 + 0x30))(arg3)

if (var_c != 0)
    (*(*arg2 + 0x30))(arg2)

return result
