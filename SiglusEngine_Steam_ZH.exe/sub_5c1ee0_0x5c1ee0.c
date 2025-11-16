// 函数: sub_5c1ee0
// 地址: 0x5c1ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_Endwrite@?$basic_filebuf@_WU?$char_traits@_W@std@@@std@@IAE_NXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg1
int32_t eax_6

if (arg2 s>= 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(arg2)
    arg1 = (*(ebx + 0xa8) - *(ebx + 0xa4)) s>> 2
    eax_6 = (eax_4 + (edx_1 & 0x1f)) s>> 5

int32_t result

if (arg2 s< 0 || arg1 s<= eax_6)
    int32_t var_b8_1 = arg1
    int32_t var_a4
    void** eax_10 = sub_6ad9b0(&var_a4)
    int32_t var_8_1 = 0
    int16_t var_74
    int16_t* eax_11 = sub_5483b0(ebx + 4, &var_74)
    var_8_1.b = 1
    int16_t var_44
    int16_t* eax_12 = sub_548cb0(eax_11, 0xad85ec, &var_44, eax_11)
    var_8_1.b = 2
    int16_t var_2c
    int16_t* eax_13 = sub_532b80(eax_12, eax_12, &var_2c, u".b1[")
    var_8_1.b = 3
    int16_t var_5c
    int16_t* eax_14 = sub_5327a0(eax_13, eax_13, &var_5c, eax_10)
    var_8_1.b = 4
    int16_t var_8c
    int16_t* eax_15 = sub_532b80(eax_14, eax_14, &var_8c, 0xad85d0)
    var_8_1.b = 5
    sub_684160(data_bac424, 7, eax_15)
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74.d)
    
    result = 0
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    var_74 = 0
    int32_t var_90
    
    if (var_90 u>= 8)
        result = j__free(var_a4)
else
    char ecx_2 = arg2.b
    int32_t* esi = *(ebx + 0xa4) + (eax_6 << 2)
    int32_t edx_4 = 1 << ecx_2
    result = (arg3 << ecx_2 & edx_4) | (not.d(edx_4) & *esi)
    *esi = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
