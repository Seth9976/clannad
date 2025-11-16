// 函数: sub_6fdd50
// 地址: 0x6fdd50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce4d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void*** var_14 = nullptr
void**** var_24 = &var_14
void* const var_28 = &data_b084bc
char var_2c = 0
char var_30 = 0
char var_34 = 0
int32_t var_38 = 0x80
int32_t eax_3 =
    sub_407987(data_4ebe4b0, 0xe, 0, 0x2bc, 0, 0, var_38.b, var_34, var_30, var_2c, var_28, var_24)

if (eax_3 s< 0)
    int16_t* eax_4
    int32_t edx
    eax_4, edx = sub_52e820(&var_38, u"D3DXCreateFont")
    sub_6f1a40(eax_4, edx, eax_3, var_38)
    int32_t eax_5
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

int32_t var_8_1 = 0
int32_t* eax_6 = data_b89654
void*** ecx_4 = var_14
int32_t var_18 = 0
data_b89654 = ecx_4

if (eax_6 != 0)
    ecx_4 = (*(*eax_6 + 8))(eax_6)

int32_t var_24_2 = var_18
int32_t edx_1 = data_b8965c
void*** var_28_1 = ecx_4
int32_t* ecx_6 = data_b89658
data_b89664 = 0xffffffff
sub_54d680(ecx_6, edx_1)
data_b8965c = data_b89658
int32_t eax_7
eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
