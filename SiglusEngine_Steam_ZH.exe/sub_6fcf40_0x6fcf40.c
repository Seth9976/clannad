// 函数: sub_6fcf40
// 地址: 0x6fcf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce3b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_4
int32_t ebx = arg_4
int32_t* eax_3 = data_4ebe4b0
int32_t var_2c = 0
int32_t* var_30 = &arg_4
int32_t var_34 = 2
arg_4 = 0
int32_t edx = *eax_3
int32_t var_3c = 0x208
int32_t var_40 = ebx * arg3
int32_t eax_4 = (*(edx + 0x68))(eax_3, var_40, var_3c, arg2, var_34, var_30, var_2c)

if (eax_4 s< 0)
    int16_t* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_52e820(&var_40, &NT3::C_d3d_render_interface::`vftable'.vFunc_24)
    sub_6f1a40(eax_5, edx_1, eax_4, var_40)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

int32_t var_8_1 = 0
int32_t* eax_7 = *arg1
int32_t var_14 = 0
*arg1 = arg_4

if (eax_7 != 0)
    (*(*eax_7 + 8))(eax_7)

arg1[2] = arg2
arg1[3] = arg3
int32_t eax_9
eax_9.b = 1
arg1[1] = ebx
arg1[4] = 0x208
arg1[5] = 2
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
