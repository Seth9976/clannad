// 函数: sub_429d60
// 地址: 0x429d60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg3
int32_t i_1 = arg4
char result
int32_t i

do
    int32_t j_1 = arg2
    int32_t j
    
    do
        result = *(edi + 3)
        
        if (result != 0)
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
            *edi = -1 - (edx_3.b + (*(((ebx_9 - edx_3) << 2) + edx_4)).b)
            int32_t ebx_14
            ebx_14.b = *(edi + 1)
            *(edi + 1) = -1 - (edx_3.b + (*(((ebx_14 - edx_3) << 2) + edx_4)).b)
            int32_t ebx_19
            ebx_19.b = *(edi + 2)
            result = edx_3.b + (*(((ebx_19 - edx_3) << 2) + edx_4)).b
            *(edi + 2) = -1 - result
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
