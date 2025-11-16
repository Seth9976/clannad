// 函数: sub_5d4590
// 地址: 0x5d4590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc042
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
void* edi = arg2

if (edi u< ecx)
    result = *arg1

int32_t* esi_3

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_2c_2 = ecx
        result = sub_5d4770(arg1)
    
    esi_3 = arg1[1]
    arg2 = esi_3
    int32_t* var_14_1 = esi_3
    int32_t var_8_2 = 1
else
    void* edi_1 = edi - result
    void* edx_1
    edx_1:result = muls.dp.d(0xd20d20d3, edi_1)
    
    if (ecx == arg1[2])
        int32_t var_2c_1 = ecx
        result = sub_5d4770(arg1)
    
    esi_3 = arg1[1]
    arg2 = esi_3
    int32_t* var_14 = esi_3
    edi = &(*arg1)[edi_1 s/ 0x138 * 0x4e]
    int32_t var_8_1 = 0

if (esi_3 != 0)
    *esi_3 = *edi
    esi_3[1] = *(edi + 4)
    result = sub_551c30(&esi_3[2], edi + 8)
    *(esi_3 + 0x128) = *(edi + 0x128)

arg1[1] = &arg1[1][0x4e]
fsbase->NtTib.ExceptionList = ExceptionList
return result
