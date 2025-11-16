// 函数: sub_6f13a0
// 地址: 0x6f13a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd3a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDirect3D9 eax_3 = Direct3DCreate9(0x1f)
int32_t* result

if (eax_3 != 0)
    int32_t var_8_2 = 2
    result = data_4ebee38
    int32_t var_48_1 = 0
    data_4ebee38 = eax_3
    
    if (result != 0)
        (*(*result + 8))(result)
    
    result.b = 1
else
    int32_t var_30_1 = 7
    struct IDirect3D9 var_34_1 = eax_3
    int16_t var_44 = eax_3.vtable.w
    sub_52e720(&var_44, u"Direct3DCreate9", 0xf)
    int32_t var_8_1 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"Direct3D", 0x97)
    var_8_1.b = 1
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
