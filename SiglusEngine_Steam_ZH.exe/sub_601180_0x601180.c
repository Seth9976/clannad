// 函数: sub_601180
// 地址: 0x601180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = *(arg1 + 0xa0)
HANDLE esi = *edi

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

void* edi_1 = edi[0x48]
int32_t result

if (edi_1 == 0)
    result = 0
else
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(edi_1 + 8))
    result = divs.dp.d(sx.q(*(edi_1 + 0x10)), (((edx_1 & 7) + eax_2) s>> 3) * *(edi_1 + 4))

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

return result
