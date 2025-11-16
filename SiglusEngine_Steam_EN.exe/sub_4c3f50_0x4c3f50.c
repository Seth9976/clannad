// 函数: sub_4c3f50
// 地址: 0x4c3f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL var_8 = __security_cookie ^ &__saved_ebp
BOOL eax_1

if (arg1 != 0 && arg2 != 0)
    char var_82c[0x410]
    sub_4cfd70(&var_82c, arg1)
    char var_41c[0x208]
    sub_4cfd70(&var_41c, arg2)
    char (* ecx_2)[0x410] = &var_82c
    char eax_2
    
    while (true)
        eax_2 = *ecx_2
        
        if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
            ecx_2 = &(*ecx_2)[2]
            continue
        
        if (eax_2 == 0)
            break
        
        if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
            *ecx_2 = eax_2 - 0x20
        
        ecx_2 = &(*ecx_2)[1]
    
    char* ecx_3 = &var_41c
    
    while (true)
        eax_2 = *ecx_3
        
        if (eax_2 u>= 0x80 && (eax_2 u< 0xa0 || eax_2 u> 0xdf) && eax_2 u< 0xfe)
            ecx_3 = &ecx_3[2]
            continue
        
        if (eax_2 == 0)
            break
        
        if (eax_2 u>= 0x61 && eax_2 u<= 0x7a)
            *ecx_3 = eax_2 - 0x20
        
        ecx_3 = &ecx_3[1]
    
    eax_1 = sub_4d0f10(&var_82c, &var_41c)
    
    if (eax_1 != 0)
        int32_t eax_3 = sub_4c3da0(eax_1, 4, arg1, 0x1e)
        
        if (eax_3 == 0)
            if (sub_4c3da0(eax_3, 4, arg2, 0x1e) == 0)
                int32_t eax_10
                eax_10.b = 1
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_10
            
            bool eax_11 = sub_4c3e90(arg2, arg1) != 0
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_11
        
        if (sub_4c3da0(eax_3, 4, arg2, 0x1e) == 0)
            bool eax_9 = sub_4c3e90(arg1, arg2) != 0
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_9
        
        char* var_838_1 = arg1
        void var_214
        int32_t eax_6
        int32_t ecx_8
        eax_6, ecx_8 = sub_4c3da0(sub_4c84d0(&var_214, "%s_swap"), 4, &var_214, 0x1e)
        
        if (eax_6 != 0)
            int32_t var_838_2 = ecx_8
            sub_4c3e40(sub_4c4170(eax_6, 4, &var_214, 0x1e), 4, &var_214, 0x1e)
        
        if (sub_4c3e90(arg1, &var_214).b != 0 && sub_4c3e90(arg2, arg1).b != 0)
            bool eax_8 = sub_4c3e90(&var_214, arg2) != 0
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_8

eax_1.b = 0
sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
