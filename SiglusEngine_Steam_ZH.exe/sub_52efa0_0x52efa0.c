// 函数: sub_52efa0
// 地址: 0x52efa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char edx = *(arg1 + 0xb8)
*(arg1 + 0xc0) = arg1
*(arg1 + 0xc4) = *(arg1 + 4)
*(arg1 + 0xc8) = 0x78
*(arg1 + 0xcc) = 1
*(arg1 + 0xcd) = edx
*(arg1 + 0xce) = 0
*(arg1 + 0xd0) = timeGetTime()
int32_t eax_2 = *(arg1 + 0xbc)
*(arg1 + 0xd4) = 0
*(arg1 + 0xcf) = 0
(*eax_2)()
char edx_1 = *(arg1 + 0xb8)
*(arg1 + 0x440) = arg1
*(arg1 + 0x444) = *(arg1 + 4)
*(arg1 + 0x448) = 0x78
*(arg1 + 0x44c) = 1
*(arg1 + 0x44d) = edx_1
*(arg1 + 0x44e) = 0
*(arg1 + 0x450) = timeGetTime()
int32_t eax_5 = *(arg1 + 0x43c)
*(arg1 + 0x454) = 0
*(arg1 + 0x44f) = 0
(*eax_5)()
int32_t result
result.b = 1
return result
