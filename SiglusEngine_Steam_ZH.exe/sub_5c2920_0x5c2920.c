// 函数: sub_5c2920
// 地址: 0x5c2920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@_W@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6

if (arg2 s>= 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(arg2)
    eax_6 = (eax_4 + (edx_1 & 0x1f)) s>> 5

int32_t result

if (arg2 s< 0 || (*(arg1 + 0xa8) - *(arg1 + 0xa4)) s>> 2 s<= eax_6)
    int32_t var_bc_1 = arg2
    int32_t var_a8
    void** eax_9 = sub_6ad9b0(&var_a8)
    int32_t var_8_1 = 0
    int16_t var_78
    int16_t* eax_10 = sub_5483b0(arg1 + 4, &var_78)
    var_8_1.b = 1
    int16_t var_48
    int16_t* eax_11 = sub_548cb0(eax_10, 0xad85ec, &var_48, eax_10)
    var_8_1.b = 2
    int16_t var_30
    int16_t* eax_12 = sub_532b80(eax_11, eax_11, &var_30, u".b1[")
    var_8_1.b = 3
    int16_t var_60
    int16_t* eax_13 = sub_5327a0(eax_12, eax_12, &var_60, eax_9)
    var_8_1.b = 4
    int16_t var_90
    int16_t* eax_14 = sub_532b80(eax_13, eax_13, &var_90, 0xad85d0)
    var_8_1.b = 5
    sub_684160(data_bac424, 7, eax_14)
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
    
    result = 0
else
    result = *(*(arg1 + 0xa4) + (eax_6 << 2)) s>> arg2.b & 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
