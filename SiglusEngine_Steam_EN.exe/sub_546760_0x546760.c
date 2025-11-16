// 函数: sub_546760
// 地址: 0x546760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = data_20c1758
void string

if (esi != 0x64)
    int32_t edi_3 = esi s/ 0x64
    int32_t ecx_5 = esi s% 0x64 s/ 0xa
    int32_t esi_1 = esi s% 0xa
    int32_t var_80_2
    
    if (ecx_5 != 0)
        if (esi_1 != 0)
            int32_t var_78_4 = esi_1
            int32_t var_7c_3 = ecx_5
            var_80_2 = edi_3
            sub_4c84d0(&string, 0x62007c)
        else
            int32_t var_78_3 = ecx_5
            int32_t var_7c_2 = edi_3
            sub_4c84d0(&string, 0x620090)
    else if (esi_1 != 0)
        int32_t var_78_2 = esi_1
        int32_t var_7c_1 = 0
        var_80_2 = edi_3
        sub_4c84d0(&string, 0x62007c)
    else
        int32_t var_78_1 = edi_3
        sub_4c84d0(&string, "%!d ")
else
    sub_4cfd70(&string, 0x620068)

BOOL result = SetDlgItemTextA(data_20c1748, 0x4fbb, &string)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
