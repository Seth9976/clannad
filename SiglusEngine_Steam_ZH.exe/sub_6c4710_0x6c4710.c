// 函数: sub_6c4710
// 地址: 0x6c4710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cc260
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 2)
    int32_t var_1c
    int32_t var_30_2 = var_1c
    void* var_34_1 = arg1
    sub_55d500(*(arg1 + 0x90), *(arg1 + 0x94))
    *(arg1 + 0x94) = *(arg1 + 0x90)
else if (arg2 == 0x7b)
    sub_6c5c10(arg1)
else if (arg2 == 0x111 && arg4 == *(arg1 + 0x1d0))
    uint16_t edi_2 = (arg3 u>> 0x10).w
    
    if (edi_2 == 9 && *(arg1 + 0x264) != (arg2 - 0x7b).b + 0x6a)
        sub_6c58d0(arg1, 1)
    
    if (edi_2 == 0xa && *(arg1 + 0x264) != 0)
        *(arg1 + 0x264) = 0
        HWND hWnd = *(arg1 + 0x1d0)
        
        if (hWnd != 0)
            DestroyWindow(hWnd)

LRESULT result = sub_6c0020(arg1, arg2, arg3, arg4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
