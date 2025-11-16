// 函数: sub_601110
// 地址: 0x601110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2f149903, *(arg1 + 0xa4) - *(arg1 + 0xa0))
int32_t edx_3 = edx_2 s>> 6

if ((edx_3 u>> 0x1f) + edx_3 s<= arg2)
    return 0

int32_t* edi_1 = arg2 * 0x15c + *(arg1 + 0xa0)
HANDLE esi = *edi_1

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

int32_t result = edi_1[0x48]

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

return result
