// 函数: sub_75d92b
// 地址: 0x75d92b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void var_2c
sub_7470a1(&var_2c, arg3)
int32_t result = 0
char* var_1c
void var_14
char eax_2 = sub_75ac6b(&var_14, &var_1c, arg2, 0, 0, 0, 0, &var_2c)
int32_t eax_3 = sub_75c395(&var_14, arg1)

if ((eax_2 & 3) != 0)
    if ((eax_2 & 1) != 0)
        result = 4
    else if ((eax_2 & 2) != 0)
        result = 3
else if (eax_3 == 1)
    result = 3
else if (eax_3 == 2)
    result = 4

char var_20
void* var_24

if (var_20 != 0)
    *(var_24 + 0x70) &= 0xfffffffd
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
