// 函数: __wsetlocale
// 地址: 0x747b0f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2 = 0x14
int32_t var_8 = 0xb48ca0
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_7 = 0xb48ca0 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_5 = &data_747b1b
int32_t var_8_8 = 0xfffffffe
int32_t var_c = var_8_7
fsbase->NtTib.ExceptionList = &ExceptionList
void* result_1 = nullptr
int32_t var_20 = 0
void* result

if (arg1 u<= 5)
    uint32_t* eax_1 = __getptd()
    uint32_t* var_24_1 = eax_1
    sub_74e284()
    eax_1[0x1c] |= 0x10
    int32_t var_8_1 = 0
    int32_t* eax_2 = sub_74cccf(0xb8, 1)
    int32_t* var_28_1 = eax_2
    
    if (eax_2 != 0)
        __lock(0xc)
        int32_t var_8_2 = 1
        __copytlocinfo_nolock(eax_2, eax_1[0x1b])
        int32_t var_8_3 = 0
        $LN21()
        result_1 = __wsetlocale_nolock(eax_2, arg1, arg2)
        void* result_2 = result_1
        
        if (result_1 == 0)
            sub_74e1e4(eax_2)
            sub_74e08a(eax_2)
        else
            if (arg2 != 0 && _wcscmp(arg2, &data_b4c9c4) != 0)
                data_b94eec = 1
            
            __lock(0xc)
            int32_t var_8_4 = 2
            __updatetlocinfoEx_nolock(&eax_1[0x1b], eax_2)
            sub_74e1e4(eax_2)
            
            if ((eax_1[0x1c].b & 2) == 0 && (data_b4cbf0.b & 1) == 0)
                __updatetlocinfoEx_nolock(&data_b4cb2c, eax_1[0x1b])
                void* ecx_6 = data_b4cb2c
                data_b4c188 = *(ecx_6 + 0x84)
                data_b4cd44 = *(ecx_6 + 0x90)
                data_b4c9c0 = *(ecx_6 + 0x74)
            
            int32_t var_8_5 = 0
            $LN25()
    
    int32_t var_8_6 = 0xfffffffe
    sub_747c87(eax_1)
    result = result_1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_747c80
return result
