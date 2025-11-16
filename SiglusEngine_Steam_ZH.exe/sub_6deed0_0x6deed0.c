// 函数: sub_6deed0
// 地址: 0x6deed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc9d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE ebx = *arg1
HANDLE var_14_1 = ebx

if (ebx != 0)
    WaitForSingleObject(ebx, 0xffffffff)

int32_t var_8_1 = 0
char result

if (arg1[0x48] == 0 || arg1[1] == 0)
    result = 0
else if (arg1[0x13].b == 0)
    arg1[0x13].w = 0x101
    arg1[0x14] = GetTickCount()
    arg1[0x15] = arg2
    arg1[0x16] = 0xff
    sub_6df670(arg1)
    result = 1
else if (arg1[0x14] + arg1[0x15] - arg2 - GetTickCount() s<= 0)
    sub_6df670(arg1)
    result = 1
else
    arg1[0x13].w = 0x101
    arg1[0x14] = GetTickCount()
    arg1[0x15] = arg2
    arg1[0x16] = arg1[0x17]
    sub_6df670(arg1)
    result = 1

if (ebx != 0)
    ReleaseSemaphore(ebx, 1, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return result
