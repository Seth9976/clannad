// 函数: sub_52f540
// 地址: 0x52f540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char edx = *(arg1 + 0xb8)
*(arg1 + 0xc0) = arg1
*(arg1 + 0xc4) = *(arg1 + 4)
*(arg1 + 0xc8) = 0x6e
*(arg1 + 0xcc) = 1
*(arg1 + 0xcd) = edx
*(arg1 + 0xce) = 0
*(arg1 + 0xd0) = timeGetTime()
int32_t eax_2 = *(arg1 + 0xbc)
*(arg1 + 0xd4) = 0
*(arg1 + 0xcf) = 0
(*eax_2)()
char edx_1 = *(arg1 + 0xb8)
*(arg1 + 0xcb4) = arg1
*(arg1 + 0xcb8) = *(arg1 + 4)
*(arg1 + 0xcbc) = 0x6e
*(arg1 + 0xcc0) = 1
*(arg1 + 0xcc1) = edx_1
*(arg1 + 0xcc2) = 0
*(arg1 + 0xcc4) = timeGetTime()
int32_t eax_5 = *(arg1 + 0xcb0)
*(arg1 + 0xcc8) = 0
*(arg1 + 0xcc3) = 0
(*eax_5)()
int32_t result
result.b = 1
return result
