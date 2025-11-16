// 函数: sub_45b580
// 地址: 0x45b580
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_618
int32_t eax_1 = __security_cookie ^ &var_618
char* var_61c = &data_130038c
void* var_620 = &data_13517e0
int32_t eax_3
int32_t ecx_1
eax_3, ecx_1 = sub_4c3da0(sub_4c84d0(&var_618, "%s\%s"), 0xffffffff, &var_618, 0xffffffff)

if (eax_3 == 1)
    int32_t var_61c_1 = 0
    sub_4d7460(eax_3, &data_13517e0, ecx_1, &data_130038c)
    sub_5f02dd(eax_1 ^ &var_618)
    return 1

char* var_61c_2 = &data_130038c
char* var_620_1 = &data_1352208
int32_t eax_6
int32_t ecx_5
eax_6, ecx_5 = sub_4c3da0(sub_4c84d0(&var_618, "%s\%s"), 0xffffffff, &var_618, 0xffffffff)

if (eax_6 == 1)
    int32_t var_61c_3 = 0
    sub_4d7460(eax_6, &data_1352208, ecx_5, &data_130038c)
    sub_5f02dd(eax_1 ^ &var_618)
    return 1

char* var_61c_4 = &data_130038c
void* var_620_2 = &data_13517e0
sub_4c84d0(&var_618, "%s\%s")
void* var_62c = &var_618
void text
sub_4c84d0(&text, 0x619818)
MessageBoxA(data_7027bc, &text, 0x6197d8, MB_OK)
sub_5f02dd(eax_1 ^ &var_618)
return 0
