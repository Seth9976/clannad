// 函数: sub_49a113
// 地址: 0x49a113
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_3c = edi

if (arg1[0x16] != 0)
    sub_46691d(arg1, "Out of place IHDR")
    noreturn

if (arg3 != 0xd)
    sub_46691d(arg1, "Invalid IHDR chunk")
    noreturn

arg1[0x16] |= 1
void var_18
sub_4997a6(arg1, &var_18, 0xd)
sub_49a08a(arg1, 0)
uint32_t eax_1 = sub_499762(&var_18)
void var_14
uint32_t eax_2 = sub_499762(&var_14)
char var_10
uint32_t ebx = zx.d(var_10)
char var_f
uint32_t eax_3 = zx.d(var_f)
char var_e
uint32_t eax_4 = zx.d(var_e)
char var_d
uint32_t eax_5 = zx.d(var_d)
char var_c
uint32_t eax_6 = zx.d(var_c)

if (eax_1 == 0 || eax_1 u> 0x7fffffff || eax_2 == 0 || eax_2 u> 0x7fffffff)
    sub_46691d(arg1, "Invalid image size in IHDR")
    noreturn

if (ebx != 1 && ebx != 2 && ebx != 4 && ebx != 8 && ebx != 0x10)
    sub_46691d(arg1, "Invalid bit depth in IHDR")
    noreturn

if (eax_3 s< 0 || eax_3 == 1 || eax_3 == 5 || eax_3 s> 6)
    sub_46691d(arg1, "Invalid color type in IHDR")
    noreturn

if (eax_3 == 3 && ebx s> 8)
    sub_46691d(arg1, "Invalid color type/bit depth combination in IHDR")
    noreturn

if ((eax_3 == 2 || eax_3 == 4 || eax_3 == 6) && ebx s< 8)
    sub_46691d(arg1, "Invalid color type/bit depth combination in IHDR")
    noreturn

if (eax_6 s>= 2)
    sub_46691d(arg1, "Unknown interlace method in IHDR")
    noreturn

if (eax_4 != 0)
    sub_46691d(arg1, "Unknown compression method in IHDR")
    noreturn

if (eax_5 != 0)
    sub_46691d(arg1, "Unknown filter method in IHDR")
    noreturn

uint32_t eax_8
eax_8.b = eax_6.b
char ecx = eax_3.b
*(arg1 + 0x113) = eax_8.b
uint32_t eax_9 = zx.d(ecx)
arg1[0x2e] = eax_1
arg1[0x2f] = eax_2
*(arg1 + 0x117) = ebx.b
*(arg1 + 0x116) = ecx

if (eax_9 == 0)
    *(arg1 + 0x11a) = 1
else if (eax_9 == 2)
    *(arg1 + 0x11a) = 3
else if (eax_9 == 3)
    *(arg1 + 0x11a) = 1
else if (eax_9 == 4)
    *(arg1 + 0x11a) = 2
else if (eax_9 == 6)
    *(arg1 + 0x11a) = 4

int32_t eax_10
eax_10.b = *(arg1 + 0x11a)
eax_10.w = muls.dp.b(eax_10.b, ebx.b)
*(arg1 + 0x119) = eax_10.b
arg1[0x32] = (zx.d(eax_10.b) * eax_1 + 7) u>> 3
int32_t result = sub_466b2c(arg1, arg2, eax_1, eax_2, ebx.b, ecx, eax_6.b, eax_4.b, eax_5.b)
sub_745f2b(__security_cookie_1)
return result
