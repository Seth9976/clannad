// 函数: sub_448260
// 地址: 0x448260
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
enum MESSAGEBOX_RESULT result = __security_cookie ^ &__saved_ebp
enum MESSAGEBOX_RESULT result_1 = result

if (data_1332da8 != 0)
    void text
    
    if (sub_4c3da0(result, 0xffffffff, &data_1332da8, 0xffffffff) != 2)
        if (data_702fc0 == 0)
            char* var_e28_5 = &data_1332da8
            sub_4c84d0(&text, &data_6172e0)
            result = MessageBoxA(nullptr, &text, 0x617078, MB_OK)
        else
            char* var_e28_4 = &data_1332b88
            char* var_e2c_4 = &data_1332da8
            sub_4c84d0(&text, 0x617120)
            result = MessageBoxA(nullptr, &text, 0x617078, MB_OK)
    else if (data_702fc0 == 0)
        char const* const var_e28_2 = "gameexe.ini"
        char* var_e2c_2 = &data_1332da8
        void var_41c
        result = sub_4c3da0(sub_4c84d0(&var_41c, "%s\%s"), 0xffffffff, &var_41c, 0xffffffff)
        
        if (result == IDOK)
        label_448381:
            data_1332d94 = 1
            sub_5f02dd(result_1 ^ &__saved_ebp)
            return result
        
        void* var_e28_3 = &var_41c
        sub_4c84d0(&text, &data_617090)
        result = MessageBoxA(nullptr, &text, 0x617078, MB_OK)
    else
        char var_214[0x20c]
        sub_4cfd70(&var_214, &data_1332da8)
        char var_624[0x208]
        sub_4cfd70(&var_624, &data_13517e0)
        char (* ecx_3)[0x20c] = &var_214
        char eax_2
        
        while (true)
            eax_2 = *ecx_3
            
            if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
                ecx_3 = &(*ecx_3)[2]
                continue
            
            if (eax_2 == 0)
                break
            
            if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
                *ecx_3 = eax_2 - 0x20
            
            ecx_3 = &(*ecx_3)[1]
        
        char* ecx_4 = &var_624
        
        while (true)
            eax_2 = *ecx_4
            
            if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
                ecx_4 = &ecx_4[2]
                continue
            
            if (eax_2 == 0)
                break
            
            if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
                *ecx_4 = eax_2 - 0x20
            
            ecx_4 = &ecx_4[1]
        
        result = sub_4d0f10(&var_214, &var_624)
        
        if (result == 0)
            goto label_448381
        
        char* var_e28_1 = &data_1332b88
        void* var_e2c_1 = &data_13517e0
        char* var_e30_1 = &data_1332da8
        sub_4c84d0(&text, 0x616e80)
        result = MessageBoxA(nullptr, &text, 0x617078, MB_YESNO)
        
        if (result == IDYES)
            goto label_448381

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
