// 函数: sub_63b2a0
// 地址: 0x63b2a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2826
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
int32_t var_8_1 = 1
int32_t* esi = arg1[0x112]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        int32_t ebx_1 = esi[2]
        esi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*esi + 8))()

sub_63d8d0(&arg1[0x2e])
sub_575890(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
