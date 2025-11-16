// 函数: sub_4a3f10
// 地址: 0x4a3f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL result = sub_4c3da0(eax_1, 4, "MoviePlayCheck.sav", 0x1e)

if (result == 1)
    int32_t esi_1 = 0
    BOOL var_218 = 0
    int32_t var_21c = 0
    int32_t eax_3 = sub_4c4810(&var_218, &var_21c, "MoviePlayCheck.sav", &var_218, 
        "MoviePlayCheckFile", 4, 0x1e)
    BOOL ecx_1 = var_218
    
    if (ecx_1 != 0 && eax_3 s>= 4)
        esi_1 = *ecx_1
    
    result = sub_4d6c40(&var_21c, &var_218)
    
    if (esi_1 == 0)
        char const* const var_228_1 = "MoviePlayCheck.sav"
        int32_t var_22c_1 = 0x1350bb0
        char* var_230_1 = &data_1352000
        void fileName
        sub_4c84d0(&fileName, "%s\%s\%s")
        result = DeleteFileA(&fileName)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
