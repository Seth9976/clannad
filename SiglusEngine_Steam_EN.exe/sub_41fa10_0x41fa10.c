// 函数: sub_41fa10
// 地址: 0x41fa10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_13570f4 != 0 && arg1 != 0 && *arg1 != 0)
    char var_218
    sub_4cfd70(&var_218, arg1)
    char* esi_1 = &var_218
    int32_t eax_3 = sub_4d1610(&var_218, 0x5c)
    void var_217
    
    if (eax_3 != 0xffffffff)
        esi_1 = &var_217 + eax_3
    int32_t eax_4 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_4 == 0xffffffff)
        eax_4 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    char* ecx_4 = &var_218
    esi_1[eax_4] = 0
    
    while (true)
        eax_4.b = *ecx_4
        
        if (eax_4.b u>= 0x80 && (eax_4.b u< 0xa0 || eax_4.b u> 0xdf) && eax_4.b u< 0xfe)
            ecx_4 = &ecx_4[2]
            continue
        
        if (eax_4.b == 0)
            break
        
        if (eax_4.b u>= 0x61 && eax_4.b u<= 0x7a)
            eax_4.b -= 0x20
            *ecx_4 = eax_4.b
        
        ecx_4 = &ecx_4[1]
    
    int32_t ebx_1 = data_13570f0
    int32_t result = 0
    void* edi_1 = data_13570f8
    
    if (ebx_1 s> 0)
        while (sub_4d0f10(edi_1 + 0x20, &var_218) != 0)
            result += 1
            edi_1 += 0x64
            
            if (result s>= ebx_1)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return 0xffffffff
        
        int32_t eax_7 = *(edi_1 + 4)
        
        if (eax_7 == arg2)
            if (data_7037e8 != 0)
                sub_419520(arg1, 1)
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
        
        if (data_702fc0 != 0)
            if (eax_7 s< 0 || eax_7 s> 1)
                int32_t var_234_2 = (&data_610598)[arg2]
                char* var_238_2 = &var_218
                sub_4c84d0(&data_7027c0, 0x613e60)
            else
                int32_t var_234_1 = (&data_610598)[arg2]
                int32_t var_238_1 = (&data_610598)[eax_7]
                char* var_23c_1 = &var_218
                sub_4c84d0(&data_7027c0, 0x613e00)
            
            sub_446a50()

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0xffffffff
