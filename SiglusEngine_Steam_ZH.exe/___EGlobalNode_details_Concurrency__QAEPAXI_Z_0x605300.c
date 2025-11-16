// 函数: ??_EGlobalNode@details@Concurrency@@QAEPAXI@Z
// 地址: 0x605300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE esi = arg2

if (esi s< 0)
    esi = nullptr
else if (esi s> 0xff)
    esi = 0xff

HANDLE edi = *arg1
arg2 = edi

if (edi != 0)
    WaitForSingleObject(edi, 0xffffffff)

int32_t var_8_1 = 0

if (esi s< 0)
    esi = nullptr
else if (esi s> 0xff)
    esi = 0xff

arg1[0x19].b = 0

if (esi s< 0)
    esi = nullptr
else if (esi s> 0xff)
    esi = 0xff

arg1[0x18] = esi
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6df670(arg1)

if (edi != 0)
    result = ReleaseSemaphore(edi, 1, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return result
