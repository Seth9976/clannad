// 函数: sub_429e50
// 地址: 0x429e50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t i_1 = arg4
int32_t result
int32_t i

do
    int32_t j_1 = arg2
    int32_t j
    
    do
        result.b = *(edi + 3)
        result.b = result.b
        
        if (result.b != 0)
            int32_t eax_3
            eax_3.b = *edi
            int32_t eax_5
            eax_5.b = *(edi + 1)
            int32_t eax_7
            eax_7.b = *(edi + 2)
            uint32_t edx_3 = (*(data_1cd4334 + (eax_3 << 2)) + *(data_1cd4330 + (eax_5 << 2))
                + *(data_1cd432c + (eax_7 << 2))) u>> 8
            int32_t edx_4 = *(data_1cd4328 + ((0xff - arg5) << 2))
            int32_t ebx_9
            ebx_9.b = *edi
            int32_t eax_10
            eax_10.b = *(arg8 + edx_3 + *(((ebx_9 - edx_3) << 2) + edx_4))
            *edi = eax_10.b
            int32_t ebx_13
            ebx_13.b = *(edi + 1)
            int32_t eax_12
            eax_12.b = *(arg7 + edx_3 + *(((ebx_13 - edx_3) << 2) + edx_4))
            *(edi + 1) = eax_12.b
            int32_t ebx_17
            ebx_17.b = *(edi + 2)
            result.b = *(arg6 + edx_3 + *(((ebx_17 - edx_3) << 2) + edx_4))
            *(edi + 2) = result.b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
