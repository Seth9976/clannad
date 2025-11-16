// 函数: sub_6d6480
// 地址: 0x6d6480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char var_58[0x50]
void* ecx = sub_6cf060(&var_58, arg2, arg3, &var_58)

if (ecx == 0)
    sub_6d42e0(arg3, "tEXt: invalid keyword")
    noreturn

void* esi_1

if (arg4 == 0 || *arg4 == 0)
    esi_1 = nullptr
else
    char* esi = arg4
    void* eax_3
    
    do
        eax_3.b = *esi
        esi = &esi[1]
    while (eax_3.b != 0)
    esi_1 = esi - &esi[1]

if (esi_1 u> 0x7ffffffe - ecx)
    sub_6d42e0(arg3, "tEXt: text too long")
    noreturn

void* eax_6 = ecx + 1 + esi_1
sub_6d4aa0(eax_6, 0x74455874, arg3, eax_6)
int32_t eax_8 = ecx + 1

if (arg3 != 0 && eax_8 != 0)
    int32_t ecx_2 = *(arg3 + 0x58)
    
    if (ecx_2 == 0)
        sub_6d42e0(arg3, "Call to NULL write function")
        noreturn
    
    ecx_2(arg3, &var_58, eax_8)
    eax_8 = sub_6caa70(ecx + 1, &var_58, arg3, ecx + 1)

if (esi_1 != 0)
    sub_6d4b60(eax_8, arg4, arg3, esi_1)

int32_t result = sub_6d4bb0(arg3)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
