// 函数: sub_6fde50
// 地址: 0x6fde50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce508
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = data_4ebe4b0
int32_t ebx = arg2
int32_t var_2c = 0
int32_t var_14
int32_t* var_30 = &var_14
int32_t var_34 = 1
int32_t var_38 = 0x65
int32_t var_3c = 0
var_14 = 0
int32_t esi = *edx
int32_t var_40 = ebx * 2
int32_t eax_4 = (*(esi + 0x6c))(edx, var_40, var_3c, var_38, var_34, var_30, var_2c)

if (eax_4 s< 0)
    int16_t* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_52e820(&var_40, u"CreateIndexBuffer")
    sub_6f1a40(eax_5, edx_1, eax_4, var_40)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

int32_t var_8_1 = 0
int32_t* eax_7 = *arg1
arg2 = 0
*arg1 = var_14

if (eax_7 != 0)
    (*(*eax_7 + 8))(eax_7)

arg1[1] = ebx
eax_7.b = 1
arg1[2] = 0
arg1[3] = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
