// 函数: sub_6bb8e0
// 地址: 0x6bb8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cba58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t var_44
sub_6bb6f0(arg1, &var_44, arg3, &var_2c, arg4, arg5, arg6, arg7)
var_8_1.b = 2

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_34
int128_t* result
int32_t var_30
int128_t* result_1

if (var_34 != 0)
    int32_t* var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    var_8_1.b = 3
    sub_6bb040(&var_44, &var_20)
    int32_t* edi_1 = var_20
    
    if (((var_1c_1 - edi_1) & 0xfffffffc) != 0x10)
        result_1 = arg2
        *result_1 = arg8
        
        if (edi_1 != 0)
            j__free(edi_1)
        
        goto label_6bb996
    
    int32_t esi_1 = edi_1[3]
    int32_t edx_1 = edi_1[2]
    int32_t ecx_2 = edi_1[1]
    *arg2 = *edi_1
    *(arg2 + 4) = ecx_2
    *(arg2 + 8) = edx_1
    *(arg2 + 0xc) = esi_1
    j__free(edi_1)
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result = arg2
else
    result_1 = arg2
    *result_1 = arg8
label_6bb996:
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result = result_1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
