// 函数: sub_6a77e0
// 地址: 0x6a77e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca3d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac4a0

if (*(ecx + 0x1ec) != 0)
    goto label_6a7835

if (sub_60e120(data_bac510 + 0x10b70) != IDNO)
    ecx = data_bac4a0
label_6a7835:
    
    if (*(ecx + 0x1ed) != 0 || *(data_bac510 + 0x10b90) s<= 0)
        sub_6c26c0(arg1)
        sub_62f360(data_bac504)
        char* eax_7
        eax_7.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    *(ecx + 0x1ed) = 1
    *(ecx + 0x1e4) = 0
    sub_676610(2)
    sub_676610(0x2c)
    void* edx_1 = data_bac504
    
    if (*(edx_1 + 0x98) != *(edx_1 + 0x9c))
        if (*(data_bac510 + 0x10bc0) != 0)
            sub_676610(0x2b)
            sub_6613d0(2)
            void* eax_6
            eax_6.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6
        
        sub_65e4c0()

enum MESSAGEBOX_RESULT eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
