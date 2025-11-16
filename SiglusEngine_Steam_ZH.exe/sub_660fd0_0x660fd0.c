// 函数: sub_660fd0
// 地址: 0x660fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3676
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2
enum MESSAGEBOX_RESULT result

if (arg3 != 0)
    result = sub_60e120(data_bac510 + 0x10b40)

if (arg3 == 0 || result != IDNO)
    if (*(data_bac504 + 0x63104) != 0)
        sub_652570()
        ___std_fs_get_file_attributes_by_handle@8()
        sub_653870()
        sub_654050()
    
    *(data_bac4a0 + 0x1e4) = 0
    int32_t var_16c
    sub_54aed0(&var_16c)
    int32_t var_8_1 = 0
    var_16c = 8
    int32_t eax_5
    eax_5.b = arg5 != 0
    int32_t var_28_1 = eax_5
    void* var_2c4
    int32_t var_2d0_2 = sub_54cf80(&var_2c4, &var_16c)
    var_8_1.b = 1
    sub_6767a0(data_bac458 + 0x158)
    int32_t ecx_8 = sub_62f9b0(data_bac458, &var_2c4)
    
    if (*(var_2c4 + 0xad9a68) != 0)
        int32_t var_2d0_4 = ecx_8
        sub_696dc0()
    
    var_8_1.b = 0
    void var_238
    int32_t ecx_10 = sub_54ae40(&var_238)
    
    if (arg4 != 0)
        sub_676610(4)
        ecx_10 = sub_676610(2)
    
    if (ebx.b != 0)
        int32_t var_2d0_5 = ecx_10
        sub_6018e0(data_bac468 + 0x304, 6)
    
    void var_e0
    result = sub_54ae40(&var_e0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
