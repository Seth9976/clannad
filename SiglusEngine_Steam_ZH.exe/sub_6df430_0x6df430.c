// 函数: sub_6df430
// 地址: 0x6df430
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

int32_t ecx = arg2
int32_t var_8_1 = 0

if (ecx u<= 7)
    void* esi_1 = arg3
    
    if (esi_1 s< 0)
        esi_1 = nullptr
    else if (esi_1 s> 0xff)
        esi_1 = 0xff
    
    void* eax_4 = &arg1[ecx * 6]
    *(eax_4 + 0x64) = 0
    
    if (arg4 s> 0)
        *(eax_4 + 0x64) = 1
        uint32_t eax_5 = GetTickCount()
        ecx = arg2
        *(eax_4 + 0x68) = eax_5
        *(eax_4 + 0x6c) = eax_5 + arg4
        *(eax_4 + 0x70) = arg1[ecx * 6 + 0x18]
        *(eax_4 + 0x74) = esi_1
    
    if (esi_1 s< 0)
        esi_1 = nullptr
    else if (esi_1 s> 0xff)
        esi_1 = 0xff
    
    arg1[ecx * 6 + 0x18] = esi_1
    result = sub_6df670(arg1)

if (edi != 0)
    result = ReleaseSemaphore(edi, 1, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return result
