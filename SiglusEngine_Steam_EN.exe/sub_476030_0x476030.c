// 函数: sub_476030
// 地址: 0x476030
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg2 s< *(arg1 + 0x274))
    result = arg2 * 0x7d8 + *(arg1 + 0x27c)
    int32_t ecx = *(result + 0x190)
    
    if (ecx == 1 || ecx == 9 || ecx == 4 || ecx == 3 || ecx == 6)
        int32_t ecx_1 = *(result + 0x64)
        int32_t ebx_1 = *(result + 0x5c)
        int32_t esi_1 = *(result + 0x60)
        int32_t edi_1 = *(result + 0x68)
        
        if (ebx_1 s<= ecx_1 && esi_1 s<= edi_1)
            sub_475950(result, esi_1, ebx_1, ecx_1, edi_1)
            int32_t var_14 = 0xffff0000
            int32_t var_10_1 = 0xffff00ff
            int32_t var_c_1 = 0xff000000
            result = sub_4759c0(&var_14, esi_1, ebx_1, ecx_1, edi_1, &var_14)
            data_1b14a24 = 1

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
