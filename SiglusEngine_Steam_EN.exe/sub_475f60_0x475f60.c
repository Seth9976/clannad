// 函数: sub_475f60
// 地址: 0x475f60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t i = 0

if (data_7031bc s> 0)
    void* esi_1 = &data_98bf80
    void* ebx_1 = &data_72d6bc
    
    do
        result = *ebx_1
        int32_t ecx
        
        if (result == 1 || result == 9 || result == 4 || result == 3 || result == 6)
            ecx = *(esi_1 - 4)
            int32_t edx_2 = *esi_1
            result = *(esi_1 + 8)
            
            if (ecx s<= *(esi_1 + 4) && edx_2 s<= result)
                int32_t var_14 = 0xffffff
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0xffffff00
                result, ecx = sub_4759c0(result, edx_2, *(esi_1 - 4), *(esi_1 + 4), result, &var_14)
                data_1b14a24 = 1
        else if (result == 8)
            result, ecx = sub_475e10(ecx, esi_1 - 0x7c)
        i += 1
        ebx_1 += 0xca0
        esi_1 += 0xf40
    while (i s< data_7031bc)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
