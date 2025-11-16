// 函数: sub_62f1d0
// 地址: 0x62f1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1010
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_2c
int32_t var_18

if (Ordinal_DSOUND_3(sub_62f0a0, 0) s< 0)
    var_18 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, ")R(u", 0x19)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 5, &var_2c)
    int32_t var_8_2 = 0xffffffff
    
    if (var_18 u>= 8)
        j__free(var_2c.d)

char* result

if (sub_6e1c90(data_4ebe3ac) != 0)
    data_4ebe30c = CreateThread(nullptr, 0, sub_6dfb80, &data_4ebe300, 
        THREAD_CREATE_RUN_IMMEDIATELY, &data_4ebe310)
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, u"DirectSound", 0x18)
    int32_t var_8_4 = 3
    sub_684160(data_bac424, 5, &var_44)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 1
else
    int32_t var_5c
    int16_t* eax_5 = sub_6b9ed0(&var_5c)
    int32_t var_8_3 = 1
    int16_t* eax_6 = sub_548cb0(eax_5, u"DirectSound", &var_2c, eax_5)
    var_8_3.b = 2
    sub_684160(data_bac424, 2, eax_6)
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
