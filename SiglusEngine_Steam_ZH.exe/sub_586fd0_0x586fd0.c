// 函数: sub_586fd0
// 地址: 0x586fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg4

if (result == 1)
    int32_t var_24
    int16_t* ecx = sub_6c4e40(arg3, &var_24, arg2, result)
    int32_t esi_1 = *(ecx + 0x14)
    int16_t* edx
    
    if (esi_1 u< 8)
        edx = ecx
    else
        edx = *ecx
    
    void* eax_4 = &edx[*(ecx + 0x10)]
    
    if (esi_1 u>= 8)
        ecx = *ecx
    
    int16_t* var_2c = ecx
    int32_t* esi_2 = nullptr
    int32_t* var_28
    
    if (sub_6af490(eax_4, &var_28, &var_2c, eax_4) != 0)
        esi_2 = var_28
    
    int32_t var_10
    
    if (var_10 u>= 8)
        j__free(var_24)
    
    result = sub_6c52d0(arg3, arg2, 1, 0x80000000, 0x7fffffff, esi_2)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
