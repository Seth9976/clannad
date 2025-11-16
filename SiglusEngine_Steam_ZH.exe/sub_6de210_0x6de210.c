// 函数: sub_6de210
// 地址: 0x6de210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc976
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t var_8_1 = 0
HANDLE edi = *arg1
HANDLE var_18 = edi

if (edi != 0)
    WaitForSingleObject(edi, 0xffffffff)

var_8_1.b = 1
sub_6de670(arg1, 0)

if (edi != 0)
    ReleaseSemaphore(edi, 1, nullptr)

BOOL hObject = *arg1

if (hObject != 0)
    hObject = CloseHandle(hObject)
    *arg1 = 0

int32_t var_8_2 = 0xffffffff
int32_t* esi_1 = arg1[0x49]

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    hObject = esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi_1 + 4))(eax_2)
        hObject = &esi_1[2]
        int32_t edi_1 = *hObject
        *hObject -= 1
        
        if (edi_1 == 1)
            hObject = (*(*esi_1 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
