// 函数: sub_587510
// 地址: 0x587510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg4 - 1

if (result s>= 0 && result u< 0x14)
    int32_t esi_2 = result * 7
    
    if (*((esi_2 << 2) + &data_ad9b10) != 0)
        int32_t var_24
        int32_t* eax_3 = sub_6ae470(sub_6c4e40(arg3, &var_24, arg2, arg4), 0)
        int32_t var_10
        
        if (var_10 u>= 8)
            j__free(var_24)
        
        result = sub_6c52d0(arg3, arg2, arg4, *((esi_2 << 2) + &data_ad9b14), 
            *((esi_2 << 2) + &data_ad9b18), eax_3)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
