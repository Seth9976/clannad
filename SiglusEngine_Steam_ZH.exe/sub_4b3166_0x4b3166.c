// 函数: sub_4b3166
// 地址: 0x4b3166
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = *(arg1[5] + (arg2 << 2))

if (zx.d((arg1[0x32]).w) u<= 0x100)
    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x119f, 
        "relative addressing not supported in vs_1_0 instruction set")
    return 0x80004001

int32_t eax_4 = *(ebx + 8)
int32_t result

if (eax_4 != 0xffffffff)
    result = sub_4b3166(eax_4)

if (eax_4 == 0xffffffff || result s>= 0)
    if (arg1[0x4e] == arg2)
        return 0
    
    result = sub_4d7429(arg1, 1)
    
    if (result s>= 0)
        int32_t edi
        int32_t var_1c_2 = edi
        result = (*(*arg1 + 0x64))(0xb0000000, 0x10000, 0)
        
        if (result s>= 0)
            int32_t var_10
            int32_t var_8
            result = (*(*arg1 + 0x74))(ebx, &var_10, &var_8)
            
            if (result s>= 0)
                int32_t var_c
                result = (*(*arg1 + 0x78))(&arg2, 1, 0x10000, &var_c)
                
                if (result s>= 0)
                    result = (*(*arg1 + 0x68))(var_10, var_c, var_8)
                    
                    if (result s>= 0)
                        result = (*(*arg1 + 0x60))()
                        
                        if (result s>= 0)
                            result = sub_4d25aa(arg1)
                            
                            if (result s>= 0)
                                arg1[0x4e] = arg2
                                result = 0

return result
