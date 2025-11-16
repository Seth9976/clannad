// 函数: sub_498df0
// 地址: 0x498df0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_210

if (data_1af44cc != 0)
    if (data_1af44c8 != 0)
        char const* const var_41c_2 = "KINETICDATA.PAK"
    else
        void* var_41c_1 = &data_108fa8c
    
    void* var_420_1 = &data_13517e0
    sub_4c84d0(&var_210, "%s\%s")
else
    void* var_41c = &data_108fa8c
    int32_t var_420 = 0x134fd78
    char* var_424_1 = &data_1352208
    sub_4c84d0(&var_210, "%s\%s\%s")

void fileName
sub_4cfd70(&fileName, &var_210)
HANDLE result = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
