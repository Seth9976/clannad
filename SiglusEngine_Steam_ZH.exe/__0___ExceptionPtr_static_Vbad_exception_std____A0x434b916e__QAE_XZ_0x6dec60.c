// 函数: ??0?$_ExceptionPtr_static@Vbad_exception@std@@@?A0x434b916e@@QAE@XZ
// 地址: 0x6dec60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc9d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HANDLE edi = *arg1
HANDLE var_14_1 = edi

if (edi != 0)
    WaitForSingleObject(edi, 0xffffffff)

int32_t var_8_1 = 0
int32_t ebx

if (arg1[0x48] == 0)
    ebx.b = 0
else
    int32_t* ecx = arg1[1]
    
    if (ecx == 0)
        ebx.b = 0
    else
        if (arg1[0xb] s< arg1[0xc])
            goto label_6decce
        
        if (arg1[0xa].b == 0)
            ebx.b = 0
        else
            arg1[0xb] = arg1[0xd]
        label_6decce:
            
            if ((*(*ecx + 0x30))(ecx, 0, 0, 1) s< 0)
                ebx.b = 0
            else
                arg1[0xe].b = 1
                arg1[8] = GetTickCount()
                ebx.b = 1
                *(arg1 + 0x39) = 0
                arg1[0xf] = 0
                arg1[0x10] = 0
                arg1[0x11] = 0
                arg1[0x12] = 0

if (edi != 0)
    ReleaseSemaphore(edi, 1, nullptr)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
