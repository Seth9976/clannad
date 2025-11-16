// 函数: sub_6fb4b0
// 地址: 0x6fb4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce0c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int32_t eax_2 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 0
int32_t var_24
int32_t* var_3c = &var_24
int32_t eax_3 = *arg1
var_24 = 0
int32_t eax_4 = (*(eax_3 + 0x104))(arg1, var_3c, var_38, eax_2)
void var_70
void var_58
int32_t var_20

if (eax_4 s< 0)
    void* var_2c_1 = &var_58
    sub_52e820(&var_58, u"Begin")
    int32_t var_18 = 0
    int16_t* eax_5
    int32_t edx
    eax_5, edx = sub_52e820(&var_70, 0xb07e68)
    int32_t var_18_1 = 0xffffffff
    sub_6f1ae0(eax_5, edx, eax_4)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = var_20
    return eax_6

int32_t eax_8 = (*(*arg1 + 0x108))(arg1, 0)

if (eax_8 s>= 0)
    eax_8.b = 1
    fsbase->NtTib.ExceptionList = var_20
    return eax_8

void* var_28 = &var_58
sub_52e820(&var_58, u"BeginPass")
int32_t var_18_2 = 1
int16_t* eax_9
int32_t edx_1
eax_9, edx_1 = sub_52e820(&var_70, 0xb08004)
int32_t var_18_3 = 0xffffffff
sub_6f1ae0(eax_9, edx_1, eax_8)
int32_t eax_10
eax_10.b = 0
fsbase->NtTib.ExceptionList = var_20
return eax_10
