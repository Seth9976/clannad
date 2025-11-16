// 函数: sub_6dee00
// 地址: 0x6dee00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc9d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE ebx = *arg1
HANDLE var_14 = ebx

if (ebx != 0)
    WaitForSingleObject(ebx, 0xffffffff)

int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1[0x48] == 0)
    result.b = 0
else
    int32_t* ecx = arg1[1]
    
    if (ecx == 0)
        result.b = 0
    else if ((*(*ecx + 0x30))(ecx, 0, 0, 1) s< 0)
        result.b = 0
    else
        arg1[0x13].b = 0
        arg1[0xe].b = 1
        arg1[8] = GetTickCount()
        *(arg1 + 0x39) = 0
        arg1[0xf] = GetTickCount()
        arg1[0x10] = arg2
        arg1[0x11] = 0
        *(arg1 + 0x3a) = 1
        sub_6df670(arg1)
        result.b = 1

if (ebx != 0)
    ReleaseSemaphore(ebx, 1, nullptr)
    result.b = result.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
