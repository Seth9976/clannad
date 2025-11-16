// 函数: sub_6d5a70
// 地址: 0x6d5a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg4 == 0)
    sub_6d42e0(arg3, "No profile for iCCP chunk")
    noreturn

uint32_t ebx_6 =
    (((((zx.d(*arg4) << 8) + zx.d(arg4[1])) << 8) + zx.d(arg4[2])) << 8) + zx.d(arg4[3])

if (ebx_6 u< 0x84)
    sub_6d42e0(arg3, "ICC profile too short")
    noreturn

if (arg4[8] u> 3 && (ebx_6.b & 3) != 0)
    sub_6d42e0(arg3, "ICC profile length invalid (not a multiple of 4)")
    noreturn

char var_5c[0x54]
int32_t eax_6 = sub_6cf060(&var_5c, arg2, arg3, &var_5c)

if (eax_6 == 0)
    sub_6d42e0(arg3, "iCCP: invalid keyword")
    noreturn

if (eax_6 + 1 u>= 0x51)
    ___report_rangecheckfailure()
    noreturn

var_5c[eax_6 + 1] = 0
char* var_468 = arg4
uint32_t var_464 = ebx_6
int32_t var_460 = 0

if (sub_6d50f0(&var_468, 0x69434350, arg3, &var_468, eax_6 + 2) != 0)
    sub_6d42e0(arg3, *(arg3 + 0x9c))
    noreturn

int32_t eax_11 = var_460 + eax_6 + 2
sub_6d4b60(sub_6d4aa0(eax_11, 0x69434350, arg3, eax_11), &var_5c, arg3, eax_6 + 2)
sub_6d5280(arg3, &var_468)
int32_t result = sub_6d4bb0(arg3)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
