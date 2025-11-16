// 函数: sub_4c9960
// 地址: 0x4c9960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* eax_2

if (arg3 != 0 && *arg3 != 0)
    char var_210[0x208]
    sub_4cfd70(&var_210, arg3)
    char (* ecx_1)[0x208] = &var_210
    
    while (true)
        char eax_3 = *ecx_1
        
        if (eax_3 u>= 0x80 && (eax_3 u< 0xa0 || eax_3 u> 0xdf) && eax_3 u< 0xfe)
            ecx_1 = &(*ecx_1)[2]
            continue
        
        if (eax_3 == 0)
            break
        
        if (eax_3 u>= 0x61 && eax_3 u<= 0x7a)
            *ecx_1 = eax_3 - 0x20
        
        ecx_1 = &(*ecx_1)[1]
    
    if (data_20af840 == arg2)
        eax_2 = sub_4d0f10(&data_20af638, &var_210)
    
    int32_t ebx
    
    if (data_20af840 != arg2 || eax_2 != 0)
        sub_4c9860()
        ebx.b = sub_4c98a0(&var_210, arg2)
        data_20a1b92 = ebx.b
        sub_4cfd70(&data_20af638, &var_210)
        data_20af840 = arg2
    else
        ebx.b = data_20a1b92
    
    if (ebx.b != 0)
        *arg4 = data_20af848
        *arg5 = data_20af84c
        int32_t eax_6
        eax_6.b = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_6

eax_2.b = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
