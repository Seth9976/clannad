// 函数: sub_5c4e50
// 地址: 0x5c4e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0x80070057

int32_t eax_1 = *arg1
int32_t* var_c = nullptr
int32_t* var_8 = nullptr
int32_t result = (*eax_1)(arg1, 0xaf25c0, &var_c)

if (result s>= 0)
    int32_t* eax_3 = var_c
    result = (*(*eax_3 + 0x10))(eax_3, arg3, &var_8)
    
    if (result s>= 0)
        int32_t* eax_5 = var_8
        result = (*(*eax_5 + 0x14))(eax_5, arg2, arg4)

int32_t* eax_7 = var_8

if (eax_7 != 0)
    (*(*eax_7 + 8))(eax_7)

int32_t* eax_8 = var_c

if (eax_8 != 0)
    (*(*eax_8 + 8))(eax_8)

return result
