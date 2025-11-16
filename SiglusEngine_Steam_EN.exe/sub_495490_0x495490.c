// 函数: sub_495490
// 地址: 0x495490
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 u<= 0x100)
    if (*((arg1 << 2) + &data_2073cb8) != 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return arg1 * 0x7e8 + 0x1ff4cd0
    
    int32_t __saved_ebx_1 = arg1
    int32_t var_214 = 0
    BOOL var_218 = 0
    void var_210
    sub_4c84d0(&var_210, "save%03d.sav")
    sub_4c4a00(&var_218, &var_214, &var_210, &var_218, "AVG_SAVE_HEADER_TMP", 0, 0x7e8, 4, 0x1e)
    
    if (var_214 != 0)
        BOOL edi = var_218
        int32_t result = 0
        
        if (*edi == 0x7e8 && *(edi + 0x7e0) == 0x273990 && mods.dp.d(sx.q(*(edi + 4)), 0x64) == 2
                && sub_4d0f10(edi + 0x1c, &data_108f5cc) == 0)
            sub_495370(arg1)
            result = arg1 * 0x7e8 + 0x1ff4cd0
        
        sub_4d6c40(&var_214, &var_218)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
