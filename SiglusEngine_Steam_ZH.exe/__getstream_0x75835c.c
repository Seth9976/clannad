// 函数: __getstream
// 地址: 0x75835c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x10
int32_t var_8 = 0xb490f0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb490f0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_34
void* const var_38_4 = &data_758368
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = nullptr
int32_t var_20 = 0
__lock(1)
int32_t var_8_1 = 0
int32_t edi = 0

while (true)
    int32_t var_24_1 = edi
    
    if (edi s>= data_4ece2e4)
        break
    
    void* eax_1 = *(data_4ece2e0 + (edi << 2))
    
    if (eax_1 == 0)
        int32_t eax_7 = sub_74cd17(0x38)
        *(data_4ece2e0 + (edi << 2)) = eax_7
        
        if (eax_7 != 0)
            sub_74d1a6(*(data_4ece2e0 + (edi << 2)) + 0x20, 0xfa0, 0)
            EnterCriticalSection(*(data_4ece2e0 + (edi << 2)) + 0x20)
            result = *(data_4ece2e0 + (edi << 2))
            int32_t* result_2 = result
            result[3] = 0
        
        break
    
    if ((*(eax_1 + 0xc) & 0x83) == 0 && (*(eax_1 + 0xc) & 0x8000) == 0)
        if (edi - 3 u<= 0x10 && __mtinitlocknum(edi + 0x10) == 0)
            break
        
        __lock_file2(edi, *(data_4ece2e0 + (edi << 2)))
        int32_t* result_3 = *(data_4ece2e0 + (edi << 2))
        
        if ((result_3[3].b & 0x83) == 0)
            result = result_3
            int32_t* result_1 = result
            break
        
        __unlock_file2(edi, result_3)
    
    edi += 1

if (result != 0)
    result[3] &= 0x8000
    result[1] = 0
    result[2] = 0
    *result = 0
    result[7] = 0
    result[4] = 0xffffffff

int32_t var_8_2 = 0xfffffffe
sub_758472()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_75846e
return result
