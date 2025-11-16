// 函数: sub_6da520
// 地址: 0x6da520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 4) != 0 || (eax_2 & 2) == 0)
    int32_t eax_9 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_e0[0xd8]
    sub_6d4690(eax_9, &var_e0, arg3, "out of place")
    int32_t* eax_10 = sub_6d4470(arg3, &var_e0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_10

if (arg2 != 0 && (*(arg2 + 8) & 0x40) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_3 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_3

int32_t eax_4 = zx.d(*(arg3 + 0x140))
uint32_t ebx_1 = arg4 u>> 1

if (ebx_1 != eax_4 || ebx_1 u> 0x100)
    sub_6d8610(arg3, arg4)
    int32_t* eax_8 = sub_6d4840(arg3, "invalid")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_8

int32_t edi = 0
int16_t var_2e0[0x100]

if (ebx_1 != 0)
    do
        int16_t var_2e4
        sub_6d85d0(eax_4, &var_2e4, arg3, 2)
        int16_t eax_5 = var_2e4
        eax_4 = zx.d(eax_5:1.b)
        var_2e0[edi] = zx.w(eax_5.b) * 0x100 + eax_4.w
        edi += 1
    while (edi u< ebx_1)

int32_t eax_6 = sub_6d8610(arg3, 0)

if (eax_6 == 0)
    eax_6 = sub_6ce090(&var_2e0, arg2, arg3, &var_2e0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_6
