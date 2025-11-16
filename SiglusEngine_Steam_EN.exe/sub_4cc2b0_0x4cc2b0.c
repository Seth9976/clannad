// 函数: sub_4cc2b0
// 地址: 0x4cc2b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_310 = 0

if (sub_5f0cc8() == 0)
    uint32_t (* var_300_1)(char* arg1, int32_t arg2, uint32_t arg3, int32_t* arg4) = sub_4cc110
    int32_t (* var_2fc_1)(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4) = sub_4cc130
    int32_t eax_8 = arg3
    int32_t (* var_2f8_1)(int32_t* arg1) = sub_4cc1b0
    
    if (arg3 s< 0)
        eax_8 = 0
    
    void* (* var_2f4_1)(int32_t* arg1) = sub_4cc1d0
    arg4[1] = eax_8
    arg4[3] = 0
    *arg4 = arg9
    
    if (arg2 s> 0xffffffff)
        arg4[2] = arg2 + arg3
    else
        arg4[2] = 0xffffffff
    
    void var_2dc
    
    if (sub_401100(arg4, &var_2dc, 0, 0, var_300_1, arg9, arg3, var_310) s>= 0)
        if (sub_401cd0(&var_2dc) == 0)
            sub_401000(&var_2dc)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return 0
        
        __builtin_memcpy(arg5, &var_2dc, 0x2d0)
        *arg6 = arg9
        
        if (arg7 != 0)
            *arg7 = sub_402cb0(&var_2dc, 0xffffffff)
        
        if (arg8 != 0)
            *arg8 = sub_401ce0(&var_2dc, 0xffffffff)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

_fclose(arg9)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0
