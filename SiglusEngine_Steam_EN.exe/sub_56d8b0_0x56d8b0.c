// 函数: sub_56d8b0
// 地址: 0x56d8b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (data_1af0ac4 != 0)
    int32_t eax_1 = data_1318c38
    int32_t ecx_1
    
    if (eax_1 s>= 0 && eax_1 s< data_7031bc)
        ecx_1 = data_1318c3c
    
    void string
    
    if (eax_1 s< 0 || eax_1 s>= data_7031bc || ecx_1 u> 1)
        sub_4cfd70(&string, 0x623c40)
    else
        int32_t var_40c_1 = eax_1
        
        if (ecx_1 != 0)
            sub_4c84d0(&string, 0x623c18)
        else
            sub_4c84d0(&string, 0x623bf4)
    
    result = SetWindowTextA(data_1af0ac4, &string)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
