// 函数: sub_630dd0
// 地址: 0x630dd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c11c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD*** result = esi[1]
void* edi = arg2

if (edi u< result)
    arg1 = *esi

int32_t* ebx

if (edi u>= result || arg1 u> edi)
    if (result == esi[2])
        int32_t* var_28_2 = arg1
        result = sub_631320(esi)
    
    ebx = esi[1]
    arg2 = ebx
    int32_t* var_14_2 = ebx
    int32_t var_8_2 = 1
else
    if (result == esi[2])
        int32_t* var_28_1 = arg1
        result = sub_631320(esi)
    
    ebx = esi[1]
    edi = ((edi - arg1) & 0xfffffff0) + *esi
    arg2 = ebx
    int32_t* var_14_1 = ebx
    int32_t var_8_1 = 0

if (ebx != 0)
    sub_541980(ebx, edi)
    result = *(edi + 0xc)
    ebx[3] = result

esi[1] += 0x10
fsbase->NtTib.ExceptionList = ExceptionList
return result
