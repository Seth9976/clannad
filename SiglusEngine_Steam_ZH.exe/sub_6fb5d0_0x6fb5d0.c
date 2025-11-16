// 函数: sub_6fb5d0
// 地址: 0x6fb5d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cdf00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(*arg1 + 0x110))(arg1, __security_cookie ^ &var_28)
void var_60
void var_48
int32_t var_18

if (eax_4 s< 0)
    void* var_24_1 = &var_48
    sub_52e820(&var_48, u"EndPass")
    int32_t var_10_1 = 0
    int16_t* eax_5
    int32_t edx
    eax_5, edx = sub_52e820(&var_60, 0xb07ed4)
    int32_t var_10_2 = 0xffffffff
    sub_6f1ae0(eax_5, edx, eax_4)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = var_18
    return eax_6

int32_t eax_8 = (*(*arg1 + 0x114))(arg1)

if (eax_8 s>= 0)
    eax_8.b = 1
    fsbase->NtTib.ExceptionList = var_18
    return eax_8

void* var_20 = &var_48
sub_52e820(&var_48, &data_b07f30)
int32_t var_10_3 = 1
int16_t* eax_9
int32_t edx_1
eax_9, edx_1 = sub_52e820(&var_60, 0xb07f0c)
int32_t var_10_4 = 0xffffffff
sub_6f1ae0(eax_9, edx_1, eax_8)
int32_t eax_10
eax_10.b = 0
fsbase->NtTib.ExceptionList = var_18
return eax_10
