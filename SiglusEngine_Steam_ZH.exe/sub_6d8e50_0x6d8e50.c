// 函数: sub_6d8e50
// 地址: 0x6d8e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) != 0)
    sub_6d47a0(arg3, "out of place")
    noreturn

if (arg4 != 0xd)
    sub_6d47a0(arg3, "invalid")
    noreturn

*(arg3 + 0x74) = eax_2 | 1
int32_t eax_4 = *(arg3 + 0x5c)

if (eax_4 == 0)
    sub_6d42e0(arg3, "Call to NULL read function")
    noreturn

char var_18
sub_6caa70(eax_4(arg3, &var_18, 0xd), &var_18, arg3, 0xd)
sub_6d8610(arg3, 0)
char var_17
char var_16
char var_15
uint32_t edx_7 = (((((zx.d(var_18) << 8) + zx.d(var_17)) << 8) + zx.d(var_16)) << 8) + zx.d(var_15)

if (edx_7 u> 0x7fffffff)
    sub_6d42e0(arg3, "PNG unsigned integer out of range")
    noreturn

char var_14
char var_13
char var_12
char var_11
uint32_t ecx_8 = (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)

if (ecx_8 u> 0x7fffffff)
    sub_6d42e0(arg3, "PNG unsigned integer out of range")
    noreturn

char var_c
*(arg3 + 0x14c) = var_c
char var_f
*(arg3 + 0x14f) = var_f
char var_d
*(arg3 + 0x24c) = var_d
char var_e
*(arg3 + 0x26c) = var_e
uint32_t eax_20 = zx.d(var_f)
*(arg3 + 0x100) = edx_7
*(arg3 + 0x104) = ecx_8
char var_10
*(arg3 + 0x150) = var_10

if (eax_20 == 2)
    *(arg3 + 0x153) = 3
else if (eax_20 == 4)
    *(arg3 + 0x153) = 2
else if (eax_20 == 6)
    *(arg3 + 0x153) = 4
else
    *(arg3 + 0x153) = 1

int32_t eax_21
eax_21.b = *(arg3 + 0x153)
eax_21.w = muls.dp.b(eax_21.b, var_10)
*(arg3 + 0x152) = eax_21.b
uint32_t eax_22 = zx.d(eax_21.b)
uint32_t eax_24

if (eax_21.b u< 8)
    eax_24 = (eax_22 * edx_7 + 7) u>> 3
else
    eax_24 = (eax_22 u>> 3) * edx_7

*(arg3 + 0x110) = eax_24
uint32_t result = sub_6ce130(eax_24, arg2, arg3, edx_7, ecx_8, var_10, var_f, var_c, var_e, var_d)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
