// 函数: sub_6db700
// 地址: 0x6db700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = 0xffffffff
int32_t eax_2 = *(arg1 + 0x288)

if (eax_2 != 0)
    int32_t ecx = *(arg1 + 0x258)
    
    if (ecx == 0)
        _free(eax_2)
    else
        ecx(arg1, eax_2)
    
    *(arg1 + 0x288) = 0

int32_t eax_3 = *(arg1 + 0x27c)

if (eax_3 != 0 && eax_3 u< 0xffffffff)
    ebx = eax_3

if (arg2 u<= ebx)
    *(arg1 + 0x280) = *(arg1 + 0x11f)
    *(arg1 + 0x281) = *(arg1 + 0x11e)
    *(arg1 + 0x282) = *(arg1 + 0x11d)
    *(arg1 + 0x283) = *(arg1 + 0x11c)
    *(arg1 + 0x284) = 0
    char eax_8 = *(arg1 + 0x74)
    *(arg1 + 0x28c) = arg2
    *(arg1 + 0x290) = eax_8
    
    if (arg2 != 0)
        *(arg1 + 0x288) = sub_6d8360(arg1, arg2)
    else
        *(arg1 + 0x288) = arg2

char* ebx_1 = *(arg1 + 0x288)

if (ebx_1 != 0)
    if (arg2 != 0)
        int32_t eax_12 = *(arg1 + 0x5c)
        
        if (eax_12 == 0)
            sub_6d42e0(arg1, "Call to NULL read function")
            noreturn
        
        sub_6caa70(eax_12(arg1, ebx_1, arg2), ebx_1, arg1, arg2)
else if (arg2 != 0)
    int32_t eax_10 = sub_6d8610(arg1, arg2)
    
    if ((*(arg1 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg1, "unknown chunk exceeds memory limits")
        noreturn
    
    char var_e0[0xd8]
    sub_6d4690(eax_10, &var_e0, arg1, "unknown chunk exceeds memory limits")
    sub_6d4470(arg1, &var_e0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0

sub_6d8610(arg1, 0)
sub_745f2b(eax_1 ^ &__saved_ebp)
return 1
