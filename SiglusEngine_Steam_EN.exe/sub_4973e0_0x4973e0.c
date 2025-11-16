// 函数: sub_4973e0
// 地址: 0x4973e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (arg1 u<= 0x100)
    int32_t var_420_1 = arg1
    void var_210
    sub_4c84d0(&var_210, "save%03d.sav")
    void* var_42c_1 = &var_210
    int32_t var_430_1 = 0x1350bb0
    char* var_434_1 = &data_1352000
    void fileName
    sub_4c84d0(&fileName, "%s\%s\%s")
    result = DeleteFileA(&fileName)
    *((arg1 << 2) + &data_2073cb8) = 0

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
