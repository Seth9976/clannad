// 函数: sub_60ba00
// 地址: 0x60ba00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
void* esi = arg1
void* var_1c8 = esi

if (arg3 s< result)
    int32_t ecx = arg3 * 0x260
    arg4 = result - arg3
    int32_t var_1c4_1 = ecx
    int32_t i
    
    do
        int32_t eax_2 = arg2[3] + 0x1bc
        void var_1c0
        __builtin_memcpy(&var_1c0, *(esi + 0xa4) + ecx + 0xa4, 0x1bc)
        sub_5979b0(arg2, eax_2)
        result = *arg2
        
        if (result == arg2[1])
            result = 0
        
        __builtin_memcpy(arg2[3] + result, &var_1c0, 0x1bc)
        arg2[3] += 0x1bc
        ecx = var_1c4_1 + 0x260
        i = arg4
        arg4 -= 1
        esi = var_1c8
        var_1c4_1 = ecx
    while (i != 1)

return result
