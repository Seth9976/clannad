// 函数: sub_65eb80
// 地址: 0x65eb80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4d13
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result = sub_650eb0(arg1)

if (result != 0)
    void var_d4
    sub_633790(&var_d4)
    int32_t var_8_1 = 0
    sub_630a10()
    
    if (arg1 s>= 0)
        void* edi_1 = data_bac504
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = muls.dp.d(0x30c30c31, *(edi_1 + 0x1a0) - *(edi_1 + 0x19c))
        int32_t edx_2 = edx_1 s>> 5
        
        if ((edx_2 u>> 0x1f) + edx_2 s> arg1)
            sub_64e7b0(&var_d4, arg1 * 0xa8 + *(edi_1 + 0x19c))
    
    *(data_bac4a0 + 0x248) = 0
    sub_6304c0(0)
    sub_64e7b0(data_bac504 + 0x10, &var_d4)
    sub_6594f0()
    sub_5ce5a0()
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf8268, 0x10)
    var_8_1.b = 1
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    sub_634480(&var_d4)
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
