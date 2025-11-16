// 函数: sub_5bc390
// 地址: 0x5bc390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi_1

if (arg2 == 0)
    edi_1 = nullptr
else
    edi_1 = arg2 + 4

arg2 = &arg1[1]
sub_54ace0(&arg1[1], edi_1)
int32_t var_8_1 = 0
sub_5bc4d0(&arg1[0x29], edi_1 + 0xa0)
arg1[0x2c] = *(edi_1 + 0xac)
int32_t eax_4
eax_4.b = *(edi_1 + 0xb0)
arg1[0x2d].b = eax_4.b
*arg1 = &C_elm_list_ex<class C_elm_btn_select_item>::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
