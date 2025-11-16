// 函数: sub_451d80
// 地址: 0x451d80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (data_1374758 != 0)
    char* __saved_esi_1 = &data_1af17d0
    void var_6c
    sub_4c84d0(&var_6c, "%s.sav")
    BOOL var_74 = 0
    int32_t var_70 = 0
    sub_4c4810(&var_74, &var_70, &var_6c, &var_74, "LOAD", 4, 0x1e)
    
    if (var_70 != 0)
        BOOL esi_1 = var_74
        
        if (sub_4d0f10(esi_1 + 0x18, "AVG_SYSTEM_SAVE") == 0 && *esi_1 == 0x612c)
            int32_t eax_4
            int32_t edx_2
            edx_2:eax_4 = sx.q(*(esi_1 + 4))
            
            if (mods.dp.d(edx_2:eax_4, 0x64) == 2)
                sub_4d1c30(divs.dp.d(edx_2:eax_4, 0x64), esi_1, &data_1313110, 0x612c)
                sub_4d72b0(0x13131a8)
        
        sub_4d6c40(&var_70, &var_74)
    
    sub_4480d0()
    sub_448150()
    result = sub_4481e0()

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
