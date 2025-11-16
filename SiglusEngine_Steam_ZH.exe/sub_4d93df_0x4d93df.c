// 函数: sub_4d93df
// 地址: 0x4d93df
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t eax_2 = *arg1[0x40] & 0xfffff
int32_t edi
int32_t var_14 = edi
int32_t var_1c_1

if (eax_2 == 1)
    int32_t var_18_3 = 0
    var_1c_1 = 5
else if (eax_2 == 3)
    int32_t var_18_2 = 0
    var_1c_1 = 8
else
    if (eax_2 != 4)
        int32_t result = (*(*arg1 + 0x80))(arg1[0x3f], &var_c, 2, 0, 0)
        
        if (result s>= 0)
            int32_t* eax_9 = *(arg1[0x40] + 8)
            result = sub_4d75f7(arg1, 5, &var_c, 2, eax_9, &eax_9[2], nullptr, 2, 0, 0, 0, 0)
            
            if (result s>= 0)
                void* eax_10 = arg1[0x40]
                result = sub_4d75f7(arg1, 2, *(eax_10 + 0x10), *(eax_10 + 0xc), &var_c, &var_8, 
                    nullptr, 1, 0, 0, 0, 0)
                
                if (result s>= 0)
                    return 0
        
        return result
    
    int32_t var_18_1 = 0
    var_1c_1 = 9

return sub_4d8e04(arg1, var_1c_1, 0)
