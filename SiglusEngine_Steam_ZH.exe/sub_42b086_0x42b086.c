// 函数: sub_42b086
// 地址: 0x42b086
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
char* i = &arg2[2]

if (i u< *(arg1 + 4) && *arg2 == 0x30 && arg2[1] == 0x78 && _isxdigit(sx.d(*i)) != 0)
    int32_t esi_1 = 0
    
    for (; i u< *(arg1 + 4); i = &i[1])
        if (_isxdigit(sx.d(*i)) == 0)
            break
        
        int32_t eax_4
        eax_4.b = *i
        int32_t esi_2 = esi_1 << 4
        
        if (eax_4.b s< 0x61)
            int32_t eax_6 = sx.d(eax_4.b)
            
            if (eax_4.b s< 0x41)
                esi_1 = esi_2 + eax_6 - 0x30
            else
                esi_1 = esi_2 + eax_6 - 0x37
        else
            esi_1 = esi_2 + sx.d(eax_4.b) - 0x57
    
    if (arg3 != 0)
        *arg3 = esi_1
    
    void* result = i - arg2
    
    if (result s> 0xa)
        sub_42aba3(*(arg1 + 0x30), arg1 + 8, 0x3ea, "hex value truncated to 32bits")
    
    return result

return nullptr
