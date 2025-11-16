// 函数: ___tmainCRTStartup
// 地址: 0x5f1d1b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = 0x14
int32_t var_8 = 0x62a768
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5f4b00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
var_4 = ebp
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_2 = 0x62a768 ^ __security_cookie_1
int32_t var_38 = __security_cookie_1 ^ &var_4
int32_t* var_1c = &var_38
void* const var_3c_3 = &data_5f1d27
int32_t var_8_3 = 0xfffffffe
int32_t var_c = var_8_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t esi = zx.d(sub_5f36d4())
__set_pgmptr(2)
int32_t var_20 = 0

if (sub_5f602b() == 0)
    _fast_error_exit(0x1c)
    noreturn

if (__mtinit() == 0)
    _fast_error_exit(0x10)
    noreturn

__RTC_Initialize()
int32_t var_8_1 = 0

if (sub_5f52d5() s< 0)
    _fast_error_exit(0x1b)
    noreturn

data_20f459c = GetCommandLineA()
PSTR eax_5
int32_t ecx_1
eax_5, ecx_1 = ___crtGetEnvironmentStringsA()
data_640fac = eax_5

if (__setargv(ecx_1) s< 0)
    __amsg_exit(8)
    noreturn

if (__setenvp() s< 0)
    __amsg_exit(9)
    noreturn

int32_t eax_8 = sub_5f3010(1)

if (eax_8 != 0)
    __amsg_exit(eax_8)
    noreturn

uint32_t var_3c_1 = esi
uint32_t status = sub_4e67f0(&__dos_header, 0, __wincmdln())
uint32_t status_1 = status
_exit(status)
noreturn
