// 函数: ??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
// 地址: 0x4db3b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605578
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x19] != 0 && (arg1[0x26].b & 2) == 0)
    var_14 = nullptr
    int32_t var_8_1 = 0
    int32_t* eax_4 = (*(*arg1 + 0x10))(eax_2)
    (**eax_4)(eax_4, 0x61d56c, &var_14)
    int32_t* eax_5 = var_14
    
    if (eax_5 != 0)
        int32_t* edx_1 = arg1[0x19]
        (*(*edx_1 + 0x2c))(edx_1, 0xfffffffc, 0, eax_5, 0, arg1[1], &arg1[0x2d])
        eax_5 = var_14
    
    int32_t var_8_2 = 0xffffffff
    
    if (eax_5 != 0)
        (*(*eax_5 + 8))(eax_5)

if ((arg1[0x26].b & 8) == 0)
    HWND hWnd = GetFocus()
    
    if (IsChild(arg1[1], hWnd) == 0)
        SetFocus(GetWindow(arg1[1], GW_CHILD))
else
    SetFocus(arg1[1])

*arg2 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
