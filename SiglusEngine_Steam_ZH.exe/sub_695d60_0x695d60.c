// 函数: sub_695d60
// 地址: 0x695d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg2 s< 0 || arg2 s> 0xff)
    void* var_bc_1 = arg1
    int32_t var_a8
    int16_t* eax_3 = sub_6ad9b0(&var_a8)
    int32_t var_8_1 = 0
    int16_t var_78
    int16_t* eax_4 = sub_6ad9b0(&var_78)
    var_8_1.b = 1
    int16_t var_48
    int16_t* eax_5 = sub_548cb0(eax_4, "$PL0pu8^g0Y0", &var_48, eax_4)
    var_8_1.b = 2
    int16_t var_30
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_30, 0xafb9e4)
    var_8_1.b = 3
    int16_t var_60
    int16_t* eax_7 = sub_5327a0(eax_6, eax_6, &var_60, eax_3)
    var_8_1.b = 4
    var_8_1.b = 5
    int16_t var_90
    sub_696370(arg1, sub_532b80(eax_7, eax_7, &var_90, 0xafb99c))
    int32_t var_7c
    
    if (var_7c u>= 8)
        j__free(var_90.d)
    
    int32_t var_7c_1 = 7
    int32_t var_80_1 = 0
    var_90 = 0
    int32_t var_4c
    
    if (var_4c u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    var_60 = 0
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    int32_t var_64
    
    if (var_64 u>= 8)
        j__free(var_78.d)
    
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    var_78 = 0
    int32_t var_94
    
    if (var_94 u>= 8)
        j__free(var_a8)
    
    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
