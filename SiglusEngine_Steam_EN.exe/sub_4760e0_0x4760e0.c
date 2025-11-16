// 函数: sub_4760e0
// 地址: 0x4760e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t i_1 = *(arg2 + 0x274)

if (i_1 s> 0)
    int32_t* esi_1 = *(arg2 + 0x27c) + 0x190
    int32_t i
    
    do
        result = *esi_1
        
        if (result == 1 || result == 9 || result == 4 || result == 3 || result == 6)
            int32_t ecx_1 = esi_1[-0x4d]
            int32_t edx = esi_1[-0x4b]
            result = esi_1[-0x4a]
            int32_t ebx_1 = esi_1[-0x4c]
            
            if (ecx_1 s<= edx && ebx_1 s<= result)
                sub_475950(result, ebx_1, ecx_1, edx, result)
                int32_t var_14 = 0xffff0000
                int32_t var_10_1 = 0xffff00ff
                int32_t var_c_1 = 0xff000000
                result = sub_4759c0(&var_14, ebx_1, ecx_1, edx, result, &var_14)
                data_1b14a24 = 1
        
        esi_1 = &esi_1[0x1f6]
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
