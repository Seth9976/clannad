// 函数: sub_699670
// 地址: 0x699670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9270
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0 || arg3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int16_t* ecx = arg2
int32_t ebx = 0
void* edx = &ecx[1]
int32_t* eax_3

do
    eax_3.w = *ecx
    ecx = &ecx[1]
while (eax_3.w != 0)
int32_t var_40 = 0xb94bc4
int32_t ecx_3
ecx_3.b = mulu.dp.d(((ecx - edx) s>> 1 << 1) + 2, 2) u>> 0x20 != 0
int32_t var_44 = neg.d(ecx_3) | ((((ecx - edx) s>> 1 << 1) + 2) * 2)
char* edi = sub_746f19()
char* var_20 = edi
int16_t* ecx_6 = arg3
int32_t var_8_1 = 0
char* var_28 = edi
void* edx_1 = &ecx_6[1]
char* eax_6

do
    eax_6.w = *ecx_6
    ecx_6 = &ecx_6[1]
while (eax_6.w != 0)
int32_t var_40_1 = 0xb94bc4
int32_t ecx_9
ecx_9.b = mulu.dp.d(((ecx_6 - edx_1) s>> 1 << 1) + 2, 2) u>> 0x20 != 0
int32_t var_44_1 = neg.d(ecx_9) | ((((ecx_6 - edx_1) s>> 1 << 1) + 2) * 2)
char* esi_2 = sub_746f19()
char* var_1c = esi_2
var_8_1.b = 1
char* var_2c = esi_2
int32_t eax_14

if (edi != 0 && esi_2 != 0)
    sub_5c49b0(_memcpy_s(edi, ((ecx - edx) s>> 1 << 1) + 2, arg2, ((ecx - edx) s>> 1 << 1) + 2))
    sub_5c49b0(_memcpy_s(esi_2, ((ecx_6 - edx_1) s>> 1 << 1) + 2, arg3, 
        ((ecx_6 - edx_1) s>> 1 << 1) + 2))
    eax_14 = sub_69cbd0(arg1, &var_20, &var_1c)

if (edi == 0 || esi_2 == 0 || eax_14 == 0)
    ebx = 0x8007000e
else
    edi = nullptr
    esi_2 = nullptr

j__free(esi_2)
j__free(edi)
int32_t result
result.b = ebx s>= 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
