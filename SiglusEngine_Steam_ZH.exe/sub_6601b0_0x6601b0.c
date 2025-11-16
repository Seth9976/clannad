// 函数: sub_6601b0
// 地址: 0x6601b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4edb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result

if (arg1 == 0 || *(data_bac510 + 0x10bc0) == 0)
    struct NT3::C_window_base::NT3::C_dialog::VTable* var_7bc
    sub_660290(&var_7bc)
    int32_t var_8_1 = 0
    int32_t esi_1 = data_4ebe3ac
    sub_683ad0(0)
    int32_t eax_5 = var_7bc->vFunc_4(esi_1)
    int32_t eax_6 = sub_683ad0(1)
    char eax_7
    
    if (eax_5 != 0xffffffff)
        eax_7 = sub_660620(eax_6, 1, eax_5, 1)
    
    if (eax_5 == 0xffffffff || eax_7 == 0)
        sub_660350(&var_7bc)
        result.b = 0
    else
        sub_660350(&var_7bc)
        result.b = 1
else
    sub_676610(0x29)
    sub_6613d0(1)
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
