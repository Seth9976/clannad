// 函数: sub_6df230
// 地址: 0x6df230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE edi = *arg1

if (edi != 0)
    WaitForSingleObject(edi, 0xffffffff)

void* ecx = arg1[0x48]
uint32_t result

if (ecx == 0 || arg1[1] == 0)
    result = 0
else
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(ecx + 8))
    int32_t eax_6
    uint32_t edx_3
    edx_3:eax_6 = sx.q(((eax_2 + (edx_1 & 7)) s>> 3) * *(ecx + 4))
    int32_t eax_8
    uint32_t edx_4
    edx_4:eax_8 = sx.q(arg1[7])
    uint32_t eax_9
    int32_t edx_5
    eax_9, edx_5 = __alldiv(eax_8, edx_4, eax_6, edx_3)
    int32_t eax_10
    uint32_t edx_6
    eax_10, edx_6 = __allmul(eax_9, edx_5, 0x3e8, 0)
    int32_t eax_13
    uint32_t edx_7
    edx_7:eax_13 = sx.q(*(arg1[0x48] + 0xc))
    result = __alldiv(eax_10, edx_6, eax_13, edx_7)

if (edi != 0)
    ReleaseSemaphore(edi, 1, nullptr)

return result
