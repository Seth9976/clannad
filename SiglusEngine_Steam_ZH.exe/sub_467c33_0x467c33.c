// 函数: sub_467c33
// 地址: 0x467c33
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 9) == 0x10)
    int32_t i_2 = zx.d(*(arg1 + 0xa)) * *arg1
    char* esi_1 = arg2
    char* edx_1 = esi_1
    
    if (i_2 u> 0)
        int32_t edi
        int32_t var_c_1 = edi
        int32_t i_1 = i_2
        int32_t i
        
        do
            i_2.b = *edx_1
            edx_1 = &edx_1[2]
            *esi_1 = i_2.b
            esi_1 = &esi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    i_2.b = *(arg1 + 0xa)
    edx_1.b = i_2.b
    edx_1.b <<= 3
    int32_t ecx_3 = zx.d(i_2.b) * *arg1
    *(arg1 + 9) = 8
    *(arg1 + 0xb) = edx_1.b
    arg1[1] = ecx_3

return arg1
