// 函数: sub_496f80
// 地址: 0x496f80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 u<= 0x100)
    int32_t var_23c_1 = arg1
    void var_218
    sub_4c84d0(&var_218, "save%03d.sav")
    FILETIME var_230
    FILETIME var_228
    FILETIME var_220
    result = sub_4c3ba0(&var_228, 4, &var_218, 0x1e, &var_228, &var_220, &var_230)
    
    if (result != 0)
        FILETIME* ecx_2
        int32_t edx_1
        ecx_2, edx_1 = sub_4c4f20(&var_218, arg2)
        FILETIME* var_23c_2 = &var_230
        sub_4c3ce0(&var_228, edx_1, &var_218, ecx_2, &var_228, &var_220)
        result = Sleep(0x32)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
