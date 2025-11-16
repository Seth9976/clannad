// 函数: sub_613fb0
// 地址: 0x613fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf048
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t var_8_1 = 0
int32_t var_28 = arg7
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = arg7
sub_6147d0(arg7, arg2, arg3, arg4, 0, 0)
int32_t var_8_2 = 0xffffffff
void* esi_1 = arg5

if (esi_1 != 0)
    if (esi_1 != arg6)
        do
            sub_5b4e70(esi_1 + 4)
            esi_1 += 0x10
        while (esi_1 != arg6)
        
        esi_1 = arg5
    
    j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
