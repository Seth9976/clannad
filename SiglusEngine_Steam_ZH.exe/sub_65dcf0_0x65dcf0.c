// 函数: sub_65dcf0
// 地址: 0x65dcf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4c3b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1b4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_630a10()
char var_1b8 = 1
*(data_bac4a0 + 0x248) = 0
sub_6304c0(var_1b8)
int32_t eax_6 = sub_6980b0(data_bac45c, data_bac4a0 + 0xac)
char result

if (eax_6 s>= 0)
    void* var_1b8_5 = 0xf
    int32_t var_18_1 = 7
    void* const var_1bc_1 = &data_af8144
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_1bc_1, var_1b8_5)
    int32_t var_8_2 = 1
    sub_684160(data_bac424, 5, &var_2c)
    int32_t var_8_3 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    void* edx_2 = data_bac45c
    var_2c = 0
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    int32_t edi_1 = *(data_bac4a0 + 0xc4)
    
    if (edi_1 u<= 0x3e7)
        *(edx_2 + 0x64) = eax_6
        void* ecx_6 = eax_6 * 0x54 + *(edx_2 + 0x54)
        *(edx_2 + 0x60) = *(ecx_6 + 8) + *(*(ecx_6 + 0x10) + (edi_1 << 2))
    
    sub_676610(1)
    int32_t var_19c
    sub_54aed0(&var_19c)
    int32_t var_8_4 = 2
    var_19c = 0x2d
    int32_t var_58_1 = 0
    void var_30c
    sub_54cf80(&var_30c, &var_19c)
    sub_6766e0()
    void var_110
    sub_54ae40(&var_110)
    result = 1
else
    sub_676610(0)
    int32_t var_44
    int16_t* eax_7 = sub_532b80(0, data_bac4a0 + 0xac, &var_44, &data_af80c4)
    int32_t var_8_1 = 0
    int32_t ebx
    ebx.b = sub_684160(data_bac424, 9, eax_7)
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
