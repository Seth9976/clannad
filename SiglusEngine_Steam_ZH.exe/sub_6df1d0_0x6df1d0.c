// 函数: sub_6df1d0
// 地址: 0x6df1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE esi = *arg1

if (esi != 0)
    WaitForSingleObject(esi, 0xffffffff)

void* ebx = arg1[0x48]
int32_t result

if (ebx == 0 || arg1[1] == 0)
    result = 0
else
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(ebx + 8))
    result = divs.dp.d(sx.q(arg1[7]), (((edx_1 & 7) + eax_2) s>> 3) * *(ebx + 4))

if (esi != 0)
    ReleaseSemaphore(esi, 1, nullptr)

return result
