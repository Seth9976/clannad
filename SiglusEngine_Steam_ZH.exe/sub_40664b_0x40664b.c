// 函数: sub_40664b
// 地址: 0x40664b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg1 == 0 || arg4 == 0)
    return 0x8876086c

int32_t esi_1 = arg2

if (esi_1 == 0xffffffff)
    esi_1 = 0

int32_t arg_8
int32_t arg_c
int32_t arg_10
int32_t arg_18
int32_t result = sub_406624(arg1, &arg_8, &arg_c, &arg_10, esi_1, &arg_18, arg3)

if (result s>= 0)
    result =
        (*(*arg1 + 0x5c))(arg1, arg_8, arg_c, arg_10, esi_1 & 0xffe07fff, arg_18, arg3, arg4, 0)
    
    if (result s>= 0)
        return 0

return result
