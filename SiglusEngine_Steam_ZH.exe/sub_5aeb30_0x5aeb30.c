// 函数: sub_5aeb30
// 地址: 0x5aeb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_3 = edx_2 s>> 8
int32_t result = (edx_3 u>> 0x1f) + edx_3

if (result s> 0)
    int32_t edi_1 = 0
    int32_t ebx_1 = 0
    
    do
        sub_5b3010(*(arg1 + 0xa4) + edi_1)
        ebx_1 += 1
        int32_t eax_3
        int32_t edx_4
        edx_4:eax_3 = muls.dp.d(0x2e8ba2e9, *(arg1 + 0xa8) - *(arg1 + 0xa4))
        edi_1 += 0x580
        int32_t edx_5 = edx_4 s>> 8
        result = (edx_5 u>> 0x1f) + edx_5
    while (ebx_1 s< result)

return result
