// 函数: sub_74df4e
// 地址: 0x74df4e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = 0
int32_t edi = 0
char* var_24
void var_14
char eax_4 = sub_75ac6b(&var_14, &var_24, arg2, 0, 0, 0, 0, arg3)
int32_t eax_5

if ((eax_4 & 4) == 0)
    int32_t var_1c
    int32_t eax_6 = sub_75c395(&var_14, &var_1c)
    
    if ((eax_4 & 2) != 0 || eax_6 == 1)
        edi = 0x80
    
    if ((eax_4 & 1) != 0 || eax_6 == 2)
        edi |= 0x100
    
    esi = var_1c
    int32_t var_18
    eax_5 = var_18
else
    edi = 0x200
    eax_5 = 0

void* ecx_3 = var_24 - arg2
*arg1 = edi
arg1[1] = ecx_3
arg1[4] = esi
arg1[5] = eax_5
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg1
