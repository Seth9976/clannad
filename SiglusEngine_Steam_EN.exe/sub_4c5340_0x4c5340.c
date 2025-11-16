// 函数: sub_4c5340
// 地址: 0x4c5340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* result = sub_4c4810(arg5, arg4, arg2, arg5, arg2, 5, arg6)

if (result == 0xffffffff)
    if (arg3 == result)
        result = nullptr
    else
        void var_210
        void* eax_4 = sub_4c51f0(&var_210, arg2, arg3, &var_210)
        
        if (eax_4 == 0)
            result = nullptr
        else
            void* var_42c_2 = &var_210
            char* var_430_1 = &data_1352208
            void var_418
            result = sub_4c4a00(sub_4c84d0(&var_418, "%s\%s"), arg4, &var_418, arg5, arg2, 
                *(eax_4 + 0x2c), *(eax_4 + 0x28), 0xffffffff, 0xffffffff)
            
            if (result == 0xffffffff)
                result = nullptr

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
