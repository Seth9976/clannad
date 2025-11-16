// 函数: __rmtmp
// 地址: 0x766b8e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0xb49428
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0xb49428 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_2 = &data_766b9a
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t var_20 = 0
__lock(1)
int32_t var_8_1 = 0
int32_t esi = 0

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_4ece2e4)
        break
    
    void* eax_1 = *(data_4ece2e0 + (esi << 2))
    
    if (eax_1 != 0 && (*(eax_1 + 0xc) & 0x83) != 0)
        __lock_file2(esi, eax_1)
        int32_t var_8_2 = 1
        int32_t* eax_3 = *(data_4ece2e0 + (esi << 2))
        
        if ((eax_3[3].b & 0x83) != 0 && eax_3[7] != 0)
            __fclose_nolock(eax_3)
            result += 1
            int32_t result_1 = result
        
        int32_t var_8_3 = 0
        $LN18(esi)
    
    esi += 1

int32_t var_8_4 = 0xfffffffe
sub_766c32()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_766c2e
return result
