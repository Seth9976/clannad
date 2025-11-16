// 函数: _wcsnlen
// 地址: 0x753d7e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg2 u> 0)
    int16_t* ecx_1 = arg1
    
    while (*ecx_1 != 0)
        result += 1
        ecx_1 = &ecx_1[1]
        
        if (result u>= arg2)
            break

return result
