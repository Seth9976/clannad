// 函数: sub_40b39f
// 地址: 0x40b39f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* ecx = arg1
uint32_t result = 0

if (ecx != 0)
    uint32_t result_1
    result_1.w = *ecx
    
    while (result_1.w != 0xff)
        if (zx.d(result_1.w) == arg2 && *(ecx + 5) != 4)
            result_1 = zx.d(*(zx.d(ecx[2].b) + 0xab6978)) + zx.d(ecx[1])
            
            if (result u< result_1)
                result = result_1
        
        ecx = &ecx[4]
        result_1.w = *ecx

return result
