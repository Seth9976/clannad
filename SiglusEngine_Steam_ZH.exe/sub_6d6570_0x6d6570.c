// 函数: sub_6d6570
// 地址: 0x6d6570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg5 == 0xffffffff)
    int32_t __saved_esi = arg3
    int32_t eax_3 = sub_6d6480(arg5, arg2, arg3, arg4)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_3

if (arg5 != 0)
    sub_6d42e0(arg3, "zTXt: invalid compression type")
    noreturn

char var_5c[0x54]
int32_t eax_5 = sub_6cf060(&var_5c, arg2, arg3, &var_5c)

if (eax_5 == 0)
    sub_6d42e0(arg3, "zTXt: invalid keyword")
    noreturn

if (eax_5 + 1 u>= 0x51)
    ___report_rangecheckfailure()
    noreturn

var_5c[eax_5 + 1] = 0
int32_t esi_2 = eax_5 + 2
void* ecx_2

if (arg4 != 0)
    char* ecx_3 = arg4
    
    do
        eax_5.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_5.b != 0)
    
    ecx_2 = ecx_3 - &ecx_3[1]
else
    ecx_2 = nullptr

void* var_464 = ecx_2
char* var_468 = arg4
int32_t var_460 = 0

if (sub_6d50f0(&var_468, 0x7a545874, arg3, &var_468, esi_2) != 0)
    sub_6d42e0(arg3, *(arg3 + 0x9c))
    noreturn

int32_t eax_9 = var_460 + esi_2
sub_6d4b60(sub_6d4aa0(eax_9, 0x7a545874, arg3, eax_9), &var_5c, arg3, esi_2)
sub_6d5280(arg3, &var_468)
int32_t eax_11 = sub_6d4bb0(arg3)
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_11
