// 函数: __mbsnbicoll_l
// 地址: 0x766cfd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_14
sub_7470a1(&var_14, arg4)
uint32_t result

if (arg3 == 0)
    result = 0
else if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x7fffffff
else
    result = 0x7fffffff
    void* var_10
    
    if (arg3 u> 0x7fffffff)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    else if (*(var_10 + 8) != 0)
        enum COMPARESTRING_RESULT eax_4 =
            sub_7630d2(&var_14, *(var_10 + 0x21c), 0x1001, arg1, arg3, arg2, arg3, *(var_10 + 4))
        
        if (eax_4 != 0)
            result = eax_4 - 2
    else
        result = __strnicoll_l(arg1, arg2, arg3, arg4)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
