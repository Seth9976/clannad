// 函数: sub_482d2c
// 地址: 0x482d2c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_c = edi

if (*(arg1 + 0xc) == 0)
    return sub_482c35(arg1, arg2, arg3)

int32_t result = sub_48287a(arg1, arg5, &var_8)

if (result s>= 0)
    arg5 = nullptr
    void* ebx_1 = var_8
    
    if (ebx_1 u> 0)
        do
            result = sub_482c35(arg1, arg2, arg3)
            
            if (result != 0)
                break
            
            if (arg5 != ebx_1 - 1)
                if (*(arg2 + 0x40) == 1)
                    int32_t var_18_2 = 0x2c
                    sub_4605c1(arg2)
                
                result = 0
                
                if (arg4 != 0)
                    result = sub_4613b7(arg2, 2)
            
            arg5 += 1
        while (arg5 u< ebx_1)

return result
