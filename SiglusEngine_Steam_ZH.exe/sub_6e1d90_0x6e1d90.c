// 函数: sub_6e1d90
// 地址: 0x6e1d90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ccd48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_2c = zx.o(0)
var_2c:0xe.d = 0x10
var_2c:0xc.w = 4
int32_t* eax_3 = data_4ebe490
var_2c.d = 0x20001
var_2c:4.d = 0xac44
var_2c:8.d = 0x2b110
int32_t result = (*(*eax_3 + 0x38))(eax_3, &var_2c)

if (result s>= 0)
    data_4ebe494 = 2
    result.b = 1
    data_4ebe498 = 0x10
    data_4ebe49c = 0xac44
else
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, u"IDirectSoundBuffer::SetFormat", 0x1d)
    int32_t var_8_1 = 0
    sub_6b9c90(&var_44, result, 3, &var_44)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
