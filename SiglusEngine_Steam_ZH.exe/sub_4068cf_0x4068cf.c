// 函数: sub_4068cf
// 地址: 0x4068cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_8
sub_41d174(&var_8)
int32_t result = 0

if (arg1 != 0 && arg4 != 0)
    int32_t eax_1 = 1
    
    if (arg1 == arg4)
        eax_1 = 0x10001
    
    int32_t var_5c
    int32_t result_1 = sub_41d697(&var_8, &var_5c, arg4, arg5, arg6, 0, eax_1)
    
    if (result_1 s< 0)
        result = result_1
    else
        int32_t var_58
        int32_t var_54
        int32_t var_50
        void var_34
        result_1 =
            sub_406193(arg1, arg2, arg3, var_5c, var_58, var_54, var_50, arg5, &var_34, arg7, arg8)
        
        if (result_1 s< 0)
            result = result_1
else
    result = 0x8876086c

j_sub_41d17a(&var_8)
return result
