// 函数: sub_608080
// 地址: 0x608080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE esi = *arg1

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

void* edi_1 = arg1[0x48]
int32_t result

if (edi_1 == 0)
    result = 0
else
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(edi_1 + 8))
    *(edi_1 + 0xc)
    result = divs.dp.d(
        sx.q(divs.dp.d(sx.q(*(edi_1 + 0x10)), (((edx_1 & 7) + eax_2) s>> 3) * *(edi_1 + 4))
            * 0x3e8), 
        *(edi_1 + 0xc))

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

return result
