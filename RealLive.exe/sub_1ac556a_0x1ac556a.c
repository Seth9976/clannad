// 函数: sub_1ac556a
// 地址: 0x1ac556a
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8_2 = 0xffffffff
int32_t var_c = 0x1acaf60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14_2 = &data_1ac5574
int32_t* var_14 = arg1
int32_t* var_18 = arg1
int32_t __saved_edi
int32_t* var_14_1 = &__saved_edi

if (*arg1 == 0)
    sub_1ac63ce(0x10)
    int32_t var_8 = 0
    
    if (*arg1 == 0)
        *arg1 = arg2()
    
    int32_t var_8_1 = 0xffffffff
    sub_1ac643e(0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return *arg1
