// 函数: sub_5875a0
// 地址: 0x5875a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg4

if (result == 1)
    result = arg2 - 1
    
    if (result s>= 0 && result u< 0xe)
        int32_t edi_2 = result * 7
        
        if (*((edi_2 << 2) + &data_ad98e0) != 0)
            void var_24
            int32_t* eax_3 = sub_6ae470(sub_6c4e40(arg3, &var_24, arg2, 1), 0)
            sub_52e8a0(&var_24)
            result = sub_6c52d0(arg3, arg2, 1, *((edi_2 << 2) + &data_ad98e4), 
                *((edi_2 << 2) + &data_ad98e8), eax_3)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
