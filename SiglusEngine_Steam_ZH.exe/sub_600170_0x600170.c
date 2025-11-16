// 函数: sub_600170
// 地址: 0x600170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = data_bac468
int32_t ebx = 0
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2f149903, *(esi + 0xcc) - *(esi + 0xc8))
int32_t edx_1 = edx s>> 6
int32_t result = (edx_1 u>> 0x1f) + edx_1

if (result s> 0)
    int32_t edi_1 = 0
    
    do
        Concurrency::details::GlobalNode::`vector deleting destructor'(*(esi + 0xc8) + edi_1, arg1)
        ebx += 1
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = muls.dp.d(0x2f149903, *(esi + 0xcc) - *(esi + 0xc8))
        edi_1 += 0x15c
        int32_t edx_3 = edx_2 s>> 6
        result = (edx_3 u>> 0x1f) + edx_3
    while (ebx s< result)

return result
