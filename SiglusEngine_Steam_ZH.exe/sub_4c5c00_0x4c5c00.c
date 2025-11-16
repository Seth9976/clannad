// 函数: sub_4c5c00
// 地址: 0x4c5c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2 = *(*(*(arg1 + 0x10) + (*(arg2 + 4) << 2)) + 4)
int32_t var_c

if ((eax_2:1.b & 1) == 0)
    int32_t edx_2 = eax_2 & 0x200
    
    if (edx_2 != 0 && eax_2.b s< 0)
        var_c = 9
    else if (edx_2 == 0)
        if ((eax_2.b & 0x10) == 0)
            int32_t edi
            int32_t var_c_1 = edi
            int32_t result
            
            if ((eax_2 & 0x2020) == 0x2020)
                result = sub_4d546f(arg1, 5)
            else if ((eax_2 & 0x40020) == 0x40020)
                result = sub_4d546f(arg1, 6)
            else if ((eax_2.b & 0x20) != 0)
                result = sub_4d546f(arg1, 4)
            else if ((eax_2.b & 1) != 0)
                if ((eax_2.b & 2) == 0)
                    goto label_4c5c95
                
                result = sub_4d546f(arg1, 7)
            else if ((eax_2.b & 2) == 0 || (eax_2.b & 4) == 0)
            label_4c5c95:
                
                if ((eax_2 & 0x10000) != 0)
                    sub_4a4100(arg1, *(*(*(arg1 + 0x18) + (*(arg2 + 0x48) << 2)) + 0x3c), 0x1194, 
                        "clip not supported in texture shaders")
                
                result = 0x80004005
            else
                result = sub_4d546f(arg1, 8)
            
            return result
        
        var_c = 3
    else
        var_c = 2
else
    var_c = 1

return sub_4d546f(arg1, var_c)
