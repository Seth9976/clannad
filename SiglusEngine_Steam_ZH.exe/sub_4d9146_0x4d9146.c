// 函数: sub_4d9146
// 地址: 0x4d9146
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t result = sub_4d7429(arg1, 0x1b)

if (result s>= 0)
    int32_t eax = *arg1
    var_8 = nullptr
    int32_t edi
    int32_t var_14_1 = edi
    result = (*(eax + 0x68))(0xf0000800, 0xe40000, 0)
    
    if (result s>= 0)
        result = (*(*arg1 + 0x74))(*(arg1[5] + (**(arg1[0x40] + 8) << 2)), &var_8, &var_c)
        
        if (result s>= 0)
            result = (*(*arg1 + 0x68))(var_8, 0xe40000, var_c)
            
            if (result s>= 0)
                result = (*(*arg1 + 0x60))()
                
                if (result s>= 0)
                    result = sub_4d25aa(arg1)
                    
                    if (result s>= 0)
                        result = 0

return result
