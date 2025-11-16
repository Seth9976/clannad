// 函数: sub_6d9220
// 地址: 0x6d9220
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg3 + 0x74)

if ((eax_2.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2.b & 6) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_e4[0xdc]
    sub_6d4690(eax_3, &var_e4, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_e4)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

if (arg4 != 4)
    sub_6d8610(arg3, arg4)
    int32_t* eax_5 = sub_6d4840(arg3, "invalid")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

void var_e8
sub_6d85d0(eax_2, &var_e8, arg3, 4)
int32_t eax_6
int32_t ecx_8
eax_6, ecx_8 = sub_6d8610(arg3, 0)

if (eax_6 == 0)
    uint32_t eax_7 = sub_6d8410(ecx_8, &var_e8)
    sub_6cb950(eax_7, arg3 + 0x2bc, arg3, eax_7)
    eax_6 = sub_6cba60(arg3, arg2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_6
