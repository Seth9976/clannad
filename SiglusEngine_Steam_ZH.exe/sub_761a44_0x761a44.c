// 函数: sub_761a44
// 地址: 0x761a44
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 0x20
int32_t var_8 = 0xb493a8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb493a8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_44 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48_7 = &data_761a50
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int16_t* esi = nullptr
char* edi = arg2
void* result

if (edi == 0)
label_761ae1:
    int16_t* eax_3 = __wsetlocale(arg1, esi)
    _free(esi)
    
    if (eax_3 == 0)
        result = nullptr
    else
        uint32_t* eax_4 = __getptd()
        int32_t* var_34 = eax_4[0x1b]
        int32_t var_30_1 = eax_4[0x1a]
        var_20 = 0
        int32_t eax_5 = sub_762842(&var_20, nullptr, 0, eax_3, 0, &var_34)
        
        if (eax_5 == 0)
        label_761b55:
            esi = sub_74cd17(var_20 + 4)
            
            if (esi == 0)
                result = nullptr
            else
                int32_t eax_10 = sub_762842(nullptr, &esi[2], var_20, eax_3, 0xffffffff, &var_34)
                
                if (eax_10 == 0)
                label_761ba0:
                    int32_t* esi_2 = var_34
                    __lock(0xc)
                    int32_t var_8_1 = 0
                    int32_t edi_2 = arg1 * 2
                    int32_t* ecx_6 = esi_2[edi_2 * 2 + 6]
                    
                    if (ecx_6 != 0)
                        bool cond:0_1 = *ecx_6 != 1
                        *ecx_6
                        *ecx_6 -= 1
                        
                        if (not(cond:0_1))
                            _free(esi_2[edi_2 * 2 + 6])
                    
                    if ((eax_4[0x1c].b & 2) == 0 && (data_b4cbf0.b & 1) == 0)
                        int32_t* eax_13 = esi_2[edi_2 * 2 + 6]
                        
                        if (eax_13 != 0)
                            int32_t ebx_1 = *eax_13
                            *eax_13 -= 1
                            
                            if (ebx_1 == 1)
                                _free(esi_2[edi_2 * 2 + 6])
                    
                    *esi = *esi_2
                    esi_2[edi_2 * 2 + 6] = esi
                    esi_2[edi_2 * 2 + 4] = &esi[2]
                    int32_t var_8_2 = 0xfffffffe
                    sub_761c1f()
                    result = &esi[2]
                else
                    if (eax_10 == 0x16 || eax_10 == 0x22)
                        int32_t var_58_6
                        __builtin_memset(&var_58_6, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    if (eax_10 == 0)
                        goto label_761ba0
                    
                    _free(esi)
                    result = nullptr
        else
            if (eax_5 == 0x16 || eax_5 == 0x22)
                int32_t var_58_4
                __builtin_memset(&var_58_4, 0, 0x14)
                __invoke_watson()
                noreturn
            
            if (eax_5 == 0)
                goto label_761b55
            
            result = nullptr
else
    int32_t eax = _mbstowcs_s(&var_20, nullptr, 0, edi, 0x7fffffff)
    
    if (eax != 0 && (eax == 0x16 || eax == 0x22))
        int32_t var_58_2
        __builtin_memset(&var_58_2, 0, 0x14)
        __invoke_watson()
        noreturn
    
    esi = sub_74cccf(var_20, 2)
    
    if (esi != 0)
        int32_t eax_2 = _mbstowcs_s(nullptr, esi, var_20, edi, 0xffffffff)
        
        if (eax_2 == 0)
            goto label_761ae1
        
        if (eax_2 == 0x16 || eax_2 == 0x22)
            int32_t var_58_3
            __builtin_memset(&var_58_3, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (eax_2 == 0)
            goto label_761ae1
        
        _free(esi)
        result = nullptr
    else
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_761c1b
return result
