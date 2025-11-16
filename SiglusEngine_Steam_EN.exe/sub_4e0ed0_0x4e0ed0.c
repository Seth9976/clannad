// 函数: sub_4e0ed0
// 地址: 0x4e0ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605900
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg2

if (ebx == 0 || arg3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

char* ecx = ebx
void* edx = &ecx[1]
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
int32_t var_3c = 0x640fa8
void* var_40 = ecx - edx + 1
char* esi = sub_5f1a14()
char* var_1c = esi
int16_t* ecx_2 = arg3
int32_t var_8_1 = 0
char* var_24 = esi
void* edx_1 = &ecx_2[1]
char* eax_4

do
    eax_4.w = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_4.w != 0)
int32_t var_3c_1 = 0x640fa8
int32_t ecx_5
ecx_5.b = mulu.dp.d(((ecx_2 - edx_1) s>> 1 << 1) + 2, 2) u>> 0x20 != 0
int32_t var_40_1 = neg.d(ecx_5) | ((((ecx_2 - edx_1) s>> 1 << 1) + 2) * 2)
char* edi_2 = sub_5f1a14()
char* var_18 = edi_2
var_8_1.b = 1
char* var_28 = edi_2
int32_t eax_12

if (esi != 0 && edi_2 != 0)
    sub_4d9360(_memcpy_s(esi, ecx - edx + 1, ebx, ecx - edx + 1))
    sub_4d9360(_memcpy_s(edi_2, ((ecx_2 - edx_1) s>> 1 << 1) + 2, arg3, 
        ((ecx_2 - edx_1) s>> 1 << 1) + 2))
    eax_12 = sub_4e70f0(arg1, &var_1c, &var_18)

int32_t eax_13

if (esi == 0 || edi_2 == 0 || eax_12 == 0)
    eax_13 = 0x8007000e
else
    esi = nullptr
    edi_2 = nullptr
    int32_t var_24_1 = 0
    eax_13 = 0

var_8_1.b = 0
int32_t result
result.b = eax_13 s>= 0
j__free(edi_2)
int32_t var_8_2 = 0xffffffff
j__free(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
