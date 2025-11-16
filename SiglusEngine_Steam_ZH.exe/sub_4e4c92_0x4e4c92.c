// 函数: sub_4e4c92
// 地址: 0x4e4c92
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg3
uint32_t edx_2 = (result - arg2) u>> 1

if (edx_2 != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_2 = arg2 << 2
    result = (result << 2) + 0xfffffffc
    arg3 = edx_2
    uint32_t i
    
    do
        int32_t edx_3 = *(arg1 + 0x3c)
        int32_t* esi_1 = edi_2 + edx_3
        int32_t ebx_1 = *esi_1
        *esi_1 = *(result + edx_3)
        *(result + *(arg1 + 0x3c)) = ebx_1
        edi_2 += 4
        result -= 4
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
