// 函数: ___tmainCRTStartup
// 地址: 0x7486bf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 0x14
int32_t var_8 = 0xb48cf8
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_74ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0xb48cf8 ^ __security_cookie_1
int32_t var_38 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_38
void* const var_3c_2 = &data_7486cb
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi = zx.d(sub_74d183())
___set_app_type(2)
int32_t var_20 = 0

if (sub_74ddea() == 0)
    _fast_error_exit(0x1c)
    noreturn

if (__mtinit() == 0)
    _fast_error_exit(0x10)
    noreturn

__RTC_Initialize()
int32_t var_8_1 = 0

if (sub_755508() s< 0)
    _fast_error_exit(0x1b)
    noreturn

data_4ece2e8 = GetCommandLineW()
PWSTR eax_5
int32_t ecx_1
eax_5, ecx_1 = ___crtGetEnvironmentStringsW()
data_b94ef4 = eax_5

if (sub_7557bc(ecx_1) s< 0)
    __amsg_exit(8)
    noreturn

if (__wsetenvp() s< 0)
    __amsg_exit(9)
    noreturn

int32_t eax_8 = sub_74ca21(1)

if (eax_8 != 0)
    __amsg_exit(eax_8)
    noreturn

uint32_t var_3c_1 = esi
void* var_40 = __wwincmdln()
sub_698c70(&__dos_header, nullptr)
int32_t var_28 = 0
_exit(0)
noreturn
