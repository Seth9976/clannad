// 函数: sub_5c8570
// 地址: 0x5c8570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

struct IUnknown pUnknown = *(arg1 + 0x38)
*(arg1 + 0x6c) |= 1
OleLockRunning(pUnknown, 1, 0)
void* edi_1

if ((arg2 & 1) == 0)
label_5c85a8:
    int32_t* ecx_2 = *(arg1 + 0x38)
    edi_1 = arg1 + 0x48
    *(arg1 + 0x6c) &= 0xfffffff7
    (**ecx_2)(ecx_2, 0xaf2308, edi_1)
else
    int32_t* ecx_1 = *(arg1 + 0x38)
    edi_1 = arg1 + 0x48
    *(arg1 + 0x6c) |= 8
    
    if ((**ecx_1)(ecx_1, 0xaf22f8, edi_1) s< 0)
        goto label_5c85a8

int32_t* edx = *edi_1

if (edx != 0)
    (*(*edx + 0x1c))(edx, arg1 + 0x88, arg1 + 0x88)

return 0
