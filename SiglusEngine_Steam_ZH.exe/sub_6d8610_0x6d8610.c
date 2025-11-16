// 函数: sub_6d8610
// 地址: 0x6d8610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 != 0)
    int32_t i = arg2
    
    do
        int32_t i_1 = 0x400
        
        if (i u< 0x400)
            i_1 = i
        
        i -= i_1
        
        if (arg1 != 0)
            int32_t eax_2 = *(arg1 + 0x5c)
            
            if (eax_2 == 0)
                sub_6d42e0(arg1, "Call to NULL read function")
                noreturn
            
            void var_4e0
            sub_6caa70(eax_2(arg1, &var_4e0, i_1), &var_4e0, arg1, i_1)
    while (i != 0)

if (sub_6d8700(arg1) == 0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return 0

int32_t eax_5 = *(arg1 + 0x78)
uint32_t eax_7

if ((*(arg1 + 0x11c) & 0x20000000) == 0)
    eax_7 = eax_5 u>> 0xa
else
    eax_7 = not.d(eax_5 u>> 9)

int32_t eax_8 = eax_7 & 1

if (eax_8 == 0)
    sub_6d47a0(arg1, "CRC error")
    noreturn

char var_e0[0xd8]
sub_6d4690(eax_8, &var_e0, arg1, "CRC error")
sub_6d4470(arg1, &var_e0)
sub_745f2b(eax_1 ^ &__saved_ebp)
return 1
