// 函数: __fcloseall
// 地址: 0x75b4ea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0xb491d0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb491d0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_75b4f6
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0
int32_t var_20 = 0
__lock(1)
int32_t var_8_1 = 0
int32_t var_38 = 3
int32_t esi = 3

while (true)
    int32_t var_24_1 = esi
    
    if (esi s>= data_4ece2e4)
        break
    
    int32_t* eax_1 = *(data_4ece2e0 + (esi << 2))
    
    if (eax_1 != 0)
        if ((eax_1[3].b & 0x83) != 0 && _fclose(eax_1) != 0xffffffff)
            result += 1
            int32_t result_1 = result
        
        if (esi s>= 0x14)
            DeleteCriticalSection(*(data_4ece2e0 + (esi << 2)) + 0x20)
            _free(*(data_4ece2e0 + (esi << 2)))
            *(data_4ece2e0 + (esi << 2)) = 0
    
    esi += 1

int32_t var_8_2 = 0xfffffffe
$LN13()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_75b57a
return result
