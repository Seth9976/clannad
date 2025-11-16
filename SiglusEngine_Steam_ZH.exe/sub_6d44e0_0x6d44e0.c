// 函数: sub_6d44e0
// 地址: 0x6d44e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = arg4

if (arg4 s< 0)
    eax_2 = not.d(eax_2) + 1

void var_20
char* eax_4 = sub_6d4350(eax_2, &var_8, &var_20, 4, eax_2)

if (arg4 s< 0 && eax_4 u> &var_20)
    eax_4 -= 1
    *eax_4 = 0x2d

int32_t result = sub_6d4310(eax_4, 0x20, arg3 + 0x20, 0, eax_4)
sub_745f2b(var_8 ^ &__saved_ebp)
return result
