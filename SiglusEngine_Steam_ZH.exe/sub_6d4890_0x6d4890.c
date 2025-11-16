// 函数: sub_6d4890
// 地址: 0x6d4890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if ((*(arg3 + 0x74) & 0x8000) == 0)
    if (arg4 s>= 1)
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
            sub_6d42e0(arg3, arg2)
            noreturn
        
        int32_t* eax_4 = sub_6d4470(arg3, arg2)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if ((*(arg3 + 0x78) & 0x200000) == 0)
        sub_6d42e0(arg3, arg2)
        noreturn
else
    if (arg4 s>= 2)
        int32_t* eax_3 = sub_6d4840(arg3, arg2)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    void var_e0
    sub_6d4690(eax_1, &var_e0, arg3, arg2)
    arg2 = &var_e0

int32_t* eax_2 = sub_6d4470(arg3, arg2)
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
