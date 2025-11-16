// 函数: sub_65ea60
// 地址: 0x65ea60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx_4
void* edi_1

if (arg1 s>= 0)
    edi_1 = data_bac504
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x30c30c31, *(edi_1 + 0x1a0) - *(edi_1 + 0x19c))
    int32_t edx_2 = edx_1 s>> 5
    
    if ((edx_2 u>> 0x1f) + edx_2 s> arg1)
        sub_64e7b0(arg1 * 0xa8 + *(edi_1 + 0x19c), edi_1 + 0x10)
        edi_1 = data_bac504
    
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = muls.dp.d(0x30c30c31, *(edi_1 + 0x1a0) - *(edi_1 + 0x19c))
    edx_4 = edx_3 s>> 5

int32_t edx_6

if (arg1 s< 0 || (edx_4 u>> 0x1f) + edx_4 s<= arg1)
    edx_6 = 0
else
    int32_t eax_12 = *(edi_1 + 0x19c)
    int32_t ecx_6 = arg1 * 0xa8
    edx_6 = *(ecx_6 + eax_12 + 0x8c) - *(ecx_6 + eax_12 + 0x88)

int32_t var_40_2 = edx_6
int32_t var_44 = arg1
void var_5c
sub_52e820(&var_5c, 0xaf8244)
int32_t var_2c
int16_t* eax_13 = sub_6ae4c0(&var_2c, var_5c)
int32_t var_8_1 = 0
sub_684160(data_bac424, 5, eax_13)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
