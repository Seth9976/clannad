// 函数: sub_546b30
// 地址: 0x546b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa0) != 0)
    uint32_t eax = timeGetTime()
    int32_t edx_2 = eax - *(arg1 + 0xac)
    *(arg1 + 0xac) = eax
    int32_t eax_1 = *(arg1 + 0x98)
    *(arg1 + 0xb0) = edx_2
    (*(eax_1 + 0x20))()

if (*(arg1 + 0x420) != 0)
    uint32_t eax_2 = timeGetTime()
    int32_t edx_4 = eax_2 - *(arg1 + 0x42c)
    *(arg1 + 0x42c) = eax_2
    int32_t eax_3 = *(arg1 + 0x418)
    *(arg1 + 0x430) = edx_4
    (*(eax_3 + 0x20))()

int32_t result
result.b = 1
return result
