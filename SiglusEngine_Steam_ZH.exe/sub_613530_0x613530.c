// 函数: sub_613530
// 地址: 0x613530
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bef48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_24 = nullptr
int32_t var_20 = 0
int32_t esi_2 = (arg2 - arg1) s>> 4
int32_t var_1c = 0
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(esi_2 + 1)
int32_t var_18 = (eax_4 - edx) s>> 1
int32_t* var_14 = &var_24
int32_t var_8_1 = 0
void* result = sub_613610(&var_24, arg2, arg1, esi_2, &var_24, sub_6130f0)
int32_t var_8_2 = 0xffffffff
void* esi_3 = var_24

if (esi_3 != 0)
    if (esi_3 != var_1c)
        do
            sub_5b4e70(esi_3 + 4)
            esi_3 += 0x10
        while (esi_3 != var_1c)
        
        esi_3 = var_24
    
    result = j__free(esi_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result
