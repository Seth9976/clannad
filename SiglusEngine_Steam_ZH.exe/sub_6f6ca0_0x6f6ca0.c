// 函数: sub_6f6ca0
// 地址: 0x6f6ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c22b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x18) = 1
int32_t* edx = data_4ebee38
int32_t eax_4 = (*(*edx + 0x38))(edx, *(arg1 + 4), 1, arg1 + 0x1c)

if (eax_4 s>= 0)
    eax_4.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

void var_3c
void* var_14 = &var_3c
sub_52e820(&var_3c, u"GetDeviceCaps")
int32_t var_8_1 = 0
void var_54
int16_t* eax_5
int32_t edx_1
eax_5, edx_1 = sub_52e820(&var_54, 0xb071f0)
int32_t var_8_2 = 0xffffffff
sub_6f1ae0(eax_5, edx_1, eax_4)
int32_t eax_6
eax_6.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_6
