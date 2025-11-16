// 函数: sub_577880
// 地址: 0x577880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_28
int32_t** result = sub_578410(&arg1[0xda0], &var_28, &arg1[0xda8])
int32_t* esi = var_28

if (esi != arg1[0xda0])
    int32_t eax_1 = esi[0x24]
    int128_t var_24
    __builtin_memset(&var_24, 0, 0x19)
    sub_54b210(eax_1, &esi[5 + eax_1], &esi[5], &var_24)
    int32_t** result_1
    result = result_1
    
    if (result != 0)
        return sub_577910(arg1, result, esi[0x25], esi[0x26], esi[0x27])

return result
