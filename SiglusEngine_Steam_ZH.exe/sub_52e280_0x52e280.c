// 函数: sub_52e280
// 地址: 0x52e280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 0 || *(arg1 + 0xc4) == 0)
    return 

uint32_t eax = timeGetTime()
int32_t edx_1 = eax - *(arg1 + 0xd0)
*(arg1 + 0xd0) = eax
int32_t eax_1 = *(arg1 + 0xbc)
*(arg1 + 0xd4) = edx_1
jump(*(eax_1 + 0x20))
