// 函数: sub_483585
// 地址: 0x483585
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = nullptr
int32_t var_18 = 0
int32_t var_14 = 0

if (sub_48345b(&var_18) == 0)
    result = 0x8007000e
else
    int32_t* var_c
    int32_t* var_8
    int32_t* arg_4
    int32_t* result_1 = (*(*arg_4 + 0x20))(&var_c, &var_8)
    
    if (result_1 s< 0)
        result = result_1
    else if (var_8 u> 0xffffffff)
        result = 0x8007000e
    else
        int32_t** var_20_2 = &arg_4
        int32_t var_10
        result_1 = sub_48348b(&var_18, var_c, var_8, &var_10)
        
        if (result_1 s< 0)
            result = result_1
        else
            void*** eax_2 = sub_745f3f(0x18)
            void*** eax_3
            
            if (eax_2 == 0)
                eax_3 = nullptr
            else
                eax_3 = sub_48375e(eax_2, var_10, arg_4, 1)
            
            *arg1 = eax_3
            
            if (eax_3 == 0)
                result = 0x8007000e

sub_483435(&var_18)
return result
