// 函数: sub_5c1910
// 地址: 0x5c1910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
void* esi = arg1
void* var_ac = esi

if (arg3 s< result)
    int32_t ecx = arg3 * 0x1d4
    arg4 = result - arg3
    int32_t var_a8_1 = ecx
    int32_t i
    
    do
        int32_t eax_2 = arg2[3] + 0xa0
        void var_a4
        __builtin_memcpy(&var_a4, *(esi + 0xa4) + ecx + 0x124, 0xa0)
        sub_5979b0(arg2, eax_2)
        result = *arg2
        
        if (result == arg2[1])
            result = 0
        
        __builtin_memcpy(arg2[3] + result, &var_a4, 0xa0)
        arg2[3] += 0xa0
        ecx = var_a8_1 + 0x1d4
        i = arg4
        arg4 -= 1
        esi = var_ac
        var_a8_1 = ecx
    while (i != 1)

return result
