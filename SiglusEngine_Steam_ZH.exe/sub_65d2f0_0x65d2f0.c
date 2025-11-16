// 函数: sub_65d2f0
// 地址: 0x65d2f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4bf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_bac4d8
void** edi_1 = data_bac4d4 + 0x10
int32_t* eax_3

if (*(ebx + 0x8c) u< 8)
    eax_3 = ebx + 0x78
else
    eax_3 = *(ebx + 0x78)

int32_t var_58 = *(ebx + 0x88)
int32_t* result = sub_536340(edi_1, arg1, edi_1[4], eax_3)

if (result != 0)
    if (ebx + 0x78 != edi_1)
        sub_52e3c0(ebx + 0x78, edi_1, 0, 0xffffffff)
        ebx = data_bac4d8
    
    void** eax_5 = data_bac4d4 + 0x28
    
    if (ebx + 0x90 != eax_5)
        sub_52e3c0(ebx + 0x90, eax_5, 0, 0xffffffff)
    
    sub_697220()
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, u"SceneZH.pck", 0xb)
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    ebx.b = sub_697330(data_bac45c, &var_2c).b == 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)

if (result == 0 || ebx.b == 0)
    result.b = 1
else
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, 0xaf47ac, 0x1d)
    int32_t var_8_3 = 1
    ebx.b = sub_684160(data_bac424, 2, &var_44).b
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
