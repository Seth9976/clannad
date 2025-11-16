// 函数: sub_4fde20
// 地址: 0x4fde20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_2c[0x24]
var_2c[0] = 0
int32_t var_74
sub_4d1c30(eax_1, &data_12a705c, &var_74, 0x44)
int32_t eax_3 = data_1bfdd30 - 0x1e

if (eax_3 u> 1)
    data_1b8b06c = 1
else
    sub_4cfdf0(sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$$$$$$$", &data_1b8a720), 
        data_1b8a728, &var_2c, 0x24)
    int32_t ecx_3 = data_1b8a734
    int32_t var_44_1 = data_70300c - 1
    int32_t edx_2 = data_1b8a748
    bool cond:0_1 = data_1b8b06c != 0
    int32_t esi_1 = data_1b8a75c
    int32_t var_40_1 = data_7030dc - 1
    int32_t var_58_1 = data_1b8a784
    var_74 = data_1b8a798
    int32_t var_70_1 = data_1b8a7ac
    int32_t var_6c_1 = data_1b8a7c0
    int32_t var_68_1 = data_1b8a7d4
    int32_t var_64_1 = data_1b8a7e8
    int32_t var_60_1 = data_1b8a7fc
    int32_t var_5c_1 = data_1b8a810
    int32_t var_34_1 = data_1b8a824
    eax_3 = data_1b8a838
    int32_t var_4c_1 = 0
    int32_t var_48_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_54_1 = eax_3
    
    if (not(cond:0_1))
        if (data_1bfdd30 != 0x1e)
            void* eax_19 =
                sub_4fcca0(eax_3, &var_74, &var_2c, ecx_3, edx_2, esi_1, data_1b8a770, 0, 1)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_19
        
        void* eax_18 = sub_4fcca0(eax_3, &var_74, &var_2c, ecx_3, edx_2, esi_1, data_1b8a770, 1, 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_18

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_3
