// 函数: sub_52f7b0
// 地址: 0x52f7b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 0)
    return 

if (*(arg1 + 0xc4) != 0)
    uint32_t eax_1 = timeGetTime()
    int32_t edx_2 = eax_1 - *(arg1 + 0xd0)
    *(arg1 + 0xd0) = eax_1
    int32_t eax_2 = *(arg1 + 0xbc)
    *(arg1 + 0xd4) = edx_2
    (*(eax_2 + 0x20))()

if (*(arg1 + 0xcb8) == 0)
    return 

uint32_t eax_3 = timeGetTime()
int32_t edx_4 = eax_3 - *(arg1 + 0xcc4)
*(arg1 + 0xcc4) = eax_3
int32_t eax_4 = *(arg1 + 0xcb0)
*(arg1 + 0xcc8) = edx_4
jump(*(eax_4 + 0x20))
