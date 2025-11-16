// 函数: sub_462b82
// 地址: 0x462b82
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 != 0 && arg1 != 0 && (arg3 & 0xfffffffc) == 0 && (arg2 & 0xfffffffe) == 0)
    *arg4 = 0
    int32_t eax_2 = arg3 & 0xfffffffd
    void*** arg_4
    int32_t result
    
    if (eax_2 u<= 1)
        void**** var_c_2 = &arg_4
        int32_t* var_18_2 = arg_4
        
        if (arg2 != 0)
            result = sub_461c58(var_18_2, arg1, arg3, var_c_2)
        else
            result = sub_461b67(var_18_2, arg1, arg3, var_c_2)
        
    label_462bf6:
        
        if (result s>= 0)
            *arg4 = arg_4
        
        return result
    
    if (eax_2 == 4)
        void**** var_c_1 = &arg_4
        char var_10_1 = arg3.b
        int32_t* var_18_1 = arg_4
        
        if (arg2 != 0)
            result = sub_462351(var_18_1, arg1, var_10_1, var_c_1)
        else
            result = sub_4620dd(var_18_1, arg1, var_10_1, var_c_1)
        
        goto label_462bf6

return 0x88760385
