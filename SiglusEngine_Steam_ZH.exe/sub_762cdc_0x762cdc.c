// 函数: sub_762cdc
// 地址: 0x762cdc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi = nullptr
char buffer = 0
char var_10b[0x103]
_memset(&var_10b, 0, 0x103)
int32_t edi = 0

if (arg1 == 0)
    esi = &data_b9c110
    edi = 0xe
label_762d70:
    
    if (arg1 != 1)
        goto label_762d2f
    
    goto label_762d82

int32_t result
void* ecx_1

if (arg1 == 1)
    esi = &data_b9c120
    edi = 0x110
label_762d82:
    uint32_t eax_7 = GetTempPathA(0x104, &buffer)
    
    if (eax_7 != 0 && eax_7 u<= 0x104)
        if (_strcpy_s(esi, eax_7 + 1, &buffer) == 0)
            ecx_1 = esi - 1 + eax_7
            goto label_762d42
        
        int32_t var_12c_1
        __builtin_memset(&var_12c_1, 0, 0x14)
        __invoke_watson()
        noreturn
    
    result = 0xffffffff
else
    if (arg1 != 2)
        goto label_762d70
    
    esi = &data_b9c230
    edi = 0x12
label_762d2f:
    
    if (_strcpy_s(esi, edi, U"\") != 0)
    label_762e02:
        int32_t var_12c
        __builtin_memset(&var_12c, 0, 0x14)
        __invoke_watson()
        noreturn
    
    ecx_1 = esi + 1
label_762d42:
    int32_t eax_6
    eax_6.b = *(ecx_1 - 1)
    
    if (eax_6.b != 0x5c && eax_6.b != 0x2f)
        *ecx_1 = 0x5c
        ecx_1 += 1
    
    if (arg1 != 1)
        *ecx_1 = 0x73
    else
        *ecx_1 = 0x74
    
    if (__ultoa_s(GetCurrentProcessId(), ecx_1 + 1, edi - (ecx_1 + 1) + esi, 0x20) != 0)
        goto label_762e02
    
    result = _strcat_s(esi, edi, U".")
    
    if (result != 0)
        goto label_762e02
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
