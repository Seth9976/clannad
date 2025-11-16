// 函数: sub_42b1a8
// 地址: 0x42b1a8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
char* i = arg2
int32_t edi
int32_t var_10 = edi

if (i u< *(arg1 + 4) && _isdigit(sx.d(*i)) != 0)
    int32_t esi_1 = 0
    int32_t var_8_1 = 0
    
    for (; i u< *(arg1 + 4); i = &i[1])
        if (_isdigit(sx.d(*i)) == 0)
            break
        
        if (esi_1 u> 0x19999999)
            var_8_1 = 1
        
        int32_t eax_7 = esi_1 * 0xa
        esi_1 = sx.d(*i) + eax_7 - 0x30
        
        if (esi_1 u< eax_7)
            var_8_1 = 1
    
    if (arg3 != 0)
        *arg3 = esi_1
    
    if (var_8_1 != 0)
        sub_42aba3(*(arg1 + 0x30), arg1 + 8, 0x3ec, "decimal value truncated to 32bits")
    
    return i - arg2

return nullptr
