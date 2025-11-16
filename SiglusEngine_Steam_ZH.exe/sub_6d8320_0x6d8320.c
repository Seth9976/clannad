// 函数: sub_6d8320
// 地址: 0x6d8320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

if (arg2 - 1 u<= 0xfffffffe)
    int32_t eax_1 = *(arg1 + 0x254)
    int32_t result
    
    if (eax_1 == 0)
        result = _malloc(arg2)
    else
        result = eax_1(arg1, arg2)
    
    if (result != 0)
        return result

sub_6d42e0(arg1, "Out of memory")
noreturn
