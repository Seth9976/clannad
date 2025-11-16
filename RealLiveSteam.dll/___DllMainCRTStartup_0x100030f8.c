// 函数: ___DllMainCRTStartup
// 地址: 0x100030f8
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t __saved_ebp_3 = 0xc
int32_t var_8 = 0x10015eb8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp_4
int32_t __saved_ebp_1 = __saved_ebp_4
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_4 = 0x10015eb8 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_1 = &data_10003104
int32_t var_8_5 = 0xfffffffe
int32_t var_c_1 = var_8_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esp_1 = &var_30
int32_t eax = 1
int32_t result

if (arg2 != 0 || data_1001a6e0 != arg2)
    int32_t var_8_1 = 0
    
    if (arg2 == 1 || arg2 == 2)
        int32_t eax_1
        
        if (eax != 0)
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = arg2
            *(esp_1 - 0xc) = arg1
            eax_1 = sub_10002f63()
            int32_t var_20_2 = eax_1
        
        if (eax != 0 && eax_1 != 0)
            goto label_10003160
        
        int32_t var_8_3 = 0xfffffffe
        result = 0
    else
    label_10003160:
        *(esp_1 - 4) = arg3
        *(esp_1 - 8) = arg2
        *(esp_1 - 0xc) = arg1
        sub_10001cf0()
        int32_t result_1 = 1
        int32_t var_20_3 = 1
        
        if (arg2 == 0 || arg2 == 3)
            *(esp_1 - 4) = arg3
            *(esp_1 - 8) = arg2
            *(esp_1 - 0xc) = arg1
            int32_t eax_2 = sub_10002f63()
            int32_t eax_3 = neg.d(eax_2)
            result_1 = 1 & sbb.d(eax_3, eax_3, eax_2 != 0)
            int32_t result_2 = result_1
        
        int32_t var_8_2 = 0xfffffffe
        result = result_1
else
    result = 0

*(esp_1 - 4) = &data_10003205
fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
int32_t __saved_ebp_2 = *(esp_1 - 4)
return result
