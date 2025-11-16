// 函数: sub_697f50
// 地址: 0x697f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* esi = data_bac45c
void** var_24 = arg2

if (arg1 s>= 0)
    void** var_28
    int32_t var_20
    sub_668eb0(esi + 0x4c, &var_28, sub_6ae650(&var_20, arg2))
    int32_t var_c
    
    if (var_c u>= 8)
        j__free(var_20)
    
    void** eax_4 = var_28
    
    if (eax_4 != *(esi + 0x4c))
        int32_t eax_5 = eax_4[0xa]
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_5
    
    int16_t* eax_6 = sub_6ae650(&var_20, var_24)
    int32_t edi_1 = arg1 * 0x54
    sub_668eb0(*(esi + 0x54) + 0x4c + edi_1, &var_24, eax_6)
    
    if (var_c u>= 8)
        j__free(var_20)
    
    void** ecx_9 = var_24
    
    if (ecx_9 != *(edi_1 + *(esi + 0x54) + 0x4c))
        int32_t eax_10 = *(*(esi + 0x10) + 0x20) + ecx_9[0xa]
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_10

sub_745f2b(eax_1 ^ &__saved_ebp)
return 0xffffffff
