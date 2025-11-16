// 函数: sub_436cd0
// 地址: 0x436cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char** eax_2
eax_2.b = *arg2
int32_t ebx_1

if (eax_2.b == 0x55)
    ebx_1 = 1
label_436d0a:
    int32_t eax_3
    int32_t* ecx_1
    eax_3, ecx_1 = sub_4d0fe0(eax_2.b, U":", &arg2[1], 1)
    
    if (eax_3 == 0)
        void var_3c
        void* var_4c_1 = &var_3c
        char* var_34 = &arg2[2]
        int32_t* var_30
        void* result = sub_4d1280(&var_30, &var_34, &arg2[2], &var_30, ecx_1)
        
        if (result == 0)
            arg3[1] = var_30
            int32_t var_2c
            arg3[2] = var_2c
            int32_t var_28
            arg3[3] = var_28
            int32_t var_24
            arg3[4] = var_24
            char* eax_6 = var_34
            *arg3 = ebx_1
            *arg4 = eax_6
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
else if (eax_2.b == 0x4e)
    ebx_1 = 0
    goto label_436d0a
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
