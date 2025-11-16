// 函数: sub_45b470
// 地址: 0x45b470
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_618
int32_t eax_1 = __security_cookie ^ &var_618
PSTR lpText

if (data_130038c != 0)
    char* var_61c_1 = &data_130038c
    void* var_620_1 = &data_13517e0
    int32_t eax_3 = sub_4c3da0(sub_4c84d0(&var_618, "%s\%s"), 0xffffffff, &var_618, 0xffffffff)
    int32_t eax_6
    
    if (eax_3 != 1)
        char* var_61c_2 = &data_130038c
        char* var_620_2 = &data_1352208
        eax_6 = sub_4c3da0(sub_4c84d0(&var_618, "%s\%s"), 0xffffffff, &var_618, 0xffffffff)
    
    if (eax_3 == 1 || eax_6 == 1)
        sub_5f02dd(eax_1 ^ &var_618)
        return 1
    
    char* var_61c_3 = &data_130038c
    void* var_620_3 = &data_13517e0
    sub_4c84d0(&var_618, "%s\%s")
    void* var_62c_1 = &var_618
    void var_410
    sub_4c84d0(&var_410, 0x619818)
    int32_t var_61c_4 = 0
    int32_t var_620_4 = 0x6197d8
    lpText = &var_410
else
    int32_t var_61c = 0
    int32_t var_620 = 0x6197d8
    lpText = 0x6197f4

MessageBoxA(data_7027bc, lpText, 0x6197d8, MB_OK)
sub_5f02dd(eax_1 ^ &var_618)
return 0
