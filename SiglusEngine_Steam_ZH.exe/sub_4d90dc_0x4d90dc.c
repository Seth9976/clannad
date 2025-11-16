// 函数: sub_4d90dc
// 地址: 0x4d90dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t result = sub_4d7429(arg1, 0x26)

if (result s>= 0)
    result = (*(*arg1 + 0x74))(*(arg1[5] + (**(arg1[0x40] + 8) << 2)), &var_c, &var_8)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x68))(var_c, 0xe40000, var_8)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x60))()
            
            if (result s>= 0)
                result = sub_4d25aa(arg1)
                
                if (result s>= 0)
                    return 0

return result
