// 函数: sub_605260
// 地址: 0x605260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
enum WAIT_EVENT eax_3 = arg2

if (eax_3 s> WAIT_OBJECT_0)
    int32_t* var_24_2 = arg1
    eax_3 = sub_6deed0(arg1, eax_3)
else
    HANDLE esi_1 = *arg1
    arg2 = esi_1
    
    if (esi_1 != 0)
        eax_3 = WaitForSingleObject(esi_1, 0xffffffff)
    
    int32_t var_8_1 = 0
    
    if (arg1[0x48] != 0)
        int32_t* ecx = arg1[1]
        
        if (ecx != 0)
            eax_3 = (*(*ecx + 0x48))(ecx)
    
    if (esi_1 != 0)
        BOOL eax_5 = ReleaseSemaphore(esi_1, 1, nullptr)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
