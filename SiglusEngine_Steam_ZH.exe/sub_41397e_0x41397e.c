// 函数: sub_41397e
// 地址: 0x41397e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
float* var_8 = arg1
float* var_c = arg1
int32_t edi
int32_t var_14 = edi
var_8 = nullptr
var_c = nullptr
int32_t result

if (arg10 == 0 || (arg4 & 4) != 0)
    result = 0x8876086c
else
    result = (*(*arg3 + 0x2c))(arg3, 0, 0, &var_8, 0x10)
    
    if (result s>= 0)
        result = (*(*arg2 + 0x2c))(arg2, 0, 0, &var_c, 0x10)
        
        if (result s>= 0)
            int32_t result_1
            result_1, ebp_1 =
                sub_40fef3(0, var_8, var_c, arg5, arg6, arg7, arg8, arg9, arg10, 0xffffffff, arg11)
            result = result_1
    
    if (ebp_1[-1] != 0)
        (*(*arg3 + 0x30))(arg3)
    
    if (ebp_1[-2] != 0)
        int32_t* eax_6 = ebp_1[2]
        (*(*eax_6 + 0x30))(eax_6)

*ebp_1
return result
