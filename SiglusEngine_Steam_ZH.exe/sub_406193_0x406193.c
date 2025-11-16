// 函数: sub_406193
// 地址: 0x406193
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_14
sub_41964d(&var_14)
void var_8
sub_41d174(&var_8)
int32_t result

if (arg1 != 0 && arg4 != 0 && arg9 != 0)
    if (arg10 == 0xffffffff)
        arg10 = 0x80004
    
    void var_bc
    int32_t result_1 = sub_41d697(&var_8, &var_bc, arg1, arg2, arg3, 0, 0)
    
    if (result_1 s>= 0)
        int32_t edi
        int32_t var_c4_1 = edi
        int32_t var_64_1 = arg5
        int32_t var_60_1 = arg6
        int32_t var_5c_1 = arg7
        int32_t var_68 = arg4
        void var_58
        __builtin_memcpy(&var_58, arg9, 0x18)
        void var_40
        __builtin_memcpy(&var_40, arg9, 0x18)
        int32_t var_74
        int32_t var_20_1 = var_74
        int32_t var_1c_1 = arg11
        int32_t var_18_1 = arg8
        result_1 = sub_41ce92(&var_14, &var_bc, &var_68, arg10)
        
        result = result_1 s< 0 ? result_1 : 0
    else
        result = result_1
else
    result = 0x8876086c

j_sub_41d17a(&var_8)
sub_419657(&var_14)
return result
