// 函数: sub_545fa0
// 地址: 0x545fa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0xa0) != 0)
    uint32_t eax = timeGetTime()
    int32_t edx_2 = eax - *(arg1 + 0xac)
    *(arg1 + 0xac) = eax
    int32_t eax_1 = *(arg1 + 0x98)
    *(arg1 + 0xb0) = edx_2
    (*(eax_1 + 0x20))()

int32_t result
result.b = 1
return result
