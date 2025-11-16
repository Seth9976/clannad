// 函数: sub_6b6e00
// 地址: 0x6b6e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c11c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
void* ebx = arg2

if (ebx u< ecx)
    result = *arg1

int32_t* edi_3

if (ebx u>= ecx || result u> ebx)
    if (ecx == arg1[2])
        int32_t var_28_2 = ecx
        result = sub_6b6ee0(arg1)
    
    edi_3 = arg1[1]
    arg2 = edi_3
    int32_t* var_14_2 = edi_3
    int32_t var_8_2 = 1
else
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = muls.dp.d(0x66666667, ebx - result)
    int32_t edx_2 = edx_1 s>> 4
    
    if (ecx == arg1[2])
        int32_t var_28_1 = ecx
        sub_6b6ee0(arg1)
    
    result = *arg1
    edi_3 = arg1[1]
    arg2 = edi_3
    int32_t* var_14_1 = edi_3
    ebx = &result[((edx_2 u>> 0x1f) + edx_2) * 0xa]
    int32_t var_8_1 = 0

if (edi_3 != 0)
    edi_3[5] = 7
    edi_3[4] = 0
    *edi_3 = 0
    sub_52e3c0(edi_3, ebx, 0, 0xffffffff)
    edi_3[6].b = *(ebx + 0x18)
    edi_3[8] = *(ebx + 0x20)
    result = *(ebx + 0x24)
    edi_3[9] = result

arg1[1] = &arg1[1][0xa]
fsbase->NtTib.ExceptionList = ExceptionList
return result
