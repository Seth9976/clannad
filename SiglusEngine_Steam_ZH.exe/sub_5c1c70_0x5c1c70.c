// 函数: sub_5c1c70
// 地址: 0x5c1c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2

if (result s< arg3)
    int32_t esi_1 = result * 0x2c
    int32_t i_1 = arg3 - result
    int32_t i
    
    do
        result = *(arg1 + 0xb8)
        int32_t* ecx_1 = *(arg1 + 0xa4) + esi_1
        esi_1 += 0x2c
        *ecx_1 = result
        ecx_1[1] = result
        ecx_1[2] = 0
        ecx_1[3] = 0
        ecx_1[4] = 0
        ecx_1[5] = result
        ecx_1[6] = result
        ecx_1[7] = result
        ecx_1[8] = 0xffffffff
        ecx_1[9] = 0xffffffff
        ecx_1[0xa] = 0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
