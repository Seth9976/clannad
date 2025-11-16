// 函数: sub_466c9b
// 地址: 0x466c9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* result = sub_498611(1)

if (result == 0)
    return nullptr

int32_t __saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD* esi
__setjmp3(&__saved_ebp, esi, arg1, result, 0, esi, result)
sub_4668ff(result, arg3, arg4, arg5)

if (arg2 == 0 || *arg2 != 0x31)
    sub_46691d(result, "Incompatible libpng version in application and library")
    noreturn

result[0x28] = 0x2000
result[0x27] = sub_498671(result, 0x2000)
result[0x21] = sub_466a0b
result[0x22] = sub_466a61
result[0x23] = result
int32_t eax_3 = sub_4993d6(&result[0x19], "1.1.4", 0x38)
char const* const var_10_4

if (eax_3 == 0xfffffffa)
    var_10_4 = "zlib version error"
else if (eax_3 == 0xfffffffc || eax_3 == 0xfffffffe)
    var_10_4 = "zlib memory error"
else
    if (eax_3 == 0)
        result[0x1c] = result[0x27]
        result[0x1d] = result[0x28]
        sub_468e63(result, 0, 0)
        return result
    
    var_10_4 = "Unknown zlib error"

sub_46691d(result, var_10_4)
noreturn
