// 函数: ?terminate@@YAXXZ
// 地址: 0x74728d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 8
int32_t var_8 = 0xb48c60
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_3 = 0xb48c60 ^ __security_cookie_1
int32_t var_2c = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_2c
void* const var_30 = &data_747299
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = __getptd()[0x1e]

if (eax_1 != 0)
    int32_t var_8_1 = 0
    eax_1()
    int32_t var_8_2 = 0xfffffffe

_abort()
noreturn
