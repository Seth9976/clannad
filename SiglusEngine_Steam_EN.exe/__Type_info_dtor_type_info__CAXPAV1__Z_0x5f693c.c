// 函数: ?_Type_info_dtor@type_info@@CAXPAV1@@Z
// 地址: 0x5f693c
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0xc
int32_t var_8 = 0x62a8e0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0x62a8e0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_5f6948
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
__lock(0xe)
int32_t var_8_1 = 0
int32_t eax = *(arg1 + 4)

if (eax != 0)
    void* ecx_1 = data_641740
    void* edx_1 = &data_64173c
    
    while (true)
        void* var_20_1 = ecx_1
        
        if (ecx_1 == 0)
            break
        
        if (*ecx_1 == eax)
            *(edx_1 + 4) = *(ecx_1 + 4)
            _free(ecx_1)
            break
        
        edx_1 = ecx_1
    
    _free(*(arg1 + 4))
    *(arg1 + 4) = 0

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN10()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_5f699f
return result
