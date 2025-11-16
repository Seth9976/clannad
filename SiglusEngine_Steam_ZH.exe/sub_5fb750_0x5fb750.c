// 函数: sub_5fb750
// 地址: 0x5fb750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
void* esi = arg1
void* var_28c = esi

if (arg3 s< result)
    int32_t ecx = arg3 * 0x320
    arg4 = result - arg3
    int32_t var_288_1 = ecx
    int32_t i
    
    do
        int32_t eax_2 = arg2[3] + 0x280
        void var_284
        __builtin_memcpy(&var_284, *(esi + 0xa4) + ecx + 0xa0, 0x280)
        sub_5979b0(arg2, eax_2)
        result = *arg2
        
        if (result == arg2[1])
            result = 0
        
        __builtin_memcpy(arg2[3] + result, &var_284, 0x280)
        arg2[3] += 0x280
        ecx = var_288_1 + 0x320
        i = arg4
        arg4 -= 1
        esi = var_28c
        var_288_1 = ecx
    while (i != 1)

return result
