// 函数: sub_6010a0
// 地址: 0x6010a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
int32_t edx_3 = edx_2 s>> 6
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        Concurrency::details::GlobalNode::`vector deleting destructor'(*(arg1 + 0xa0) + edi_1, arg2)
        ebx += 1
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
        edi_1 += 0x15c
        int32_t edx_5 = edx_4 s>> 6
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx s< result)

return result
