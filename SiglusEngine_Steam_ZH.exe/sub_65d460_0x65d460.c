// 函数: sub_65d460
// 地址: 0x65d460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = sub_6980b0(data_bac45c, arg1)

if (result != 0xffffffff)
    void* edx_1 = data_bac45c
    
    if (arg2 u<= 0x3e7)
        *(edx_1 + 0x64) = result
        void* ecx_4 = result * 0x54 + *(edx_1 + 0x54)
        *(edx_1 + 0x60) = *(*(ecx_4 + 0x10) + (arg2 << 2)) + *(ecx_4 + 8)
    
    result.b = 1
else
    sub_676610(0)
    int32_t var_2c
    int16_t* eax_3 = sub_532b80(0, arg1, &var_2c, &data_af80c4)
    int32_t var_8_1 = 0
    int32_t ebx
    ebx.b = sub_684160(data_bac424, 9, eax_3).b
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
