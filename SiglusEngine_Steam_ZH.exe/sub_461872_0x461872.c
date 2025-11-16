// 函数: sub_461872
// 地址: 0x461872
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* arg_8
int32_t* esi = arg_8

if (esi != 0)
    int32_t eax_1 = *esi
    arg_8 = nullptr
    var_8 = nullptr
    int32_t* eax_6
    int32_t result
    
    if ((*eax_1)(esi, &data_ac38b4, &arg_8) s>= 0)
        result = sub_460e6f(arg_8, arg2 + 8)
        eax_6 = arg_8
        (*(*eax_6 + 8))(eax_6)
        return result
    
    if ((**esi)(esi, &data_ac38a4, &var_8) s>= 0)
        result = sub_461738(var_8, arg2 + 8)
        eax_6 = var_8
        (*(*eax_6 + 8))(eax_6)
        return result

return 0x88760385
