// 函数: sub_69ce50
// 地址: 0x69ce50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c946c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 3
sub_69c330(&arg1[0x293842])
sub_69c260(&arg1[0x29381b])
sub_69bbe0(&arg1[0x15])
sub_69bb50(&arg1[6])

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0
