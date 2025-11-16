// 函数: sub_6bfcd0
// 地址: 0x6bfcd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbf78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t Y = arg6
void** lpClassName = arg3
int32_t X = arg5
int32_t* result

if (*(arg1 + 4) != 0)
    result.b = 0
else
    if (arg1 + 8 != arg2)
        sub_52e3c0(arg1 + 8, arg2, 0, 0xffffffff)
    
    result.b = arg12
    *(arg1 + 0x58) = result.b
    result.b = arg13
    *(arg1 + 0x59) = result.b
    RECT rect
    rect.right = arg7
    rect.bottom = arg8
    rect.left = 0
    BOOL bMenu
    bMenu.b = arg9 != 0
    rect.top = 0
    AdjustWindowRectEx(&rect, arg10, bMenu, arg11)
    
    if (X == 0xffffffff)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(GetSystemMetrics(SM_CXSCREEN) - (rect.right - rect.left))
        X = (eax_7 - edx_1) s>> 1
    
    if (Y == 0xffffffff)
        int32_t eax_12
        int32_t edx_2
        edx_2:eax_12 = sx.q(GetSystemMetrics(SM_CYSCREEN) - (rect.bottom - rect.top))
        Y = (eax_12 - edx_2) s>> 1
    
    PWSTR lpWindowName = arg4
    
    if (*(lpWindowName + 0x14) u>= 8)
        lpWindowName = *lpWindowName
    
    if (lpClassName[5] u>= 8)
        lpClassName = *lpClassName
    
    int32_t eax_14 = CreateWindowExW(arg11, lpClassName, lpWindowName, arg10, X, Y, 
        rect.right - rect.left, rect.bottom - rect.top, arg14, nullptr, data_4ebe3a8, arg1)
    *(arg1 + 4) = eax_14
    
    if (eax_14 != 0)
        sub_6c0100(arg1, eax_14)
        
        if (*(arg1 + 0x59) != 0)
            sub_530ba0(&data_4ebe45c, arg1 + 4)
        
        result.b = 1
    else
        int32_t var_2c_1 = 7
        int32_t var_30_1 = eax_14
        int16_t var_40 = eax_14.w
        sub_52e720(&var_40, u"CreateWindowEx", 0xe)
        int32_t var_8_1 = 0
        enum WIN32_ERROR eax_15 = GetLastError()
        sub_6b9c90(eax_15, eax_15, 2, &var_40)
        
        if (var_2c_1 u>= 8)
            j__free(var_40.d)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
