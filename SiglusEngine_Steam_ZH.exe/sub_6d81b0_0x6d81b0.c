// 函数: sub_6d81b0
// 地址: 0x6d81b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

if (arg2 - 1 u<= 0xfffffffe)
    int32_t eax_2 = *(arg1 + 0x254)
    char* result
    
    if (eax_2 == 0)
        result = _malloc(arg2)
    else
        result = eax_2(arg1, arg2)
    
    if (result != 0)
        _memset(result, 0, arg2)
        return result

sub_6d42e0(arg1, "Out of memory")
noreturn
