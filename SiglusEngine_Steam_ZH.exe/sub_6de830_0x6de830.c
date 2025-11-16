// 函数: sub_6de830
// 地址: 0x6de830
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc9b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
HANDLE esi

if (arg2 == 0)
    esi = nullptr
else
    esi = *arg1

HANDLE var_18 = esi

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

var_8_1.b = 1
sub_6de780(arg1)
void* ecx_1 = &arg1[0x48]
*ecx_1 = 0
int32_t* edi = *(ecx_1 + 4)
arg2.d = ecx_1
*(ecx_1 + 4) = 0

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        bool cond:2_1 = edi[2] != 1
        edi[2]
        edi[2] -= 1
        
        if (not(cond:2_1))
            (*(*edi + 8))()
    
    ecx_1 = arg2.d

BOOL result_1
BOOL result = result_1
char ebx_1

if (result == 0 || *(result + 0x10) s<= 0)
    ebx_1 = 0
else
    sub_5b17d0(ecx_1, &result_1)
    
    if (sub_6de530(arg1).b == 0)
        ebx_1 = 0
    else
        ebx_1 = 1

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

int32_t var_8_2 = 0xffffffff

if (arg3 != 0)
    bool cond:3_1 = arg3[1] != 1
    arg3[1]
    arg3[1] -= 1
    
    if (not(cond:3_1))
        (*(*arg3 + 4))(eax_2)
        int32_t edi_1 = arg3[2]
        arg3[2] -= 1
        
        if (edi_1 == 1)
            (*(*arg3 + 8))()

result.b = ebx_1
fsbase->NtTib.ExceptionList = ExceptionList
return result
