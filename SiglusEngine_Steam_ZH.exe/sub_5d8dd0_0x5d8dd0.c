// 函数: sub_5d8dd0
// 地址: 0x5d8dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc2c9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int16_t* var_3c = arg2
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_8_1 = 0
int32_t i = 0
int32_t var_38_1 = 1
int32_t var_30
int32_t var_1c

if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
    int32_t edi_1 = 0
    
    do
        int32_t var_8_2 = 1
        sub_532870(arg2, sub_59d6b0(*(arg1 + 0x228) + edi_1, &var_30), 0, 0xffffffff)
        var_8_2.b = 0
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        edi_1 += 0x1c0
        i += 1
    while (i s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)

int32_t var_8_3 = 2
sub_532870(arg2, sub_5e1020(arg1 + 0x1928, &var_30), 0, 0xffffffff)

if (var_1c u>= 8)
    j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
