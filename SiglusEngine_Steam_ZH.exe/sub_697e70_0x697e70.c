// 函数: sub_697e70
// 地址: 0x697e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void** var_24 = arg3

if (arg2 s>= 0)
    void** var_28
    int32_t var_20
    sub_668eb0(arg1 + 0x44, &var_28, sub_6ae650(&var_20, arg3))
    int32_t var_c
    
    if (var_c u>= 8)
        j__free(var_20)
    
    void** eax_4 = var_28
    
    if (eax_4 != *(arg1 + 0x44))
        int32_t eax_5 = eax_4[0xa]
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_5
    
    int16_t* eax_6 = sub_6ae650(&var_20, var_24)
    int32_t edi_1 = arg2 * 0x54
    sub_668eb0(*(arg1 + 0x54) + 0x44 + edi_1, &var_24, eax_6)
    
    if (var_c u>= 8)
        j__free(var_20)
    
    void** ecx_8 = var_24
    
    if (ecx_8 != *(edi_1 + *(arg1 + 0x54) + 0x44))
        int32_t eax_10 = *(*(arg1 + 0x10) + 8) + ecx_8[0xa]
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_10

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0xffffffff
