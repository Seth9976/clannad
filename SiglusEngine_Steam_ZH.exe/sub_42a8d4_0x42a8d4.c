// 函数: sub_42a8d4
// 地址: 0x42a8d4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg2 u< *(arg1 + 4) && (_isalpha(sx.d(*arg2)) != 0 || *arg2 == 0x5f))
    void* i
    
    for (i = &arg2[1]; i u< *(arg1 + 4); i += 1)
        if (_isalnum(sx.d(*i)) == 0 && *i != 0x5f)
            break
    
    void* result = i - arg2
    char* eax_6 = sub_46b465(*(arg1 + 0x2c), result + 1, 1)
    
    if (eax_6 != 0)
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_6, arg2, result u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, result & 3)
        *(eax_6 + result) = 0
        *arg3 = eax_6
        return result

return nullptr
