// 函数: sub_6c5b90
// 地址: 0x6c5b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cc380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_24 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 8)
    void* eax_3 = *(arg1 + 0x94)
    
    if (*(eax_3 + 0x264) != 0)
        *(eax_3 + 0x264) = 0
        HWND hWnd = *(eax_3 + 0x1d0)
        
        if (hWnd != 0)
            DestroyWindow(hWnd)

LRESULT result = sub_6c0020(arg1, arg2, arg3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
