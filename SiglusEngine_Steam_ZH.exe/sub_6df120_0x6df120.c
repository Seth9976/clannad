// 函数: sub_6df120
// 地址: 0x6df120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc9d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE edi = *arg1
HANDLE var_14_1 = edi

if (edi != 0)
    result = WaitForSingleObject(edi, 0xffffffff)

int32_t var_8_1 = 0
void* ecx = arg1[0x48]

if (ecx != 0 && arg1[1] != 0)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(ecx + 8))
    int32_t eax_6
    uint32_t edx_3
    edx_3:eax_6 = muls.dp.d(*(ecx + 0xc), arg2)
    result = sub_6df0b0(arg1, 
        __alldiv(eax_6, edx_3, 0x3e8, 0) * (((edx_1 & 7) + eax_4) s>> 3) * *(ecx + 4))

if (edi != 0)
    result = ReleaseSemaphore(edi, 1, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return result
