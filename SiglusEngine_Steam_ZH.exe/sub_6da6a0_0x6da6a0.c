// 函数: sub_6da6a0
// 地址: 0x6da6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 4) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_ec[0xd8]
    sub_6d4690(eax_3, &var_ec, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_ec)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

if (arg2 != 0 && (*(arg2 + 8) & 0x80) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_5 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

if (arg4 != 9)
    sub_6d8610(arg3, arg4)
    int32_t* eax_6 = sub_6d4840(arg3, "invalid")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_6

char var_14
sub_6d85d0(eax_2, &var_14, arg3, 9)
uint32_t eax_7 = sub_6d8610(arg3, 0)

if (eax_7 == 0 && arg2 != 0)
    char var_13
    char var_12
    char var_11
    *(arg2 + 0xc0) =
        (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)
    char var_c
    eax_7.b = var_c
    *(arg2 + 8) |= 0x80
    char var_10
    char var_f
    char var_e
    char var_d
    *(arg2 + 0xc4) = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)
    *(arg2 + 0xc8) = eax_7.b

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_7
