// 函数: sub_6de670
// 地址: 0x6de670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE esi

if (arg2 == 0)
    esi = nullptr
else
    esi = *arg1

arg2.d = esi

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

int32_t var_8_1 = 0
sub_6de780(arg1)
arg1[0x48] = 0
int32_t* edi = arg1[0x49]
arg1[0x49] = 0

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

BOOL result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
