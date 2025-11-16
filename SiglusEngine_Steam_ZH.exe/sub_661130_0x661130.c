// 函数: sub_661130
// 地址: 0x661130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4fb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg3
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT eax_3

if (arg3.b != 0)
    eax_3 = sub_60e120(data_bac510 + 0x10b70)

if (arg3.b == 0 || eax_3 != IDNO)
    *(data_bac4a0 + 0x1e4) = 0
    sub_676610(2)
    sub_676610(0x2c)
    
    if (arg4 != 0)
        sub_676610(4)
    
    void* edx = data_bac504
    eax_3 = *(edx + 0x98)
    
    if (eax_3 != *(edx + 0x9c))
        if (*(data_bac510 + 0x10bc0) != 0)
            sub_676610(0x2b)
            void* eax_6 = sub_6613d0(2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6
        
        eax_3 = sub_65e4c0()

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
