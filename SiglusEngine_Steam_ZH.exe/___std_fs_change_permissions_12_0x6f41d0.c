// 函数: ___std_fs_change_permissions@12
// 地址: 0x6f41d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcstombs_l_helper@@YAIPADPB_WIPAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
PSTR eax_3

if (arg2[5] u< 8)
    eax_3 = arg2
else
    eax_3 = *arg2

int32_t* var_54 = &var_34
int32_t var_58 = 0
int32_t var_30
int32_t* var_5c = &var_30
int32_t** var_60 = nullptr
int32_t var_64 = 0xffffffff
int32_t var_68 = 1
int32_t* var_6c = 1
int32_t var_70 = 0x15
int32_t var_74 = 0
int32_t var_78 = 0xffffffff
int32_t var_7c = 0xffffffff
int32_t var_80 = 0xffffffff
int32_t eax_4 = sub_4074fd(data_4ebe4b0, eax_3, var_80, var_7c, var_78, var_74, var_70, var_6c, 
    var_68, var_64, var_60, var_5c, var_58, var_54)
int32_t* result

if (eax_4 s>= 0)
    int32_t var_8_3 = 1
    result = *arg1
    int32_t var_38_1 = 0
    *arg1 = var_34
    
    if (result != 0)
        (*(*result + 8))(result)
    
    int32_t ecx_5 = var_30
    arg1[1] = ecx_5
    int32_t var_2c
    arg1[2] = var_2c
    arg1[5] = ecx_5
    arg1[6] = var_2c
    arg1[3] = 1
    
    if (ecx_5 s> 1)
        result = 1
        
        do
            result *= 2
        while (result s< ecx_5)
        
        arg1[3] = result
    
    arg1[4] = 1
    
    if (var_2c s> 1)
        result = 1
        
        do
            result *= 2
        while (result s< var_2c)
        
        arg1[4] = result
    
    arg1[9].b = 1
    result.b = 1
else
    int32_t* var_3c_1 = &var_68
    int32_t var_8_1 = 0
    int16_t* eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_532b80(sub_52e820(&var_68, u"CreateTexture"), arg2, &var_80, 0xb06eb0)
    int32_t var_8_2 = 0xffffffff
    sub_6f1ae0(eax_6, edx_1, eax_4, var_80)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
