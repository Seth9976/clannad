// 函数: sub_6cb950
// 地址: 0x6cb950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char const* const edx

if (arg4 - 0x10 u> 0x2540be30)
    edx = "gamma value out of range"
else
    if ((*(arg3 + 0x74) & 0x8000) == 0 || (*(arg2 + 0x4a) & 8) == 0)
        int32_t eax_3 = 0x8000
        
        if ((*(arg2 + 0x4a) & 0x8000) == 0)
            eax_3 = sub_6cb760(0x8000, arg2, arg3, arg4, 1)
            
            if (eax_3 != 0)
                *(arg2 + 0x4a) |= 9
                *arg2 = arg4
        
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    edx = "duplicate"

*(arg2 + 0x4a) |= 0x8000

if ((*(arg3 + 0x74) & 0x8000) != 0)
    void var_e4
    sub_6d4690(0x8000, &var_e4, arg3, edx)
    edx = &var_e4
else if ((*(arg3 + 0x78) & &__dos_header) == 0)
    sub_6d42e0(arg3, edx)
    noreturn

int32_t* eax_4 = sub_6d4470(arg3, edx)
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_4
