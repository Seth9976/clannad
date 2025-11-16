// 函数: sub_453310
// 地址: 0x453310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (data_13339d8 != 0)
    char var_224
    sub_4cfd70(&var_224, &data_13339d8)
    char* esi_1 = &var_224
    int32_t eax_2 = sub_4d1610(&var_224, 0x5c)
    void var_223
    
    if (eax_2 != 0xffffffff)
        esi_1 = &var_223 + eax_2
    int32_t eax_3 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_3 == 0xffffffff)
        eax_3 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_230_1 = &data_61736c
    sub_4c84d0(&esi_1[eax_3], ".%s")
    
    for (int32_t i = 0; i s< 0x1a; i += 1)
        int32_t var_230_2 = i + 0x61
        void rootPathName
        sub_4c84d0(&rootPathName, "%c:\")
        
        if (GetDriveTypeA(&rootPathName) == 5 && sub_4c3b10(i) != 0)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return i

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0xffffffff
