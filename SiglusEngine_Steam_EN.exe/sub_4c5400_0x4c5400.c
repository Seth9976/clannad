// 函数: sub_4c5400
// 地址: 0x4c5400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t esi = arg6
char* result = sub_4c4a00(arg4, arg4, arg2, arg5, arg2, 0, esi, 5, arg7)

if (result == 0xffffffff)
    if (arg3 == result)
        result = nullptr
    else
        void var_418
        void* eax_4 = sub_4c51f0(&var_418, arg2, arg3, &var_418)
        
        if (eax_4 == 0)
            result = nullptr
        else
            void* var_430_2 = &var_418
            char* var_434_1 = &data_1352208
            void var_210
            char* eax_5 = sub_4c84d0(&var_210, "%s\%s")
            
            if (esi == 0)
                esi = *(eax_4 + 0x28)
            else if (esi u> *(eax_4 + 0x28))
                esi = *(eax_4 + 0x28)
            
            result = sub_4c4a00(eax_5, arg4, &var_210, arg5, arg2, *(eax_4 + 0x2c), esi, 
                0xffffffff, 0xffffffff)
            
            if (result == 0xffffffff)
                result = nullptr

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
